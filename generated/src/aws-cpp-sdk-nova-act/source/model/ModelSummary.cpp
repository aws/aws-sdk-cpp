/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/ModelSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NovaAct {
namespace Model {

ModelSummary::ModelSummary(JsonView jsonValue) { *this = jsonValue; }

ModelSummary& ModelSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelId")) {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelLifecycle")) {
    m_modelLifecycle = jsonValue.GetObject("modelLifecycle");
    m_modelLifecycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumCompatibilityVersion")) {
    m_minimumCompatibilityVersion = jsonValue.GetInteger("minimumCompatibilityVersion");
    m_minimumCompatibilityVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelSummary::Jsonize() const {
  JsonValue payload;

  if (m_modelIdHasBeenSet) {
    payload.WithString("modelId", m_modelId);
  }

  if (m_modelLifecycleHasBeenSet) {
    payload.WithObject("modelLifecycle", m_modelLifecycle.Jsonize());
  }

  if (m_minimumCompatibilityVersionHasBeenSet) {
    payload.WithInteger("minimumCompatibilityVersion", m_minimumCompatibilityVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
