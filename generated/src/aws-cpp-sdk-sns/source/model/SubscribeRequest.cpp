/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/SubscribeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

SubscribeRequest::SubscribeRequest() : 
    m_topicArnHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_returnSubscriptionArn(false),
    m_returnSubscriptionArnHasBeenSet(false)
{
}

Aws::String SubscribeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=Subscribe&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
    ss << "Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
    ss << "Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
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

  if(m_returnSubscriptionArnHasBeenSet)
  {
    ss << "ReturnSubscriptionArn=" << std::boolalpha << m_returnSubscriptionArn << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  SubscribeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
