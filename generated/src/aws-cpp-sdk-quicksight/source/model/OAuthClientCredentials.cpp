/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/OAuthClientCredentials.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

OAuthClientCredentials::OAuthClientCredentials(JsonView jsonValue) { *this = jsonValue; }

OAuthClientCredentials& OAuthClientCredentials::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientSecret")) {
    m_clientSecret = jsonValue.GetString("ClientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Username")) {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  return *this;
}

JsonValue OAuthClientCredentials::Jsonize() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_clientSecretHasBeenSet) {
    payload.WithString("ClientSecret", m_clientSecret);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("Username", m_username);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
