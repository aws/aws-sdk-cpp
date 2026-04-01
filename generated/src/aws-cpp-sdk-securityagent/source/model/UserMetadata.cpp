/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/UserMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

UserMetadata::UserMetadata(JsonView jsonValue) { *this = jsonValue; }

UserMetadata& UserMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("email")) {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue UserMetadata::Jsonize() const {
  JsonValue payload;

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("email", m_email);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
