/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountPhoneNumberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SocialMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLinkedWhatsAppBusinessAccountPhoneNumberResult::GetLinkedWhatsAppBusinessAccountPhoneNumberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLinkedWhatsAppBusinessAccountPhoneNumberResult& GetLinkedWhatsAppBusinessAccountPhoneNumberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("phoneNumber"))
  {
    m_phoneNumber = jsonValue.GetObject("phoneNumber");
    m_phoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("linkedWhatsAppBusinessAccountId"))
  {
    m_linkedWhatsAppBusinessAccountId = jsonValue.GetString("linkedWhatsAppBusinessAccountId");
    m_linkedWhatsAppBusinessAccountIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
