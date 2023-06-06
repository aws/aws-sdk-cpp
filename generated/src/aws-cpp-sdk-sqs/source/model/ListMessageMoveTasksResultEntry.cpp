/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ListMessageMoveTasksResultEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

ListMessageMoveTasksResultEntry::ListMessageMoveTasksResultEntry() : 
    m_taskHandleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_maxNumberOfMessagesPerSecond(0),
    m_maxNumberOfMessagesPerSecondHasBeenSet(false),
    m_approximateNumberOfMessagesMoved(0),
    m_approximateNumberOfMessagesMovedHasBeenSet(false),
    m_approximateNumberOfMessagesToMove(0),
    m_approximateNumberOfMessagesToMoveHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_startedTimestamp(0),
    m_startedTimestampHasBeenSet(false)
{
}

ListMessageMoveTasksResultEntry::ListMessageMoveTasksResultEntry(const XmlNode& xmlNode) : 
    m_taskHandleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_maxNumberOfMessagesPerSecond(0),
    m_maxNumberOfMessagesPerSecondHasBeenSet(false),
    m_approximateNumberOfMessagesMoved(0),
    m_approximateNumberOfMessagesMovedHasBeenSet(false),
    m_approximateNumberOfMessagesToMove(0),
    m_approximateNumberOfMessagesToMoveHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_startedTimestamp(0),
    m_startedTimestampHasBeenSet(false)
{
  *this = xmlNode;
}

ListMessageMoveTasksResultEntry& ListMessageMoveTasksResultEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode taskHandleNode = resultNode.FirstChild("TaskHandle");
    if(!taskHandleNode.IsNull())
    {
      m_taskHandle = Aws::Utils::Xml::DecodeEscapedXmlText(taskHandleNode.GetText());
      m_taskHandleHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
      m_sourceArnHasBeenSet = true;
    }
    XmlNode destinationArnNode = resultNode.FirstChild("DestinationArn");
    if(!destinationArnNode.IsNull())
    {
      m_destinationArn = Aws::Utils::Xml::DecodeEscapedXmlText(destinationArnNode.GetText());
      m_destinationArnHasBeenSet = true;
    }
    XmlNode maxNumberOfMessagesPerSecondNode = resultNode.FirstChild("MaxNumberOfMessagesPerSecond");
    if(!maxNumberOfMessagesPerSecondNode.IsNull())
    {
      m_maxNumberOfMessagesPerSecond = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxNumberOfMessagesPerSecondNode.GetText()).c_str()).c_str());
      m_maxNumberOfMessagesPerSecondHasBeenSet = true;
    }
    XmlNode approximateNumberOfMessagesMovedNode = resultNode.FirstChild("ApproximateNumberOfMessagesMoved");
    if(!approximateNumberOfMessagesMovedNode.IsNull())
    {
      m_approximateNumberOfMessagesMoved = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(approximateNumberOfMessagesMovedNode.GetText()).c_str()).c_str());
      m_approximateNumberOfMessagesMovedHasBeenSet = true;
    }
    XmlNode approximateNumberOfMessagesToMoveNode = resultNode.FirstChild("ApproximateNumberOfMessagesToMove");
    if(!approximateNumberOfMessagesToMoveNode.IsNull())
    {
      m_approximateNumberOfMessagesToMove = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(approximateNumberOfMessagesToMoveNode.GetText()).c_str()).c_str());
      m_approximateNumberOfMessagesToMoveHasBeenSet = true;
    }
    XmlNode failureReasonNode = resultNode.FirstChild("FailureReason");
    if(!failureReasonNode.IsNull())
    {
      m_failureReason = Aws::Utils::Xml::DecodeEscapedXmlText(failureReasonNode.GetText());
      m_failureReasonHasBeenSet = true;
    }
    XmlNode startedTimestampNode = resultNode.FirstChild("StartedTimestamp");
    if(!startedTimestampNode.IsNull())
    {
      m_startedTimestamp = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startedTimestampNode.GetText()).c_str()).c_str());
      m_startedTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void ListMessageMoveTasksResultEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_taskHandleHasBeenSet)
  {
      oStream << location << index << locationValue << ".TaskHandle=" << StringUtils::URLEncode(m_taskHandle.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_destinationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationArn=" << StringUtils::URLEncode(m_destinationArn.c_str()) << "&";
  }

  if(m_maxNumberOfMessagesPerSecondHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxNumberOfMessagesPerSecond=" << m_maxNumberOfMessagesPerSecond << "&";
  }

  if(m_approximateNumberOfMessagesMovedHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApproximateNumberOfMessagesMoved=" << m_approximateNumberOfMessagesMoved << "&";
  }

  if(m_approximateNumberOfMessagesToMoveHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApproximateNumberOfMessagesToMove=" << m_approximateNumberOfMessagesToMove << "&";
  }

  if(m_failureReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }

  if(m_startedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartedTimestamp=" << m_startedTimestamp << "&";
  }

}

void ListMessageMoveTasksResultEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_taskHandleHasBeenSet)
  {
      oStream << location << ".TaskHandle=" << StringUtils::URLEncode(m_taskHandle.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_sourceArnHasBeenSet)
  {
      oStream << location << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }
  if(m_destinationArnHasBeenSet)
  {
      oStream << location << ".DestinationArn=" << StringUtils::URLEncode(m_destinationArn.c_str()) << "&";
  }
  if(m_maxNumberOfMessagesPerSecondHasBeenSet)
  {
      oStream << location << ".MaxNumberOfMessagesPerSecond=" << m_maxNumberOfMessagesPerSecond << "&";
  }
  if(m_approximateNumberOfMessagesMovedHasBeenSet)
  {
      oStream << location << ".ApproximateNumberOfMessagesMoved=" << m_approximateNumberOfMessagesMoved << "&";
  }
  if(m_approximateNumberOfMessagesToMoveHasBeenSet)
  {
      oStream << location << ".ApproximateNumberOfMessagesToMove=" << m_approximateNumberOfMessagesToMove << "&";
  }
  if(m_failureReasonHasBeenSet)
  {
      oStream << location << ".FailureReason=" << StringUtils::URLEncode(m_failureReason.c_str()) << "&";
  }
  if(m_startedTimestampHasBeenSet)
  {
      oStream << location << ".StartedTimestamp=" << m_startedTimestamp << "&";
  }
}

} // namespace Model
} // namespace SQS
} // namespace Aws
