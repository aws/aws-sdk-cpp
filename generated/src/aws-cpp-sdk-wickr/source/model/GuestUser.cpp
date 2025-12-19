/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/GuestUser.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

GuestUser::GuestUser(JsonView jsonValue) { *this = jsonValue; }

GuestUser& GuestUser::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("billingPeriod")) {
    m_billingPeriod = jsonValue.GetString("billingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usernameHash")) {
    m_usernameHash = jsonValue.GetString("usernameHash");
    m_usernameHashHasBeenSet = true;
  }
  return *this;
}

JsonValue GuestUser::Jsonize() const {
  JsonValue payload;

  if (m_billingPeriodHasBeenSet) {
    payload.WithString("billingPeriod", m_billingPeriod);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  if (m_usernameHashHasBeenSet) {
    payload.WithString("usernameHash", m_usernameHash);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
