/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/ExtendTrainingPlanResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExtendTrainingPlanResult::ExtendTrainingPlanResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ExtendTrainingPlanResult& ExtendTrainingPlanResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("TrainingPlanExtensions")) {
    Aws::Utils::Array<JsonView> trainingPlanExtensionsJsonList = jsonValue.GetArray("TrainingPlanExtensions");
    for (unsigned trainingPlanExtensionsIndex = 0; trainingPlanExtensionsIndex < trainingPlanExtensionsJsonList.GetLength();
         ++trainingPlanExtensionsIndex) {
      m_trainingPlanExtensions.push_back(trainingPlanExtensionsJsonList[trainingPlanExtensionsIndex].AsObject());
    }
    m_trainingPlanExtensionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
