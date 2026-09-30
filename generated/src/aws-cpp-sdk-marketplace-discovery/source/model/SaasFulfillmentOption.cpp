/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SaasFulfillmentOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SaasFulfillmentOption::SaasFulfillmentOption(JsonView jsonValue) { *this = jsonValue; }

SaasFulfillmentOption& SaasFulfillmentOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fulfillmentOptionId")) {
    m_fulfillmentOptionId = jsonValue.GetString("fulfillmentOptionId");
    m_fulfillmentOptionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionType")) {
    m_fulfillmentOptionType = FulfillmentOptionTypeMapper::GetFulfillmentOptionTypeForName(jsonValue.GetString("fulfillmentOptionType"));
    m_fulfillmentOptionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentOptionDisplayName")) {
    m_fulfillmentOptionDisplayName = jsonValue.GetString("fulfillmentOptionDisplayName");
    m_fulfillmentOptionDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fulfillmentUrl")) {
    m_fulfillmentUrl = jsonValue.GetString("fulfillmentUrl");
    m_fulfillmentUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageInstructions")) {
    m_usageInstructions = jsonValue.GetString("usageInstructions");
    m_usageInstructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availableFromTime")) {
    m_availableFromTime = jsonValue.GetDouble("availableFromTime");
    m_availableFromTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("launchUrl")) {
    m_launchUrl = jsonValue.GetString("launchUrl");
    m_launchUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quickLaunch")) {
    m_quickLaunch = SaasQuickLaunchStatusMapper::GetSaasQuickLaunchStatusForName(jsonValue.GetString("quickLaunch"));
    m_quickLaunchHasBeenSet = true;
  }
  return *this;
}

JsonValue SaasFulfillmentOption::Jsonize() const {
  JsonValue payload;

  if (m_fulfillmentOptionIdHasBeenSet) {
    payload.WithString("fulfillmentOptionId", m_fulfillmentOptionId);
  }

  if (m_fulfillmentOptionTypeHasBeenSet) {
    payload.WithString("fulfillmentOptionType", FulfillmentOptionTypeMapper::GetNameForFulfillmentOptionType(m_fulfillmentOptionType));
  }

  if (m_fulfillmentOptionDisplayNameHasBeenSet) {
    payload.WithString("fulfillmentOptionDisplayName", m_fulfillmentOptionDisplayName);
  }

  if (m_fulfillmentUrlHasBeenSet) {
    payload.WithString("fulfillmentUrl", m_fulfillmentUrl);
  }

  if (m_usageInstructionsHasBeenSet) {
    payload.WithString("usageInstructions", m_usageInstructions);
  }

  if (m_availableFromTimeHasBeenSet) {
    payload.WithDouble("availableFromTime", m_availableFromTime.SecondsWithMSPrecision());
  }

  if (m_launchUrlHasBeenSet) {
    payload.WithString("launchUrl", m_launchUrl);
  }

  if (m_quickLaunchHasBeenSet) {
    payload.WithString("quickLaunch", SaasQuickLaunchStatusMapper::GetNameForSaasQuickLaunchStatus(m_quickLaunch));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
