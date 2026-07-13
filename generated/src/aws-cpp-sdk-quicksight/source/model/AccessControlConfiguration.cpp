/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AccessControlConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AccessControlConfiguration::AccessControlConfiguration(JsonView jsonValue) { *this = jsonValue; }

AccessControlConfiguration& AccessControlConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isACLEnabled")) {
    m_isACLEnabled = jsonValue.GetBool("isACLEnabled");
    m_isACLEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessControlConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_isACLEnabledHasBeenSet) {
    payload.WithBool("isACLEnabled", m_isACLEnabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
