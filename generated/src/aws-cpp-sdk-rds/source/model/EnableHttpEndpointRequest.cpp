/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/EnableHttpEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

EnableHttpEndpointRequest::EnableHttpEndpointRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String EnableHttpEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableHttpEndpoint&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  EnableHttpEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
