/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>

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
 * <p>Parameter information for generating a KEK validation response during
 * node-to-node initialization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/KekValidationResponse">AWS
 * API Reference</a></p>
 */
class KekValidationResponse {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API KekValidationResponse() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API KekValidationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API KekValidationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The random key for generating a KEK validation response.</p>
   */
  inline const Aws::String& GetRandomKeySend() const { return m_randomKeySend; }
  inline bool RandomKeySendHasBeenSet() const { return m_randomKeySendHasBeenSet; }
  template <typename RandomKeySendT = Aws::String>
  void SetRandomKeySend(RandomKeySendT&& value) {
    m_randomKeySendHasBeenSet = true;
    m_randomKeySend = std::forward<RandomKeySendT>(value);
  }
  template <typename RandomKeySendT = Aws::String>
  KekValidationResponse& WithRandomKeySend(RandomKeySendT&& value) {
    SetRandomKeySend(std::forward<RandomKeySendT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_randomKeySend;
  bool m_randomKeySendHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
