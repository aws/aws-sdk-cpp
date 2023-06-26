﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeAccountAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeAccountAttributesRequest::DescribeAccountAttributesRequest()
{
}

Aws::String DescribeAccountAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeAccountAttributes&";
  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeAccountAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
