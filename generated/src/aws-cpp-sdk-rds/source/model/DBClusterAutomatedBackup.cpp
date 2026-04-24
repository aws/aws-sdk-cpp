/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/DBClusterAutomatedBackup.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

DBClusterAutomatedBackup::DBClusterAutomatedBackup(const XmlNode& xmlNode) { *this = xmlNode; }

DBClusterAutomatedBackup& DBClusterAutomatedBackup::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if (!engineNode.IsNull()) {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if (!vpcIdNode.IsNull()) {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode dBClusterAutomatedBackupsArnNode = resultNode.FirstChild("DBClusterAutomatedBackupsArn");
    if (!dBClusterAutomatedBackupsArnNode.IsNull()) {
      m_dBClusterAutomatedBackupsArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterAutomatedBackupsArnNode.GetText());
      m_dBClusterAutomatedBackupsArnHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if (!dBClusterIdentifierNode.IsNull()) {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode restoreWindowNode = resultNode.FirstChild("RestoreWindow");
    if (!restoreWindowNode.IsNull()) {
      m_restoreWindow = restoreWindowNode;
      m_restoreWindowHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if (!masterUsernameNode.IsNull()) {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode dbClusterResourceIdNode = resultNode.FirstChild("DbClusterResourceId");
    if (!dbClusterResourceIdNode.IsNull()) {
      m_dbClusterResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dbClusterResourceIdNode.GetText());
      m_dbClusterResourceIdHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if (!regionNode.IsNull()) {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if (!licenseModelNode.IsNull()) {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if (!iAMDatabaseAuthenticationEnabledNode.IsNull()) {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMDatabaseAuthenticationEnabledNode.GetText()).c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    }
    XmlNode clusterCreateTimeNode = resultNode.FirstChild("ClusterCreateTime");
    if (!clusterCreateTimeNode.IsNull()) {
      m_clusterCreateTime =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clusterCreateTimeNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_clusterCreateTimeHasBeenSet = true;
    }
    XmlNode storageEncryptedNode = resultNode.FirstChild("StorageEncrypted");
    if (!storageEncryptedNode.IsNull()) {
      m_storageEncrypted = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptedNode.GetText()).c_str()).c_str());
      m_storageEncryptedHasBeenSet = true;
    }
    XmlNode storageEncryptionTypeNode = resultNode.FirstChild("StorageEncryptionType");
    if (!storageEncryptionTypeNode.IsNull()) {
      m_storageEncryptionType = StorageEncryptionTypeMapper::GetStorageEncryptionTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptionTypeNode.GetText()).c_str()));
      m_storageEncryptionTypeHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if (!allocatedStorageNode.IsNull()) {
      m_allocatedStorage = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if (!engineVersionNode.IsNull()) {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBClusterArnNode = resultNode.FirstChild("DBClusterArn");
    if (!dBClusterArnNode.IsNull()) {
      m_dBClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterArnNode.GetText());
      m_dBClusterArnHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if (!backupRetentionPeriodNode.IsNull()) {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backupRetentionPeriodNode.GetText()).c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode preferredBackupWindowNode = resultNode.FirstChild("PreferredBackupWindow");
    if (!preferredBackupWindowNode.IsNull()) {
      m_preferredBackupWindow = Aws::Utils::Xml::DecodeEscapedXmlText(preferredBackupWindowNode.GetText());
      m_preferredBackupWindowHasBeenSet = true;
    }
    XmlNode engineModeNode = resultNode.FirstChild("EngineMode");
    if (!engineModeNode.IsNull()) {
      m_engineMode = Aws::Utils::Xml::DecodeEscapedXmlText(engineModeNode.GetText());
      m_engineModeHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if (!availabilityZonesNode.IsNull()) {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      m_availabilityZonesHasBeenSet = !availabilityZonesMember.IsNull();
      while (!availabilityZonesMember.IsNull()) {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if (!portNode.IsNull()) {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if (!kmsKeyIdNode.IsNull()) {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if (!storageTypeNode.IsNull()) {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if (!iopsNode.IsNull()) {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode storageThroughputNode = resultNode.FirstChild("StorageThroughput");
    if (!storageThroughputNode.IsNull()) {
      m_storageThroughput = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageThroughputNode.GetText()).c_str()).c_str());
      m_storageThroughputHasBeenSet = true;
    }
    XmlNode awsBackupRecoveryPointArnNode = resultNode.FirstChild("AwsBackupRecoveryPointArn");
    if (!awsBackupRecoveryPointArnNode.IsNull()) {
      m_awsBackupRecoveryPointArn = Aws::Utils::Xml::DecodeEscapedXmlText(awsBackupRecoveryPointArnNode.GetText());
      m_awsBackupRecoveryPointArnHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if (!tagListNode.IsNull()) {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      m_tagListHasBeenSet = !tagListMember.IsNull();
      while (!tagListMember.IsNull()) {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterAutomatedBackup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                              const char* locationValue) const {
  if (m_engineHasBeenSet) {
    oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if (m_vpcIdHasBeenSet) {
    oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if (m_dBClusterAutomatedBackupsArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".DBClusterAutomatedBackupsArn=" << StringUtils::URLEncode(m_dBClusterAutomatedBackupsArn.c_str()) << "&";
  }

  if (m_dBClusterIdentifierHasBeenSet) {
    oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str())
            << "&";
  }

  if (m_restoreWindowHasBeenSet) {
    Aws::StringStream restoreWindowLocationAndMemberSs;
    restoreWindowLocationAndMemberSs << location << index << locationValue << ".RestoreWindow";
    m_restoreWindow.OutputToStream(oStream, restoreWindowLocationAndMemberSs.str().c_str());
  }

  if (m_masterUsernameHasBeenSet) {
    oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if (m_dbClusterResourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".DbClusterResourceId=" << StringUtils::URLEncode(m_dbClusterResourceId.c_str())
            << "&";
  }

  if (m_regionHasBeenSet) {
    oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

  if (m_licenseModelHasBeenSet) {
    oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if (m_iAMDatabaseAuthenticationEnabledHasBeenSet) {
    oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha
            << m_iAMDatabaseAuthenticationEnabled << "&";
  }

  if (m_clusterCreateTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_storageEncryptedHasBeenSet) {
    oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if (m_storageEncryptionTypeHasBeenSet) {
    oStream << location << index << locationValue << ".StorageEncryptionType="
            << StringUtils::URLEncode(StorageEncryptionTypeMapper::GetNameForStorageEncryptionType(m_storageEncryptionType)) << "&";
  }

  if (m_allocatedStorageHasBeenSet) {
    oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if (m_engineVersionHasBeenSet) {
    oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if (m_dBClusterArnHasBeenSet) {
    oStream << location << index << locationValue << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }

  if (m_backupRetentionPeriodHasBeenSet) {
    oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if (m_preferredBackupWindowHasBeenSet) {
    oStream << location << index << locationValue << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str())
            << "&";
  }

  if (m_engineModeHasBeenSet) {
    oStream << location << index << locationValue << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }

  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << index << locationValue << ".AvailabilityZones.AvailabilityZone." << availabilityZonesIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_portHasBeenSet) {
    oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if (m_kmsKeyIdHasBeenSet) {
    oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if (m_storageTypeHasBeenSet) {
    oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if (m_iopsHasBeenSet) {
    oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if (m_storageThroughputHasBeenSet) {
    oStream << location << index << locationValue << ".StorageThroughput=" << m_storageThroughput << "&";
  }

  if (m_awsBackupRecoveryPointArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".AwsBackupRecoveryPointArn=" << StringUtils::URLEncode(m_awsBackupRecoveryPointArn.c_str()) << "&";
  }

  if (m_tagListHasBeenSet) {
    unsigned tagListIdx = 1;
    for (auto& item : m_tagList) {
      Aws::StringStream tagListSs;
      tagListSs << location << index << locationValue << ".TagList.Tag." << tagListIdx++;
      item.OutputToStream(oStream, tagListSs.str().c_str());
    }
  }
}

void DBClusterAutomatedBackup::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_engineHasBeenSet) {
    oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if (m_vpcIdHasBeenSet) {
    oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if (m_dBClusterAutomatedBackupsArnHasBeenSet) {
    oStream << location << ".DBClusterAutomatedBackupsArn=" << StringUtils::URLEncode(m_dBClusterAutomatedBackupsArn.c_str()) << "&";
  }
  if (m_dBClusterIdentifierHasBeenSet) {
    oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if (m_restoreWindowHasBeenSet) {
    Aws::String restoreWindowLocationAndMember(location);
    restoreWindowLocationAndMember += ".RestoreWindow";
    m_restoreWindow.OutputToStream(oStream, restoreWindowLocationAndMember.c_str());
  }
  if (m_masterUsernameHasBeenSet) {
    oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if (m_dbClusterResourceIdHasBeenSet) {
    oStream << location << ".DbClusterResourceId=" << StringUtils::URLEncode(m_dbClusterResourceId.c_str()) << "&";
  }
  if (m_regionHasBeenSet) {
    oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
  if (m_licenseModelHasBeenSet) {
    oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if (m_iAMDatabaseAuthenticationEnabledHasBeenSet) {
    oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }
  if (m_clusterCreateTimeHasBeenSet) {
    oStream << location
            << ".ClusterCreateTime=" << StringUtils::URLEncode(m_clusterCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_storageEncryptedHasBeenSet) {
    oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if (m_storageEncryptionTypeHasBeenSet) {
    oStream << location << ".StorageEncryptionType="
            << StringUtils::URLEncode(StorageEncryptionTypeMapper::GetNameForStorageEncryptionType(m_storageEncryptionType)) << "&";
  }
  if (m_allocatedStorageHasBeenSet) {
    oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if (m_engineVersionHasBeenSet) {
    oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if (m_dBClusterArnHasBeenSet) {
    oStream << location << ".DBClusterArn=" << StringUtils::URLEncode(m_dBClusterArn.c_str()) << "&";
  }
  if (m_backupRetentionPeriodHasBeenSet) {
    oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if (m_preferredBackupWindowHasBeenSet) {
    oStream << location << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }
  if (m_engineModeHasBeenSet) {
    oStream << location << ".EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }
  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << ".AvailabilityZones.AvailabilityZone." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
  if (m_portHasBeenSet) {
    oStream << location << ".Port=" << m_port << "&";
  }
  if (m_kmsKeyIdHasBeenSet) {
    oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if (m_storageTypeHasBeenSet) {
    oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if (m_iopsHasBeenSet) {
    oStream << location << ".Iops=" << m_iops << "&";
  }
  if (m_storageThroughputHasBeenSet) {
    oStream << location << ".StorageThroughput=" << m_storageThroughput << "&";
  }
  if (m_awsBackupRecoveryPointArnHasBeenSet) {
    oStream << location << ".AwsBackupRecoveryPointArn=" << StringUtils::URLEncode(m_awsBackupRecoveryPointArn.c_str()) << "&";
  }
  if (m_tagListHasBeenSet) {
    unsigned tagListIdx = 1;
    for (auto& item : m_tagList) {
      Aws::StringStream tagListSs;
      tagListSs << location << ".TagList.Tag." << tagListIdx++;
      item.OutputToStream(oStream, tagListSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
