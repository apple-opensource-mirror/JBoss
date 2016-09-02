<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN""http://www.w3.org/TR/REC-html40/loose.dtd">
<!--NewPage-->
<HTML>
<HEAD>
<!-- Generated by javadoc on Wed Mar 19 10:40:50 CET 2003 -->
<TITLE>
Valve (Catalina Internal API Documentation)
</TITLE>
<META NAME="keywords" CONTENT="org.apache.catalina.Valve,Valve interface">
<LINK REL ="stylesheet" TYPE="text/css" HREF="../../../stylesheet.css" TITLE="Style">
</HEAD>
<SCRIPT>
function asd()
{
parent.document.title="Valve (Catalina Internal API Documentation)";
}
</SCRIPT>
<BODY BGCOLOR="white" onload="asd();">

<!-- ========== START OF NAVBAR ========== -->
<A NAME="navbar_top"><!-- --></A>
<TABLE BORDER="0" WIDTH="100%" CELLPADDING="1" CELLSPACING="0">
<TR>
<TD COLSPAN=3 BGCOLOR="#EEEEFF" CLASS="NavBarCell1">
<A NAME="navbar_top_firstrow"><!-- --></A>
<TABLE BORDER="0" CELLPADDING="0" CELLSPACING="3">
  <TR ALIGN="center" VALIGN="top">
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../overview-summary.html"><FONT CLASS="NavBarFont1"><B>Overview</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-summary.html"><FONT CLASS="NavBarFont1"><B>Package</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#FFFFFF" CLASS="NavBarCell1Rev"> &nbsp;<FONT CLASS="NavBarFont1Rev"><B>Class</B></FONT>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-tree.html"><FONT CLASS="NavBarFont1"><B>Tree</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../deprecated-list.html"><FONT CLASS="NavBarFont1"><B>Deprecated</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../index-all.html"><FONT CLASS="NavBarFont1"><B>Index</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../help-doc.html"><FONT CLASS="NavBarFont1"><B>Help</B></FONT></A>&nbsp;</TD>
  </TR>
</TABLE>
</TD>
<TD ALIGN="right" VALIGN="top" ROWSPAN=3><EM>
</EM>
</TD>
</TR>

<TR>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
&nbsp;<A HREF="../../../org/apache/catalina/UserDatabase.html"><B>PREV CLASS</B></A>&nbsp;
&nbsp;<A HREF="../../../org/apache/catalina/ValveContext.html"><B>NEXT CLASS</B></A></FONT></TD>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
  <A HREF="../../../index.html" TARGET="_top"><B>FRAMES</B></A>  &nbsp;
&nbsp;<A HREF="Valve.html" TARGET="_top"><B>NO FRAMES</B></A>  &nbsp;
&nbsp;
<SCRIPT>
  <!--
  if(window==top) {
    document.writeln('<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>');
  }
  //-->
</SCRIPT>
<NOSCRIPT>
<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>
</NOSCRIPT>
</FONT></TD>
</TR>
<TR>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
  SUMMARY:&nbsp;NESTED&nbsp;|&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_summary">METHOD</A></FONT></TD>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
DETAIL:&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_detail">METHOD</A></FONT></TD>
</TR>
</TABLE>
<!-- =========== END OF NAVBAR =========== -->

<HR>
<!-- ======== START OF CLASS DATA ======== -->
<H2>
<FONT SIZE="-1">
org.apache.catalina</FONT>
<BR>
Interface Valve</H2>
<DL>
<DT><B>All Known Implementing Classes:</B> <DD><A HREF="../../../org/apache/catalina/valves/ValveBase.html">ValveBase</A></DD>
</DL>
<HR>
<DL>
<DT>public interface <B>Valve</B></DL>

<P>
<p>A <b>Valve</b> is a request processing component associated with a
 particular Container.  A series of Valves are generally associated with
 each other into a Pipeline.  The detailed contract for a Valve is included
 in the description of the <code>invoke()</code> method below.</p>

 <b>HISTORICAL NOTE</b>:  The "Valve" name was assigned to this concept
 because a valve is what you use in a real world pipeline to control and/or
 modify flows through it.
<P>

<P>
<DL>
<DT><B>Version:</B></DT>
  <DD>$Revision: 1.4 $ $Date: 2001/07/22 20:13:30 $</DD>
