/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/PolicyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

PolicyConfiguration::PolicyConfiguration(JsonView jsonValue) { *this = jsonValue; }

PolicyConfiguration& PolicyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remediationEnabled")) {
    m_remediationEnabled = jsonValue.GetBool("remediationEnabled");
    m_remediationEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourcesCleanUp")) {
    m_resourcesCleanUp = jsonValue.GetBool("resourcesCleanUp");
    m_resourcesCleanUpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("wafConfig")) {
    m_wafConfig = jsonValue.GetObject("wafConfig");
    m_wafConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_remediationEnabledHasBeenSet) {
    payload.WithBool("remediationEnabled", m_remediationEnabled);
  }

  if (m_resourcesCleanUpHasBeenSet) {
    payload.WithBool("resourcesCleanUp", m_resourcesCleanUp);
  }

  if (m_wafConfigHasBeenSet) {
    payload.WithObject("wafConfig", m_wafConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
