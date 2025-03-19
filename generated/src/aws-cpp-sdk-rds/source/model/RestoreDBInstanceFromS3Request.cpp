/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RestoreDBInstanceFromS3Request.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String RestoreDBInstanceFromS3Request::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestoreDBInstanceFromS3&";
  if(m_dBNameHasBeenSet)
  {
    ss << "DBName=" << StringUtils::URLEncode(m_dBName.c_str()) << "&";
  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_allocatedStorageHasBeenSet)
  {
    ss << "AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
    ss << "MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_dBSecurityGroupsHasBeenSet)
  {
    if (m_dBSecurityGroups.empty())
    {
      ss << "DBSecurityGroups=&";
    }
    else
    {
      unsigned dBSecurityGroupsCount = 1;
      for(auto& item : m_dBSecurityGroups)
      {
        ss << "DBSecurityGroups.DBSecurityGroupName." << dBSecurityGroupsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        dBSecurityGroupsCount++;
      }
    }
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    if (m_vpcSecurityGroupIds.empty())
    {
      ss << "VpcSecurityGroupIds=&";
    }
    else
    {
      unsigned vpcSecurityGroupIdsCount = 1;
      for(auto& item : m_vpcSecurityGroupIds)
      {
        ss << "VpcSecurityGroupIds.VpcSecurityGroupId." << vpcSecurityGroupIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        vpcSecurityGroupIdsCount++;
      }
    }
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
    ss << "BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_preferredBackupWindowHasBeenSet)
  {
    ss << "PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
    ss << "LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_storageTypeHasBeenSet)
  {
    ss << "StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_storageEncryptedHasBeenSet)
  {
    ss << "StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
    ss << "CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }

  if(m_monitoringIntervalHasBeenSet)
  {
    ss << "MonitoringInterval=" << m_monitoringInterval << "&";
  }

  if(m_monitoringRoleArnHasBeenSet)
  {
    ss << "MonitoringRoleArn=" << StringUtils::URLEncode(m_monitoringRoleArn.c_str()) << "&";
  }

  if(m_enableIAMDatabaseAuthenticationHasBeenSet)
  {
    ss << "EnableIAMDatabaseAuthentication=" << std::boolalpha << m_enableIAMDatabaseAuthentication << "&";
  }

  if(m_sourceEngineHasBeenSet)
  {
    ss << "SourceEngine=" << StringUtils::URLEncode(m_sourceEngine.c_str()) << "&";
  }

  if(m_sourceEngineVersionHasBeenSet)
  {
    ss << "SourceEngineVersion=" << StringUtils::URLEncode(m_sourceEngineVersion.c_str()) << "&";
  }

  if(m_s3BucketNameHasBeenSet)
  {
    ss << "S3BucketName=" << StringUtils::URLEncode(m_s3BucketName.c_str()) << "&";
  }

  if(m_s3PrefixHasBeenSet)
  {
    ss << "S3Prefix=" << StringUtils::URLEncode(m_s3Prefix.c_str()) << "&";
  }

  if(m_s3IngestionRoleArnHasBeenSet)
  {
    ss << "S3IngestionRoleArn=" << StringUtils::URLEncode(m_s3IngestionRoleArn.c_str()) << "&";
  }

  if(m_databaseInsightsModeHasBeenSet)
  {
    ss << "DatabaseInsightsMode=" << StringUtils::URLEncode(DatabaseInsightsModeMapper::GetNameForDatabaseInsightsMode(m_databaseInsightsMode)) << "&";
  }

  if(m_enablePerformanceInsightsHasBeenSet)
  {
    ss << "EnablePerformanceInsights=" << std::boolalpha << m_enablePerformanceInsights << "&";
  }

  if(m_performanceInsightsKMSKeyIdHasBeenSet)
  {
    ss << "PerformanceInsightsKMSKeyId=" << StringUtils::URLEncode(m_performanceInsightsKMSKeyId.c_str()) << "&";
  }

  if(m_performanceInsightsRetentionPeriodHasBeenSet)
  {
    ss << "PerformanceInsightsRetentionPeriod=" << m_performanceInsightsRetentionPeriod << "&";
  }

  if(m_enableCloudwatchLogsExportsHasBeenSet)
  {
    if (m_enableCloudwatchLogsExports.empty())
    {
      ss << "EnableCloudwatchLogsExports=&";
    }
    else
    {
      unsigned enableCloudwatchLogsExportsCount = 1;
      for(auto& item : m_enableCloudwatchLogsExports)
      {
        ss << "EnableCloudwatchLogsExports.member." << enableCloudwatchLogsExportsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        enableCloudwatchLogsExportsCount++;
      }
    }
  }

  if(m_processorFeaturesHasBeenSet)
  {
    if (m_processorFeatures.empty())
    {
      ss << "ProcessorFeatures=&";
    }
    else
    {
      unsigned processorFeaturesCount = 1;
      for(auto& item : m_processorFeatures)
      {
        item.OutputToStream(ss, "ProcessorFeatures.ProcessorFeature.", processorFeaturesCount, "");
        processorFeaturesCount++;
      }
    }
  }

  if(m_useDefaultProcessorFeaturesHasBeenSet)
  {
    ss << "UseDefaultProcessorFeatures=" << std::boolalpha << m_useDefaultProcessorFeatures << "&";
  }

  if(m_deletionProtectionHasBeenSet)
  {
    ss << "DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_maxAllocatedStorageHasBeenSet)
  {
    ss << "MaxAllocatedStorage=" << m_maxAllocatedStorage << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
    ss << "NetworkType=" << StringUtils::URLEncode(m_networkType.c_str()) << "&";
  }

  if(m_storageThroughputHasBeenSet)
  {
    ss << "StorageThroughput=" << m_storageThroughput << "&";
  }

  if(m_manageMasterUserPasswordHasBeenSet)
  {
    ss << "ManageMasterUserPassword=" << std::boolalpha << m_manageMasterUserPassword << "&";
  }

  if(m_masterUserSecretKmsKeyIdHasBeenSet)
  {
    ss << "MasterUserSecretKmsKeyId=" << StringUtils::URLEncode(m_masterUserSecretKmsKeyId.c_str()) << "&";
  }

  if(m_dedicatedLogVolumeHasBeenSet)
  {
    ss << "DedicatedLogVolume=" << std::boolalpha << m_dedicatedLogVolume << "&";
  }

  if(m_cACertificateIdentifierHasBeenSet)
  {
    ss << "CACertificateIdentifier=" << StringUtils::URLEncode(m_cACertificateIdentifier.c_str()) << "&";
  }

  if(m_engineLifecycleSupportHasBeenSet)
  {
    ss << "EngineLifecycleSupport=" << StringUtils::URLEncode(m_engineLifecycleSupport.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RestoreDBInstanceFromS3Request::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
