/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsResult.h>
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

ListLinkedWhatsAppBusinessAccountsResult::ListLinkedWhatsAppBusinessAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLinkedWhatsAppBusinessAccountsResult& ListLinkedWhatsAppBusinessAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("linkedAccounts"))
  {
    Aws::Utils::Array<JsonView> linkedAccountsJsonList = jsonValue.GetArray("linkedAccounts");
    for(unsigned linkedAccountsIndex = 0; linkedAccountsIndex < linkedAccountsJsonList.GetLength(); ++linkedAccountsIndex)
    {
      m_linkedAccounts.push_back(linkedAccountsJsonList[linkedAccountsIndex].AsObject());
    }
    m_linkedAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
