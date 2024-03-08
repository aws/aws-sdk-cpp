/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetResourcePolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

GetResourcePolicyRequest::GetResourcePolicyRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String GetResourcePolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetResourcePolicy&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  GetResourcePolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
