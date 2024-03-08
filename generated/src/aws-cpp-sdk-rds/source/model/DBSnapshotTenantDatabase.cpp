/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBSnapshotTenantDatabase.h>
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

DBSnapshotTenantDatabase::DBSnapshotTenantDatabase() : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_tenantDatabaseCreateTimeHasBeenSet(false),
    m_tenantDBNameHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_tenantDatabaseResourceIdHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_dBSnapshotTenantDatabaseARNHasBeenSet(false),
    m_ncharCharacterSetNameHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

DBSnapshotTenantDatabase::DBSnapshotTenantDatabase(const XmlNode& xmlNode) : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_tenantDatabaseCreateTimeHasBeenSet(false),
    m_tenantDBNameHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_tenantDatabaseResourceIdHasBeenSet(false),
    m_characterSetNameHasBeenSet(false),
    m_dBSnapshotTenantDatabaseARNHasBeenSet(false),
    m_ncharCharacterSetNameHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
  *this = xmlNode;
}

DBSnapshotTenantDatabase& DBSnapshotTenantDatabase::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBSnapshotIdentifierNode = resultNode.FirstChild("DBSnapshotIdentifier");
    if(!dBSnapshotIdentifierNode.IsNull())
    {
      m_dBSnapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBSnapshotIdentifierNode.GetText());
      m_dBSnapshotIdentifierHasBeenSet = true;
    }
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceIdentifierNode.GetText());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode dbiResourceIdNode = resultNode.FirstChild("DbiResourceId");
    if(!dbiResourceIdNode.IsNull())
    {
      m_dbiResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dbiResourceIdNode.GetText());
      m_dbiResourceIdHasBeenSet = true;
    }
    XmlNode engineNameNode = resultNode.FirstChild("EngineName");
    if(!engineNameNode.IsNull())
    {
      m_engineName = Aws::Utils::Xml::DecodeEscapedXmlText(engineNameNode.GetText());
      m_engineNameHasBeenSet = true;
    }
    XmlNode snapshotTypeNode = resultNode.FirstChild("SnapshotType");
    if(!snapshotTypeNode.IsNull())
    {
      m_snapshotType = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTypeNode.GetText());
      m_snapshotTypeHasBeenSet = true;
    }
    XmlNode tenantDatabaseCreateTimeNode = resultNode.FirstChild("TenantDatabaseCreateTime");
    if(!tenantDatabaseCreateTimeNode.IsNull())
    {
      m_tenantDatabaseCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenantDatabaseCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_tenantDatabaseCreateTimeHasBeenSet = true;
    }
    XmlNode tenantDBNameNode = resultNode.FirstChild("TenantDBName");
    if(!tenantDBNameNode.IsNull())
    {
      m_tenantDBName = Aws::Utils::Xml::DecodeEscapedXmlText(tenantDBNameNode.GetText());
      m_tenantDBNameHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode tenantDatabaseResourceIdNode = resultNode.FirstChild("TenantDatabaseResourceId");
    if(!tenantDatabaseResourceIdNode.IsNull())
    {
      m_tenantDatabaseResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(tenantDatabaseResourceIdNode.GetText());
      m_tenantDatabaseResourceIdHasBeenSet = true;
    }
    XmlNode characterSetNameNode = resultNode.FirstChild("CharacterSetName");
    if(!characterSetNameNode.IsNull())
    {
      m_characterSetName = Aws::Utils::Xml::DecodeEscapedXmlText(characterSetNameNode.GetText());
      m_characterSetNameHasBeenSet = true;
    }
    XmlNode dBSnapshotTenantDatabaseARNNode = resultNode.FirstChild("DBSnapshotTenantDatabaseARN");
    if(!dBSnapshotTenantDatabaseARNNode.IsNull())
    {
      m_dBSnapshotTenantDatabaseARN = Aws::Utils::Xml::DecodeEscapedXmlText(dBSnapshotTenantDatabaseARNNode.GetText());
      m_dBSnapshotTenantDatabaseARNHasBeenSet = true;
    }
    XmlNode ncharCharacterSetNameNode = resultNode.FirstChild("NcharCharacterSetName");
    if(!ncharCharacterSetNameNode.IsNull())
    {
      m_ncharCharacterSetName = Aws::Utils::Xml::DecodeEscapedXmlText(ncharCharacterSetNameNode.GetText());
      m_ncharCharacterSetNameHasBeenSet = true;
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

void DBSnapshotTenantDatabase::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  if(m_engineNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_tenantDatabaseCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDatabaseCreateTime=" << StringUtils::URLEncode(m_tenantDatabaseCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_tenantDBNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_tenantDatabaseResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TenantDatabaseResourceId=" << StringUtils::URLEncode(m_tenantDatabaseResourceId.c_str()) << "&";
  }

  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }

  if(m_dBSnapshotTenantDatabaseARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSnapshotTenantDatabaseARN=" << StringUtils::URLEncode(m_dBSnapshotTenantDatabaseARN.c_str()) << "&";
  }

  if(m_ncharCharacterSetNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".NcharCharacterSetName=" << StringUtils::URLEncode(m_ncharCharacterSetName.c_str()) << "&";
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

void DBSnapshotTenantDatabase::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << ".DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }
  if(m_engineNameHasBeenSet)
  {
      oStream << location << ".EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }
  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }
  if(m_tenantDatabaseCreateTimeHasBeenSet)
  {
      oStream << location << ".TenantDatabaseCreateTime=" << StringUtils::URLEncode(m_tenantDatabaseCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tenantDBNameHasBeenSet)
  {
      oStream << location << ".TenantDBName=" << StringUtils::URLEncode(m_tenantDBName.c_str()) << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_tenantDatabaseResourceIdHasBeenSet)
  {
      oStream << location << ".TenantDatabaseResourceId=" << StringUtils::URLEncode(m_tenantDatabaseResourceId.c_str()) << "&";
  }
  if(m_characterSetNameHasBeenSet)
  {
      oStream << location << ".CharacterSetName=" << StringUtils::URLEncode(m_characterSetName.c_str()) << "&";
  }
  if(m_dBSnapshotTenantDatabaseARNHasBeenSet)
  {
      oStream << location << ".DBSnapshotTenantDatabaseARN=" << StringUtils::URLEncode(m_dBSnapshotTenantDatabaseARN.c_str()) << "&";
  }
  if(m_ncharCharacterSetNameHasBeenSet)
  {
      oStream << location << ".NcharCharacterSetName=" << StringUtils::URLEncode(m_ncharCharacterSetName.c_str()) << "&";
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
