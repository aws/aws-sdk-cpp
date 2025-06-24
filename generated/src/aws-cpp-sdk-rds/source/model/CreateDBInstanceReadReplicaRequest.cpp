/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBInstanceReadReplicaRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateDBInstanceReadReplicaRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBInstanceReadReplica&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_sourceDBInstanceIdentifierHasBeenSet)
  {
    ss << "SourceDBInstanceIdentifier=" << StringUtils::URLEncode(m_sourceDBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
    ss << "AutoMinorVersionUpgrade=" << std::boolalpha << m_autoMinorVersionUpgrade << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
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

  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
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

  if(m_storageTypeHasBeenSet)
  {
    ss << "StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
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

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_preSignedUrlHasBeenSet)
  {
    ss << "PreSignedUrl=" << StringUtils::URLEncode(m_preSignedUrl.c_str()) << "&";
  }

  if(m_enableIAMDatabaseAuthenticationHasBeenSet)
  {
    ss << "EnableIAMDatabaseAuthentication=" << std::boolalpha << m_enableIAMDatabaseAuthentication << "&";
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

  if(m_domainHasBeenSet)
  {
    ss << "Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  if(m_domainIAMRoleNameHasBeenSet)
  {
    ss << "DomainIAMRoleName=" << StringUtils::URLEncode(m_domainIAMRoleName.c_str()) << "&";
  }

  if(m_domainFqdnHasBeenSet)
  {
    ss << "DomainFqdn=" << StringUtils::URLEncode(m_domainFqdn.c_str()) << "&";
  }

  if(m_domainOuHasBeenSet)
  {
    ss << "DomainOu=" << StringUtils::URLEncode(m_domainOu.c_str()) << "&";
  }

  if(m_domainAuthSecretArnHasBeenSet)
  {
    ss << "DomainAuthSecretArn=" << StringUtils::URLEncode(m_domainAuthSecretArn.c_str()) << "&";
  }

  if(m_domainDnsIpsHasBeenSet)
  {
    if (m_domainDnsIps.empty())
    {
      ss << "DomainDnsIps=&";
    }
    else
    {
      unsigned domainDnsIpsCount = 1;
      for(auto& item : m_domainDnsIps)
      {
        ss << "DomainDnsIps.member." << domainDnsIpsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        domainDnsIpsCount++;
      }
    }
  }

  if(m_replicaModeHasBeenSet)
  {
    ss << "ReplicaMode=" << StringUtils::URLEncode(ReplicaModeMapper::GetNameForReplicaMode(m_replicaMode)) << "&";
  }

  if(m_maxAllocatedStorageHasBeenSet)
  {
    ss << "MaxAllocatedStorage=" << m_maxAllocatedStorage << "&";
  }

  if(m_customIamInstanceProfileHasBeenSet)
  {
    ss << "CustomIamInstanceProfile=" << StringUtils::URLEncode(m_customIamInstanceProfile.c_str()) << "&";
  }

  if(m_networkTypeHasBeenSet)
  {
    ss << "NetworkType=" << StringUtils::URLEncode(m_networkType.c_str()) << "&";
  }

  if(m_storageThroughputHasBeenSet)
  {
    ss << "StorageThroughput=" << m_storageThroughput << "&";
  }

  if(m_enableCustomerOwnedIpHasBeenSet)
  {
    ss << "EnableCustomerOwnedIp=" << std::boolalpha << m_enableCustomerOwnedIp << "&";
  }

  if(m_backupTargetHasBeenSet)
  {
    ss << "BackupTarget=" << StringUtils::URLEncode(m_backupTarget.c_str()) << "&";
  }

  if(m_allocatedStorageHasBeenSet)
  {
    ss << "AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_sourceDBClusterIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterIdentifier.c_str()) << "&";
  }

  if(m_dedicatedLogVolumeHasBeenSet)
  {
    ss << "DedicatedLogVolume=" << std::boolalpha << m_dedicatedLogVolume << "&";
  }

  if(m_upgradeStorageConfigHasBeenSet)
  {
    ss << "UpgradeStorageConfig=" << std::boolalpha << m_upgradeStorageConfig << "&";
  }

  if(m_cACertificateIdentifierHasBeenSet)
  {
    ss << "CACertificateIdentifier=" << StringUtils::URLEncode(m_cACertificateIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBInstanceReadReplicaRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
