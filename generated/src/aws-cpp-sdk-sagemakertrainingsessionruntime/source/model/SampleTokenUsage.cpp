/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTokenUsage.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

SampleTokenUsage::SampleTokenUsage(JsonView jsonValue) { *this = jsonValue; }

SampleTokenUsage& SampleTokenUsage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("prefill")) {
    m_prefill = jsonValue.GetInteger("prefill");
    m_prefillHasBeenSet = true;
  }
  if (jsonValue.ValueExists("decode")) {
    m_decode = jsonValue.GetInteger("decode");
    m_decodeHasBeenSet = true;
  }
  return *this;
}

JsonValue SampleTokenUsage::Jsonize() const {
  JsonValue payload;

  if (m_prefillHasBeenSet) {
    payload.WithInteger("prefill", m_prefill);
  }

  if (m_decodeHasBeenSet) {
    payload.WithInteger("decode", m_decode);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
