/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/InstanceConfigurationFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

InstanceConfigurationFilter::InstanceConfigurationFilter(JsonView jsonValue) { *this = jsonValue; }

InstanceConfigurationFilter& InstanceConfigurationFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BillingMode")) {
    m_billingMode = BillingModeMapper::GetBillingModeForName(jsonValue.GetString("BillingMode"));
    m_billingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PlatformType")) {
    m_platformType = PlatformTypeEnumMapper::GetPlatformTypeEnumForName(jsonValue.GetString("PlatformType"));
    m_platformTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tenancy")) {
    m_tenancy = InstanceConfigurationTenancyEnumMapper::GetInstanceConfigurationTenancyEnumForName(jsonValue.GetString("Tenancy"));
    m_tenancyHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceConfigurationFilter::Jsonize() const {
  JsonValue payload;

  if (m_billingModeHasBeenSet) {
    payload.WithString("BillingMode", BillingModeMapper::GetNameForBillingMode(m_billingMode));
  }

  if (m_platformTypeHasBeenSet) {
    payload.WithString("PlatformType", PlatformTypeEnumMapper::GetNameForPlatformTypeEnum(m_platformType));
  }

  if (m_tenancyHasBeenSet) {
    payload.WithString("Tenancy", InstanceConfigurationTenancyEnumMapper::GetNameForInstanceConfigurationTenancyEnum(m_tenancy));
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
