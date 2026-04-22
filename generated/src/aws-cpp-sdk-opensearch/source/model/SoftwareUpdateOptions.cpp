/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/SoftwareUpdateOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

SoftwareUpdateOptions::SoftwareUpdateOptions(JsonView jsonValue) { *this = jsonValue; }

SoftwareUpdateOptions& SoftwareUpdateOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AutoSoftwareUpdateEnabled")) {
    m_autoSoftwareUpdateEnabled = jsonValue.GetBool("AutoSoftwareUpdateEnabled");
    m_autoSoftwareUpdateEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UseLatestServiceSoftwareForBlueGreen")) {
    m_useLatestServiceSoftwareForBlueGreen = jsonValue.GetBool("UseLatestServiceSoftwareForBlueGreen");
    m_useLatestServiceSoftwareForBlueGreenHasBeenSet = true;
  }
  return *this;
}

JsonValue SoftwareUpdateOptions::Jsonize() const {
  JsonValue payload;

  if (m_autoSoftwareUpdateEnabledHasBeenSet) {
    payload.WithBool("AutoSoftwareUpdateEnabled", m_autoSoftwareUpdateEnabled);
  }

  if (m_useLatestServiceSoftwareForBlueGreenHasBeenSet) {
    payload.WithBool("UseLatestServiceSoftwareForBlueGreen", m_useLatestServiceSoftwareForBlueGreen);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
