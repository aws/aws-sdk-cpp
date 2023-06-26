/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/AddSourceIdentifierToSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

AddSourceIdentifierToSubscriptionRequest::AddSourceIdentifierToSubscriptionRequest() : 
    m_subscriptionNameHasBeenSet(false),
    m_sourceIdentifierHasBeenSet(false)
{
}

Aws::String AddSourceIdentifierToSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddSourceIdentifierToSubscription&";
  if(m_subscriptionNameHasBeenSet)
  {
    ss << "SubscriptionName=" << StringUtils::URLEncode(m_subscriptionName.c_str()) << "&";
  }

  if(m_sourceIdentifierHasBeenSet)
  {
    ss << "SourceIdentifier=" << StringUtils::URLEncode(m_sourceIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  AddSourceIdentifierToSubscriptionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
