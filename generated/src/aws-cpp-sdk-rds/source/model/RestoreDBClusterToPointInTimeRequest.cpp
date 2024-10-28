/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RestoreDBClusterToPointInTimeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

RestoreDBClusterToPointInTimeRequest::RestoreDBClusterToPointInTimeRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_restoreTypeHasBeenSet(false),
    m_sourceDBClusterIdentifierHasBeenSet(false),
    m_restoreToTimeHasBeenSet(false),
    m_useLatestRestorableTime(false),
    m_useLatestRestorableTimeHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dBSubnetGroupNameHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_enableIAMDatabaseAuthentication(false),
    m_enableIAMDatabaseAuthenticationHasBeenSet(false),
    m_backtrackWindow(0),
    m_backtrackWindowHasBeenSet(false),
    m_enableCloudwatchLogsExportsHasBeenSet(false),
    m_dBClusterParameterGroupNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainIAMRoleNameHasBeenSet(false),
    m_scalingConfigurationHasBeenSet(false),
    m_engineModeHasBeenSet(false),
    m_dBClusterInstanceClassHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_serverlessV2ScalingConfigurationHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_sourceDbClusterResourceIdHasBeenSet(false),
    m_rdsCustomClusterConfigurationHasBeenSet(false),
    m_monitoringInterval(0),
    m_monitoringIntervalHasBeenSet(false),
    m_monitoringRoleArnHasBeenSet(false),
    m_enablePerformanceInsights(false),
    m_enablePerformanceInsightsHasBeenSet(false),
    m_performanceInsightsKMSKeyIdHasBeenSet(false),
    m_performanceInsightsRetentionPeriod(0),
    m_performanceInsightsRetentionPeriodHasBeenSet(false),
    m_engineLifecycleSupportHasBeenSet(false)
{
}

Aws::String RestoreDBClusterToPointInTimeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestoreDBClusterToPointInTime&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_restoreTypeHasBeenSet)
  {
    ss << "RestoreType=" << StringUtils::URLEncode(m_restoreType.c_str()) << "&";
  }

  if(m_sourceDBClusterIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterIdentifier.c_str()) << "&";
  }

  if(m_restoreToTimeHasBeenSet)
  {
    ss << "RestoreToTime=" << StringUtils::URLEncode(m_restoreToTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_useLatestRestorableTimeHasBeenSet)
  {
    ss << "UseLatestRestorableTime=" << std::boolalpha << m_useLatestRestorableTime << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
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
        ss << "VpcSecurityGroupIds.member." << vpcSecurityGroupIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        vpcSecurityGroupIdsCount++;
      }
    }
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
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_enableIAMDatabaseAuthenticationHasBeenSet)
  {
    ss << "EnableIAMDatabaseAuthentication=" << std::boolalpha << m_enableIAMDatabaseAuthentication << "&";
  }

  if(m_backtrackWindowHasBeenSet)
  {
    ss << "BacktrackWindow=" << m_backtrackWindow << "&";
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

  if(m_dBClusterParameterGroupNameHasBeenSet)
  {
    ss << "DBClusterParameterGroupName=" << StringUtils::URLEncode(m_dBClusterParameterGroupName.c_str()) << "&";
  }

  if(m_deletionProtectionHasBeenSet)
  {
    ss << "DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if(m_copyTagsToSnapshotHasBeenSet)
  {
    ss << "CopyTagsToSnapshot=" << std::boolalpha << m_copyTagsToSnapshot << "&";
  }

  if(m_domainHasBeenSet)
  {
    ss << "Domain=" << StringUtils::URLEncode(m_domain.c_str()) << "&";
  }

  if(m_domainIAMRoleNameHasBeenSet)
  {
    ss << "DomainIAMRoleName=" << StringUtils::URLEncode(m_domainIAMRoleName.c_str()) << "&";
  }

  if(m_scalingConfigurationHasBeenSet)
  {
    m_scalingConfiguration.OutputToStream(ss, "ScalingConfiguration");
  }

  if(m_engineModeHasBeenSet)
  {
    ss << "EngineMode=" << StringUtils::URLEncode(m_engineMode.c_str()) << "&";
  }

  if(m_dBClusterInstanceClassHasBeenSet)
  {
    ss << "DBClusterInstanceClass=" << StringUtils::URLEncode(m_dBClusterInstanceClass.c_str()) << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
    ss << "StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_iopsHasBeenSet)
  {
    ss << "Iops=" << m_iops << "&";
  }

  if(m_serverlessV2ScalingConfigurationHasBeenSet)
  {
    m_serverlessV2ScalingConfiguration.OutputToStream(ss, "ServerlessV2ScalingConfiguration");
  }

  if(m_networkTypeHasBeenSet)
  {
    ss << "NetworkType=" << StringUtils::URLEncode(m_networkType.c_str()) << "&";
  }

  if(m_sourceDbClusterResourceIdHasBeenSet)
  {
    ss << "SourceDbClusterResourceId=" << StringUtils::URLEncode(m_sourceDbClusterResourceId.c_str()) << "&";
  }

  if(m_rdsCustomClusterConfigurationHasBeenSet)
  {
    m_rdsCustomClusterConfiguration.OutputToStream(ss, "RdsCustomClusterConfiguration");
  }

  if(m_monitoringIntervalHasBeenSet)
  {
    ss << "MonitoringInterval=" << m_monitoringInterval << "&";
  }

  if(m_monitoringRoleArnHasBeenSet)
  {
    ss << "MonitoringRoleArn=" << StringUtils::URLEncode(m_monitoringRoleArn.c_str()) << "&";
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

  if(m_engineLifecycleSupportHasBeenSet)
  {
    ss << "EngineLifecycleSupport=" << StringUtils::URLEncode(m_engineLifecycleSupport.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RestoreDBClusterToPointInTimeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
