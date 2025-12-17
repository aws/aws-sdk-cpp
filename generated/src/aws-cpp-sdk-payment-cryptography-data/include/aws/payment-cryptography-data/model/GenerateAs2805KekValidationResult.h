/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptographyData {
namespace Model {
class GenerateAs2805KekValidationResult {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateAs2805KekValidationResult() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateAs2805KekValidationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateAs2805KekValidationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The <code>keyARN</code> of sending KEK that Amazon Web Services Payment
   * Cryptography validates for node-to-node initialization</p>
   */
  inline const Aws::String& GetKeyArn() const { return m_keyArn; }
  template <typename KeyArnT = Aws::String>
  void SetKeyArn(KeyArnT&& value) {
    m_keyArnHasBeenSet = true;
    m_keyArn = std::forward<KeyArnT>(value);
  }
  template <typename KeyArnT = Aws::String>
  GenerateAs2805KekValidationResult& WithKeyArn(KeyArnT&& value) {
    SetKeyArn(std::forward<KeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key check value (KCV) of the sending KEK that Amazon Web Services Payment
   * Cryptography validates for node-to-node initialization.</p>
   */
  inline const Aws::String& GetKeyCheckValue() const { return m_keyCheckValue; }
  template <typename KeyCheckValueT = Aws::String>
  void SetKeyCheckValue(KeyCheckValueT&& value) {
    m_keyCheckValueHasBeenSet = true;
    m_keyCheckValue = std::forward<KeyCheckValueT>(value);
  }
  template <typename KeyCheckValueT = Aws::String>
  GenerateAs2805KekValidationResult& WithKeyCheckValue(KeyCheckValueT&& value) {
    SetKeyCheckValue(std::forward<KeyCheckValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The random key generated for sending KEK validation.</p>
   */
  inline const Aws::String& GetRandomKeySend() const { return m_randomKeySend; }
  template <typename RandomKeySendT = Aws::String>
  void SetRandomKeySend(RandomKeySendT&& value) {
    m_randomKeySendHasBeenSet = true;
    m_randomKeySend = std::forward<RandomKeySendT>(value);
  }
  template <typename RandomKeySendT = Aws::String>
  GenerateAs2805KekValidationResult& WithRandomKeySend(RandomKeySendT&& value) {
    SetRandomKeySend(std::forward<RandomKeySendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The random key generated for receiving KEK validation. The initiating node
   * sends this key to its partner node for validation.</p>
   */
  inline const Aws::String& GetRandomKeyReceive() const { return m_randomKeyReceive; }
  template <typename RandomKeyReceiveT = Aws::String>
  void SetRandomKeyReceive(RandomKeyReceiveT&& value) {
    m_randomKeyReceiveHasBeenSet = true;
    m_randomKeyReceive = std::forward<RandomKeyReceiveT>(value);
  }
  template <typename RandomKeyReceiveT = Aws::String>
  GenerateAs2805KekValidationResult& WithRandomKeyReceive(RandomKeyReceiveT&& value) {
    SetRandomKeyReceive(std::forward<RandomKeyReceiveT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GenerateAs2805KekValidationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyArn;

  Aws::String m_keyCheckValue;

  Aws::String m_randomKeySend;

  Aws::String m_randomKeyReceive;

  Aws::String m_requestId;
  bool m_keyArnHasBeenSet = false;
  bool m_keyCheckValueHasBeenSet = false;
  bool m_randomKeySendHasBeenSet = false;
  bool m_randomKeyReceiveHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
