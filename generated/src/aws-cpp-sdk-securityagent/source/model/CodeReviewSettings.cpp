/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CodeReviewSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CodeReviewSettings::CodeReviewSettings(JsonView jsonValue) { *this = jsonValue; }

CodeReviewSettings& CodeReviewSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("controlsScanning")) {
    m_controlsScanning = jsonValue.GetBool("controlsScanning");
    m_controlsScanningHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generalPurposeScanning")) {
    m_generalPurposeScanning = jsonValue.GetBool("generalPurposeScanning");
    m_generalPurposeScanningHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeReviewSettings::Jsonize() const {
  JsonValue payload;

  if (m_controlsScanningHasBeenSet) {
    payload.WithBool("controlsScanning", m_controlsScanning);
  }

  if (m_generalPurposeScanningHasBeenSet) {
    payload.WithBool("generalPurposeScanning", m_generalPurposeScanning);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
