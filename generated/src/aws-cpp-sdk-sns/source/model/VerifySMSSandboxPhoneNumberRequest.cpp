/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/VerifySMSSandboxPhoneNumberRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

VerifySMSSandboxPhoneNumberRequest::VerifySMSSandboxPhoneNumberRequest() : 
    m_phoneNumberHasBeenSet(false),
    m_oneTimePasswordHasBeenSet(false)
{
}

Aws::String VerifySMSSandboxPhoneNumberRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=VerifySMSSandboxPhoneNumber&";
  if(m_phoneNumberHasBeenSet)
  {
    ss << "PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  if(m_oneTimePasswordHasBeenSet)
  {
    ss << "OneTimePassword=" << StringUtils::URLEncode(m_oneTimePassword.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  VerifySMSSandboxPhoneNumberRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
