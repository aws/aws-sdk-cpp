/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeStorageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeStorageRequest::DescribeStorageRequest()
{
}

Aws::String DescribeStorageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeStorage&";
  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeStorageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
