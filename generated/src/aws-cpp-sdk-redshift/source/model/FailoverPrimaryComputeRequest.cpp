/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/FailoverPrimaryComputeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

FailoverPrimaryComputeRequest::FailoverPrimaryComputeRequest() : 
    m_clusterIdentifierHasBeenSet(false)
{
}

Aws::String FailoverPrimaryComputeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=FailoverPrimaryCompute&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  FailoverPrimaryComputeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
