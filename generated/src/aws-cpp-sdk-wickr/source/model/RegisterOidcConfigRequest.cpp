/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/RegisterOidcConfigRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterOidcConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_companyIdHasBeenSet) {
    payload.WithString("companyId", m_companyId);
  }

  if (m_customUsernameHasBeenSet) {
    payload.WithString("customUsername", m_customUsername);
  }

  if (m_extraAuthParamsHasBeenSet) {
    payload.WithString("extraAuthParams", m_extraAuthParams);
  }

  if (m_issuerHasBeenSet) {
    payload.WithString("issuer", m_issuer);
  }

  if (m_scopesHasBeenSet) {
    payload.WithString("scopes", m_scopes);
  }

  if (m_secretHasBeenSet) {
    payload.WithString("secret", m_secret);
  }

  if (m_ssoTokenBufferMinutesHasBeenSet) {
    payload.WithInteger("ssoTokenBufferMinutes", m_ssoTokenBufferMinutes);
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  return payload.View().WriteReadable();
}
