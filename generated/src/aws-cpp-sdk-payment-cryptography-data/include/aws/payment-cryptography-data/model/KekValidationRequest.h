/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/SymmetricKeyAlgorithm.h>

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
 * <p>Parameter information for generating a KEK validation request during
 * node-to-node initialization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/KekValidationRequest">AWS
 * API Reference</a></p>
 */
class KekValidationRequest {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API KekValidationRequest() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API KekValidationRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API KekValidationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key derivation algorithm to use for generating a KEK validation
   * request.</p>
   */
  inline SymmetricKeyAlgorithm GetDeriveKeyAlgorithm() const { return m_deriveKeyAlgorithm; }
  inline bool DeriveKeyAlgorithmHasBeenSet() const { return m_deriveKeyAlgorithmHasBeenSet; }
  inline void SetDeriveKeyAlgorithm(SymmetricKeyAlgorithm value) {
    m_deriveKeyAlgorithmHasBeenSet = true;
    m_deriveKeyAlgorithm = value;
  }
  inline KekValidationRequest& WithDeriveKeyAlgorithm(SymmetricKeyAlgorithm value) {
    SetDeriveKeyAlgorithm(value);
    return *this;
  }
  ///@}
 private:
  SymmetricKeyAlgorithm m_deriveKeyAlgorithm{SymmetricKeyAlgorithm::NOT_SET};
  bool m_deriveKeyAlgorithmHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
