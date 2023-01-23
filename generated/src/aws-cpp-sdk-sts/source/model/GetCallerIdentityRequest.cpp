/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/GetCallerIdentityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

GetCallerIdentityRequest::GetCallerIdentityRequest()
{
}

Aws::String GetCallerIdentityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetCallerIdentity&";
  ss << "Version=2011-06-15";
  return ss.str();
}


void  GetCallerIdentityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
