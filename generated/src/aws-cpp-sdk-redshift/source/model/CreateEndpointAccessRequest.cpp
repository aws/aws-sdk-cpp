/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateEndpointAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String CreateEndpointAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateEndpointAccess&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_resourceOwnerHasBeenSet)
  {
    ss << "ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

  if(m_endpointNameHasBeenSet)
  {
    ss << "EndpointName=" << StringUtils::URLEncode(m_endpointName.c_str()) << "&";
  }

  if(m_subnetGroupNameHasBeenSet)
  {
    ss << "SubnetGroupName=" << StringUtils::URLEncode(m_subnetGroupName.c_str()) << "&";
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

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CreateEndpointAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
