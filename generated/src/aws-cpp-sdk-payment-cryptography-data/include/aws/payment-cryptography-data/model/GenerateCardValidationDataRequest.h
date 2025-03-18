/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/CardGenerationAttributes.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateCardValidationDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateCardValidationData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate card data.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    GenerateCardValidationDataRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
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
    GenerateCardValidationDataRequest& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm for generating CVV or CSC values for the card within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const CardGenerationAttributes& GetGenerationAttributes() const { return m_generationAttributes; }
    inline bool GenerationAttributesHasBeenSet() const { return m_generationAttributesHasBeenSet; }
    template<typename GenerationAttributesT = CardGenerationAttributes>
    void SetGenerationAttributes(GenerationAttributesT&& value) { m_generationAttributesHasBeenSet = true; m_generationAttributes = std::forward<GenerationAttributesT>(value); }
    template<typename GenerationAttributesT = CardGenerationAttributes>
    GenerateCardValidationDataRequest& WithGenerationAttributes(GenerationAttributesT&& value) { SetGenerationAttributes(std::forward<GenerationAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the CVV or CSC to be generated. The default value is 3.</p>
     */
    inline int GetValidationDataLength() const { return m_validationDataLength; }
    inline bool ValidationDataLengthHasBeenSet() const { return m_validationDataLengthHasBeenSet; }
    inline void SetValidationDataLength(int value) { m_validationDataLengthHasBeenSet = true; m_validationDataLength = value; }
    inline GenerateCardValidationDataRequest& WithValidationDataLength(int value) { SetValidationDataLength(value); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    CardGenerationAttributes m_generationAttributes;
    bool m_generationAttributesHasBeenSet = false;

    int m_validationDataLength{0};
    bool m_validationDataLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
