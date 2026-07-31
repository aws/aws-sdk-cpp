/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pricing-plan-manager/model/CancelSubscriptionRequest.h>

#include <utility>

using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelSubscriptionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelSubscriptionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_ifMatchHasBeenSet) {
    ss << m_ifMatch;
    headers.emplace("if-match", ss.str());
    ss.str("");
  }

  return headers;
}
