/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListInferenceRecommendationsJobStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInferenceRecommendationsJobStepsResult::ListInferenceRecommendationsJobStepsResult()
{
}

ListInferenceRecommendationsJobStepsResult::ListInferenceRecommendationsJobStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInferenceRecommendationsJobStepsResult& ListInferenceRecommendationsJobStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