<DT><B>Author:</B></DT>
  <DD>Craig R. McClanahan, Gunnar Rjnning, Peter Donald</DD>
</DL>
<HR>

<P>
<!-- ======== NESTED CLASS SUMMARY ======== -->


<!-- =========== FIELD SUMMARY =========== -->


<!-- ======== CONSTRUCTOR SUMMARY ======== -->


<!-- ========== METHOD SUMMARY =========== -->

<A NAME="method_summary"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=2><FONT SIZE="+2">
<B>Method Summary</B></FONT></TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;java.lang.String</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Valve.html#getInfo()">getInfo</A></B>()</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Return descriptive information about this Valve implementation.</TD>
</TR>
<TR BGCOLOR="white" CLASS="TableRowColor">
<TD ALIGN="right" VALIGN="top" WIDTH="1%"><FONT SIZE="-1">
<CODE>&nbsp;void</CODE></FONT></TD>
<TD><CODE><B><A HREF="../../../org/apache/catalina/Valve.html#invoke(org.apache.catalina.Request, org.apache.catalina.Response, org.apache.catalina.ValveContext)">invoke</A></B>(<A HREF="../../../org/apache/catalina/Request.html">Request</A>&nbsp;request,
       <A HREF="../../../org/apache/catalina/Response.html">Response</A>&nbsp;response,
       <A HREF="../../../org/apache/catalina/ValveContext.html">ValveContext</A>&nbsp;context)</CODE>

<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Perform request processing as required by this Valve.</TD>
</TR>
</TABLE>
&nbsp;
<P>

<!-- ============ FIELD DETAIL =========== -->


<!-- ========= CONSTRUCTOR DETAIL ======== -->


<!-- ============ METHOD DETAIL ========== -->

<A NAME="method_detail"><!-- --></A>
<TABLE BORDER="1" CELLPADDING="3" CELLSPACING="0" WIDTH="100%">
<TR BGCOLOR="#CCCCFF" CLASS="TableHeadingColor">
<TD COLSPAN=1><FONT SIZE="+2">
<B>Method Detail</B></FONT></TD>
</TR>
</TABLE>

<A NAME="getInfo()"><!-- --></A><H3>
getInfo</H3>
<PRE>
public java.lang.String <B>getInfo</B>()</PRE>
<DL>
<DD>Return descriptive information about this Valve implementation.
<P>
<DD><DL>
</DL>
</DD>
</DL>
<HR>

<A NAME="invoke(org.apache.catalina.Request, org.apache.catalina.Response, org.apache.catalina.ValveContext)"><!-- --></A><H3>
invoke</H3>
<PRE>
public void <B>invoke</B>(<A HREF="../../../org/apache/catalina/Request.html">Request</A>&nbsp;request,
                   <A HREF="../../../org/apache/catalina/Response.html">Response</A>&nbsp;response,
                   <A HREF="../../../org/apache/catalina/ValveContext.html">ValveContext</A>&nbsp;context)
            throws java.io.IOException,
                   javax.servlet.ServletException</PRE>
