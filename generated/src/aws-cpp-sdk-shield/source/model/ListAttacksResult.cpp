/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ListAttacksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAttacksResult::ListAttacksResult()
{
}

ListAttacksResult::ListAttacksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAttacksResult& ListAttacksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AttackSummaries"))
  {
    Aws::Utils::Array<JsonView> attackSummariesJsonList = jsonValue.GetArray("AttackSummaries");
    for(unsigned attackSummariesIndex = 0; attackSummariesIndex < attackSummariesJsonList.GetLength(); ++attackSummariesIndex)
    {
      m_attackSummaries.push_back(attackSummariesJsonList[attackSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
