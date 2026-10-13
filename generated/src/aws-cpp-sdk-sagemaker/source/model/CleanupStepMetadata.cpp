/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CleanupStepMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CleanupStepMetadata::CleanupStepMetadata(JsonView jsonValue) { *this = jsonValue; }

CleanupStepMetadata& CleanupStepMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CleanedSteps")) {
    Aws::Utils::Array<JsonView> cleanedStepsJsonList = jsonValue.GetArray("CleanedSteps");
    for (unsigned cleanedStepsIndex = 0; cleanedStepsIndex < cleanedStepsJsonList.GetLength(); ++cleanedStepsIndex) {
      m_cleanedSteps.push_back(cleanedStepsJsonList[cleanedStepsIndex].AsString());
    }
    m_cleanedStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailedSteps")) {
    Aws::Utils::Array<JsonView> failedStepsJsonList = jsonValue.GetArray("FailedSteps");
    for (unsigned failedStepsIndex = 0; failedStepsIndex < failedStepsJsonList.GetLength(); ++failedStepsIndex) {
      m_failedSteps.push_back(failedStepsJsonList[failedStepsIndex].AsObject());
    }
    m_failedStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SkippedSteps")) {
    Aws::Utils::Array<JsonView> skippedStepsJsonList = jsonValue.GetArray("SkippedSteps");
    for (unsigned skippedStepsIndex = 0; skippedStepsIndex < skippedStepsJsonList.GetLength(); ++skippedStepsIndex) {
      m_skippedSteps.push_back(skippedStepsJsonList[skippedStepsIndex].AsString());
    }
    m_skippedStepsHasBeenSet = true;
  }
  return *this;
}

JsonValue CleanupStepMetadata::Jsonize() const {
  JsonValue payload;

  if (m_cleanedStepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cleanedStepsJsonList(m_cleanedSteps.size());
    for (unsigned cleanedStepsIndex = 0; cleanedStepsIndex < cleanedStepsJsonList.GetLength(); ++cleanedStepsIndex) {
      cleanedStepsJsonList[cleanedStepsIndex].AsString(m_cleanedSteps[cleanedStepsIndex]);
    }
    payload.WithArray("CleanedSteps", std::move(cleanedStepsJsonList));
  }

  if (m_failedStepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> failedStepsJsonList(m_failedSteps.size());
    for (unsigned failedStepsIndex = 0; failedStepsIndex < failedStepsJsonList.GetLength(); ++failedStepsIndex) {
      failedStepsJsonList[failedStepsIndex].AsObject(m_failedSteps[failedStepsIndex].Jsonize());
    }
    payload.WithArray("FailedSteps", std::move(failedStepsJsonList));
  }

  if (m_skippedStepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> skippedStepsJsonList(m_skippedSteps.size());
    for (unsigned skippedStepsIndex = 0; skippedStepsIndex < skippedStepsJsonList.GetLength(); ++skippedStepsIndex) {
      skippedStepsJsonList[skippedStepsIndex].AsString(m_skippedSteps[skippedStepsIndex]);
    }
    payload.WithArray("SkippedSteps", std::move(skippedStepsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
