/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/RestoreDBClusterFromSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

RestoreDBClusterFromSnapshotRequest::RestoreDBClusterFromSnapshotRequest() : 
    m_availabilityZonesHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_snapshotIdentifierHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dBSubnetGroupNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_enableIAMDatabaseAuthentication(false),
    m_enableIAMDatabaseAuthenticationHasBeenSet(false),
    m_enableCloudwatchLogsExportsHasBeenSet(false),
    m_dBClusterParameterGroupNameHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false),
    m_copyTagsToSnapshot(false),
    m_copyTagsToSnapshotHasBeenSet(false),
    m_serverlessV2ScalingConfigurationHasBeenSet(false)
{
}

Aws::String RestoreDBClusterFromSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestoreDBClusterFromSnapshot&";
  if(m_availabilityZonesHasBeenSet)
  {
    unsigned availabilityZonesCount = 1;
    for(auto& item : m_availabilityZones)
    {
      ss << "AvailabilityZones.member." << availabilityZonesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      availabilityZonesCount++;
    }
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_databaseNameHasBeenSet)
  {
    ss << "DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    unsigned vpcSecurityGroupIdsCount = 1;
    for(auto& item : m_vpcSecurityGroupIds)
    {
      ss << "VpcSecurityGroupIds.member." << vpcSecurityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcSecurityGroupIdsCount++;
    }
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
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

  if(m_enableCloudwatchLogsExportsHasBeenSet)
  {
    unsigned enableCloudwatchLogsExportsCount = 1;
    for(auto& item : m_enableCloudwatchLogsExports)
    {
      ss << "EnableCloudwatchLogsExports.member." << enableCloudwatchLogsExportsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      enableCloudwatchLogsExportsCount++;
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

  if(m_serverlessV2ScalingConfigurationHasBeenSet)
  {
    m_serverlessV2ScalingConfiguration.OutputToStream(ss, "ServerlessV2ScalingConfiguration");
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RestoreDBClusterFromSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
