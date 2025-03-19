/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/CardVerificationAttributes.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class VerifyCardValidationDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyCardValidationDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyCardValidationData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    VerifyCardValidationDataRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const { return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    template<typename PrimaryAccountNumberT = Aws::String>
    void SetPrimaryAccountNumber(PrimaryAccountNumberT&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::forward<PrimaryAccountNumberT>(value); }
    template<typename PrimaryAccountNumberT = Aws::String>
    VerifyCardValidationDataRequest& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline const CardVerificationAttributes& GetVerificationAttributes() const { return m_verificationAttributes; }
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }
    template<typename VerificationAttributesT = CardVerificationAttributes>
    void SetVerificationAttributes(VerificationAttributesT&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::forward<VerificationAttributesT>(value); }
    template<typename VerificationAttributesT = CardVerificationAttributes>
    VerifyCardValidationDataRequest& WithVerificationAttributes(VerificationAttributesT&& value) { SetVerificationAttributes(std::forward<VerificationAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetValidationData() const { return m_validationData; }
    inline bool ValidationDataHasBeenSet() const { return m_validationDataHasBeenSet; }
    template<typename ValidationDataT = Aws::String>
    void SetValidationData(ValidationDataT&& value) { m_validationDataHasBeenSet = true; m_validationData = std::forward<ValidationDataT>(value); }
    template<typename ValidationDataT = Aws::String>
    VerifyCardValidationDataRequest& WithValidationData(ValidationDataT&& value) { SetValidationData(std::forward<ValidationDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    CardVerificationAttributes m_verificationAttributes;
    bool m_verificationAttributesHasBeenSet = false;

    Aws::String m_validationData;
    bool m_validationDataHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
