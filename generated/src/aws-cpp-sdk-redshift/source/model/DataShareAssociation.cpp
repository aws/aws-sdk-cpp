/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataShareAssociation.h>
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

DataShareAssociation::DataShareAssociation() : 
    m_consumerIdentifierHasBeenSet(false),
    m_status(DataShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_consumerRegionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_statusChangeDateHasBeenSet(false)
{
}

DataShareAssociation::DataShareAssociation(const XmlNode& xmlNode) : 
    m_consumerIdentifierHasBeenSet(false),
    m_status(DataShareStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_consumerRegionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_statusChangeDateHasBeenSet(false)
{
  *this = xmlNode;
}

DataShareAssociation& DataShareAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode consumerIdentifierNode = resultNode.FirstChild("ConsumerIdentifier");
    if(!consumerIdentifierNode.IsNull())
    {
      m_consumerIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(consumerIdentifierNode.GetText());
      m_consumerIdentifierHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = DataShareStatusMapper::GetDataShareStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode consumerRegionNode = resultNode.FirstChild("ConsumerRegion");
    if(!consumerRegionNode.IsNull())
    {
      m_consumerRegion = Aws::Utils::Xml::DecodeEscapedXmlText(consumerRegionNode.GetText());
      m_consumerRegionHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("CreatedDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode statusChangeDateNode = resultNode.FirstChild("StatusChangeDate");
    if(!statusChangeDateNode.IsNull())
    {
      m_statusChangeDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusChangeDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_statusChangeDateHasBeenSet = true;
    }
  }

  return *this;
}

void DataShareAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_consumerIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConsumerIdentifier=" << StringUtils::URLEncode(m_consumerIdentifier.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << DataShareStatusMapper::GetNameForDataShareStatus(m_status) << "&";
  }

  if(m_consumerRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ConsumerRegion=" << StringUtils::URLEncode(m_consumerRegion.c_str()) << "&";
  }

  if(m_createdDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusChangeDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusChangeDate=" << StringUtils::URLEncode(m_statusChangeDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void DataShareAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_consumerIdentifierHasBeenSet)
  {
      oStream << location << ".ConsumerIdentifier=" << StringUtils::URLEncode(m_consumerIdentifier.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << DataShareStatusMapper::GetNameForDataShareStatus(m_status) << "&";
  }
  if(m_consumerRegionHasBeenSet)
  {
      oStream << location << ".ConsumerRegion=" << StringUtils::URLEncode(m_consumerRegion.c_str()) << "&";
  }
  if(m_createdDateHasBeenSet)
  {
      oStream << location << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusChangeDateHasBeenSet)
  {
      oStream << location << ".StatusChangeDate=" << StringUtils::URLEncode(m_statusChangeDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
