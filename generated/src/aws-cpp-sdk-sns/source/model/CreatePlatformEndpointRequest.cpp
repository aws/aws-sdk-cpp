/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/CreatePlatformEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

CreatePlatformEndpointRequest::CreatePlatformEndpointRequest() : 
    m_platformApplicationArnHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_customUserDataHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String CreatePlatformEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreatePlatformEndpoint&";
  if(m_platformApplicationArnHasBeenSet)
  {
    ss << "PlatformApplicationArn=" << StringUtils::URLEncode(m_platformApplicationArn.c_str()) << "&";
  }

  if(m_tokenHasBeenSet)
  {
    ss << "Token=" << StringUtils::URLEncode(m_token.c_str()) << "&";
  }

  if(m_customUserDataHasBeenSet)
  {
    ss << "CustomUserData=" << StringUtils::URLEncode(m_customUserData.c_str()) << "&";
  }

  if(m_attributesHasBeenSet)
  {
    unsigned attributesCount = 1;
    for(auto& item : m_attributes)
    {
      ss << "Attributes.entry." << attributesCount << ".key="
          << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "Attributes.entry." << attributesCount << ".value="
          << StringUtils::URLEncode(item.second.c_str()) << "&";
      attributesCount++;
    }
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  CreatePlatformEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
