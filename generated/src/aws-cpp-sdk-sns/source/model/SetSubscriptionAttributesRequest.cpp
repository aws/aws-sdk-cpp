/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/SetSubscriptionAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

SetSubscriptionAttributesRequest::SetSubscriptionAttributesRequest() : 
    m_subscriptionArnHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

Aws::String SetSubscriptionAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetSubscriptionAttributes&";
  if(m_subscriptionArnHasBeenSet)
  {
    ss << "SubscriptionArn=" << StringUtils::URLEncode(m_subscriptionArn.c_str()) << "&";
  }

  if(m_attributeNameHasBeenSet)
  {
    ss << "AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeValueHasBeenSet)
  {
    ss << "AttributeValue=" << StringUtils::URLEncode(m_attributeValue.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  SetSubscriptionAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
