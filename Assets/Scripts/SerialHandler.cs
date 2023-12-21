using UnityEngine;
using System.IO.Ports;

public class SerialHandler : MonoBehaviour
{
    private SerialPort serialPort;
    private string portName;
    private int baudRate;

    public delegate void DataReceivedEventHandler(string receivedData);
    public event DataReceivedEventHandler OnDataReceived;

    public SerialHandler(string portName, int baudRate)
    {
        this.portName = portName;
        this.baudRate = baudRate;

        OpenSerialPort();
    }

    private void OpenSerialPort()
    {
        serialPort = new SerialPort(portName, baudRate);
        serialPort.Open();
        serialPort.ReadTimeout = 10;
    }

    private void Update()
    {
        if (serialPort.IsOpen)
        {
            try
            {
                string data = serialPort.ReadLine();
                if (OnDataReceived != null)
                {
                    OnDataReceived(data.Trim());
                }
            }
            catch (System.Exception)
            {
                // Ignore read timeout exceptions
            }
        }
    }

    public bool IsDataAvailable()
    {
        return serialPort != null && serialPort.IsOpen && serialPort.BytesToRead > 0;
    }

    public string ReadSerialData()
    {
        return serialPort.ReadLine().Trim();
    }

    private void OnDestroy()
    {
        if (serialPort != null && serialPort.IsOpen)
        {
            serialPort.Close();
        }
    }

    public void SendData(string data)
    {
        if (serialPort != null && serialPort.IsOpen)
        {
            try
            {
                serialPort.Write(data);
            }
            catch (System.Exception)
            {
            }
        }
    }

}
