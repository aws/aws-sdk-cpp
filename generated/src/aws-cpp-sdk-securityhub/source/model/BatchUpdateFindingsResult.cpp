/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateFindingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchUpdateFindingsResult::BatchUpdateFindingsResult()
{
}

BatchUpdateFindingsResult::BatchUpdateFindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchUpdateFindingsResult& BatchUpdateFindingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProcessedFindings"))
  {
    Aws::Utils::Array<JsonView> processedFindingsJsonList = jsonValue.GetArray("ProcessedFindings");
    for(unsigned processedFindingsIndex = 0; processedFindingsIndex < processedFindingsJsonList.GetLength(); ++processedFindingsIndex)
    {
      m_processedFindings.push_back(processedFindingsJsonList[processedFindingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedFindings"))
  {
    Aws::Utils::Array<JsonView> unprocessedFindingsJsonList = jsonValue.GetArray("UnprocessedFindings");
    for(unsigned unprocessedFindingsIndex = 0; unprocessedFindingsIndex < unprocessedFindingsJsonList.GetLength(); ++unprocessedFindingsIndex)
    {
      m_unprocessedFindings.push_back(unprocessedFindingsJsonList[unprocessedFindingsIndex].AsObject());
    }
  }



  return *this;
}
