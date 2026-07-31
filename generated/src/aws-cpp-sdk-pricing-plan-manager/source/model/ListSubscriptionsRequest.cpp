/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing-plan-manager/model/ListSubscriptionsRequest.h>

#include <utility>

using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListSubscriptionsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
