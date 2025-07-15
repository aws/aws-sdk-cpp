/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListPipelineVersionsResult.h>
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

ListPipelineVersionsResult::ListPipelineVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelineVersionsResult& ListPipelineVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> pipelineVersionSummariesJsonList = jsonValue.GetArray("PipelineVersionSummaries");
    for(unsigned pipelineVersionSummariesIndex = 0; pipelineVersionSummariesIndex < pipelineVersionSummariesJsonList.GetLength(); ++pipelineVersionSummariesIndex)
    {
      m_pipelineVersionSummaries.push_back(pipelineVersionSummariesJsonList[pipelineVersionSummariesIndex].AsObject());
    }
    m_pipelineVersionSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
