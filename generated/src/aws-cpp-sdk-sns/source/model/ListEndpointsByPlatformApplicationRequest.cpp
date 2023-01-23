/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListEndpointsByPlatformApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

ListEndpointsByPlatformApplicationRequest::ListEndpointsByPlatformApplicationRequest() : 
    m_platformApplicationArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListEndpointsByPlatformApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListEndpointsByPlatformApplication&";
  if(m_platformApplicationArnHasBeenSet)
  {
    ss << "PlatformApplicationArn=" << StringUtils::URLEncode(m_platformApplicationArn.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  ListEndpointsByPlatformApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
