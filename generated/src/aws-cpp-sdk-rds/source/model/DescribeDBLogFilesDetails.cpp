﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBLogFilesDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DescribeDBLogFilesDetails::DescribeDBLogFilesDetails(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DescribeDBLogFilesDetails& DescribeDBLogFilesDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logFileNameNode = resultNode.FirstChild("LogFileName");
    if(!logFileNameNode.IsNull())
    {
      m_logFileName = Aws::Utils::Xml::DecodeEscapedXmlText(logFileNameNode.GetText());
      m_logFileNameHasBeenSet = true;
    }
    XmlNode lastWrittenNode = resultNode.FirstChild("LastWritten");
    if(!lastWrittenNode.IsNull())
    {
      m_lastWritten = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastWrittenNode.GetText()).c_str()).c_str());
      m_lastWrittenHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("Size");
    if(!sizeNode.IsNull())
    {
      m_size = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeNode.GetText()).c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
  }

  return *this;
}

void DescribeDBLogFilesDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logFileNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogFileName=" << StringUtils::URLEncode(m_logFileName.c_str()) << "&";
  }

  if(m_lastWrittenHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastWritten=" << m_lastWritten << "&";
  }

  if(m_sizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Size=" << m_size << "&";
  }

}

void DescribeDBLogFilesDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logFileNameHasBeenSet)
  {
      oStream << location << ".LogFileName=" << StringUtils::URLEncode(m_logFileName.c_str()) << "&";
  }
  if(m_lastWrittenHasBeenSet)
  {
      oStream << location << ".LastWritten=" << m_lastWritten << "&";
  }
  if(m_sizeHasBeenSet)
  {
      oStream << location << ".Size=" << m_size << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
