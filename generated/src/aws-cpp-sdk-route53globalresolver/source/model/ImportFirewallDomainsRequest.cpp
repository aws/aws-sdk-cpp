/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/model/ImportFirewallDomainsRequest.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportFirewallDomainsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_domainFileUrlHasBeenSet) {
    payload.WithString("domainFileUrl", m_domainFileUrl);
  }

  if (m_operationHasBeenSet) {
    payload.WithString("operation", m_operation);
  }

  return payload.View().WriteReadable();
}
