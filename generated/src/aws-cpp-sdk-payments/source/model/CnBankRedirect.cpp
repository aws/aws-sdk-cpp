/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/CnBankRedirect.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

CnBankRedirect::CnBankRedirect(JsonView jsonValue) { *this = jsonValue; }

CnBankRedirect& CnBankRedirect::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bankCode")) {
    m_bankCode = jsonValue.GetString("bankCode");
    m_bankCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue CnBankRedirect::Jsonize() const {
  JsonValue payload;

  if (m_bankCodeHasBeenSet) {
    payload.WithString("bankCode", m_bankCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
