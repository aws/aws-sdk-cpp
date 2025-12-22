/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/OidcTokenInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

OidcTokenInfo::OidcTokenInfo(JsonView jsonValue) { *this = jsonValue; }

OidcTokenInfo& OidcTokenInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeVerifier")) {
    m_codeVerifier = jsonValue.GetString("codeVerifier");
    m_codeVerifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeChallenge")) {
    m_codeChallenge = jsonValue.GetString("codeChallenge");
    m_codeChallengeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessToken")) {
    m_accessToken = jsonValue.GetString("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idToken")) {
    m_idToken = jsonValue.GetString("idToken");
    m_idTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("refreshToken")) {
    m_refreshToken = jsonValue.GetString("refreshToken");
    m_refreshTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenType")) {
    m_tokenType = jsonValue.GetString("tokenType");
    m_tokenTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresIn")) {
    m_expiresIn = jsonValue.GetInt64("expiresIn");
    m_expiresInHasBeenSet = true;
  }
  return *this;
}

JsonValue OidcTokenInfo::Jsonize() const {
  JsonValue payload;

  if (m_codeVerifierHasBeenSet) {
    payload.WithString("codeVerifier", m_codeVerifier);
  }

  if (m_codeChallengeHasBeenSet) {
    payload.WithString("codeChallenge", m_codeChallenge);
  }

  if (m_accessTokenHasBeenSet) {
    payload.WithString("accessToken", m_accessToken);
  }

  if (m_idTokenHasBeenSet) {
    payload.WithString("idToken", m_idToken);
  }

  if (m_refreshTokenHasBeenSet) {
    payload.WithString("refreshToken", m_refreshToken);
  }

  if (m_tokenTypeHasBeenSet) {
    payload.WithString("tokenType", m_tokenType);
  }

  if (m_expiresInHasBeenSet) {
    payload.WithInt64("expiresIn", m_expiresIn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
