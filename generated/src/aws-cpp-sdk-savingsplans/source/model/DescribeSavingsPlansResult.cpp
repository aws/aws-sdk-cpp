/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/DescribeSavingsPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SavingsPlans::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSavingsPlansResult::DescribeSavingsPlansResult()
{
}

DescribeSavingsPlansResult::DescribeSavingsPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSavingsPlansResult& DescribeSavingsPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("savingsPlans"))
  {
    Aws::Utils::Array<JsonView> savingsPlansJsonList = jsonValue.GetArray("savingsPlans");
    for(unsigned savingsPlansIndex = 0; savingsPlansIndex < savingsPlansJsonList.GetLength(); ++savingsPlansIndex)
    {
      m_savingsPlans.push_back(savingsPlansJsonList[savingsPlansIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
