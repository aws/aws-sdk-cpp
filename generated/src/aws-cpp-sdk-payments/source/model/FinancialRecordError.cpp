/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payments/model/FinancialRecordError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Payments {
namespace Model {

FinancialRecordError::FinancialRecordError(JsonView jsonValue) { *this = jsonValue; }

FinancialRecordError& FinancialRecordError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetObject("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = BatchErrorCodeMapper::GetBatchErrorCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue FinancialRecordError::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithObject("key", m_key.Jsonize());
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", BatchErrorCodeMapper::GetNameForBatchErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
