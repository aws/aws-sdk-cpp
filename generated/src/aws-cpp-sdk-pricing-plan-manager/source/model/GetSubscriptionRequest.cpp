/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing-plan-manager/model/GetSubscriptionRequest.h>

#include <utility>

using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetSubscriptionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  return payload.View().WriteReadable();
}
