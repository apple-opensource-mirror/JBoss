package org.jboss.test.iiop.interfaces;

/**
* org/jboss/test/iiop/interfaces/IdlInterfaceHolder.java .
* Generated by the IDL-to-Java compiler (portable), version "3.1"
* from IdlInterface.idl
* Tuesday, October 21, 2003 3:27:10 PM BRST
*/

public final class IdlInterfaceHolder implements org.omg.CORBA.portable.Streamable
{
  public org.jboss.test.iiop.interfaces.IdlInterface value = null;

  public IdlInterfaceHolder ()
  {
  }

  public IdlInterfaceHolder (org.jboss.test.iiop.interfaces.IdlInterface initialValue)
  {
    value = initialValue;
  }

  public void _read (org.omg.CORBA.portable.InputStream i)
  {
    value = org.jboss.test.iiop.interfaces.IdlInterfaceHelper.read (i);
  }

  public void _write (org.omg.CORBA.portable.OutputStream o)
  {
    org.jboss.test.iiop.interfaces.IdlInterfaceHelper.write (o, value);
  }

  public org.omg.CORBA.TypeCode _type ()
  {
    return org.jboss.test.iiop.interfaces.IdlInterfaceHelper.type ();
  }

}
