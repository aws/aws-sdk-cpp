/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/BatchGetTracesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetTracesResult::BatchGetTracesResult()
{
}

BatchGetTracesResult::BatchGetTracesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetTracesResult& BatchGetTracesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Traces"))
  {
    Aws::Utils::Array<JsonView> tracesJsonList = jsonValue.GetArray("Traces");
    for(unsigned tracesIndex = 0; tracesIndex < tracesJsonList.GetLength(); ++tracesIndex)
    {
      m_traces.push_back(tracesJsonList[tracesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedTraceIds"))
  {
    Aws::Utils::Array<JsonView> unprocessedTraceIdsJsonList = jsonValue.GetArray("UnprocessedTraceIds");
    for(unsigned unprocessedTraceIdsIndex = 0; unprocessedTraceIdsIndex < unprocessedTraceIdsJsonList.GetLength(); ++unprocessedTraceIdsIndex)
    {
      m_unprocessedTraceIds.push_back(unprocessedTraceIdsJsonList[unprocessedTraceIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
