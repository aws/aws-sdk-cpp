/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/CreateOAuth2TokenRequestBody.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

CreateOAuth2TokenRequestBody::CreateOAuth2TokenRequestBody(JsonView jsonValue) { *this = jsonValue; }

CreateOAuth2TokenRequestBody& CreateOAuth2TokenRequestBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("grantType")) {
    m_grantType = jsonValue.GetString("grantType");
    m_grantTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redirectUri")) {
    m_redirectUri = jsonValue.GetString("redirectUri");
    m_redirectUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeVerifier")) {
    m_codeVerifier = jsonValue.GetString("codeVerifier");
    m_codeVerifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("refreshToken")) {
    m_refreshToken = jsonValue.GetString("refreshToken");
    m_refreshTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateOAuth2TokenRequestBody::Jsonize() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("clientId", m_clientId);
  }

  if (m_grantTypeHasBeenSet) {
    payload.WithString("grantType", m_grantType);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_redirectUriHasBeenSet) {
    payload.WithString("redirectUri", m_redirectUri);
  }

  if (m_codeVerifierHasBeenSet) {
    payload.WithString("codeVerifier", m_codeVerifier);
  }

  if (m_refreshTokenHasBeenSet) {
    payload.WithString("refreshToken", m_refreshToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
