/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/BillableTokenUsage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

BillableTokenUsage::BillableTokenUsage(JsonView jsonValue) { *this = jsonValue; }

BillableTokenUsage& BillableTokenUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrefillTokenCount")) {
    m_prefillTokenCount = jsonValue.GetInt64("PrefillTokenCount");
    m_prefillTokenCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SampleTokenCount")) {
    m_sampleTokenCount = jsonValue.GetInt64("SampleTokenCount");
    m_sampleTokenCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TrainingTokenCount")) {
    m_trainingTokenCount = jsonValue.GetInt64("TrainingTokenCount");
    m_trainingTokenCountHasBeenSet = true;
  }
  return *this;
}

JsonValue BillableTokenUsage::Jsonize() const {
  JsonValue payload;

  if (m_prefillTokenCountHasBeenSet) {
    payload.WithInt64("PrefillTokenCount", m_prefillTokenCount);
  }

  if (m_sampleTokenCountHasBeenSet) {
    payload.WithInt64("SampleTokenCount", m_sampleTokenCount);
  }

  if (m_trainingTokenCountHasBeenSet) {
    payload.WithInt64("TrainingTokenCount", m_trainingTokenCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
