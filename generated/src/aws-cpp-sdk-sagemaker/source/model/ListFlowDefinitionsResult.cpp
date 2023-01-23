/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListFlowDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFlowDefinitionsResult::ListFlowDefinitionsResult()
{
}

ListFlowDefinitionsResult::ListFlowDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFlowDefinitionsResult& ListFlowDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FlowDefinitionSummaries"))
  {
    Aws::Utils::Array<JsonView> flowDefinitionSummariesJsonList = jsonValue.GetArray("FlowDefinitionSummaries");
    for(unsigned flowDefinitionSummariesIndex = 0; flowDefinitionSummariesIndex < flowDefinitionSummariesJsonList.GetLength(); ++flowDefinitionSummariesIndex)
    {
      m_flowDefinitionSummaries.push_back(flowDefinitionSummariesJsonList[flowDefinitionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
