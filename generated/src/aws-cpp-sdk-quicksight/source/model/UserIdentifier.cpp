/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UserIdentifier.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

UserIdentifier::UserIdentifier(JsonView jsonValue) { *this = jsonValue; }

UserIdentifier& UserIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("UserName")) {
    m_userName = jsonValue.GetString("UserName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Email")) {
    m_email = jsonValue.GetString("Email");
    m_emailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UserArn")) {
    m_userArn = jsonValue.GetString("UserArn");
    m_userArnHasBeenSet = true;
  }
  return *this;
}

JsonValue UserIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_userNameHasBeenSet) {
    payload.WithString("UserName", m_userName);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("Email", m_email);
  }

  if (m_userArnHasBeenSet) {
    payload.WithString("UserArn", m_userArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
