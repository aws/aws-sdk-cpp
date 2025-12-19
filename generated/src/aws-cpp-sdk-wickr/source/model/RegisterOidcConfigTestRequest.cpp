/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/RegisterOidcConfigTestRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterOidcConfigTestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_extraAuthParamsHasBeenSet) {
    payload.WithString("extraAuthParams", m_extraAuthParams);
  }

  if (m_issuerHasBeenSet) {
    payload.WithString("issuer", m_issuer);
  }

  if (m_scopesHasBeenSet) {
    payload.WithString("scopes", m_scopes);
  }

  if (m_certificateHasBeenSet) {
    payload.WithString("certificate", m_certificate);
  }

  return payload.View().WriteReadable();
}
