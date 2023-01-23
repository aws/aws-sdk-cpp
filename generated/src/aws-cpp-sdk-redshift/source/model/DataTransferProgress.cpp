/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataTransferProgress.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

DataTransferProgress::DataTransferProgress() : 
    m_statusHasBeenSet(false),
    m_currentRateInMegaBytesPerSecond(0.0),
    m_currentRateInMegaBytesPerSecondHasBeenSet(false),
    m_totalDataInMegaBytes(0),
    m_totalDataInMegaBytesHasBeenSet(false),
    m_dataTransferredInMegaBytes(0),
    m_dataTransferredInMegaBytesHasBeenSet(false),
    m_estimatedTimeToCompletionInSeconds(0),
    m_estimatedTimeToCompletionInSecondsHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false)
{
}

DataTransferProgress::DataTransferProgress(const XmlNode& xmlNode) : 
    m_statusHasBeenSet(false),
    m_currentRateInMegaBytesPerSecond(0.0),
    m_currentRateInMegaBytesPerSecondHasBeenSet(false),
    m_totalDataInMegaBytes(0),
    m_totalDataInMegaBytesHasBeenSet(false),
    m_dataTransferredInMegaBytes(0),
    m_dataTransferredInMegaBytesHasBeenSet(false),
    m_estimatedTimeToCompletionInSeconds(0),
    m_estimatedTimeToCompletionInSecondsHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false)
{
  *this = xmlNode;
}

DataTransferProgress& DataTransferProgress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode currentRateInMegaBytesPerSecondNode = resultNode.FirstChild("CurrentRateInMegaBytesPerSecond");
    if(!currentRateInMegaBytesPerSecondNode.IsNull())
    {
      m_currentRateInMegaBytesPerSecond = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currentRateInMegaBytesPerSecondNode.GetText()).c_str()).c_str());
      m_currentRateInMegaBytesPerSecondHasBeenSet = true;
    }
    XmlNode totalDataInMegaBytesNode = resultNode.FirstChild("TotalDataInMegaBytes");
    if(!totalDataInMegaBytesNode.IsNull())
    {
      m_totalDataInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalDataInMegaBytesNode.GetText()).c_str()).c_str());
      m_totalDataInMegaBytesHasBeenSet = true;
    }
    XmlNode dataTransferredInMegaBytesNode = resultNode.FirstChild("DataTransferredInMegaBytes");
    if(!dataTransferredInMegaBytesNode.IsNull())
    {
      m_dataTransferredInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dataTransferredInMegaBytesNode.GetText()).c_str()).c_str());
      m_dataTransferredInMegaBytesHasBeenSet = true;
    }
    XmlNode estimatedTimeToCompletionInSecondsNode = resultNode.FirstChild("EstimatedTimeToCompletionInSeconds");
    if(!estimatedTimeToCompletionInSecondsNode.IsNull())
    {
      m_estimatedTimeToCompletionInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(estimatedTimeToCompletionInSecondsNode.GetText()).c_str()).c_str());
      m_estimatedTimeToCompletionInSecondsHasBeenSet = true;
    }
    XmlNode elapsedTimeInSecondsNode = resultNode.FirstChild("ElapsedTimeInSeconds");
    if(!elapsedTimeInSecondsNode.IsNull())
    {
      m_elapsedTimeInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(elapsedTimeInSecondsNode.GetText()).c_str()).c_str());
      m_elapsedTimeInSecondsHasBeenSet = true;
    }
  }

  return *this;
}

void DataTransferProgress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_currentRateInMegaBytesPerSecondHasBeenSet)
  {
        oStream << location << index << locationValue << ".CurrentRateInMegaBytesPerSecond=" << StringUtils::URLEncode(m_currentRateInMegaBytesPerSecond) << "&";
  }

  if(m_totalDataInMegaBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalDataInMegaBytes=" << m_totalDataInMegaBytes << "&";
  }

  if(m_dataTransferredInMegaBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataTransferredInMegaBytes=" << m_dataTransferredInMegaBytes << "&";
  }

  if(m_estimatedTimeToCompletionInSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".EstimatedTimeToCompletionInSeconds=" << m_estimatedTimeToCompletionInSeconds << "&";
  }

  if(m_elapsedTimeInSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElapsedTimeInSeconds=" << m_elapsedTimeInSeconds << "&";
  }

}

void DataTransferProgress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_currentRateInMegaBytesPerSecondHasBeenSet)
  {
        oStream << location << ".CurrentRateInMegaBytesPerSecond=" << StringUtils::URLEncode(m_currentRateInMegaBytesPerSecond) << "&";
  }
  if(m_totalDataInMegaBytesHasBeenSet)
  {
      oStream << location << ".TotalDataInMegaBytes=" << m_totalDataInMegaBytes << "&";
  }
  if(m_dataTransferredInMegaBytesHasBeenSet)
  {
      oStream << location << ".DataTransferredInMegaBytes=" << m_dataTransferredInMegaBytes << "&";
  }
  if(m_estimatedTimeToCompletionInSecondsHasBeenSet)
  {
      oStream << location << ".EstimatedTimeToCompletionInSeconds=" << m_estimatedTimeToCompletionInSeconds << "&";
  }
  if(m_elapsedTimeInSecondsHasBeenSet)
  {
      oStream << location << ".ElapsedTimeInSeconds=" << m_elapsedTimeInSeconds << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
