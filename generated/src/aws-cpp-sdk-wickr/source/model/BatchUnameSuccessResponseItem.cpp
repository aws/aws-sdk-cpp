/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/BatchUnameSuccessResponseItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

BatchUnameSuccessResponseItem::BatchUnameSuccessResponseItem(JsonView jsonValue) { *this = jsonValue; }

BatchUnameSuccessResponseItem& BatchUnameSuccessResponseItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uname")) {
    m_uname = jsonValue.GetString("uname");
    m_unameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("username")) {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchUnameSuccessResponseItem::Jsonize() const {
  JsonValue payload;

  if (m_unameHasBeenSet) {
    payload.WithString("uname", m_uname);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("username", m_username);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
