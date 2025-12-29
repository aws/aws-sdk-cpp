/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SelfUpgradeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SelfUpgradeConfiguration::SelfUpgradeConfiguration(JsonView jsonValue) { *this = jsonValue; }

SelfUpgradeConfiguration& SelfUpgradeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SelfUpgradeStatus")) {
    m_selfUpgradeStatus = SelfUpgradeStatusMapper::GetSelfUpgradeStatusForName(jsonValue.GetString("SelfUpgradeStatus"));
    m_selfUpgradeStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue SelfUpgradeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_selfUpgradeStatusHasBeenSet) {
    payload.WithString("SelfUpgradeStatus", SelfUpgradeStatusMapper::GetNameForSelfUpgradeStatus(m_selfUpgradeStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
