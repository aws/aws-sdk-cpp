/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/InNetBanking.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

InNetBanking::InNetBanking(JsonView jsonValue) { *this = jsonValue; }

InNetBanking& InNetBanking::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bankCode")) {
    m_bankCode = jsonValue.GetString("bankCode");
    m_bankCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bankName")) {
    m_bankName = jsonValue.GetString("bankName");
    m_bankNameHasBeenSet = true;
  }
  return *this;
}

JsonValue InNetBanking::Jsonize() const {
  JsonValue payload;

  if (m_bankCodeHasBeenSet) {
    payload.WithString("bankCode", m_bankCode);
  }

  if (m_bankNameHasBeenSet) {
    payload.WithString("bankName", m_bankName);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
