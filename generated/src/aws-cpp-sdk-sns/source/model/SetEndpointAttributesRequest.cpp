﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/SetEndpointAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

Aws::String SetEndpointAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetEndpointAttributes&";
  if(m_endpointArnHasBeenSet)
  {
    ss << "EndpointArn=" << StringUtils::URLEncode(m_endpointArn.c_str()) << "&";
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


void  SetEndpointAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
