/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PutDataProtectionPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

PutDataProtectionPolicyRequest::PutDataProtectionPolicyRequest() : 
    m_resourceArnHasBeenSet(false),
    m_dataProtectionPolicyHasBeenSet(false)
{
}

Aws::String PutDataProtectionPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutDataProtectionPolicy&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_dataProtectionPolicyHasBeenSet)
  {
    ss << "DataProtectionPolicy=" << StringUtils::URLEncode(m_dataProtectionPolicy.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  PutDataProtectionPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
