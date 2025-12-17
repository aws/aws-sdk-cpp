/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/As2805KeyVariant.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptography {
namespace Model {

/**
 * <p>Parameter information for key material export using AS2805 key cryptogram
 * format.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportAs2805KeyCryptogram">AWS
 * API Reference</a></p>
 */
class ExportAs2805KeyCryptogram {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API ExportAs2805KeyCryptogram() = default;
  AWS_PAYMENTCRYPTOGRAPHY_API ExportAs2805KeyCryptogram(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API ExportAs2805KeyCryptogram& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetWrappingKeyIdentifier() const { return m_wrappingKeyIdentifier; }
  inline bool WrappingKeyIdentifierHasBeenSet() const { return m_wrappingKeyIdentifierHasBeenSet; }
  template <typename WrappingKeyIdentifierT = Aws::String>
  void SetWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) {
    m_wrappingKeyIdentifierHasBeenSet = true;
    m_wrappingKeyIdentifier = std::forward<WrappingKeyIdentifierT>(value);
  }
  template <typename WrappingKeyIdentifierT = Aws::String>
  ExportAs2805KeyCryptogram& WithWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) {
    SetWrappingKeyIdentifier(std::forward<WrappingKeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cryptographic usage of the key under export.</p>
   */
  inline As2805KeyVariant GetAs2805KeyVariant() const { return m_as2805KeyVariant; }
  inline bool As2805KeyVariantHasBeenSet() const { return m_as2805KeyVariantHasBeenSet; }
  inline void SetAs2805KeyVariant(As2805KeyVariant value) {
    m_as2805KeyVariantHasBeenSet = true;
    m_as2805KeyVariant = value;
  }
  inline ExportAs2805KeyCryptogram& WithAs2805KeyVariant(As2805KeyVariant value) {
    SetAs2805KeyVariant(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_wrappingKeyIdentifier;

  As2805KeyVariant m_as2805KeyVariant{As2805KeyVariant::NOT_SET};
  bool m_wrappingKeyIdentifierHasBeenSet = false;
  bool m_as2805KeyVariantHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
