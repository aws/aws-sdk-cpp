/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/KekValidationRequest.h>
#include <aws/payment-cryptography-data/model/KekValidationResponse.h>

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
 * <p>Parameter information for generating a random key for KEK validation to
 * perform node-to-node initialization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/As2805KekValidationType">AWS
 * API Reference</a></p>
 */
class As2805KekValidationType {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API As2805KekValidationType() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API As2805KekValidationType(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API As2805KekValidationType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Parameter information for generating a KEK validation request during
   * node-to-node initialization.</p>
   */
  inline const KekValidationRequest& GetKekValidationRequest() const { return m_kekValidationRequest; }
  inline bool KekValidationRequestHasBeenSet() const { return m_kekValidationRequestHasBeenSet; }
  template <typename KekValidationRequestT = KekValidationRequest>
  void SetKekValidationRequest(KekValidationRequestT&& value) {
    m_kekValidationRequestHasBeenSet = true;
    m_kekValidationRequest = std::forward<KekValidationRequestT>(value);
  }
  template <typename KekValidationRequestT = KekValidationRequest>
  As2805KekValidationType& WithKekValidationRequest(KekValidationRequestT&& value) {
    SetKekValidationRequest(std::forward<KekValidationRequestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameter information for generating a KEK validation response during
   * node-to-node initialization.</p>
   */
  inline const KekValidationResponse& GetKekValidationResponse() const { return m_kekValidationResponse; }
  inline bool KekValidationResponseHasBeenSet() const { return m_kekValidationResponseHasBeenSet; }
  template <typename KekValidationResponseT = KekValidationResponse>
  void SetKekValidationResponse(KekValidationResponseT&& value) {
    m_kekValidationResponseHasBeenSet = true;
    m_kekValidationResponse = std::forward<KekValidationResponseT>(value);
  }
  template <typename KekValidationResponseT = KekValidationResponse>
  As2805KekValidationType& WithKekValidationResponse(KekValidationResponseT&& value) {
    SetKekValidationResponse(std::forward<KekValidationResponseT>(value));
    return *this;
  }
  ///@}
 private:
  KekValidationRequest m_kekValidationRequest;

  KekValidationResponse m_kekValidationResponse;
  bool m_kekValidationRequestHasBeenSet = false;
  bool m_kekValidationResponseHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
