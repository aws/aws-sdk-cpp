/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureEventHubConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureEventHubConfiguration::AzureEventHubConfiguration(JsonView jsonValue) { *this = jsonValue; }

AzureEventHubConfiguration& AzureEventHubConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Tier")) {
    m_tier = AzureEventHubTierMapper::GetAzureEventHubTierForName(jsonValue.GetString("Tier"));
    m_tierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PartitionCount")) {
    m_partitionCount = jsonValue.GetInteger("PartitionCount");
    m_partitionCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureEventHubConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_tierHasBeenSet) {
    payload.WithString("Tier", AzureEventHubTierMapper::GetNameForAzureEventHubTier(m_tier));
  }

  if (m_partitionCountHasBeenSet) {
    payload.WithInteger("PartitionCount", m_partitionCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
