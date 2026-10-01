/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationGuidanceSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationGuidanceSpecification::RemediationGuidanceSpecification(JsonView jsonValue) { *this = jsonValue; }

RemediationGuidanceSpecification& RemediationGuidanceSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Parameters")) {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for (unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex) {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Steps")) {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpectedEndState")) {
    m_expectedEndState = jsonValue.GetString("ExpectedEndState");
    m_expectedEndStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RequiredPermissions")) {
    Aws::Utils::Array<JsonView> requiredPermissionsJsonList = jsonValue.GetArray("RequiredPermissions");
    for (unsigned requiredPermissionsIndex = 0; requiredPermissionsIndex < requiredPermissionsJsonList.GetLength();
         ++requiredPermissionsIndex) {
      m_requiredPermissions.push_back(requiredPermissionsJsonList[requiredPermissionsIndex].AsString());
    }
    m_requiredPermissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationGuidanceSpecification::Jsonize() const {
  JsonValue payload;

  if (m_parametersHasBeenSet) {
    Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
    for (unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex) {
      parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
    }
    payload.WithArray("Parameters", std::move(parametersJsonList));
  }

  if (m_stepsHasBeenSet) {
    Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
    for (unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex) {
      stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
    }
    payload.WithArray("Steps", std::move(stepsJsonList));
  }

  if (m_expectedEndStateHasBeenSet) {
    payload.WithString("ExpectedEndState", m_expectedEndState);
  }

  if (m_requiredPermissionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requiredPermissionsJsonList(m_requiredPermissions.size());
    for (unsigned requiredPermissionsIndex = 0; requiredPermissionsIndex < requiredPermissionsJsonList.GetLength();
         ++requiredPermissionsIndex) {
      requiredPermissionsJsonList[requiredPermissionsIndex].AsString(m_requiredPermissions[requiredPermissionsIndex]);
    }
    payload.WithArray("RequiredPermissions", std::move(requiredPermissionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
