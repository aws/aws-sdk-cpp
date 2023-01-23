/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribePatchBaselinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePatchBaselinesResult::DescribePatchBaselinesResult()
{
}

DescribePatchBaselinesResult::DescribePatchBaselinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePatchBaselinesResult& DescribePatchBaselinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BaselineIdentities"))
  {
    Aws::Utils::Array<JsonView> baselineIdentitiesJsonList = jsonValue.GetArray("BaselineIdentities");
    for(unsigned baselineIdentitiesIndex = 0; baselineIdentitiesIndex < baselineIdentitiesJsonList.GetLength(); ++baselineIdentitiesIndex)
    {
      m_baselineIdentities.push_back(baselineIdentitiesJsonList[baselineIdentitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
