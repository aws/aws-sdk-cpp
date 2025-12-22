/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/ImportAs2805KeyCryptogram.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {

ImportAs2805KeyCryptogram::ImportAs2805KeyCryptogram(JsonView jsonValue) { *this = jsonValue; }

ImportAs2805KeyCryptogram& ImportAs2805KeyCryptogram::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("As2805KeyVariant")) {
    m_as2805KeyVariant = As2805KeyVariantMapper::GetAs2805KeyVariantForName(jsonValue.GetString("As2805KeyVariant"));
    m_as2805KeyVariantHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyModesOfUse")) {
    m_keyModesOfUse = jsonValue.GetObject("KeyModesOfUse");
    m_keyModesOfUseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyAlgorithm")) {
    m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));
    m_keyAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Exportable")) {
    m_exportable = jsonValue.GetBool("Exportable");
    m_exportableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WrappingKeyIdentifier")) {
    m_wrappingKeyIdentifier = jsonValue.GetString("WrappingKeyIdentifier");
    m_wrappingKeyIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WrappedKeyCryptogram")) {
    m_wrappedKeyCryptogram = jsonValue.GetString("WrappedKeyCryptogram");
    m_wrappedKeyCryptogramHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportAs2805KeyCryptogram::Jsonize() const {
  JsonValue payload;

  if (m_as2805KeyVariantHasBeenSet) {
    payload.WithString("As2805KeyVariant", As2805KeyVariantMapper::GetNameForAs2805KeyVariant(m_as2805KeyVariant));
  }

  if (m_keyModesOfUseHasBeenSet) {
    payload.WithObject("KeyModesOfUse", m_keyModesOfUse.Jsonize());
  }

  if (m_keyAlgorithmHasBeenSet) {
    payload.WithString("KeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm));
  }

  if (m_exportableHasBeenSet) {
    payload.WithBool("Exportable", m_exportable);
  }

  if (m_wrappingKeyIdentifierHasBeenSet) {
    payload.WithString("WrappingKeyIdentifier", m_wrappingKeyIdentifier);
  }

  if (m_wrappedKeyCryptogramHasBeenSet) {
    payload.WithString("WrappedKeyCryptogram", m_wrappedKeyCryptogram);
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
