/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationInstanceDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationInstanceDetail::AIRecommendationInstanceDetail(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationInstanceDetail& AIRecommendationInstanceDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = AIRecommendationInstanceTypeMapper::GetAIRecommendationInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceCount")) {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CopyCountPerInstance")) {
    m_copyCountPerInstance = jsonValue.GetInteger("CopyCountPerInstance");
    m_copyCountPerInstanceHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationInstanceDetail::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", AIRecommendationInstanceTypeMapper::GetNameForAIRecommendationInstanceType(m_instanceType));
  }

  if (m_instanceCountHasBeenSet) {
    payload.WithInteger("InstanceCount", m_instanceCount);
  }

  if (m_copyCountPerInstanceHasBeenSet) {
    payload.WithInteger("CopyCountPerInstance", m_copyCountPerInstance);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
