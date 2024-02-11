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


    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline VerifyCardValidationDataRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline VerifyCardValidationDataRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to verify card data.</p>
     */
    inline VerifyCardValidationDataRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}


    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline const Aws::String& GetPrimaryAccountNumber() const{ return m_primaryAccountNumber; }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline bool PrimaryAccountNumberHasBeenSet() const { return m_primaryAccountNumberHasBeenSet; }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(const Aws::String& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = value; }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(Aws::String&& value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber = std::move(value); }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline void SetPrimaryAccountNumber(const char* value) { m_primaryAccountNumberHasBeenSet = true; m_primaryAccountNumber.assign(value); }

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline VerifyCardValidationDataRequest& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline VerifyCardValidationDataRequest& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline VerifyCardValidationDataRequest& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}


    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetValidationData() const{ return m_validationData; }

    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline bool ValidationDataHasBeenSet() const { return m_validationDataHasBeenSet; }

    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetValidationData(const Aws::String& value) { m_validationDataHasBeenSet = true; m_validationData = value; }

    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetValidationData(Aws::String&& value) { m_validationDataHasBeenSet = true; m_validationData = std::move(value); }

    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetValidationData(const char* value) { m_validationDataHasBeenSet = true; m_validationData.assign(value); }

    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyCardValidationDataRequest& WithValidationData(const Aws::String& value) { SetValidationData(value); return *this;}

    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyCardValidationDataRequest& WithValidationData(Aws::String&& value) { SetValidationData(std::move(value)); return *this;}

    /**
     * <p>The CVV or CSC value for use for card data verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyCardValidationDataRequest& WithValidationData(const char* value) { SetValidationData(value); return *this;}


    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline const CardVerificationAttributes& GetVerificationAttributes() const{ return m_verificationAttributes; }

    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }

    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline void SetVerificationAttributes(const CardVerificationAttributes& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = value; }

    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline void SetVerificationAttributes(CardVerificationAttributes&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::move(value); }

    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline VerifyCardValidationDataRequest& WithVerificationAttributes(const CardVerificationAttributes& value) { SetVerificationAttributes(value); return *this;}

    /**
     * <p>The algorithm to use for verification of card data within Amazon Web Services
     * Payment Cryptography.</p>
     */
    inline VerifyCardValidationDataRequest& WithVerificationAttributes(CardVerificationAttributes&& value) { SetVerificationAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    Aws::String m_validationData;
    bool m_validationDataHasBeenSet = false;

    CardVerificationAttributes m_verificationAttributes;
    bool m_verificationAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
