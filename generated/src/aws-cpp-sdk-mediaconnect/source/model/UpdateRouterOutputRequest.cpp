/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/UpdateRouterOutputRequest.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRouterOutputRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_maximumBitrateHasBeenSet) {
    payload.WithInt64("maximumBitrate", m_maximumBitrate);
  }

  if (m_routingScopeHasBeenSet) {
    payload.WithString("routingScope", RoutingScopeMapper::GetNameForRoutingScope(m_routingScope));
  }

  if (m_tierHasBeenSet) {
    payload.WithString("tier", RouterOutputTierMapper::GetNameForRouterOutputTier(m_tier));
  }

  if (m_maintenanceConfigurationHasBeenSet) {
    payload.WithObject("maintenanceConfiguration", m_maintenanceConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
