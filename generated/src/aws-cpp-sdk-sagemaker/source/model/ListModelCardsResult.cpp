/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListModelCardsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListModelCardsResult::ListModelCardsResult()
{
}

ListModelCardsResult::ListModelCardsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListModelCardsResult& ListModelCardsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelCardSummaries"))
  {
    Aws::Utils::Array<JsonView> modelCardSummariesJsonList = jsonValue.GetArray("ModelCardSummaries");
    for(unsigned modelCardSummariesIndex = 0; modelCardSummariesIndex < modelCardSummariesJsonList.GetLength(); ++modelCardSummariesIndex)
    {
      m_modelCardSummaries.push_back(modelCardSummariesJsonList[modelCardSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
