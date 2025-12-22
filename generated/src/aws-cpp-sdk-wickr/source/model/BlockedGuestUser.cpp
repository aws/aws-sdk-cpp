/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/BlockedGuestUser.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

BlockedGuestUser::BlockedGuestUser(JsonView jsonValue) { *this = jsonValue; }

BlockedGuestUser& BlockedGuestUser::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("admin")) {
    m_admin = jsonValue.GetString("admin");
    m_adminHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modified")) {
    m_modified = jsonValue.GetString("modified");
    m_modifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usernameHash")) {
    m_usernameHash = jsonValue.GetString("usernameHash");
    m_usernameHashHasBeenSet = true;
  }
  return *this;
}

JsonValue BlockedGuestUser::Jsonize() const {
  JsonValue payload;

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  if (m_adminHasBeenSet) {
    payload.WithString("admin", m_admin);
  }

  if (m_modifiedHasBeenSet) {
    payload.WithString("modified", m_modified);
  }

  if (m_usernameHashHasBeenSet) {
    payload.WithString("usernameHash", m_usernameHash);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
