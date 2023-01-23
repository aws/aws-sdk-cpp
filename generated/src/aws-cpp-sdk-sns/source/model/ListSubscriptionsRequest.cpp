/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListSubscriptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

ListSubscriptionsRequest::ListSubscriptionsRequest() : 
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListSubscriptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListSubscriptions&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  ListSubscriptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
