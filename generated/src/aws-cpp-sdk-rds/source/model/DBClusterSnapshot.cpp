/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBClusterSnapshot.h>
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

DBClusterSnapshot::DBClusterSnapshot() : 
    m_availabilityZonesHasBeenSet(false),
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dBClusterSnapshotArnHasBeenSet(false),
    m_sourceDBClusterSnapshotArnHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_dBSystemIdHasBeenSet(false)
{
}

DBClusterSnapshot::DBClusterSnapshot(const XmlNode& xmlNode) : 
    m_availabilityZonesHasBeenSet(false),
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_clusterCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_storageEncrypted(false),
    m_storageEncryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dBClusterSnapshotArnHasBeenSet(false),
    m_sourceDBClusterSnapshotArnHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_dBSystemIdHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterSnapshot& DBClusterSnapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode dBClusterSnapshotIdentifierNode = resultNode.FirstChild("DBClusterSnapshotIdentifier");
    if(!dBClusterSnapshotIdentifierNode.IsNull())
    {
      m_dBClusterSnapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterSnapshotIdentifierNode.GetText());
      m_dBClusterSnapshotIdentifierHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode snapshotCreateTimeNode = resultNode.FirstChild("SnapshotCreateTime");
    if(!snapshotCreateTimeNode.IsNull())
    {
      m_snapshotCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_snapshotCreateTimeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineModeNode = resultNode.FirstChild("EngineMode");
    if(!engineModeNode.IsNull())
    {
      m_engineMode = Aws::Utils::Xml::DecodeEscapedXmlText(engineModeNode.GetText());
      m_engineModeHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode clusterCreateTimeNode = resultNode.FirstChild("ClusterCreateTime");
    if(!clusterCreateTimeNode.IsNull())
    {
      m_clusterCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_clusterCreateTimeHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode snapshotTypeNode = resultNode.FirstChild("SnapshotType");
    if(!snapshotTypeNode.IsNull())
    {
      m_snapshotType = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTypeNode.GetText());
      m_snapshotTypeHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentProgressNode.GetText()).c_str()).c_str());
      m_percentProgressHasBeenSet = true;
    }
    XmlNode storageEncryptedNode = resultNode.FirstChild("StorageEncrypted");
    if(!storageEncryptedNode.IsNull())
    {
      m_storageEncrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptedNode.GetText()).c_str()).c_str());
      m_storageEncryptedHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dBClusterSnapshotArnNode = resultNode.FirstChild("DBClusterSnapshotArn");
    if(!dBClusterSnapshotArnNode.IsNull())
    {
      m_dBClusterSnapshotArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterSnapshotArnNode.GetText());
      m_dBClusterSnapshotArnHasBeenSet = true;
    }
    XmlNode sourceDBClusterSnapshotArnNode = resultNode.FirstChild("SourceDBClusterSnapshotArn");
    if(!sourceDBClusterSnapshotArnNode.IsNull())
    {
      m_sourceDBClusterSnapshotArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceDBClusterSnapshotArnNode.GetText());
      m_sourceDBClusterSnapshotArnHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if(!iAMDatabaseAuthenticationEnabledNode.IsNull())
    {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMDatabaseAuthenticationEnabledNode.GetText()).c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
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
    XmlNode dBSystemIdNode = resultNode.FirstChild("DBSystemId");
    if(!dBSystemIdNode.IsNull())
    {
      m_dBSystemId = Aws::Utils::Xml::DecodeEscapedXmlText(dBSystemIdNode.GetText());
      m_dBSystemIdHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterSnapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }

  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_percentProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentProgress=" << m_percentProgress << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterSnapshotArn=" << StringUtils::URLEncode(m_dBClusterSnapshotArn.c_str()) << "&";
  }

  if(m_sourceDBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceDBClusterSnapshotArn=" << StringUtils::URLEncode(m_sourceDBClusterSnapshotArn.c_str()) << "&";
  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
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

  if(m_dBSystemIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSystemId=" << StringUtils::URLEncode(m_dBSystemId.c_str()) << "&";
  }

}

void DBClusterSnapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineModeHasBeenSet)
  {
      oStream << location << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_clusterCreateTimeHasBeenSet)
  {
      oStream << location << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_licenseModelHasBeenSet)
  {
      oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << ".PercentProgress=" << m_percentProgress << "&";
  }
  if(m_storageEncryptedHasBeenSet)
  {
      oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << ".DBClusterSnapshotArn=" << StringUtils::URLEncode(m_dBClusterSnapshotArn.c_str()) << "&";
  }
  if(m_sourceDBClusterSnapshotArnHasBeenSet)
  {
      oStream << location << ".SourceDBClusterSnapshotArn=" << StringUtils::URLEncode(m_sourceDBClusterSnapshotArn.c_str()) << "&";
  }
  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
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
  if(m_dBSystemIdHasBeenSet)
  {
      oStream << location << ".DBSystemId=" << StringUtils::URLEncode(m_dBSystemId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
