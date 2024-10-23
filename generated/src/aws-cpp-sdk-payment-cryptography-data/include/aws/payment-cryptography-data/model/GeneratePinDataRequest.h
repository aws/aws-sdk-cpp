/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/PinGenerationAttributes.h>
#include <aws/payment-cryptography-data/model/PinBlockFormatForPinData.h>
#include <aws/payment-cryptography-data/model/WrappedKey.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class GeneratePinDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GeneratePinDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GeneratePinData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for pin data generation.</p>
     */
    inline const Aws::String& GetGenerationKeyIdentifier() const{ return m_generationKeyIdentifier; }
    inline bool GenerationKeyIdentifierHasBeenSet() const { return m_generationKeyIdentifierHasBeenSet; }
    inline void SetGenerationKeyIdentifier(const Aws::String& value) { m_generationKeyIdentifierHasBeenSet = true; m_generationKeyIdentifier = value; }
    inline void SetGenerationKeyIdentifier(Aws::String&& value) { m_generationKeyIdentifierHasBeenSet = true; m_generationKeyIdentifier = std::move(value); }
    inline void SetGenerationKeyIdentifier(const char* value) { m_generationKeyIdentifierHasBeenSet = true; m_generationKeyIdentifier.assign(value); }
    inline GeneratePinDataRequest& WithGenerationKeyIdentifier(const Aws::String& value) { SetGenerationKeyIdentifier(value); return *this;}
    inline GeneratePinDataRequest& WithGenerationKeyIdentifier(Aws::String&& value) { SetGenerationKeyIdentifier(std::move(value)); return *this;}
    inline GeneratePinDataRequest& WithGenerationKeyIdentifier(const char* value) { SetGenerationKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses to encrypt the PIN Block. For ECDH, it is the
     * <code>keyARN</code> of the asymmetric ECC key.</p>
     */
    inline const Aws::String& GetEncryptionKeyIdentifier() const{ return m_encryptionKeyIdentifier; }
    inline bool EncryptionKeyIdentifierHasBeenSet() const { return m_encryptionKeyIdentifierHasBeenSet; }
    inline void SetEncryptionKeyIdentifier(const Aws::String& value) { m_encryptionKeyIdentifierHasBeenSet = true; m_encryptionKeyIdentifier = value; }
    inline void SetEncryptionKeyIdentifier(Aws::String&& value) { m_encryptionKeyIdentifierHasBeenSet = true; m_encryptionKeyIdentifier = std::move(value); }
    inline void SetEncryptionKeyIdentifier(const char* value) { m_encryptionKeyIdentifierHasBeenSet = true; m_encryptionKeyIdentifier.assign(value); }
    inline GeneratePinDataRequest& WithEncryptionKeyIdentifier(const Aws::String& value) { SetEncryptionKeyIdentifier(value); return *this;}
    inline GeneratePinDataRequest& WithEncryptionKeyIdentifier(Aws::String&& value) { SetEncryptionKeyIdentifier(std::move(value)); return *this;}
    inline GeneratePinDataRequest& WithEncryptionKeyIdentifier(const char* value) { SetEncryptionKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values to use for PIN, PVV, or PIN Offset generation.</p>
     */
    inline const PinGenerationAttributes& GetGenerationAttributes() const{ return m_generationAttributes; }
    inline bool GenerationAttributesHasBeenSet() const { return m_generationAttributesHasBeenSet; }
    inline void SetGenerationAttributes(const PinGenerationAttributes& value) { m_generationAttributesHasBeenSet = true; m_generationAttributes = value; }
    inline void SetGenerationAttributes(PinGenerationAttributes&& value) { m_generationAttributesHasBeenSet = true; m_generationAttributes = std::move(value); }
    inline GeneratePinDataRequest& WithGenerationAttributes(const PinGenerationAttributes& value) { SetGenerationAttributes(value); return *this;}
    inline GeneratePinDataRequest& WithGenerationAttributes(PinGenerationAttributes&& value) { SetGenerationAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of PIN under generation.</p>
     */
    inline int GetPinDataLength() const{ return m_pinDataLength; }
    inline bool PinDataLengthHasBeenSet() const { return m_pinDataLengthHasBeenSet; }
    inline void SetPinDataLength(int value) { m_pinDataLengthHasBeenSet = true; m_pinDataLength = value; }
    inline GeneratePinDataRequest& WithPinDataLength(int value) { SetPinDataLength(value); return *this;}
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
    inline GeneratePinDataRequest& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}
    inline GeneratePinDataRequest& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}
    inline GeneratePinDataRequest& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN encoding format for pin data generation as specified in ISO 9564.
     * Amazon Web Services Payment Cryptography supports <code>ISO_Format_0</code> and
     * <code>ISO_Format_3</code>.</p> <p>The <code>ISO_Format_0</code> PIN block format
     * is equivalent to the ANSI X9.8, VISA-1, and ECI-1 PIN block formats. It is
     * similar to a VISA-4 PIN block format. It supports a PIN from 4 to 12 digits in
     * length.</p> <p>The <code>ISO_Format_3</code> PIN block format is the same as
     * <code>ISO_Format_0</code> except that the fill digits are random values from 10
     * to 15.</p>
     */
    inline const PinBlockFormatForPinData& GetPinBlockFormat() const{ return m_pinBlockFormat; }
    inline bool PinBlockFormatHasBeenSet() const { return m_pinBlockFormatHasBeenSet; }
    inline void SetPinBlockFormat(const PinBlockFormatForPinData& value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = value; }
    inline void SetPinBlockFormat(PinBlockFormatForPinData&& value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = std::move(value); }
    inline GeneratePinDataRequest& WithPinBlockFormat(const PinBlockFormatForPinData& value) { SetPinBlockFormat(value); return *this;}
    inline GeneratePinDataRequest& WithPinBlockFormat(PinBlockFormatForPinData&& value) { SetPinBlockFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const WrappedKey& GetEncryptionWrappedKey() const{ return m_encryptionWrappedKey; }
    inline bool EncryptionWrappedKeyHasBeenSet() const { return m_encryptionWrappedKeyHasBeenSet; }
    inline void SetEncryptionWrappedKey(const WrappedKey& value) { m_encryptionWrappedKeyHasBeenSet = true; m_encryptionWrappedKey = value; }
    inline void SetEncryptionWrappedKey(WrappedKey&& value) { m_encryptionWrappedKeyHasBeenSet = true; m_encryptionWrappedKey = std::move(value); }
    inline GeneratePinDataRequest& WithEncryptionWrappedKey(const WrappedKey& value) { SetEncryptionWrappedKey(value); return *this;}
    inline GeneratePinDataRequest& WithEncryptionWrappedKey(WrappedKey&& value) { SetEncryptionWrappedKey(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_generationKeyIdentifier;
    bool m_generationKeyIdentifierHasBeenSet = false;

    Aws::String m_encryptionKeyIdentifier;
    bool m_encryptionKeyIdentifierHasBeenSet = false;

    PinGenerationAttributes m_generationAttributes;
    bool m_generationAttributesHasBeenSet = false;

    int m_pinDataLength;
    bool m_pinDataLengthHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    PinBlockFormatForPinData m_pinBlockFormat;
    bool m_pinBlockFormatHasBeenSet = false;

    WrappedKey m_encryptionWrappedKey;
    bool m_encryptionWrappedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
