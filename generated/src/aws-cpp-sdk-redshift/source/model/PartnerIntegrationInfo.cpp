/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/PartnerIntegrationInfo.h>
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

PartnerIntegrationInfo::PartnerIntegrationInfo() : 
    m_databaseNameHasBeenSet(false),
    m_partnerNameHasBeenSet(false),
    m_status(PartnerIntegrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

PartnerIntegrationInfo::PartnerIntegrationInfo(const XmlNode& xmlNode) : 
    m_databaseNameHasBeenSet(false),
    m_partnerNameHasBeenSet(false),
    m_status(PartnerIntegrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = xmlNode;
}

PartnerIntegrationInfo& PartnerIntegrationInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if(!databaseNameNode.IsNull())
    {
      m_databaseName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseNameNode.GetText());
      m_databaseNameHasBeenSet = true;
    }
    XmlNode partnerNameNode = resultNode.FirstChild("PartnerName");
    if(!partnerNameNode.IsNull())
    {
      m_partnerName = Aws::Utils::Xml::DecodeEscapedXmlText(partnerNameNode.GetText());
      m_partnerNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = PartnerIntegrationStatusMapper::GetPartnerIntegrationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("StatusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode updatedAtNode = resultNode.FirstChild("UpdatedAt");
    if(!updatedAtNode.IsNull())
    {
      m_updatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updatedAtHasBeenSet = true;
    }
  }

  return *this;
}

void PartnerIntegrationInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_databaseNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if(m_partnerNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PartnerName=" << StringUtils::URLEncode(m_partnerName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << PartnerIntegrationStatusMapper::GetNameForPartnerIntegrationStatus(m_status) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_createdAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updatedAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void PartnerIntegrationInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_databaseNameHasBeenSet)
  {
      oStream << location << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }
  if(m_partnerNameHasBeenSet)
  {
      oStream << location << ".PartnerName=" << StringUtils::URLEncode(m_partnerName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << PartnerIntegrationStatusMapper::GetNameForPartnerIntegrationStatus(m_status) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_createdAtHasBeenSet)
  {
      oStream << location << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updatedAtHasBeenSet)
  {
      oStream << location << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
