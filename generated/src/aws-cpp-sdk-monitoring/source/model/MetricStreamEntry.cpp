/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricStreamEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

MetricStreamEntry::MetricStreamEntry() : 
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_firehoseArnHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_outputFormat(MetricStreamOutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false)
{
}

MetricStreamEntry::MetricStreamEntry(const XmlNode& xmlNode) : 
    m_arnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastUpdateDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_firehoseArnHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_outputFormat(MetricStreamOutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false)
{
  *this = xmlNode;
}

MetricStreamEntry& MetricStreamEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode lastUpdateDateNode = resultNode.FirstChild("LastUpdateDate");
    if(!lastUpdateDateNode.IsNull())
    {
      m_lastUpdateDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdateDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdateDateHasBeenSet = true;
    }
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode firehoseArnNode = resultNode.FirstChild("FirehoseArn");
    if(!firehoseArnNode.IsNull())
    {
      m_firehoseArn = Aws::Utils::Xml::DecodeEscapedXmlText(firehoseArnNode.GetText());
      m_firehoseArnHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode outputFormatNode = resultNode.FirstChild("OutputFormat");
    if(!outputFormatNode.IsNull())
    {
      m_outputFormat = MetricStreamOutputFormatMapper::GetMetricStreamOutputFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outputFormatNode.GetText()).c_str()).c_str());
      m_outputFormatHasBeenSet = true;
    }
  }

  return *this;
}

void MetricStreamEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_creationDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastUpdateDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdateDate=" << StringUtils::URLEncode(m_lastUpdateDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_firehoseArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".FirehoseArn=" << StringUtils::URLEncode(m_firehoseArn.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_outputFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutputFormat=" << MetricStreamOutputFormatMapper::GetNameForMetricStreamOutputFormat(m_outputFormat) << "&";
  }

}

void MetricStreamEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_arnHasBeenSet)
  {
      oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
  if(m_creationDateHasBeenSet)
  {
      oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastUpdateDateHasBeenSet)
  {
      oStream << location << ".LastUpdateDate=" << StringUtils::URLEncode(m_lastUpdateDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_firehoseArnHasBeenSet)
  {
      oStream << location << ".FirehoseArn=" << StringUtils::URLEncode(m_firehoseArn.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_outputFormatHasBeenSet)
  {
      oStream << location << ".OutputFormat=" << MetricStreamOutputFormatMapper::GetNameForMetricStreamOutputFormat(m_outputFormat) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
