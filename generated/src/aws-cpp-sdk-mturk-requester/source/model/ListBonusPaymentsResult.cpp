/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListBonusPaymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBonusPaymentsResult::ListBonusPaymentsResult() : 
    m_numResults(0)
{
}

ListBonusPaymentsResult::ListBonusPaymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListBonusPaymentsResult& ListBonusPaymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NumResults"))
  {
    m_numResults = jsonValue.GetInteger("NumResults");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("BonusPayments"))
  {
    Aws::Utils::Array<JsonView> bonusPaymentsJsonList = jsonValue.GetArray("BonusPayments");
    for(unsigned bonusPaymentsIndex = 0; bonusPaymentsIndex < bonusPaymentsJsonList.GetLength(); ++bonusPaymentsIndex)
    {
      m_bonusPayments.push_back(bonusPaymentsJsonList[bonusPaymentsIndex].AsObject());
    }
  }



  return *this;
}
