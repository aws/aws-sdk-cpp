/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/NotVisibleMarker.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

NotVisibleMarker::NotVisibleMarker(JsonView jsonValue) { *this = jsonValue; }

NotVisibleMarker& NotVisibleMarker::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue NotVisibleMarker::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
