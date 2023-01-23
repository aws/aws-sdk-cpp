/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListPipelineParametersForExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipelineParametersForExecutionResult::ListPipelineParametersForExecutionResult()
{
}

ListPipelineParametersForExecutionResult::ListPipelineParametersForExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelineParametersForExecutionResult& ListPipelineParametersForExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineParameters"))
  {
    Aws::Utils::Array<JsonView> pipelineParametersJsonList = jsonValue.GetArray("PipelineParameters");
    for(unsigned pipelineParametersIndex = 0; pipelineParametersIndex < pipelineParametersJsonList.GetLength(); ++pipelineParametersIndex)
    {
      m_pipelineParameters.push_back(pipelineParametersJsonList[pipelineParametersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
