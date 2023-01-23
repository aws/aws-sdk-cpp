/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/ListSimulationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SimSpaceWeaver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSimulationsResult::ListSimulationsResult()
{
}

ListSimulationsResult::ListSimulationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSimulationsResult& ListSimulationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Simulations"))
  {
    Aws::Utils::Array<JsonView> simulationsJsonList = jsonValue.GetArray("Simulations");
    for(unsigned simulationsIndex = 0; simulationsIndex < simulationsJsonList.GetLength(); ++simulationsIndex)
    {
      m_simulations.push_back(simulationsJsonList[simulationsIndex].AsObject());
    }
  }



  return *this;
}
