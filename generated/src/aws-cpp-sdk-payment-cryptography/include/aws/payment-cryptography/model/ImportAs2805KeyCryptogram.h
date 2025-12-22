/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/As2805KeyVariant.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/payment-cryptography/model/KeyModesOfUse.h>

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
 * <p>Parameter information for key material import using AS2805 key cryptogram
 * format.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ImportAs2805KeyCryptogram">AWS
 * API Reference</a></p>
 */
class ImportAs2805KeyCryptogram {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API ImportAs2805KeyCryptogram() = default;
  AWS_PAYMENTCRYPTOGRAPHY_API ImportAs2805KeyCryptogram(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API ImportAs2805KeyCryptogram& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cryptographic usage of the key under import.</p>
   */
  inline As2805KeyVariant GetAs2805KeyVariant() const { return m_as2805KeyVariant; }
  inline bool As2805KeyVariantHasBeenSet() const { return m_as2805KeyVariantHasBeenSet; }
  inline void SetAs2805KeyVariant(As2805KeyVariant value) {
    m_as2805KeyVariantHasBeenSet = true;
    m_as2805KeyVariant = value;
  }
  inline ImportAs2805KeyCryptogram& WithAs2805KeyVariant(As2805KeyVariant value) {
    SetAs2805KeyVariant(value);
    return *this;
  }
  ///@}

  ///@{

  inline const KeyModesOfUse& GetKeyModesOfUse() const { return m_keyModesOfUse; }
  inline bool KeyModesOfUseHasBeenSet() const { return m_keyModesOfUseHasBeenSet; }
  template <typename KeyModesOfUseT = KeyModesOfUse>
  void SetKeyModesOfUse(KeyModesOfUseT&& value) {
    m_keyModesOfUseHasBeenSet = true;
    m_keyModesOfUse = std::forward<KeyModesOfUseT>(value);
  }
  template <typename KeyModesOfUseT = KeyModesOfUse>
  ImportAs2805KeyCryptogram& WithKeyModesOfUse(KeyModesOfUseT&& value) {
    SetKeyModesOfUse(std::forward<KeyModesOfUseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key algorithm of the key under import.</p>
   */
  inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
  inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
  inline void SetKeyAlgorithm(KeyAlgorithm value) {
    m_keyAlgorithmHasBeenSet = true;
    m_keyAlgorithm = value;
  }
  inline ImportAs2805KeyCryptogram& WithKeyAlgorithm(KeyAlgorithm value) {
    SetKeyAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specified whether the key is exportable. This data is immutable after the key
   * is imported.</p>
   */
  inline bool GetExportable() const { return m_exportable; }
  inline bool ExportableHasBeenSet() const { return m_exportableHasBeenSet; }
  inline void SetExportable(bool value) {
    m_exportableHasBeenSet = true;
    m_exportable = value;
  }
  inline ImportAs2805KeyCryptogram& WithExportable(bool value) {
    SetExportable(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetWrappingKeyIdentifier() const { return m_wrappingKeyIdentifier; }
  inline bool WrappingKeyIdentifierHasBeenSet() const { return m_wrappingKeyIdentifierHasBeenSet; }
  template <typename WrappingKeyIdentifierT = Aws::String>
  void SetWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) {
    m_wrappingKeyIdentifierHasBeenSet = true;
    m_wrappingKeyIdentifier = std::forward<WrappingKeyIdentifierT>(value);
  }
  template <typename WrappingKeyIdentifierT = Aws::String>
  ImportAs2805KeyCryptogram& WithWrappingKeyIdentifier(WrappingKeyIdentifierT&& value) {
    SetWrappingKeyIdentifier(std::forward<WrappingKeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The wrapped key cryptogram under import.</p>
   */
  inline const Aws::String& GetWrappedKeyCryptogram() const { return m_wrappedKeyCryptogram; }
  inline bool WrappedKeyCryptogramHasBeenSet() const { return m_wrappedKeyCryptogramHasBeenSet; }
  template <typename WrappedKeyCryptogramT = Aws::String>
  void SetWrappedKeyCryptogram(WrappedKeyCryptogramT&& value) {
    m_wrappedKeyCryptogramHasBeenSet = true;
    m_wrappedKeyCryptogram = std::forward<WrappedKeyCryptogramT>(value);
  }
  template <typename WrappedKeyCryptogramT = Aws::String>
  ImportAs2805KeyCryptogram& WithWrappedKeyCryptogram(WrappedKeyCryptogramT&& value) {
    SetWrappedKeyCryptogram(std::forward<WrappedKeyCryptogramT>(value));
    return *this;
  }
  ///@}
 private:
  As2805KeyVariant m_as2805KeyVariant{As2805KeyVariant::NOT_SET};

  KeyModesOfUse m_keyModesOfUse;

  KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};

  bool m_exportable{false};

  Aws::String m_wrappingKeyIdentifier;

  Aws::String m_wrappedKeyCryptogram;
  bool m_as2805KeyVariantHasBeenSet = false;
  bool m_keyModesOfUseHasBeenSet = false;
  bool m_keyAlgorithmHasBeenSet = false;
  bool m_exportableHasBeenSet = false;
  bool m_wrappingKeyIdentifierHasBeenSet = false;
  bool m_wrappedKeyCryptogramHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
