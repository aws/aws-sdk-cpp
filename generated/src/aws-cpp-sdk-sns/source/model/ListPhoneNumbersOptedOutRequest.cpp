/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/ListPhoneNumbersOptedOutRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

ListPhoneNumbersOptedOutRequest::ListPhoneNumbersOptedOutRequest() : 
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListPhoneNumbersOptedOutRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ListPhoneNumbersOptedOut&";
  if(m_nextTokenHasBeenSet)
  {
    ss << "nextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  ListPhoneNumbersOptedOutRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
