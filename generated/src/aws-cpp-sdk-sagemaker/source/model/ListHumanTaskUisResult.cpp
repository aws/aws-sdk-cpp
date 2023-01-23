/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListHumanTaskUisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHumanTaskUisResult::ListHumanTaskUisResult()
{
}

ListHumanTaskUisResult::ListHumanTaskUisResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHumanTaskUisResult& ListHumanTaskUisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HumanTaskUiSummaries"))
  {
    Aws::Utils::Array<JsonView> humanTaskUiSummariesJsonList = jsonValue.GetArray("HumanTaskUiSummaries");
    for(unsigned humanTaskUiSummariesIndex = 0; humanTaskUiSummariesIndex < humanTaskUiSummariesJsonList.GetLength(); ++humanTaskUiSummariesIndex)
    {
      m_humanTaskUiSummaries.push_back(humanTaskUiSummariesJsonList[humanTaskUiSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
