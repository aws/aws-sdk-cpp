/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migration-hub-refactor-spaces/model/UpdateRouteRequest.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRouteRequest::SerializePayload() const {
  JsonValue payload;

  if (m_activationStateHasBeenSet) {
    payload.WithString("ActivationState", RouteActivationStateMapper::GetNameForRouteActivationState(m_activationState));
  }

  return payload.View().WriteReadable();
}
