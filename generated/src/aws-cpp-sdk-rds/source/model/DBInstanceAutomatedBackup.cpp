/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/DBInstanceAutomatedBackup.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

DBInstanceAutomatedBackup::DBInstanceAutomatedBackup(const XmlNode& xmlNode) { *this = xmlNode; }

DBInstanceAutomatedBackup& DBInstanceAutomatedBackup::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode dBInstanceArnNode = resultNode.FirstChild("DBInstanceArn");
    if (!dBInstanceArnNode.IsNull()) {
      m_dBInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceArnNode.GetText());
      m_dBInstanceArnHasBeenSet = true;
    }
    XmlNode dbiResourceIdNode = resultNode.FirstChild("DbiResourceId");
    if (!dbiResourceIdNode.IsNull()) {
      m_dbiResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dbiResourceIdNode.GetText());
      m_dbiResourceIdHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if (!regionNode.IsNull()) {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if (!dBInstanceIdentifierNode.IsNull()) {
      m_dBInstanceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceIdentifierNode.GetText());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode restoreWindowNode = resultNode.FirstChild("RestoreWindow");
    if (!restoreWindowNode.IsNull()) {
      m_restoreWindow = restoreWindowNode;
      m_restoreWindowHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if (!allocatedStorageNode.IsNull()) {
      m_allocatedStorage = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if (!portNode.IsNull()) {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if (!vpcIdNode.IsNull()) {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode instanceCreateTimeNode = resultNode.FirstChild("InstanceCreateTime");
    if (!instanceCreateTimeNode.IsNull()) {
      m_instanceCreateTime =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCreateTimeNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_instanceCreateTimeHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if (!masterUsernameNode.IsNull()) {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if (!engineNode.IsNull()) {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if (!engineVersionNode.IsNull()) {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if (!licenseModelNode.IsNull()) {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
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
    XmlNode optionGroupNameNode = resultNode.FirstChild("OptionGroupName");
    if (!optionGroupNameNode.IsNull()) {
      m_optionGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(optionGroupNameNode.GetText());
      m_optionGroupNameHasBeenSet = true;
    }
    XmlNode tdeCredentialArnNode = resultNode.FirstChild("TdeCredentialArn");
    if (!tdeCredentialArnNode.IsNull()) {
      m_tdeCredentialArn = Aws::Utils::Xml::DecodeEscapedXmlText(tdeCredentialArnNode.GetText());
      m_tdeCredentialArnHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("Encrypted");
    if (!encryptedNode.IsNull()) {
      m_encrypted =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode storageEncryptionTypeNode = resultNode.FirstChild("StorageEncryptionType");
    if (!storageEncryptionTypeNode.IsNull()) {
      m_storageEncryptionType = StorageEncryptionTypeMapper::GetStorageEncryptionTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptionTypeNode.GetText()).c_str()));
      m_storageEncryptionTypeHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if (!storageTypeNode.IsNull()) {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if (!kmsKeyIdNode.IsNull()) {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode timezoneNode = resultNode.FirstChild("Timezone");
    if (!timezoneNode.IsNull()) {
      m_timezone = Aws::Utils::Xml::DecodeEscapedXmlText(timezoneNode.GetText());
      m_timezoneHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if (!iAMDatabaseAuthenticationEnabledNode.IsNull()) {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMDatabaseAuthenticationEnabledNode.GetText()).c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
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
    XmlNode dBInstanceAutomatedBackupsArnNode = resultNode.FirstChild("DBInstanceAutomatedBackupsArn");
    if (!dBInstanceAutomatedBackupsArnNode.IsNull()) {
      m_dBInstanceAutomatedBackupsArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceAutomatedBackupsArnNode.GetText());
      m_dBInstanceAutomatedBackupsArnHasBeenSet = true;
    }
    XmlNode dBInstanceAutomatedBackupsReplicationsNode = resultNode.FirstChild("DBInstanceAutomatedBackupsReplications");
    if (!dBInstanceAutomatedBackupsReplicationsNode.IsNull()) {
      XmlNode dBInstanceAutomatedBackupsReplicationsMember =
          dBInstanceAutomatedBackupsReplicationsNode.FirstChild("DBInstanceAutomatedBackupsReplication");
      m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = !dBInstanceAutomatedBackupsReplicationsMember.IsNull();
      while (!dBInstanceAutomatedBackupsReplicationsMember.IsNull()) {
        m_dBInstanceAutomatedBackupsReplications.push_back(dBInstanceAutomatedBackupsReplicationsMember);
        dBInstanceAutomatedBackupsReplicationsMember =
            dBInstanceAutomatedBackupsReplicationsMember.NextNode("DBInstanceAutomatedBackupsReplication");
      }

      m_dBInstanceAutomatedBackupsReplicationsHasBeenSet = true;
    }
    XmlNode backupTargetNode = resultNode.FirstChild("BackupTarget");
    if (!backupTargetNode.IsNull()) {
      m_backupTarget = Aws::Utils::Xml::DecodeEscapedXmlText(backupTargetNode.GetText());
      m_backupTargetHasBeenSet = true;
    }
    XmlNode multiTenantNode = resultNode.FirstChild("MultiTenant");
    if (!multiTenantNode.IsNull()) {
      m_multiTenant =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multiTenantNode.GetText()).c_str()).c_str());
      m_multiTenantHasBeenSet = true;
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
    XmlNode dedicatedLogVolumeNode = resultNode.FirstChild("DedicatedLogVolume");
    if (!dedicatedLogVolumeNode.IsNull()) {
      m_dedicatedLogVolume = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dedicatedLogVolumeNode.GetText()).c_str()).c_str());
      m_dedicatedLogVolumeHasBeenSet = true;
    }
    XmlNode additionalStorageVolumesNode = resultNode.FirstChild("AdditionalStorageVolumes");
    if (!additionalStorageVolumesNode.IsNull()) {
      XmlNode additionalStorageVolumesMember = additionalStorageVolumesNode.FirstChild("member");
      m_additionalStorageVolumesHasBeenSet = !additionalStorageVolumesMember.IsNull();
      while (!additionalStorageVolumesMember.IsNull()) {
        m_additionalStorageVolumes.push_back(additionalStorageVolumesMember);
        additionalStorageVolumesMember = additionalStorageVolumesMember.NextNode("member");
      }

      m_additionalStorageVolumesHasBeenSet = true;
    }
  }

  return *this;
}

void DBInstanceAutomatedBackup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                               const char* locationValue) const {
  if (m_dBInstanceArnHasBeenSet) {
    oStream << location << index << locationValue << ".DBInstanceArn=" << StringUtils::URLEncode(m_dBInstanceArn.c_str()) << "&";
  }

  if (m_dbiResourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  if (m_regionHasBeenSet) {
    oStream << location << index << locationValue << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }

  if (m_dBInstanceIdentifierHasBeenSet) {
    oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str())
            << "&";
  }

  if (m_restoreWindowHasBeenSet) {
    Aws::StringStream restoreWindowLocationAndMemberSs;
    restoreWindowLocationAndMemberSs << location << index << locationValue << ".RestoreWindow";
    m_restoreWindow.OutputToStream(oStream, restoreWindowLocationAndMemberSs.str().c_str());
  }

  if (m_allocatedStorageHasBeenSet) {
    oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if (m_portHasBeenSet) {
    oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_vpcIdHasBeenSet) {
    oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if (m_instanceCreateTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".InstanceCreateTime=" << StringUtils::URLEncode(m_instanceCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_masterUsernameHasBeenSet) {
    oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if (m_engineHasBeenSet) {
    oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if (m_engineVersionHasBeenSet) {
    oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if (m_licenseModelHasBeenSet) {
    oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if (m_iopsHasBeenSet) {
    oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if (m_storageThroughputHasBeenSet) {
    oStream << location << index << locationValue << ".StorageThroughput=" << m_storageThroughput << "&";
  }

  if (m_optionGroupNameHasBeenSet) {
    oStream << location << index << locationValue << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if (m_tdeCredentialArnHasBeenSet) {
    oStream << location << index << locationValue << ".TdeCredentialArn=" << StringUtils::URLEncode(m_tdeCredentialArn.c_str()) << "&";
  }

  if (m_encryptedHasBeenSet) {
    oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if (m_storageEncryptionTypeHasBeenSet) {
    oStream << location << index << locationValue << ".StorageEncryptionType="
            << StringUtils::URLEncode(StorageEncryptionTypeMapper::GetNameForStorageEncryptionType(m_storageEncryptionType)) << "&";
  }

  if (m_storageTypeHasBeenSet) {
    oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if (m_kmsKeyIdHasBeenSet) {
    oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if (m_timezoneHasBeenSet) {
    oStream << location << index << locationValue << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }

  if (m_iAMDatabaseAuthenticationEnabledHasBeenSet) {
    oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha
            << m_iAMDatabaseAuthenticationEnabled << "&";
  }

  if (m_backupRetentionPeriodHasBeenSet) {
    oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if (m_preferredBackupWindowHasBeenSet) {
    oStream << location << index << locationValue << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str())
            << "&";
  }

  if (m_dBInstanceAutomatedBackupsArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".DBInstanceAutomatedBackupsArn=" << StringUtils::URLEncode(m_dBInstanceAutomatedBackupsArn.c_str()) << "&";
  }

  if (m_dBInstanceAutomatedBackupsReplicationsHasBeenSet) {
    unsigned dBInstanceAutomatedBackupsReplicationsIdx = 1;
    for (auto& item : m_dBInstanceAutomatedBackupsReplications) {
      Aws::StringStream dBInstanceAutomatedBackupsReplicationsSs;
      dBInstanceAutomatedBackupsReplicationsSs << location << index << locationValue
                                               << ".DBInstanceAutomatedBackupsReplications.DBInstanceAutomatedBackupsReplication."
                                               << dBInstanceAutomatedBackupsReplicationsIdx++;
      item.OutputToStream(oStream, dBInstanceAutomatedBackupsReplicationsSs.str().c_str());
    }
  }

  if (m_backupTargetHasBeenSet) {
    oStream << location << index << locationValue << ".BackupTarget=" << StringUtils::URLEncode(m_backupTarget.c_str()) << "&";
  }

  if (m_multiTenantHasBeenSet) {
    oStream << location << index << locationValue << ".MultiTenant=" << std::boolalpha << m_multiTenant << "&";
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

  if (m_dedicatedLogVolumeHasBeenSet) {
    oStream << location << index << locationValue << ".DedicatedLogVolume=" << std::boolalpha << m_dedicatedLogVolume << "&";
  }

  if (m_additionalStorageVolumesHasBeenSet) {
    unsigned additionalStorageVolumesIdx = 1;
    for (auto& item : m_additionalStorageVolumes) {
      Aws::StringStream additionalStorageVolumesSs;
      additionalStorageVolumesSs << location << index << locationValue << ".AdditionalStorageVolumes.member."
                                 << additionalStorageVolumesIdx++;
      item.OutputToStream(oStream, additionalStorageVolumesSs.str().c_str());
    }
  }
}

void DBInstanceAutomatedBackup::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_dBInstanceArnHasBeenSet) {
    oStream << location << ".DBInstanceArn=" << StringUtils::URLEncode(m_dBInstanceArn.c_str()) << "&";
  }
  if (m_dbiResourceIdHasBeenSet) {
    oStream << location << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }
  if (m_regionHasBeenSet) {
    oStream << location << ".Region=" << StringUtils::URLEncode(m_region.c_str()) << "&";
  }
  if (m_dBInstanceIdentifierHasBeenSet) {
    oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if (m_restoreWindowHasBeenSet) {
    Aws::String restoreWindowLocationAndMember(location);
    restoreWindowLocationAndMember += ".RestoreWindow";
    m_restoreWindow.OutputToStream(oStream, restoreWindowLocationAndMember.c_str());
  }
  if (m_allocatedStorageHasBeenSet) {
    oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if (m_portHasBeenSet) {
    oStream << location << ".Port=" << m_port << "&";
  }
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_vpcIdHasBeenSet) {
    oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if (m_instanceCreateTimeHasBeenSet) {
    oStream << location
            << ".InstanceCreateTime=" << StringUtils::URLEncode(m_instanceCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_masterUsernameHasBeenSet) {
    oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if (m_engineHasBeenSet) {
    oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if (m_engineVersionHasBeenSet) {
    oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if (m_licenseModelHasBeenSet) {
    oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if (m_iopsHasBeenSet) {
    oStream << location << ".Iops=" << m_iops << "&";
  }
  if (m_storageThroughputHasBeenSet) {
    oStream << location << ".StorageThroughput=" << m_storageThroughput << "&";
  }
  if (m_optionGroupNameHasBeenSet) {
    oStream << location << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }
  if (m_tdeCredentialArnHasBeenSet) {
    oStream << location << ".TdeCredentialArn=" << StringUtils::URLEncode(m_tdeCredentialArn.c_str()) << "&";
  }
  if (m_encryptedHasBeenSet) {
    oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if (m_storageEncryptionTypeHasBeenSet) {
    oStream << location << ".StorageEncryptionType="
            << StringUtils::URLEncode(StorageEncryptionTypeMapper::GetNameForStorageEncryptionType(m_storageEncryptionType)) << "&";
  }
  if (m_storageTypeHasBeenSet) {
    oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if (m_kmsKeyIdHasBeenSet) {
    oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if (m_timezoneHasBeenSet) {
    oStream << location << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }
  if (m_iAMDatabaseAuthenticationEnabledHasBeenSet) {
    oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }
  if (m_backupRetentionPeriodHasBeenSet) {
    oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if (m_preferredBackupWindowHasBeenSet) {
    oStream << location << ".PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }
  if (m_dBInstanceAutomatedBackupsArnHasBeenSet) {
    oStream << location << ".DBInstanceAutomatedBackupsArn=" << StringUtils::URLEncode(m_dBInstanceAutomatedBackupsArn.c_str()) << "&";
  }
  if (m_dBInstanceAutomatedBackupsReplicationsHasBeenSet) {
    unsigned dBInstanceAutomatedBackupsReplicationsIdx = 1;
    for (auto& item : m_dBInstanceAutomatedBackupsReplications) {
      Aws::StringStream dBInstanceAutomatedBackupsReplicationsSs;
      dBInstanceAutomatedBackupsReplicationsSs << location
                                               << ".DBInstanceAutomatedBackupsReplications.DBInstanceAutomatedBackupsReplication."
                                               << dBInstanceAutomatedBackupsReplicationsIdx++;
      item.OutputToStream(oStream, dBInstanceAutomatedBackupsReplicationsSs.str().c_str());
    }
  }
  if (m_backupTargetHasBeenSet) {
    oStream << location << ".BackupTarget=" << StringUtils::URLEncode(m_backupTarget.c_str()) << "&";
  }
  if (m_multiTenantHasBeenSet) {
    oStream << location << ".MultiTenant=" << std::boolalpha << m_multiTenant << "&";
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
  if (m_dedicatedLogVolumeHasBeenSet) {
    oStream << location << ".DedicatedLogVolume=" << std::boolalpha << m_dedicatedLogVolume << "&";
  }
  if (m_additionalStorageVolumesHasBeenSet) {
    unsigned additionalStorageVolumesIdx = 1;
    for (auto& item : m_additionalStorageVolumes) {
      Aws::StringStream additionalStorageVolumesSs;
      additionalStorageVolumesSs << location << ".AdditionalStorageVolumes.member." << additionalStorageVolumesIdx++;
      item.OutputToStream(oStream, additionalStorageVolumesSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
