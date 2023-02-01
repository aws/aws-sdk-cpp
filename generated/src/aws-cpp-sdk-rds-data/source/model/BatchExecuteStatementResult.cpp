/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/BatchExecuteStatementResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RDSDataService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchExecuteStatementResult::BatchExecuteStatementResult()
{
}

BatchExecuteStatementResult::BatchExecuteStatementResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchExecuteStatementResult& BatchExecuteStatementResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("updateResults"))
  {
    Aws::Utils::Array<JsonView> updateResultsJsonList = jsonValue.GetArray("updateResults");
    for(unsigned updateResultsIndex = 0; updateResultsIndex < updateResultsJsonList.GetLength(); ++updateResultsIndex)
    {
      m_updateResults.push_back(updateResultsJsonList[updateResultsIndex].AsObject());
    }
  }



  return *this;
}
