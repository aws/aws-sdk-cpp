/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/WrappedKeyMaterialFormat.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptographyData {
namespace Model {

/**
 * <p>The parameter information of the outgoing wrapped key block.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/WrappedWorkingKey">AWS
 * API Reference</a></p>
 */
class WrappedWorkingKey {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedWorkingKey() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedWorkingKey(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedWorkingKey& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The wrapped key block of the outgoing transaction key.</p>
   */
  inline const Aws::String& GetWrappedKeyMaterial() const { return m_wrappedKeyMaterial; }
  inline bool WrappedKeyMaterialHasBeenSet() const { return m_wrappedKeyMaterialHasBeenSet; }
  template <typename WrappedKeyMaterialT = Aws::String>
  void SetWrappedKeyMaterial(WrappedKeyMaterialT&& value) {
    m_wrappedKeyMaterialHasBeenSet = true;
    m_wrappedKeyMaterial = std::forward<WrappedKeyMaterialT>(value);
  }
  template <typename WrappedKeyMaterialT = Aws::String>
  WrappedWorkingKey& WithWrappedKeyMaterial(WrappedKeyMaterialT&& value) {
    SetWrappedKeyMaterial(std::forward<WrappedKeyMaterialT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key check value (KCV) of the key contained within the outgoing
   * TR31WrappedKeyBlock.</p> <p> The KCV is used to check if all parties holding a
   * given key have the same key or to detect that a key has changed. For more
   * information on KCV, see <a
   * href="https://docs.aws.amazon.com/payment-cryptography/latest/userguide/terminology.html#terms.kcv">KCV</a>
   * in the <i>Amazon Web Services Payment Cryptography User Guide</i>.</p>
   */
  inline const Aws::String& GetKeyCheckValue() const { return m_keyCheckValue; }
  inline bool KeyCheckValueHasBeenSet() const { return m_keyCheckValueHasBeenSet; }
  template <typename KeyCheckValueT = Aws::String>
  void SetKeyCheckValue(KeyCheckValueT&& value) {
    m_keyCheckValueHasBeenSet = true;
    m_keyCheckValue = std::forward<KeyCheckValueT>(value);
  }
  template <typename KeyCheckValueT = Aws::String>
  WrappedWorkingKey& WithKeyCheckValue(KeyCheckValueT&& value) {
    SetKeyCheckValue(std::forward<KeyCheckValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key block format of the wrapped key.</p>
   */
  inline WrappedKeyMaterialFormat GetWrappedKeyMaterialFormat() const { return m_wrappedKeyMaterialFormat; }
  inline bool WrappedKeyMaterialFormatHasBeenSet() const { return m_wrappedKeyMaterialFormatHasBeenSet; }
  inline void SetWrappedKeyMaterialFormat(WrappedKeyMaterialFormat value) {
    m_wrappedKeyMaterialFormatHasBeenSet = true;
    m_wrappedKeyMaterialFormat = value;
  }
  inline WrappedWorkingKey& WithWrappedKeyMaterialFormat(WrappedKeyMaterialFormat value) {
    SetWrappedKeyMaterialFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_wrappedKeyMaterial;
  bool m_wrappedKeyMaterialHasBeenSet = false;

  Aws::String m_keyCheckValue;
  bool m_keyCheckValueHasBeenSet = false;

  WrappedKeyMaterialFormat m_wrappedKeyMaterialFormat{WrappedKeyMaterialFormat::NOT_SET};
  bool m_wrappedKeyMaterialFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
