/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/InitiateProviderRegistrationRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InitiateProviderRegistrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_targetUrlHasBeenSet) {
    payload.WithString("targetUrl", m_targetUrl);
  }

  if (m_organizationNameHasBeenSet) {
    payload.WithString("organizationName", m_organizationName);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("clientSecret", m_clientSecret);
  }

  return payload.View().WriteReadable();
}