<DL>
<DD><p>Perform request processing as required by this Valve.</p>

 <p>An individual Valve <b>MAY</b> perform the following actions, in
 the specified order:</p>
 <ul>
 <li>Examine and/or modify the properties of the specified Request and
     Response.
 <li>Examine the properties of the specified Request, completely generate
     the corresponding Response, and return control to the caller.
 <li>Examine the properties of the specified Request and Response, wrap
     either or both of these objects to supplement their functionality,
     and pass them on.
 <li>If the corresponding Response was not generated (and control was not
     returned, call the next Valve in the pipeline (if there is one) by
     executing <code>context.invokeNext()</code>.
 <li>Examine, but not modify, the properties of the resulting Response
     (which was created by a subsequently invoked Valve or Container).
 </ul>

 <p>A Valve <b>MUST NOT</b> do any of the following things:</p>
 <ul>
 <li>Change request properties that have already been used to direct
     the flow of processing control for this request (for instance,
     trying to change the virtual host to which a Request should be
     sent from a pipeline attached to a Host or Context in the
     standard implementation).
 <li>Create a completed Response <strong>AND</strong> pass this
     Request and Response on to the next Valve in the pipeline.
 <li>Consume bytes from the input stream associated with the Request,
     unless it is completely generating the response, or wrapping the
     request before passing it on.
 <li>Modify the HTTP headers included with the Response after the
     <code>invokeNext()</code> method has returned.
 <li>Perform any actions on the output stream associated with the
     specified Response after the <code>invokeNext()</code> method has
     returned.
 </ul>
<P>
<DD><DL>
<DT><B>Parameters:</B><DD><CODE>request</CODE> - The servlet request to be processed<DD><CODE>response</CODE> - The servlet response to be created<DD><CODE>context</CODE> - The valve context used to invoke the next valve
  in the current processing pipeline
<DT><B>Throws:</B>
<DD><CODE>java.io.IOException</CODE> - if an input/output error occurs, or is thrown
  by a subsequently invoked Valve, Filter, or Servlet
<DD><CODE>javax.servlet.ServletException</CODE> - if a servlet error occurs, or is thrown
  by a subsequently invoked Valve, Filter, or Servlet</DL>
</DD>
</DL>
<!-- ========= END OF CLASS DATA ========= -->
<HR>

<!-- ========== START OF NAVBAR ========== -->
<A NAME="navbar_bottom"><!-- --></A>
<TABLE BORDER="0" WIDTH="100%" CELLPADDING="1" CELLSPACING="0">
<TR>
<TD COLSPAN=3 BGCOLOR="#EEEEFF" CLASS="NavBarCell1">
<A NAME="navbar_bottom_firstrow"><!-- --></A>
<TABLE BORDER="0" CELLPADDING="0" CELLSPACING="3">
  <TR ALIGN="center" VALIGN="top">
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../overview-summary.html"><FONT CLASS="NavBarFont1"><B>Overview</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-summary.html"><FONT CLASS="NavBarFont1"><B>Package</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#FFFFFF" CLASS="NavBarCell1Rev"> &nbsp;<FONT CLASS="NavBarFont1Rev"><B>Class</B></FONT>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="package-tree.html"><FONT CLASS="NavBarFont1"><B>Tree</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../deprecated-list.html"><FONT CLASS="NavBarFont1"><B>Deprecated</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../index-all.html"><FONT CLASS="NavBarFont1"><B>Index</B></FONT></A>&nbsp;</TD>
  <TD BGCOLOR="#EEEEFF" CLASS="NavBarCell1">    <A HREF="../../../help-doc.html"><FONT CLASS="NavBarFont1"><B>Help</B></FONT></A>&nbsp;</TD>
  </TR>
</TABLE>
</TD>
<TD ALIGN="right" VALIGN="top" ROWSPAN=3><EM>
</EM>
</TD>
</TR>

<TR>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
&nbsp;<A HREF="../../../org/apache/catalina/UserDatabase.html"><B>PREV CLASS</B></A>&nbsp;
&nbsp;<A HREF="../../../org/apache/catalina/ValveContext.html"><B>NEXT CLASS</B></A></FONT></TD>
<TD BGCOLOR="white" CLASS="NavBarCell2"><FONT SIZE="-2">
  <A HREF="../../../index.html" TARGET="_top"><B>FRAMES</B></A>  &nbsp;
&nbsp;<A HREF="Valve.html" TARGET="_top"><B>NO FRAMES</B></A>  &nbsp;
&nbsp;
<SCRIPT>
  <!--
  if(window==top) {
    document.writeln('<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>');
  }
  //-->
</SCRIPT>
<NOSCRIPT>
<A HREF="../../../allclasses-noframe.html" TARGET=""><B>All Classes</B></A>
</NOSCRIPT>
</FONT></TD>
</TR>
<TR>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
  SUMMARY:&nbsp;NESTED&nbsp;|&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_summary">METHOD</A></FONT></TD>
<TD VALIGN="top" CLASS="NavBarCell3"><FONT SIZE="-2">
DETAIL:&nbsp;FIELD&nbsp;|&nbsp;CONSTR&nbsp;|&nbsp;<A HREF="#method_detail">METHOD</A></FONT></TD>
</TR>
</TABLE>
<!-- =========== END OF NAVBAR =========== -->

<HR>
Copyright � 2000-2002 Apache Software Foundation.  All Rights Reserved.
</BODY>
</HTML>