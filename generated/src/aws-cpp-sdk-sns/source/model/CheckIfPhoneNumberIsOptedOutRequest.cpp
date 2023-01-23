/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

CheckIfPhoneNumberIsOptedOutRequest::CheckIfPhoneNumberIsOptedOutRequest() : 
    m_phoneNumberHasBeenSet(false)
{
}

Aws::String CheckIfPhoneNumberIsOptedOutRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CheckIfPhoneNumberIsOptedOut&";
  if(m_phoneNumberHasBeenSet)
  {
    ss << "phoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  CheckIfPhoneNumberIsOptedOutRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
