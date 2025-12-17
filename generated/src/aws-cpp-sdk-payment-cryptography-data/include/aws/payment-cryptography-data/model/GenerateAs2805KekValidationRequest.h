/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/As2805KekValidationType.h>
#include <aws/payment-cryptography-data/model/RandomKeySendVariantMask.h>

#include <utility>

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

/**
 */
class GenerateAs2805KekValidationRequest : public PaymentCryptographyDataRequest {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateAs2805KekValidationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GenerateAs2805KekValidation"; }

  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The <code>keyARN</code> of sending KEK that Amazon Web Services Payment
   * Cryptography uses for node-to-node initialization</p>
   */
  inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
  inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
  template <typename KeyIdentifierT = Aws::String>
  void SetKeyIdentifier(KeyIdentifierT&& value) {
    m_keyIdentifierHasBeenSet = true;
    m_keyIdentifier = std::forward<KeyIdentifierT>(value);
  }
  template <typename KeyIdentifierT = Aws::String>
  GenerateAs2805KekValidationRequest& WithKeyIdentifier(KeyIdentifierT&& value) {
    SetKeyIdentifier(std::forward<KeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameter information for generating a random key for KEK validation to
   * perform node-to-node initialization.</p>
   */
  inline const As2805KekValidationType& GetKekValidationType() const { return m_kekValidationType; }
  inline bool KekValidationTypeHasBeenSet() const { return m_kekValidationTypeHasBeenSet; }
  template <typename KekValidationTypeT = As2805KekValidationType>
  void SetKekValidationType(KekValidationTypeT&& value) {
    m_kekValidationTypeHasBeenSet = true;
    m_kekValidationType = std::forward<KekValidationTypeT>(value);
  }
  template <typename KekValidationTypeT = As2805KekValidationType>
  GenerateAs2805KekValidationRequest& WithKekValidationType(KekValidationTypeT&& value) {
    SetKekValidationType(std::forward<KekValidationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key variant to use for generating a random key for KEK validation during
   * node-to-node initialization.</p>
   */
  inline RandomKeySendVariantMask GetRandomKeySendVariantMask() const { return m_randomKeySendVariantMask; }
  inline bool RandomKeySendVariantMaskHasBeenSet() const { return m_randomKeySendVariantMaskHasBeenSet; }
  inline void SetRandomKeySendVariantMask(RandomKeySendVariantMask value) {
    m_randomKeySendVariantMaskHasBeenSet = true;
    m_randomKeySendVariantMask = value;
  }
  inline GenerateAs2805KekValidationRequest& WithRandomKeySendVariantMask(RandomKeySendVariantMask value) {
    SetRandomKeySendVariantMask(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyIdentifier;

  As2805KekValidationType m_kekValidationType;

  RandomKeySendVariantMask m_randomKeySendVariantMask{RandomKeySendVariantMask::NOT_SET};
  bool m_keyIdentifierHasBeenSet = false;
  bool m_kekValidationTypeHasBeenSet = false;
  bool m_randomKeySendVariantMaskHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
