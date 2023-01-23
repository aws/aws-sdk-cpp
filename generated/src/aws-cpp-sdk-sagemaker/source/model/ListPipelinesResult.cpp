/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListPipelinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPipelinesResult::ListPipelinesResult()
{
}

ListPipelinesResult::ListPipelinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPipelinesResult& ListPipelinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PipelineSummaries"))
  {
    Aws::Utils::Array<JsonView> pipelineSummariesJsonList = jsonValue.GetArray("PipelineSummaries");
    for(unsigned pipelineSummariesIndex = 0; pipelineSummariesIndex < pipelineSummariesJsonList.GetLength(); ++pipelineSummariesIndex)
    {
      m_pipelineSummaries.push_back(pipelineSummariesJsonList[pipelineSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
