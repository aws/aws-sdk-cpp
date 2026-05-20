/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/MajorKeyDerivationMode.h>
#include <aws/payment-cryptography-data/model/SessionKeyDerivation.h>

#include <utility>

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

/**
 */
class GenerateAuthRequestCryptogramRequest : public PaymentCryptographyDataRequest {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateAuthRequestCryptogramRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GenerateAuthRequestCryptogram"; }

  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The <code>keyARN</code> of the IMK-AC (TR31_E0_EMV_MKEY_APP_CRYPTOGRAMS) that
   * Amazon Web Services Payment Cryptography uses to generate the ARQC.</p>
   */
  inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
  inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
  template <typename KeyIdentifierT = Aws::String>
  void SetKeyIdentifier(KeyIdentifierT&& value) {
    m_keyIdentifierHasBeenSet = true;
    m_keyIdentifier = std::forward<KeyIdentifierT>(value);
  }
  template <typename KeyIdentifierT = Aws::String>
  GenerateAuthRequestCryptogramRequest& WithKeyIdentifier(KeyIdentifierT&& value) {
    SetKeyIdentifier(std::forward<KeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transaction data that Amazon Web Services Payment Cryptography uses for
   * ARQC generation. The same transaction data is used for ARQC verification by the
   * issuer using <a>VerifyAuthRequestCryptogram</a>.</p>
   */
  inline const Aws::String& GetTransactionData() const { return m_transactionData; }
  inline bool TransactionDataHasBeenSet() const { return m_transactionDataHasBeenSet; }
  template <typename TransactionDataT = Aws::String>
  void SetTransactionData(TransactionDataT&& value) {
    m_transactionDataHasBeenSet = true;
    m_transactionData = std::forward<TransactionDataT>(value);
  }
  template <typename TransactionDataT = Aws::String>
  GenerateAuthRequestCryptogramRequest& WithTransactionData(TransactionDataT&& value) {
    SetTransactionData(std::forward<TransactionDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The method to use when deriving the major encryption key for ARQC generation
   * within Amazon Web Services Payment Cryptography.</p>
   */
  inline MajorKeyDerivationMode GetMajorKeyDerivationMode() const { return m_majorKeyDerivationMode; }
  inline bool MajorKeyDerivationModeHasBeenSet() const { return m_majorKeyDerivationModeHasBeenSet; }
  inline void SetMajorKeyDerivationMode(MajorKeyDerivationMode value) {
    m_majorKeyDerivationModeHasBeenSet = true;
    m_majorKeyDerivationMode = value;
  }
  inline GenerateAuthRequestCryptogramRequest& WithMajorKeyDerivationMode(MajorKeyDerivationMode value) {
    SetMajorKeyDerivationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attributes and values to use for deriving a session key for ARQC
   * generation within Amazon Web Services Payment Cryptography.</p>
   */
  inline const SessionKeyDerivation& GetSessionKeyDerivationAttributes() const { return m_sessionKeyDerivationAttributes; }
  inline bool SessionKeyDerivationAttributesHasBeenSet() const { return m_sessionKeyDerivationAttributesHasBeenSet; }
  template <typename SessionKeyDerivationAttributesT = SessionKeyDerivation>
  void SetSessionKeyDerivationAttributes(SessionKeyDerivationAttributesT&& value) {
    m_sessionKeyDerivationAttributesHasBeenSet = true;
    m_sessionKeyDerivationAttributes = std::forward<SessionKeyDerivationAttributesT>(value);
  }
  template <typename SessionKeyDerivationAttributesT = SessionKeyDerivation>
  GenerateAuthRequestCryptogramRequest& WithSessionKeyDerivationAttributes(SessionKeyDerivationAttributesT&& value) {
    SetSessionKeyDerivationAttributes(std::forward<SessionKeyDerivationAttributesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyIdentifier;

  Aws::String m_transactionData;

  MajorKeyDerivationMode m_majorKeyDerivationMode{MajorKeyDerivationMode::NOT_SET};

  SessionKeyDerivation m_sessionKeyDerivationAttributes;
  bool m_keyIdentifierHasBeenSet = false;
  bool m_transactionDataHasBeenSet = false;
  bool m_majorKeyDerivationModeHasBeenSet = false;
  bool m_sessionKeyDerivationAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
