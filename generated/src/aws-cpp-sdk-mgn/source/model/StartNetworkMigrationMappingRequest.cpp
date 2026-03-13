/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StartNetworkMigrationMappingRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartNetworkMigrationMappingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_networkMigrationExecutionIDHasBeenSet) {
    payload.WithString("networkMigrationExecutionID", m_networkMigrationExecutionID);
  }

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_securityGroupMappingStrategyHasBeenSet) {
    payload.WithString("securityGroupMappingStrategy",
                       SecurityGroupMappingStrategyMapper::GetNameForSecurityGroupMappingStrategy(m_securityGroupMappingStrategy));
  }

  return payload.View().WriteReadable();
}
