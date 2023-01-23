/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteClusterSecurityGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteClusterSecurityGroupRequest::DeleteClusterSecurityGroupRequest() : 
    m_clusterSecurityGroupNameHasBeenSet(false)
{
}

Aws::String DeleteClusterSecurityGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteClusterSecurityGroup&";
  if(m_clusterSecurityGroupNameHasBeenSet)
  {
    ss << "ClusterSecurityGroupName=" << StringUtils::URLEncode(m_clusterSecurityGroupName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteClusterSecurityGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
