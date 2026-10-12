/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/Datum.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

Datum::Datum(JsonView jsonValue) { *this = jsonValue; }

Datum& Datum::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelInput")) {
    m_modelInput = jsonValue.GetObject("modelInput");
    m_modelInputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lossFnInputs")) {
    Aws::Map<Aws::String, JsonView> lossFnInputsJsonMap = jsonValue.GetObject("lossFnInputs").GetAllObjects();
    for (auto& lossFnInputsItem : lossFnInputsJsonMap) {
      m_lossFnInputs[lossFnInputsItem.first] = lossFnInputsItem.second.AsObject();
    }
    m_lossFnInputsHasBeenSet = true;
  }
  return *this;
}

JsonValue Datum::Jsonize() const {
  JsonValue payload;

  if (m_modelInputHasBeenSet) {
    payload.WithObject("modelInput", m_modelInput.Jsonize());
  }

  if (m_lossFnInputsHasBeenSet) {
    JsonValue lossFnInputsJsonMap;
    for (auto& lossFnInputsItem : m_lossFnInputs) {
      lossFnInputsJsonMap.WithObject(lossFnInputsItem.first, lossFnInputsItem.second.Jsonize());
    }
    payload.WithObject("lossFnInputs", std::move(lossFnInputsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
