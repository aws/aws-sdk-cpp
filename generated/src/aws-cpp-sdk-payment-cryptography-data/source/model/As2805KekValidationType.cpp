/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/As2805KekValidationType.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

As2805KekValidationType::As2805KekValidationType(JsonView jsonValue) { *this = jsonValue; }

As2805KekValidationType& As2805KekValidationType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KekValidationRequest")) {
    m_kekValidationRequest = jsonValue.GetObject("KekValidationRequest");
    m_kekValidationRequestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KekValidationResponse")) {
    m_kekValidationResponse = jsonValue.GetObject("KekValidationResponse");
    m_kekValidationResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue As2805KekValidationType::Jsonize() const {
  JsonValue payload;

  if (m_kekValidationRequestHasBeenSet) {
    payload.WithObject("KekValidationRequest", m_kekValidationRequest.Jsonize());
  }

  if (m_kekValidationResponseHasBeenSet) {
    payload.WithObject("KekValidationResponse", m_kekValidationResponse.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
