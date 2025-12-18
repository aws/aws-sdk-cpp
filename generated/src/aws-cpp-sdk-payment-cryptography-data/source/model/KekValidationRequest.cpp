/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/KekValidationRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

KekValidationRequest::KekValidationRequest(JsonView jsonValue) { *this = jsonValue; }

KekValidationRequest& KekValidationRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DeriveKeyAlgorithm")) {
    m_deriveKeyAlgorithm = SymmetricKeyAlgorithmMapper::GetSymmetricKeyAlgorithmForName(jsonValue.GetString("DeriveKeyAlgorithm"));
    m_deriveKeyAlgorithmHasBeenSet = true;
  }
  return *this;
}

JsonValue KekValidationRequest::Jsonize() const {
  JsonValue payload;

  if (m_deriveKeyAlgorithmHasBeenSet) {
    payload.WithString("DeriveKeyAlgorithm", SymmetricKeyAlgorithmMapper::GetNameForSymmetricKeyAlgorithm(m_deriveKeyAlgorithm));
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
