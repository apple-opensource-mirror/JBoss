/*
 * Copyright (C) The Apache Software Foundation. All rights reserved.
 *
 * This software is published under the terms of the Apache Software License
 * version 1.1, a copy of which has been included  with this distribution in
 * the LICENSE.txt file.
 */

package org.jboss.logging.util;

import java.io.PrintStream;

import  org.apache.log4j.spi.ErrorHandler;
import  org.apache.log4j.spi.LoggingEvent;
import  org.apache.log4j.Logger;
import  org.apache.log4j.Appender;

/**

   The <code>OnlyOnceErrorHandler</code> implements log4j's default
   error handling policy which consists of emitting a message for the
   first error in an appender and ignoring all following errors.

   <p>The error message is printed on the specified print stream. 

   <p>This policy aims at protecting an otherwise working application
   from being flooded with error messages when logging fails.

   @author Ceki G&uuml;lc&uuml;
   @author Adrian Brock (adrian@jboss.org);
   @since 0.9.0 */
public class OnlyOnceErrorHandler implements ErrorHandler {


  final String WARN_PREFIX = "log4j warning: ";
  final String ERROR_PREFIX = "log4j error: ";

  boolean firstTime = true;

  static PrintStream output = System.err;

  public static void setOutput(PrintStream out)
  {
     output = out;
  }

  /**
     Does not do anything.
   */
  public 
  void setLogger(Logger logger) {
  }


  /**
     No options to activate.
  */
  public 
  void activateOptions() {
  }


  /**
     Prints the message and the stack trace of the exception on
     <code>System.err</code>.  */
  public
  void error(String message, Exception e, int errorCode) { 
    error(message, e, errorCode, null);
  }

  /**
     Prints the message and the stack trace of the exception on
     <code>System.err</code>.
   */
  public
  void error(String message, Exception e, int errorCode, LoggingEvent event) {
    if(firstTime) {
      output.println(ERROR_PREFIX + message);
      e.printStackTrace(output);
      firstTime = false;
    }
  }


  /**
     Print a the error message passed as parameter on
     <code>System.err</code>.  
  */
  public 
  void error(String message) {
    if(firstTime) {
      output.println(ERROR_PREFIX + message);
      firstTime = false;
    }
  }
  
  /**
     Does not do anything.
   */
  public
  void setAppender(Appender appender) {
  }

  /**
     Does not do anything.
   */
  public
  void setBackupAppender(Appender appender) {
  }
}
