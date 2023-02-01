/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/ListAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSO::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccountsResult::ListAccountsResult()
{
}

ListAccountsResult::ListAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccountsResult& ListAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("accountList"))
  {
    Aws::Utils::Array<JsonView> accountListJsonList = jsonValue.GetArray("accountList");
    for(unsigned accountListIndex = 0; accountListIndex < accountListJsonList.GetLength(); ++accountListIndex)
    {
      m_accountList.push_back(accountListJsonList[accountListIndex].AsObject());
    }
  }



  return *this;
}
