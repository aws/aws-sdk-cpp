/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RestoreStatus.h>
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

RestoreStatus::RestoreStatus() : 
    m_statusHasBeenSet(false),
    m_currentRestoreRateInMegaBytesPerSecond(0.0),
    m_currentRestoreRateInMegaBytesPerSecondHasBeenSet(false),
    m_snapshotSizeInMegaBytes(0),
    m_snapshotSizeInMegaBytesHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_estimatedTimeToCompletionInSeconds(0),
    m_estimatedTimeToCompletionInSecondsHasBeenSet(false)
{
}

RestoreStatus::RestoreStatus(const XmlNode& xmlNode) : 
    m_statusHasBeenSet(false),
    m_currentRestoreRateInMegaBytesPerSecond(0.0),
    m_currentRestoreRateInMegaBytesPerSecondHasBeenSet(false),
    m_snapshotSizeInMegaBytes(0),
    m_snapshotSizeInMegaBytesHasBeenSet(false),
    m_progressInMegaBytes(0),
    m_progressInMegaBytesHasBeenSet(false),
    m_elapsedTimeInSeconds(0),
    m_elapsedTimeInSecondsHasBeenSet(false),
    m_estimatedTimeToCompletionInSeconds(0),
    m_estimatedTimeToCompletionInSecondsHasBeenSet(false)
{
  *this = xmlNode;
}

RestoreStatus& RestoreStatus::operator =(const XmlNode& xmlNode)
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
    XmlNode currentRestoreRateInMegaBytesPerSecondNode = resultNode.FirstChild("CurrentRestoreRateInMegaBytesPerSecond");
    if(!currentRestoreRateInMegaBytesPerSecondNode.IsNull())
    {
      m_currentRestoreRateInMegaBytesPerSecond = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currentRestoreRateInMegaBytesPerSecondNode.GetText()).c_str()).c_str());
      m_currentRestoreRateInMegaBytesPerSecondHasBeenSet = true;
    }
    XmlNode snapshotSizeInMegaBytesNode = resultNode.FirstChild("SnapshotSizeInMegaBytes");
    if(!snapshotSizeInMegaBytesNode.IsNull())
    {
      m_snapshotSizeInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotSizeInMegaBytesNode.GetText()).c_str()).c_str());
      m_snapshotSizeInMegaBytesHasBeenSet = true;
    }
    XmlNode progressInMegaBytesNode = resultNode.FirstChild("ProgressInMegaBytes");
    if(!progressInMegaBytesNode.IsNull())
    {
      m_progressInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressInMegaBytesNode.GetText()).c_str()).c_str());
      m_progressInMegaBytesHasBeenSet = true;
    }
    XmlNode elapsedTimeInSecondsNode = resultNode.FirstChild("ElapsedTimeInSeconds");
    if(!elapsedTimeInSecondsNode.IsNull())
    {
      m_elapsedTimeInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(elapsedTimeInSecondsNode.GetText()).c_str()).c_str());
      m_elapsedTimeInSecondsHasBeenSet = true;
    }
    XmlNode estimatedTimeToCompletionInSecondsNode = resultNode.FirstChild("EstimatedTimeToCompletionInSeconds");
    if(!estimatedTimeToCompletionInSecondsNode.IsNull())
    {
      m_estimatedTimeToCompletionInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(estimatedTimeToCompletionInSecondsNode.GetText()).c_str()).c_str());
      m_estimatedTimeToCompletionInSecondsHasBeenSet = true;
    }
  }

  return *this;
}

void RestoreStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_currentRestoreRateInMegaBytesPerSecondHasBeenSet)
  {
        oStream << location << index << locationValue << ".CurrentRestoreRateInMegaBytesPerSecond=" << StringUtils::URLEncode(m_currentRestoreRateInMegaBytesPerSecond) << "&";
  }

  if(m_snapshotSizeInMegaBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotSizeInMegaBytes=" << m_snapshotSizeInMegaBytes << "&";
  }

  if(m_progressInMegaBytesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProgressInMegaBytes=" << m_progressInMegaBytes << "&";
  }

  if(m_elapsedTimeInSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".ElapsedTimeInSeconds=" << m_elapsedTimeInSeconds << "&";
  }

  if(m_estimatedTimeToCompletionInSecondsHasBeenSet)
  {
      oStream << location << index << locationValue << ".EstimatedTimeToCompletionInSeconds=" << m_estimatedTimeToCompletionInSeconds << "&";
  }

}

void RestoreStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_currentRestoreRateInMegaBytesPerSecondHasBeenSet)
  {
        oStream << location << ".CurrentRestoreRateInMegaBytesPerSecond=" << StringUtils::URLEncode(m_currentRestoreRateInMegaBytesPerSecond) << "&";
  }
  if(m_snapshotSizeInMegaBytesHasBeenSet)
  {
      oStream << location << ".SnapshotSizeInMegaBytes=" << m_snapshotSizeInMegaBytes << "&";
  }
  if(m_progressInMegaBytesHasBeenSet)
  {
      oStream << location << ".ProgressInMegaBytes=" << m_progressInMegaBytes << "&";
  }
  if(m_elapsedTimeInSecondsHasBeenSet)
  {
      oStream << location << ".ElapsedTimeInSeconds=" << m_elapsedTimeInSeconds << "&";
  }
  if(m_estimatedTimeToCompletionInSecondsHasBeenSet)
  {
      oStream << location << ".EstimatedTimeToCompletionInSeconds=" << m_estimatedTimeToCompletionInSeconds << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
