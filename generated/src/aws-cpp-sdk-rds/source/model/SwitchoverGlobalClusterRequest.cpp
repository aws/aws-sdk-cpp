/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SwitchoverGlobalClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

SwitchoverGlobalClusterRequest::SwitchoverGlobalClusterRequest() : 
    m_globalClusterIdentifierHasBeenSet(false),
    m_targetDbClusterIdentifierHasBeenSet(false)
{
}

Aws::String SwitchoverGlobalClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SwitchoverGlobalCluster&";
  if(m_globalClusterIdentifierHasBeenSet)
  {
    ss << "GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if(m_targetDbClusterIdentifierHasBeenSet)
  {
    ss << "TargetDbClusterIdentifier=" << StringUtils::URLEncode(m_targetDbClusterIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  SwitchoverGlobalClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
