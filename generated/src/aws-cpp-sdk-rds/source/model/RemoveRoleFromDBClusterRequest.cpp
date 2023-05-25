/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RemoveRoleFromDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

RemoveRoleFromDBClusterRequest::RemoveRoleFromDBClusterRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_featureNameHasBeenSet(false)
{
}

Aws::String RemoveRoleFromDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RemoveRoleFromDBCluster&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_featureNameHasBeenSet)
  {
    ss << "FeatureName=" << StringUtils::URLEncode(m_featureName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RemoveRoleFromDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
