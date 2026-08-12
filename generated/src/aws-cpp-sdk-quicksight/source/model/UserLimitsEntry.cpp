/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UserLimitsEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

UserLimitsEntry::UserLimitsEntry(JsonView jsonValue) { *this = jsonValue; }

UserLimitsEntry& UserLimitsEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("userName")) {
    m_userName = jsonValue.GetString("userName");
    m_userNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("namespace")) {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue UserLimitsEntry::Jsonize() const {
  JsonValue payload;

  if (m_userNameHasBeenSet) {
    payload.WithString("userName", m_userName);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
