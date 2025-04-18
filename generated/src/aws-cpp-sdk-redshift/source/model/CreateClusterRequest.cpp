﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String CreateClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCluster&";
  if(m_dBNameHasBeenSet)
  {
    ss << "DBName=" << StringUtils::URLEncode(m_dBName.c_str()) << "&";
  }

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

  if(m_masterUsernameHasBeenSet)
  {
    ss << "MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
    ss << "MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_clusterSecurityGroupsHasBeenSet)
  {
    if (m_clusterSecurityGroups.empty())
    {
      ss << "ClusterSecurityGroups=&";
    }
    else
    {
      unsigned clusterSecurityGroupsCount = 1;
      for(auto& item : m_clusterSecurityGroups)
      {
        ss << "ClusterSecurityGroups.ClusterSecurityGroupName." << clusterSecurityGroupsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        clusterSecurityGroupsCount++;
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

  if(m_clusterSubnetGroupNameHasBeenSet)
  {
    ss << "ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_preferredMaintenanceWindowHasBeenSet)
  {
    ss << "PreferredMaintenanceWindow=" << StringUtils::URLEncode(m_preferredMaintenanceWindow.c_str()) << "&";
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

  if(m_portHasBeenSet)
  {
    ss << "Port=" << m_port << "&";
  }

  if(m_clusterVersionHasBeenSet)
  {
    ss << "ClusterVersion=" << StringUtils::URLEncode(m_clusterVersion.c_str()) << "&";
  }

  if(m_allowVersionUpgradeHasBeenSet)
  {
    ss << "AllowVersionUpgrade=" << std::boolalpha << m_allowVersionUpgrade << "&";
  }

  if(m_numberOfNodesHasBeenSet)
  {
    ss << "NumberOfNodes=" << m_numberOfNodes << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  if(m_encryptedHasBeenSet)
  {
    ss << "Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
    ss << "HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }

  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
    ss << "HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }

  if(m_elasticIpHasBeenSet)
  {
    ss << "ElasticIp=" << StringUtils::URLEncode(m_elasticIp.c_str()) << "&";
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

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
    ss << "EnhancedVpcRouting=" << std::boolalpha << m_enhancedVpcRouting << "&";
  }

  if(m_additionalInfoHasBeenSet)
  {
    ss << "AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }

  if(m_iamRolesHasBeenSet)
  {
    if (m_iamRoles.empty())
    {
      ss << "IamRoles=&";
    }
    else
    {
      unsigned iamRolesCount = 1;
      for(auto& item : m_iamRoles)
      {
        ss << "IamRoles.IamRoleArn." << iamRolesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        iamRolesCount++;
      }
    }
  }

  if(m_maintenanceTrackNameHasBeenSet)
  {
    ss << "MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }

  if(m_snapshotScheduleIdentifierHasBeenSet)
  {
    ss << "SnapshotScheduleIdentifier=" << StringUtils::URLEncode(m_snapshotScheduleIdentifier.c_str()) << "&";
  }

  if(m_availabilityZoneRelocationHasBeenSet)
  {
    ss << "AvailabilityZoneRelocation=" << std::boolalpha << m_availabilityZoneRelocation << "&";
  }

  if(m_aquaConfigurationStatusHasBeenSet)
  {
    ss << "AquaConfigurationStatus=" << StringUtils::URLEncode(AquaConfigurationStatusMapper::GetNameForAquaConfigurationStatus(m_aquaConfigurationStatus)) << "&";
  }

  if(m_defaultIamRoleArnHasBeenSet)
  {
    ss << "DefaultIamRoleArn=" << StringUtils::URLEncode(m_defaultIamRoleArn.c_str()) << "&";
  }

  if(m_loadSampleDataHasBeenSet)
  {
    ss << "LoadSampleData=" << StringUtils::URLEncode(m_loadSampleData.c_str()) << "&";
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

  if(m_redshiftIdcApplicationArnHasBeenSet)
  {
    ss << "RedshiftIdcApplicationArn=" << StringUtils::URLEncode(m_redshiftIdcApplicationArn.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CreateClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
