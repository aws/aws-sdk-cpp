/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/ExportAs2805KeyCryptogram.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {

ExportAs2805KeyCryptogram::ExportAs2805KeyCryptogram(JsonView jsonValue) { *this = jsonValue; }

ExportAs2805KeyCryptogram& ExportAs2805KeyCryptogram::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WrappingKeyIdentifier")) {
    m_wrappingKeyIdentifier = jsonValue.GetString("WrappingKeyIdentifier");
    m_wrappingKeyIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("As2805KeyVariant")) {
    m_as2805KeyVariant = As2805KeyVariantMapper::GetAs2805KeyVariantForName(jsonValue.GetString("As2805KeyVariant"));
    m_as2805KeyVariantHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportAs2805KeyCryptogram::Jsonize() const {
  JsonValue payload;

  if (m_wrappingKeyIdentifierHasBeenSet) {
    payload.WithString("WrappingKeyIdentifier", m_wrappingKeyIdentifier);
  }

  if (m_as2805KeyVariantHasBeenSet) {
    payload.WithString("As2805KeyVariant", As2805KeyVariantMapper::GetNameForAs2805KeyVariant(m_as2805KeyVariant));
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
