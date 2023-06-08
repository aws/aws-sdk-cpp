/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/model/CardGenerationAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class GenerateCardValidationDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateCardValidationDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateCardValidationData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The algorithm for generating CVV or CSC values for the card within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const CardGenerationAttributes& GetGenerationAttributes() const{ return m_generationAttributes; }

    /**
     * <p>The algorithm for generating CVV or CSC values for the card within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline bool GenerationAttributesHasBeenSet() const { return m_generationAttributesHasBeenSet; }

    /**
     * <p>The algorithm for generating CVV or CSC values for the card within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetGenerationAttributes(const CardGenerationAttributes& value) { m_generationAttributesHasBeenSet = true; m_generationAttributes = value; }

    /**
     * <p>The algorithm for generating CVV or CSC values for the card within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetGenerationAttributes(CardGenerationAttributes&& value) { m_generationAttributesHasBeenSet = true; m_generationAttributes = std::move(value); }

    /**
     * <p>The algorithm for generating CVV or CSC values for the card within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline GenerateCardValidationDataRequest& WithGenerationAttributes(const CardGenerationAttributes& value) { SetGenerationAttributes(value); return *this;}

    /**
     * <p>The algorithm for generating CVV or CSC values for the card within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline GenerateCardValidationDataRequest& WithGenerationAttributes(CardGenerationAttributes&& value) { SetGenerationAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline GenerateCardValidationDataRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline GenerateCardValidationDataRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline GenerateCardValidationDataRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}


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
    inline GenerateCardValidationDataRequest& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline GenerateCardValidationDataRequest& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline GenerateCardValidationDataRequest& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}


    /**
     * <p>The length of the CVV or CSC to be generated. The default value is 3.</p>
     */
    inline int GetValidationDataLength() const{ return m_validationDataLength; }

    /**
     * <p>The length of the CVV or CSC to be generated. The default value is 3.</p>
     */
    inline bool ValidationDataLengthHasBeenSet() const { return m_validationDataLengthHasBeenSet; }

    /**
     * <p>The length of the CVV or CSC to be generated. The default value is 3.</p>
     */
    inline void SetValidationDataLength(int value) { m_validationDataLengthHasBeenSet = true; m_validationDataLength = value; }

    /**
     * <p>The length of the CVV or CSC to be generated. The default value is 3.</p>
     */
    inline GenerateCardValidationDataRequest& WithValidationDataLength(int value) { SetValidationDataLength(value); return *this;}

  private:

    CardGenerationAttributes m_generationAttributes;
    bool m_generationAttributesHasBeenSet = false;

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    int m_validationDataLength;
    bool m_validationDataLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
