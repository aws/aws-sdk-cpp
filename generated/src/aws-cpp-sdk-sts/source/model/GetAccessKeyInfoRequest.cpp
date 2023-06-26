/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/GetAccessKeyInfoRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

GetAccessKeyInfoRequest::GetAccessKeyInfoRequest() : 
    m_accessKeyIdHasBeenSet(false)
{
}

Aws::String GetAccessKeyInfoRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetAccessKeyInfo&";
  if(m_accessKeyIdHasBeenSet)
  {
    ss << "AccessKeyId=" << StringUtils::URLEncode(m_accessKeyId.c_str()) << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  GetAccessKeyInfoRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
