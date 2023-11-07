/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/TenantDatabase.h>
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

TenantDatabase::TenantDatabase() : 
    m_tenantDatabaseCreateTimeHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_tenantDBNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_tenantDatabaseResourceIdHasBeenSet(false),
    m_tenantDatabaseARNHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_ncharCharacterSetNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

TenantDatabase::TenantDatabase(const XmlNode& xmlNode) : 
    m_tenantDatabaseCreateTimeHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_tenantDBNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_tenantDatabaseResourceIdHasBeenSet(false),
    m_tenantDatabaseARNHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_ncharCharacterSetNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_pendingModifiedValuesHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
  *this = xmlNode;
}

TenantDatabase& TenantDatabase::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tenantDatabaseCreateTimeNode = resultNode.FirstChild("TenantDatabaseCreateTime");
    if(!tenantDatabaseCreateTimeNode.IsNull())
    {
      m_tenantDatabaseCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenantDatabaseCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_tenantDatabaseCreateTimeHasBeenSet = true;
    }
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceIdentifierNode.GetText());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode tenantDBNameNode = resultNode.FirstChild("TenantDBName");
    if(!tenantDBNameNode.IsNull())
    {
      m_tenantDBName = Aws::Utils::Xml::DecodeEscapedXmlText(tenantDBNameNode.GetText());
      m_tenantDBNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode dbiResourceIdNode = resultNode.FirstChild("DbiResourceId");
    if(!dbiResourceIdNode.IsNull())
    {
      m_dbiResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dbiResourceIdNode.GetText());
      m_dbiResourceIdHasBeenSet = true;
    }
    XmlNode tenantDatabaseResourceIdNode = resultNode.FirstChild("TenantDatabaseResourceId");
    if(!tenantDatabaseResourceIdNode.IsNull())
    {
      m_tenantDatabaseResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(tenantDatabaseResourceIdNode.GetText());
      m_tenantDatabaseResourceIdHasBeenSet = true;
    }
    XmlNode tenantDatabaseARNNode = resultNode.FirstChild("TenantDatabaseARN");
    if(!tenantDatabaseARNNode.IsNull())
    {
      m_tenantDatabaseARN = Aws::Utils::Xml::DecodeEscapedXmlText(tenantDatabaseARNNode.GetText());
      m_tenantDatabaseARNHasBeenSet = true;
    }
    XmlNode characterSetNameNode = resultNode.FirstChild("CharacterSetName");
    if(!characterSetNameNode.IsNull())
    {
      m_characterSetName = Aws::Utils::Xml::DecodeEscapedXmlText(characterSetNameNode.GetText());
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode ncharCharacterSetNameNode = resultNode.FirstChild("NcharCharacterSetName");
    if(!ncharCharacterSetNameNode.IsNull())
    {
      m_ncharCharacterSetName = Aws::Utils::Xml::DecodeEscapedXmlText(ncharCharacterSetNameNode.GetText());
      m_ncharCharacterSetNameHasBeenSet = true;
    }
    XmlNode deletionProtectionNode = resultNode.FirstChild("DeletionProtection");
    if(!deletionProtectionNode.IsNull())
    {
      m_deletionProtection = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deletionProtectionNode.GetText()).c_str()).c_str());
      m_deletionProtectionHasBeenSet = true;
    }
    XmlNode pendingModifiedValuesNode = resultNode.FirstChild("PendingModifiedValues");
    if(!pendingModifiedValuesNode.IsNull())
    {
      m_pendingModifiedValues = pendingModifiedValuesNode;
      m_pendingModifiedValuesHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
  }

  return *this;
}

void TenantDatabase::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tenantDatabaseCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDatabaseCreateTime=" << StringUtils::URLEncode(m_tenantDatabaseCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_tenantDBNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  if(m_tenantDatabaseResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDatabaseResourceId=" << StringUtils::URLEncode(m_tenantDatabaseResourceId.c_str()) << "&";
  }

  if(m_tenantDatabaseARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDatabaseARN=" << StringUtils::URLEncode(m_tenantDatabaseARN.c_str()) << "&";
  }

  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_ncharCharacterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".NcharCharacterSetName=" << StringUtils::URLEncode(m_ncharCharacterSetName.c_str()) << "&";
  }

  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::StringStream pendingModifiedValuesLocationAndMemberSs;
      pendingModifiedValuesLocationAndMemberSs << location << index << locationValue << ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMemberSs.str().c_str());
  }

  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location << index << locationValue << ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }

}

void TenantDatabase::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tenantDatabaseCreateTimeHasBeenSet)
  {
      oStream << location << ".TenantDatabaseCreateTime=" << StringUtils::URLEncode(m_tenantDatabaseCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_tenantDBNameHasBeenSet)
  {
      oStream << location << ".TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }
  if(m_tenantDatabaseResourceIdHasBeenSet)
  {
      oStream << location << ".TenantDatabaseResourceId=" << StringUtils::URLEncode(m_tenantDatabaseResourceId.c_str()) << "&";
  }
  if(m_tenantDatabaseARNHasBeenSet)
  {
      oStream << location << ".TenantDatabaseARN=" << StringUtils::URLEncode(m_tenantDatabaseARN.c_str()) << "&";
  }
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_ncharCharacterSetNameHasBeenSet)
  {
      oStream << location << ".NcharCharacterSetName=" << StringUtils::URLEncode(m_ncharCharacterSetName.c_str()) << "&";
  }
  if(m_deletionProtectionHasBeenSet)
  {
      oStream << location << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }
  if(m_pendingModifiedValuesHasBeenSet)
  {
      Aws::String pendingModifiedValuesLocationAndMember(location);
      pendingModifiedValuesLocationAndMember += ".PendingModifiedValues";
      m_pendingModifiedValues.OutputToStream(oStream, pendingModifiedValuesLocationAndMember.c_str());
  }
  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location <<  ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
