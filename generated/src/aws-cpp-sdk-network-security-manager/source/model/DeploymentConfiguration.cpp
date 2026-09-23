/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/DeploymentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

DeploymentConfiguration::DeploymentConfiguration(JsonView jsonValue) { *this = jsonValue; }

DeploymentConfiguration& DeploymentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableCrossAccountVisibility")) {
    m_enableCrossAccountVisibility = jsonValue.GetBool("enableCrossAccountVisibility");
    m_enableCrossAccountVisibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enableCrossAccountVisibilityHasBeenSet) {
    payload.WithBool("enableCrossAccountVisibility", m_enableCrossAccountVisibility);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
