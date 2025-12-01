/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/UpdateFirewallDomainsRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFirewallDomainsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_domainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
    for (unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex) {
      domainsJsonList[domainsIndex].AsString(m_domains[domainsIndex]);
    }
    payload.WithArray("domains", std::move(domainsJsonList));
  }

  if (m_operationHasBeenSet) {
    payload.WithString("operation", m_operation);
  }

  return payload.View().WriteReadable();
}
