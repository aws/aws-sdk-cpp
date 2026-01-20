/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/BillingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

BillingConfiguration::BillingConfiguration(JsonView jsonValue) { *this = jsonValue; }

BillingConfiguration& BillingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BillingMode")) {
    m_billingMode = BillingModeMapper::GetBillingModeForName(jsonValue.GetString("BillingMode"));
    m_billingModeHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_billingModeHasBeenSet) {
    payload.WithString("BillingMode", BillingModeMapper::GetNameForBillingMode(m_billingMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
