﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ReadAuthorizationCodeGrantMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ReadAuthorizationCodeGrantMetadata::ReadAuthorizationCodeGrantMetadata(JsonView jsonValue) { *this = jsonValue; }

ReadAuthorizationCodeGrantMetadata& ReadAuthorizationCodeGrantMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BaseEndpoint")) {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RedirectUrl")) {
    m_redirectUrl = jsonValue.GetString("RedirectUrl");
    m_redirectUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReadAuthorizationCodeGrantCredentialsDetails")) {
    m_readAuthorizationCodeGrantCredentialsDetails = jsonValue.GetObject("ReadAuthorizationCodeGrantCredentialsDetails");
    m_readAuthorizationCodeGrantCredentialsDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthorizationCodeGrantCredentialsSource")) {
    m_authorizationCodeGrantCredentialsSource =
        AuthorizationCodeGrantCredentialsSourceMapper::GetAuthorizationCodeGrantCredentialsSourceForName(
            jsonValue.GetString("AuthorizationCodeGrantCredentialsSource"));
    m_authorizationCodeGrantCredentialsSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadAuthorizationCodeGrantMetadata::Jsonize() const {
  JsonValue payload;

  if (m_baseEndpointHasBeenSet) {
    payload.WithString("BaseEndpoint", m_baseEndpoint);
  }

  if (m_redirectUrlHasBeenSet) {
    payload.WithString("RedirectUrl", m_redirectUrl);
  }

  if (m_readAuthorizationCodeGrantCredentialsDetailsHasBeenSet) {
    payload.WithObject("ReadAuthorizationCodeGrantCredentialsDetails", m_readAuthorizationCodeGrantCredentialsDetails.Jsonize());
  }

  if (m_authorizationCodeGrantCredentialsSourceHasBeenSet) {
    payload.WithString("AuthorizationCodeGrantCredentialsSource",
                       AuthorizationCodeGrantCredentialsSourceMapper::GetNameForAuthorizationCodeGrantCredentialsSource(
                           m_authorizationCodeGrantCredentialsSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
