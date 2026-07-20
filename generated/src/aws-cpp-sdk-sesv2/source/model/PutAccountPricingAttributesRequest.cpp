/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/PutAccountPricingAttributesRequest.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAccountPricingAttributesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_planHasBeenSet) {
    payload.WithString("Plan", PricingPlanMapper::GetNameForPricingPlan(m_plan));
  }

  return payload.View().WriteReadable();
}
