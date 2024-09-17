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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyCardValidationDataRequest();

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
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }
    inline VerifyCardValidationDataRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}
    inline VerifyCardValidationDataRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}
    inline VerifyCardValidationDataRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }
    inline VerifyCardValidationDataRequest& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}
    inline VerifyCardValidationDataRequest& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}
    inline VerifyCardValidationDataRequest& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline const CardVerificationAttributes& GetVerificationAttributes() const{ return m_verificationAttributes; }
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }
    inline void SetVerificationAttributes(const CardVerificationAttributes& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = value; }
    inline void SetVerificationAttributes(CardVerificationAttributes&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::move(value); }
    inline VerifyCardValidationDataRequest& WithVerificationAttributes(const CardVerificationAttributes& value) { SetVerificationAttributes(value); return *this;}
    inline VerifyCardValidationDataRequest& WithVerificationAttributes(CardVerificationAttributes&& value) { SetVerificationAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetValidationData() const{ return m_validationData; }
    inline bool ValidationDataHasBeenSet() const { return m_validationDataHasBeenSet; }
    inline void SetValidationData(const Aws::String& value) { m_validationDataHasBeenSet = true; m_validationData = value; }
    inline void SetValidationData(Aws::String&& value) { m_validationDataHasBeenSet = true; m_validationData = std::move(value); }
    inline void SetValidationData(const char* value) { m_validationDataHasBeenSet = true; m_validationData.assign(value); }
    inline VerifyCardValidationDataRequest& WithValidationData(const Aws::String& value) { SetValidationData(value); return *this;}
    inline VerifyCardValidationDataRequest& WithValidationData(Aws::String&& value) { SetValidationData(std::move(value)); return *this;}
    inline VerifyCardValidationDataRequest& WithValidationData(const char* value) { SetValidationData(value); return *this;}
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
