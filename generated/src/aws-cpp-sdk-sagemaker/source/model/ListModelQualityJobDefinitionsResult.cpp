/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelQualityJobDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelQualityJobDefinitionsResult::ListModelQualityJobDefinitionsResult()
{
}

ListModelQualityJobDefinitionsResult::ListModelQualityJobDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelQualityJobDefinitionsResult& ListModelQualityJobDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("JobDefinitionSummaries"))
  {
    Aws::Utils::Array<JsonView> jobDefinitionSummariesJsonList = jsonValue.GetArray("JobDefinitionSummaries");
    for(unsigned jobDefinitionSummariesIndex = 0; jobDefinitionSummariesIndex < jobDefinitionSummariesJsonList.GetLength(); ++jobDefinitionSummariesIndex)
    {
      m_jobDefinitionSummaries.push_back(jobDefinitionSummariesJsonList[jobDefinitionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
