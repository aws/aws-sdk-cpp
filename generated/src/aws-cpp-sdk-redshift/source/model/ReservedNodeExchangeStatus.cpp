/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ReservedNodeExchangeStatus.h>
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

ReservedNodeExchangeStatus::ReservedNodeExchangeStatus() : 
    m_reservedNodeExchangeRequestIdHasBeenSet(false),
    m_status(ReservedNodeExchangeStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_sourceReservedNodeIdHasBeenSet(false),
    m_sourceReservedNodeTypeHasBeenSet(false),
    m_sourceReservedNodeCount(0),
    m_sourceReservedNodeCountHasBeenSet(false),
    m_targetReservedNodeOfferingIdHasBeenSet(false),
    m_targetReservedNodeTypeHasBeenSet(false),
    m_targetReservedNodeCount(0),
    m_targetReservedNodeCountHasBeenSet(false)
{
}

ReservedNodeExchangeStatus::ReservedNodeExchangeStatus(const XmlNode& xmlNode) : 
    m_reservedNodeExchangeRequestIdHasBeenSet(false),
    m_status(ReservedNodeExchangeStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_requestTimeHasBeenSet(false),
    m_sourceReservedNodeIdHasBeenSet(false),
    m_sourceReservedNodeTypeHasBeenSet(false),
    m_sourceReservedNodeCount(0),
    m_sourceReservedNodeCountHasBeenSet(false),
    m_targetReservedNodeOfferingIdHasBeenSet(false),
    m_targetReservedNodeTypeHasBeenSet(false),
    m_targetReservedNodeCount(0),
    m_targetReservedNodeCountHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedNodeExchangeStatus& ReservedNodeExchangeStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedNodeExchangeRequestIdNode = resultNode.FirstChild("ReservedNodeExchangeRequestId");
    if(!reservedNodeExchangeRequestIdNode.IsNull())
    {
      m_reservedNodeExchangeRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(reservedNodeExchangeRequestIdNode.GetText());
      m_reservedNodeExchangeRequestIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ReservedNodeExchangeStatusTypeMapper::GetReservedNodeExchangeStatusTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode requestTimeNode = resultNode.FirstChild("RequestTime");
    if(!requestTimeNode.IsNull())
    {
      m_requestTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requestTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_requestTimeHasBeenSet = true;
    }
    XmlNode sourceReservedNodeIdNode = resultNode.FirstChild("SourceReservedNodeId");
    if(!sourceReservedNodeIdNode.IsNull())
    {
      m_sourceReservedNodeId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceReservedNodeIdNode.GetText());
      m_sourceReservedNodeIdHasBeenSet = true;
    }
    XmlNode sourceReservedNodeTypeNode = resultNode.FirstChild("SourceReservedNodeType");
    if(!sourceReservedNodeTypeNode.IsNull())
    {
      m_sourceReservedNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(sourceReservedNodeTypeNode.GetText());
      m_sourceReservedNodeTypeHasBeenSet = true;
    }
    XmlNode sourceReservedNodeCountNode = resultNode.FirstChild("SourceReservedNodeCount");
    if(!sourceReservedNodeCountNode.IsNull())
    {
      m_sourceReservedNodeCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceReservedNodeCountNode.GetText()).c_str()).c_str());
      m_sourceReservedNodeCountHasBeenSet = true;
    }
    XmlNode targetReservedNodeOfferingIdNode = resultNode.FirstChild("TargetReservedNodeOfferingId");
    if(!targetReservedNodeOfferingIdNode.IsNull())
    {
      m_targetReservedNodeOfferingId = Aws::Utils::Xml::DecodeEscapedXmlText(targetReservedNodeOfferingIdNode.GetText());
      m_targetReservedNodeOfferingIdHasBeenSet = true;
    }
    XmlNode targetReservedNodeTypeNode = resultNode.FirstChild("TargetReservedNodeType");
    if(!targetReservedNodeTypeNode.IsNull())
    {
      m_targetReservedNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(targetReservedNodeTypeNode.GetText());
      m_targetReservedNodeTypeHasBeenSet = true;
    }
    XmlNode targetReservedNodeCountNode = resultNode.FirstChild("TargetReservedNodeCount");
    if(!targetReservedNodeCountNode.IsNull())
    {
      m_targetReservedNodeCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetReservedNodeCountNode.GetText()).c_str()).c_str());
      m_targetReservedNodeCountHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedNodeExchangeStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedNodeExchangeRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedNodeExchangeRequestId=" << StringUtils::URLEncode(m_reservedNodeExchangeRequestId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ReservedNodeExchangeStatusTypeMapper::GetNameForReservedNodeExchangeStatusType(m_status) << "&";
  }

  if(m_requestTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_sourceReservedNodeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceReservedNodeId=" << StringUtils::URLEncode(m_sourceReservedNodeId.c_str()) << "&";
  }

  if(m_sourceReservedNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceReservedNodeType=" << StringUtils::URLEncode(m_sourceReservedNodeType.c_str()) << "&";
  }

  if(m_sourceReservedNodeCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceReservedNodeCount=" << m_sourceReservedNodeCount << "&";
  }

  if(m_targetReservedNodeOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetReservedNodeOfferingId=" << StringUtils::URLEncode(m_targetReservedNodeOfferingId.c_str()) << "&";
  }

  if(m_targetReservedNodeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetReservedNodeType=" << StringUtils::URLEncode(m_targetReservedNodeType.c_str()) << "&";
  }

  if(m_targetReservedNodeCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetReservedNodeCount=" << m_targetReservedNodeCount << "&";
  }

}

void ReservedNodeExchangeStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedNodeExchangeRequestIdHasBeenSet)
  {
      oStream << location << ".ReservedNodeExchangeRequestId=" << StringUtils::URLEncode(m_reservedNodeExchangeRequestId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ReservedNodeExchangeStatusTypeMapper::GetNameForReservedNodeExchangeStatusType(m_status) << "&";
  }
  if(m_requestTimeHasBeenSet)
  {
      oStream << location << ".RequestTime=" << StringUtils::URLEncode(m_requestTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_sourceReservedNodeIdHasBeenSet)
  {
      oStream << location << ".SourceReservedNodeId=" << StringUtils::URLEncode(m_sourceReservedNodeId.c_str()) << "&";
  }
  if(m_sourceReservedNodeTypeHasBeenSet)
  {
      oStream << location << ".SourceReservedNodeType=" << StringUtils::URLEncode(m_sourceReservedNodeType.c_str()) << "&";
  }
  if(m_sourceReservedNodeCountHasBeenSet)
  {
      oStream << location << ".SourceReservedNodeCount=" << m_sourceReservedNodeCount << "&";
  }
  if(m_targetReservedNodeOfferingIdHasBeenSet)
  {
      oStream << location << ".TargetReservedNodeOfferingId=" << StringUtils::URLEncode(m_targetReservedNodeOfferingId.c_str()) << "&";
  }
  if(m_targetReservedNodeTypeHasBeenSet)
  {
      oStream << location << ".TargetReservedNodeType=" << StringUtils::URLEncode(m_targetReservedNodeType.c_str()) << "&";
  }
  if(m_targetReservedNodeCountHasBeenSet)
  {
      oStream << location << ".TargetReservedNodeCount=" << m_targetReservedNodeCount << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
