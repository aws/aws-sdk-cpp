/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationStep::RemediationStep(JsonView jsonValue) { *this = jsonValue; }

RemediationStep& RemediationStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Phase")) {
    m_phase = jsonValue.GetString("Phase");
    m_phaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Service")) {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Action")) {
    m_action = jsonValue.GetString("Action");
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Logic")) {
    m_logic = jsonValue.GetString("Logic");
    m_logicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Inverse")) {
    m_inverse = jsonValue.GetString("Inverse");
    m_inverseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VerifyAfter")) {
    m_verifyAfter = jsonValue.GetString("VerifyAfter");
    m_verifyAfterHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationStep::Jsonize() const {
  JsonValue payload;

  if (m_phaseHasBeenSet) {
    payload.WithString("Phase", m_phase);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", m_action);
  }

  if (m_logicHasBeenSet) {
    payload.WithString("Logic", m_logic);
  }

  if (m_inverseHasBeenSet) {
    payload.WithString("Inverse", m_inverse);
  }

  if (m_verifyAfterHasBeenSet) {
    payload.WithString("VerifyAfter", m_verifyAfter);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
