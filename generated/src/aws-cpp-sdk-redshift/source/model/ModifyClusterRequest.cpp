/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyClusterRequest::ModifyClusterRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_clusterSecurityGroupsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_clusterParameterGroupNameHasBeenSet(false),
    m_automatedSnapshotRetentionPeriod(0),
    m_automatedSnapshotRetentionPeriodHasBeenSet(false),
    m_manualSnapshotRetentionPeriod(0),
    m_manualSnapshotRetentionPeriodHasBeenSet(false),
    m_preferredMaintenanceWindowHasBeenSet(false),
    m_clusterVersionHasBeenSet(false),
    m_allowVersionUpgrade(false),
    m_allowVersionUpgradeHasBeenSet(false),
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_hsmConfigurationIdentifierHasBeenSet(false),
    m_newClusterIdentifierHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_elasticIpHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maintenanceTrackNameHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_availabilityZoneRelocation(false),
    m_availabilityZoneRelocationHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_manageMasterPassword(false),
    m_manageMasterPasswordHasBeenSet(false),
    m_masterPasswordSecretKmsKeyIdHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false)
{
}

Aws::String ModifyClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCluster&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_clusterTypeHasBeenSet)
  {
    ss << "ClusterType=" << StringUtils::URLEncode(m_clusterType.c_str()) << "&";
  }

  if(m_nodeTypeHasBeenSet)
  {
    ss << "NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_numberOfNodesHasBeenSet)
  {
    ss << "NumberOfNodes=" << m_numberOfNodes << "&";
  }

  if(m_clusterSecurityGroupsHasBeenSet)
  {
    unsigned clusterSecurityGroupsCount = 1;
    for(auto& item : m_clusterSecurityGroups)
    {
      ss << "ClusterSecurityGroups.member." << clusterSecurityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      clusterSecurityGroupsCount++;
    }
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

  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_clusterParameterGroupNameHasBeenSet)
  {
    ss << "ClusterParameterGroupName=" << StringUtils::URLEncode(m_clusterParameterGroupName.c_str()) << "&";
  }

  if(m_automatedSnapshotRetentionPeriodHasBeenSet)
  {
    ss << "AutomatedSnapshotRetentionPeriod=" << m_automatedSnapshotRetentionPeriod << "&";
  }

  if(m_manualSnapshotRetentionPeriodHasBeenSet)
  {
    ss << "ManualSnapshotRetentionPeriod=" << m_manualSnapshotRetentionPeriod << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
  }

  if(m_clusterVersionHasBeenSet)
  {
    ss << "ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }

  if(m_allowVersionUpgradeHasBeenSet)
  {
    ss << "AllowVersionUpgrade=" << std::boolalpha << m_allowVersionUpgrade << "&";
  }

  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
    ss << "HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }

  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
    ss << "HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }

  if(m_newClusterIdentifierHasBeenSet)
  {
    ss << "NewClusterIdentifier=" << StringUtils::URLEncode(m_newClusterIdentifier.c_str()) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_elasticIpHasBeenSet)
  {
    ss << "ElasticIp=" << StringUtils::URLEncode(m_elasticIp.c_str()) << "&";
  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
    ss << "EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }

  if(m_maintenanceTrackNameHasBeenSet)
  {
    ss << "MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
    ss << "Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_availabilityZoneRelocationHasBeenSet)
  {
    ss << "AvailabilityZoneRelocation=" << std::boolalpha << m_availabilityZoneRelocation << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_manageMasterPasswordHasBeenSet)
  {
    ss << "ManageMasterPassword=" << std::boolalpha << m_manageMasterPassword << "&";
  }

  if(m_masterPasswordSecretKmsKeyIdHasBeenSet)
  {
    ss << "MasterPasswordSecretKmsKeyId=" << StringUtils::URLEncode(m_masterPasswordSecretKmsKeyId.c_str()) << "&";
  }

  if(m_ipAddressTypeHasBeenSet)
  {
    ss << "IpAddressType=" << StringUtils::URLEncode(m_ipAddressType.c_str()) << "&";
  }

  if(m_multiAZHasBeenSet)
  {
    ss << "MultiAZ=" << std::boolalpha << m_multiAZ << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
