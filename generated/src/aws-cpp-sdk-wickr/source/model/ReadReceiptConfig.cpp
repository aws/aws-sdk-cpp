/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/ReadReceiptConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

ReadReceiptConfig::ReadReceiptConfig(JsonView jsonValue) { *this = jsonValue; }

ReadReceiptConfig& ReadReceiptConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadReceiptConfig::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
