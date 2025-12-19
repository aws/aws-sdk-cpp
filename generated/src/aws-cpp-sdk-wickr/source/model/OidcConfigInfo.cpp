/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/OidcConfigInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

OidcConfigInfo::OidcConfigInfo(JsonView jsonValue) { *this = jsonValue; }

OidcConfigInfo& OidcConfigInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("companyId")) {
    m_companyId = jsonValue.GetString("companyId");
    m_companyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopes")) {
    m_scopes = jsonValue.GetString("scopes");
    m_scopesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuer")) {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientSecret")) {
    m_clientSecret = jsonValue.GetString("clientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secret")) {
    m_secret = jsonValue.GetString("secret");
    m_secretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redirectUrl")) {
    m_redirectUrl = jsonValue.GetString("redirectUrl");
    m_redirectUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customUsername")) {
    m_customUsername = jsonValue.GetString("customUsername");
    m_customUsernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caCertificate")) {
    m_caCertificate = jsonValue.GetString("caCertificate");
    m_caCertificateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationId")) {
    m_applicationId = jsonValue.GetInteger("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ssoTokenBufferMinutes")) {
    m_ssoTokenBufferMinutes = jsonValue.GetInteger("ssoTokenBufferMinutes");
    m_ssoTokenBufferMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extraAuthParams")) {
    m_extraAuthParams = jsonValue.GetString("extraAuthParams");
    m_extraAuthParamsHasBeenSet = true;
  }
  return *this;
}

JsonValue OidcConfigInfo::Jsonize() const {
  JsonValue payload;

  if (m_applicationNameHasBeenSet) {
    payload.WithString("applicationName", m_applicationName);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_companyIdHasBeenSet) {
    payload.WithString("companyId", m_companyId);
  }

  if (m_scopesHasBeenSet) {
    payload.WithString("scopes", m_scopes);
  }

  if (m_issuerHasBeenSet) {
    payload.WithString("issuer", m_issuer);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("clientSecret", m_clientSecret);
  }

  if (m_secretHasBeenSet) {
    payload.WithString("secret", m_secret);
  }

  if (m_redirectUrlHasBeenSet) {
    payload.WithString("redirectUrl", m_redirectUrl);
  }

  if (m_userIdHasBeenSet) {
    payload.WithString("userId", m_userId);
  }

  if (m_customUsernameHasBeenSet) {
    payload.WithString("customUsername", m_customUsername);
  }

  if (m_caCertificateHasBeenSet) {
    payload.WithString("caCertificate", m_caCertificate);
  }

  if (m_applicationIdHasBeenSet) {
    payload.WithInteger("applicationId", m_applicationId);
  }

  if (m_ssoTokenBufferMinutesHasBeenSet) {
    payload.WithInteger("ssoTokenBufferMinutes", m_ssoTokenBufferMinutes);
  }

  if (m_extraAuthParamsHasBeenSet) {
    payload.WithString("extraAuthParams", m_extraAuthParams);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
