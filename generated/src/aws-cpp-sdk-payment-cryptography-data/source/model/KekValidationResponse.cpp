/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/KekValidationResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

KekValidationResponse::KekValidationResponse(JsonView jsonValue) { *this = jsonValue; }

KekValidationResponse& KekValidationResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RandomKeySend")) {
    m_randomKeySend = jsonValue.GetString("RandomKeySend");
    m_randomKeySendHasBeenSet = true;
  }
  return *this;
}

JsonValue KekValidationResponse::Jsonize() const {
  JsonValue payload;

  if (m_randomKeySendHasBeenSet) {
    payload.WithString("RandomKeySend", m_randomKeySend);
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
