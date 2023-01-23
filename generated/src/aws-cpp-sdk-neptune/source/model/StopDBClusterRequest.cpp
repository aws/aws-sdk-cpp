/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/StopDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

StopDBClusterRequest::StopDBClusterRequest() : 
    m_dBClusterIdentifierHasBeenSet(false)
{
}

Aws::String StopDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StopDBCluster&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StopDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
