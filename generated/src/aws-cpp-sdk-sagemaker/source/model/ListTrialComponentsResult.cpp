/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListTrialComponentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrialComponentsResult::ListTrialComponentsResult()
{
}

ListTrialComponentsResult::ListTrialComponentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrialComponentsResult& ListTrialComponentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrialComponentSummaries"))
  {
    Aws::Utils::Array<JsonView> trialComponentSummariesJsonList = jsonValue.GetArray("TrialComponentSummaries");
    for(unsigned trialComponentSummariesIndex = 0; trialComponentSummariesIndex < trialComponentSummariesJsonList.GetLength(); ++trialComponentSummariesIndex)
    {
      m_trialComponentSummaries.push_back(trialComponentSummariesJsonList[trialComponentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
