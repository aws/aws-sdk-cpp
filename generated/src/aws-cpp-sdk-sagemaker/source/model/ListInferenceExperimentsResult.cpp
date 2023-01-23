/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListInferenceExperimentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInferenceExperimentsResult::ListInferenceExperimentsResult()
{
}

ListInferenceExperimentsResult::ListInferenceExperimentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInferenceExperimentsResult& ListInferenceExperimentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InferenceExperiments"))
  {
    Aws::Utils::Array<JsonView> inferenceExperimentsJsonList = jsonValue.GetArray("InferenceExperiments");
    for(unsigned inferenceExperimentsIndex = 0; inferenceExperimentsIndex < inferenceExperimentsJsonList.GetLength(); ++inferenceExperimentsIndex)
    {
      m_inferenceExperiments.push_back(inferenceExperimentsJsonList[inferenceExperimentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
