/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/signin/model/CreateOAuth2TokenResponseBody.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Signin {
namespace Model {

CreateOAuth2TokenResponseBody::CreateOAuth2TokenResponseBody(JsonView jsonValue) { *this = jsonValue; }

CreateOAuth2TokenResponseBody& CreateOAuth2TokenResponseBody::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessToken")) {
    m_accessToken = jsonValue.GetObject("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenType")) {
    m_tokenType = jsonValue.GetString("tokenType");
    m_tokenTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresIn")) {
    m_expiresIn = jsonValue.GetInteger("expiresIn");
    m_expiresInHasBeenSet = true;
  }
  if (jsonValue.ValueExists("refreshToken")) {
    m_refreshToken = jsonValue.GetString("refreshToken");
    m_refreshTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("idToken")) {
    m_idToken = jsonValue.GetString("idToken");
    m_idTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateOAuth2TokenResponseBody::Jsonize() const {
  JsonValue payload;

  if (m_accessTokenHasBeenSet) {
    payload.WithObject("accessToken", m_accessToken.Jsonize());
  }

  if (m_tokenTypeHasBeenSet) {
    payload.WithString("tokenType", m_tokenType);
  }

  if (m_expiresInHasBeenSet) {
    payload.WithInteger("expiresIn", m_expiresIn);
  }

  if (m_refreshTokenHasBeenSet) {
    payload.WithString("refreshToken", m_refreshToken);
  }

  if (m_idTokenHasBeenSet) {
    payload.WithString("idToken", m_idToken);
  }

  return payload;
}

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
