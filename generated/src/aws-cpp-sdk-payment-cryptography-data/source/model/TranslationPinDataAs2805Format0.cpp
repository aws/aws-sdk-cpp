/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/TranslationPinDataAs2805Format0.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

TranslationPinDataAs2805Format0::TranslationPinDataAs2805Format0(JsonView jsonValue) { *this = jsonValue; }

TranslationPinDataAs2805Format0& TranslationPinDataAs2805Format0::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrimaryAccountNumber")) {
    m_primaryAccountNumber = jsonValue.GetString("PrimaryAccountNumber");
    m_primaryAccountNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue TranslationPinDataAs2805Format0::Jsonize() const {
  JsonValue payload;

  if (m_primaryAccountNumberHasBeenSet) {
    payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
