/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InferenceRouterSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InferenceRouterSummary::InferenceRouterSummary(JsonView jsonValue) { *this = jsonValue; }

InferenceRouterSummary& InferenceRouterSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InferenceRouterName")) {
    m_inferenceRouterName = jsonValue.GetString("InferenceRouterName");
    m_inferenceRouterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InferenceRouterArn")) {
    m_inferenceRouterArn = jsonValue.GetString("InferenceRouterArn");
    m_inferenceRouterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceRouterSummary::Jsonize() const {
  JsonValue payload;

  if (m_inferenceRouterNameHasBeenSet) {
    payload.WithString("InferenceRouterName", m_inferenceRouterName);
  }

  if (m_inferenceRouterArnHasBeenSet) {
    payload.WithString("InferenceRouterArn", m_inferenceRouterArn);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
