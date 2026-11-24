/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/model/DeepHealthCheckOnStart.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {

DeepHealthCheckOnStart::DeepHealthCheckOnStart(JsonView jsonValue) { *this = jsonValue; }

DeepHealthCheckOnStart& DeepHealthCheckOnStart::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("profile")) {
    m_profile = DeepHealthCheckOnStartProfileMapper::GetDeepHealthCheckOnStartProfileForName(jsonValue.GetString("profile"));
    m_profileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repairAction")) {
    m_repairAction =
        DeepHealthCheckOnStartRepairActionMapper::GetDeepHealthCheckOnStartRepairActionForName(jsonValue.GetString("repairAction"));
    m_repairActionHasBeenSet = true;
  }
  return *this;
}

JsonValue DeepHealthCheckOnStart::Jsonize() const {
  JsonValue payload;

  if (m_profileHasBeenSet) {
    payload.WithString("profile", DeepHealthCheckOnStartProfileMapper::GetNameForDeepHealthCheckOnStartProfile(m_profile));
  }

  if (m_repairActionHasBeenSet) {
    payload.WithString("repairAction",
                       DeepHealthCheckOnStartRepairActionMapper::GetNameForDeepHealthCheckOnStartRepairAction(m_repairAction));
  }

  return payload;
}

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
