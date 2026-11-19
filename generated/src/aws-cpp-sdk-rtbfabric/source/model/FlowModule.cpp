/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/FlowModule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

FlowModule::FlowModule(JsonView jsonValue) { *this = jsonValue; }

FlowModule& FlowModule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("moduleVersionArn")) {
    m_moduleVersionArn = jsonValue.GetString("moduleVersionArn");
    m_moduleVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("selectedActions")) {
    Aws::Utils::Array<JsonView> selectedActionsJsonList = jsonValue.GetArray("selectedActions");
    for (unsigned selectedActionsIndex = 0; selectedActionsIndex < selectedActionsJsonList.GetLength(); ++selectedActionsIndex) {
      m_selectedActions.push_back(
          ConfigurableActionMapper::GetConfigurableActionForName(selectedActionsJsonList[selectedActionsIndex].AsString()));
    }
    m_selectedActionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMode")) {
    m_failureMode = FailureModeMapper::GetFailureModeForName(jsonValue.GetString("failureMode"));
    m_failureModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activationPercentage")) {
    m_activationPercentage = jsonValue.GetDouble("activationPercentage");
    m_activationPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configurationValues")) {
    m_configurationValues = jsonValue.GetString("configurationValues");
    m_configurationValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowModule::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_moduleVersionArnHasBeenSet) {
    payload.WithString("moduleVersionArn", m_moduleVersionArn);
  }

  if (m_selectedActionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> selectedActionsJsonList(m_selectedActions.size());
    for (unsigned selectedActionsIndex = 0; selectedActionsIndex < selectedActionsJsonList.GetLength(); ++selectedActionsIndex) {
      selectedActionsJsonList[selectedActionsIndex].AsString(
          ConfigurableActionMapper::GetNameForConfigurableAction(m_selectedActions[selectedActionsIndex]));
    }
    payload.WithArray("selectedActions", std::move(selectedActionsJsonList));
  }

  if (m_failureModeHasBeenSet) {
    payload.WithString("failureMode", FailureModeMapper::GetNameForFailureMode(m_failureMode));
  }

  if (m_activationPercentageHasBeenSet) {
    payload.WithDouble("activationPercentage", m_activationPercentage);
  }

  if (m_configurationValuesHasBeenSet) {
    payload.WithString("configurationValues", m_configurationValues);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
