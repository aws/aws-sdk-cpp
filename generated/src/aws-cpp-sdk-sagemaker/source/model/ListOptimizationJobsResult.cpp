/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListOptimizationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOptimizationJobsResult::ListOptimizationJobsResult()
{
}

ListOptimizationJobsResult::ListOptimizationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOptimizationJobsResult& ListOptimizationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OptimizationJobSummaries"))
  {
    Aws::Utils::Array<JsonView> optimizationJobSummariesJsonList = jsonValue.GetArray("OptimizationJobSummaries");
    for(unsigned optimizationJobSummariesIndex = 0; optimizationJobSummariesIndex < optimizationJobSummariesJsonList.GetLength(); ++optimizationJobSummariesIndex)
    {
      m_optimizationJobSummaries.push_back(optimizationJobSummariesJsonList[optimizationJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
