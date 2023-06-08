/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/model/DukptAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/PinBlockFormatForPinData.h>
#include <aws/payment-cryptography-data/model/PinVerificationAttributes.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class VerifyPinDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyPinData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The attributes and values for the DUKPT encrypted PIN block data.</p>
     */
    inline const DukptAttributes& GetDukptAttributes() const{ return m_dukptAttributes; }

    /**
     * <p>The attributes and values for the DUKPT encrypted PIN block data.</p>
     */
    inline bool DukptAttributesHasBeenSet() const { return m_dukptAttributesHasBeenSet; }

    /**
     * <p>The attributes and values for the DUKPT encrypted PIN block data.</p>
     */
    inline void SetDukptAttributes(const DukptAttributes& value) { m_dukptAttributesHasBeenSet = true; m_dukptAttributes = value; }

    /**
     * <p>The attributes and values for the DUKPT encrypted PIN block data.</p>
     */
    inline void SetDukptAttributes(DukptAttributes&& value) { m_dukptAttributesHasBeenSet = true; m_dukptAttributes = std::move(value); }

    /**
     * <p>The attributes and values for the DUKPT encrypted PIN block data.</p>
     */
    inline VerifyPinDataRequest& WithDukptAttributes(const DukptAttributes& value) { SetDukptAttributes(value); return *this;}

    /**
     * <p>The attributes and values for the DUKPT encrypted PIN block data.</p>
     */
    inline VerifyPinDataRequest& WithDukptAttributes(DukptAttributes&& value) { SetDukptAttributes(std::move(value)); return *this;}


    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const{ return m_encryptedPinBlock; }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline void SetEncryptedPinBlock(const Aws::String& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = value; }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline void SetEncryptedPinBlock(Aws::String&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::move(value); }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline void SetEncryptedPinBlock(const char* value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock.assign(value); }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline VerifyPinDataRequest& WithEncryptedPinBlock(const Aws::String& value) { SetEncryptedPinBlock(value); return *this;}

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline VerifyPinDataRequest& WithEncryptedPinBlock(Aws::String&& value) { SetEncryptedPinBlock(std::move(value)); return *this;}

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline VerifyPinDataRequest& WithEncryptedPinBlock(const char* value) { SetEncryptedPinBlock(value); return *this;}


    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline const Aws::String& GetEncryptionKeyIdentifier() const{ return m_encryptionKeyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline bool EncryptionKeyIdentifierHasBeenSet() const { return m_encryptionKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline void SetEncryptionKeyIdentifier(const Aws::String& value) { m_encryptionKeyIdentifierHasBeenSet = true; m_encryptionKeyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline void SetEncryptionKeyIdentifier(Aws::String&& value) { m_encryptionKeyIdentifierHasBeenSet = true; m_encryptionKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline void SetEncryptionKeyIdentifier(const char* value) { m_encryptionKeyIdentifierHasBeenSet = true; m_encryptionKeyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline VerifyPinDataRequest& WithEncryptionKeyIdentifier(const Aws::String& value) { SetEncryptionKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline VerifyPinDataRequest& WithEncryptionKeyIdentifier(Aws::String&& value) { SetEncryptionKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline VerifyPinDataRequest& WithEncryptionKeyIdentifier(const char* value) { SetEncryptionKeyIdentifier(value); return *this;}


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
    inline bool PinBlockFormatHasBeenSet() const { return m_pinBlockFormatHasBeenSet; }

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
    inline void SetPinBlockFormat(const PinBlockFormatForPinData& value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = value; }

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
    inline void SetPinBlockFormat(PinBlockFormatForPinData&& value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = std::move(value); }

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
    inline VerifyPinDataRequest& WithPinBlockFormat(const PinBlockFormatForPinData& value) { SetPinBlockFormat(value); return *this;}

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
    inline VerifyPinDataRequest& WithPinBlockFormat(PinBlockFormatForPinData&& value) { SetPinBlockFormat(std::move(value)); return *this;}


    /**
     * <p>The length of PIN being verified.</p>
     */
    inline int GetPinDataLength() const{ return m_pinDataLength; }

    /**
     * <p>The length of PIN being verified.</p>
     */
    inline bool PinDataLengthHasBeenSet() const { return m_pinDataLengthHasBeenSet; }

    /**
     * <p>The length of PIN being verified.</p>
     */
    inline void SetPinDataLength(int value) { m_pinDataLengthHasBeenSet = true; m_pinDataLength = value; }

    /**
     * <p>The length of PIN being verified.</p>
     */
    inline VerifyPinDataRequest& WithPinDataLength(int value) { SetPinDataLength(value); return *this;}


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
    inline VerifyPinDataRequest& WithPrimaryAccountNumber(const Aws::String& value) { SetPrimaryAccountNumber(value); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline VerifyPinDataRequest& WithPrimaryAccountNumber(Aws::String&& value) { SetPrimaryAccountNumber(std::move(value)); return *this;}

    /**
     * <p>The Primary Account Number (PAN), a unique identifier for a payment credit or
     * debit card that associates the card with a specific account holder.</p>
     */
    inline VerifyPinDataRequest& WithPrimaryAccountNumber(const char* value) { SetPrimaryAccountNumber(value); return *this;}


    /**
     * <p>The attributes and values for PIN data verification.</p>
     */
    inline const PinVerificationAttributes& GetVerificationAttributes() const{ return m_verificationAttributes; }

    /**
     * <p>The attributes and values for PIN data verification.</p>
     */
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }

    /**
     * <p>The attributes and values for PIN data verification.</p>
     */
    inline void SetVerificationAttributes(const PinVerificationAttributes& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = value; }

    /**
     * <p>The attributes and values for PIN data verification.</p>
     */
    inline void SetVerificationAttributes(PinVerificationAttributes&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::move(value); }

    /**
     * <p>The attributes and values for PIN data verification.</p>
     */
    inline VerifyPinDataRequest& WithVerificationAttributes(const PinVerificationAttributes& value) { SetVerificationAttributes(value); return *this;}

    /**
     * <p>The attributes and values for PIN data verification.</p>
     */
    inline VerifyPinDataRequest& WithVerificationAttributes(PinVerificationAttributes&& value) { SetVerificationAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline const Aws::String& GetVerificationKeyIdentifier() const{ return m_verificationKeyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline bool VerificationKeyIdentifierHasBeenSet() const { return m_verificationKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline void SetVerificationKeyIdentifier(const Aws::String& value) { m_verificationKeyIdentifierHasBeenSet = true; m_verificationKeyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline void SetVerificationKeyIdentifier(Aws::String&& value) { m_verificationKeyIdentifierHasBeenSet = true; m_verificationKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline void SetVerificationKeyIdentifier(const char* value) { m_verificationKeyIdentifierHasBeenSet = true; m_verificationKeyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline VerifyPinDataRequest& WithVerificationKeyIdentifier(const Aws::String& value) { SetVerificationKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline VerifyPinDataRequest& WithVerificationKeyIdentifier(Aws::String&& value) { SetVerificationKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline VerifyPinDataRequest& WithVerificationKeyIdentifier(const char* value) { SetVerificationKeyIdentifier(value); return *this;}

  private:

    DukptAttributes m_dukptAttributes;
    bool m_dukptAttributesHasBeenSet = false;

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    Aws::String m_encryptionKeyIdentifier;
    bool m_encryptionKeyIdentifierHasBeenSet = false;

    PinBlockFormatForPinData m_pinBlockFormat;
    bool m_pinBlockFormatHasBeenSet = false;

    int m_pinDataLength;
    bool m_pinDataLengthHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    PinVerificationAttributes m_verificationAttributes;
    bool m_verificationAttributesHasBeenSet = false;

    Aws::String m_verificationKeyIdentifier;
    bool m_verificationKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
