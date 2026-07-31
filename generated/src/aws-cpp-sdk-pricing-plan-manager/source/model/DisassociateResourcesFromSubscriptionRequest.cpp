/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/pricing-plan-manager/model/DisassociateResourcesFromSubscriptionRequest.h>

#include <utility>

using namespace Aws::PricingPlanManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateResourcesFromSubscriptionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_resourceArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
    }
    payload.WithArray("resourceArns", std::move(resourceArnsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateResourcesFromSubscriptionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_ifMatchHasBeenSet) {
    ss << m_ifMatch;
    headers.emplace("if-match", ss.str());
    ss.str("");
  }

  return headers;
}
