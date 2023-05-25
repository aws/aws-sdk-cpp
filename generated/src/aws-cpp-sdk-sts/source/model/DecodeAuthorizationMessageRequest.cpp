/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/DecodeAuthorizationMessageRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

DecodeAuthorizationMessageRequest::DecodeAuthorizationMessageRequest() : 
    m_encodedMessageHasBeenSet(false)
{
}

Aws::String DecodeAuthorizationMessageRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DecodeAuthorizationMessage&";
  if(m_encodedMessageHasBeenSet)
  {
    ss << "EncodedMessage=" << StringUtils::URLEncode(m_encodedMessage.c_str()) << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  DecodeAuthorizationMessageRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
