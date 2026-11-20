/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/Upi.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

Upi::Upi(JsonView jsonValue) { *this = jsonValue; }

Upi& Upi::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("appName")) {
    m_appName = jsonValue.GetString("appName");
    m_appNameHasBeenSet = true;
  }
  return *this;
}

JsonValue Upi::Jsonize() const {
  JsonValue payload;

  if (m_appNameHasBeenSet) {
    payload.WithString("appName", m_appName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
