/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/PinVerificationAttributes.h>
#include <aws/payment-cryptography-data/model/PinBlockFormatForPinData.h>
#include <aws/payment-cryptography-data/model/DukptAttributes.h>
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
  class VerifyPinDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyPinData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the PIN verification key.</p>
     */
    inline const Aws::String& GetVerificationKeyIdentifier() const { return m_verificationKeyIdentifier; }
    inline bool VerificationKeyIdentifierHasBeenSet() const { return m_verificationKeyIdentifierHasBeenSet; }
    template<typename VerificationKeyIdentifierT = Aws::String>
    void SetVerificationKeyIdentifier(VerificationKeyIdentifierT&& value) { m_verificationKeyIdentifierHasBeenSet = true; m_verificationKeyIdentifier = std::forward<VerificationKeyIdentifierT>(value); }
    template<typename VerificationKeyIdentifierT = Aws::String>
    VerifyPinDataRequest& WithVerificationKeyIdentifier(VerificationKeyIdentifierT&& value) { SetVerificationKeyIdentifier(std::forward<VerificationKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key under which the PIN block data
     * is encrypted. This key type can be PEK or BDK.</p>
     */
    inline const Aws::String& GetEncryptionKeyIdentifier() const { return m_encryptionKeyIdentifier; }
    inline bool EncryptionKeyIdentifierHasBeenSet() const { return m_encryptionKeyIdentifierHasBeenSet; }
    template<typename EncryptionKeyIdentifierT = Aws::String>
    void SetEncryptionKeyIdentifier(EncryptionKeyIdentifierT&& value) { m_encryptionKeyIdentifierHasBeenSet = true; m_encryptionKeyIdentifier = std::forward<EncryptionKeyIdentifierT>(value); }
    template<typename EncryptionKeyIdentifierT = Aws::String>
    VerifyPinDataRequest& WithEncryptionKeyIdentifier(EncryptionKeyIdentifierT&& value) { SetEncryptionKeyIdentifier(std::forward<EncryptionKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for PIN data verification.</p>
     */
    inline const PinVerificationAttributes& GetVerificationAttributes() const { return m_verificationAttributes; }
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }
    template<typename VerificationAttributesT = PinVerificationAttributes>
    void SetVerificationAttributes(VerificationAttributesT&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::forward<VerificationAttributesT>(value); }
    template<typename VerificationAttributesT = PinVerificationAttributes>
    VerifyPinDataRequest& WithVerificationAttributes(VerificationAttributesT&& value) { SetVerificationAttributes(std::forward<VerificationAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * verifies.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const { return m_encryptedPinBlock; }
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }
    template<typename EncryptedPinBlockT = Aws::String>
    void SetEncryptedPinBlock(EncryptedPinBlockT&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::forward<EncryptedPinBlockT>(value); }
    template<typename EncryptedPinBlockT = Aws::String>
    VerifyPinDataRequest& WithEncryptedPinBlock(EncryptedPinBlockT&& value) { SetEncryptedPinBlock(std::forward<EncryptedPinBlockT>(value)); return *this;}
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
    VerifyPinDataRequest& WithPrimaryAccountNumber(PrimaryAccountNumberT&& value) { SetPrimaryAccountNumber(std::forward<PrimaryAccountNumberT>(value)); return *this;}
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
    inline PinBlockFormatForPinData GetPinBlockFormat() const { return m_pinBlockFormat; }
    inline bool PinBlockFormatHasBeenSet() const { return m_pinBlockFormatHasBeenSet; }
    inline void SetPinBlockFormat(PinBlockFormatForPinData value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = value; }
    inline VerifyPinDataRequest& WithPinBlockFormat(PinBlockFormatForPinData value) { SetPinBlockFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of PIN being verified.</p>
     */
    inline int GetPinDataLength() const { return m_pinDataLength; }
    inline bool PinDataLengthHasBeenSet() const { return m_pinDataLengthHasBeenSet; }
    inline void SetPinDataLength(int value) { m_pinDataLengthHasBeenSet = true; m_pinDataLength = value; }
    inline VerifyPinDataRequest& WithPinDataLength(int value) { SetPinDataLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for the DUKPT encrypted PIN block data.</p>
     */
    inline const DukptAttributes& GetDukptAttributes() const { return m_dukptAttributes; }
    inline bool DukptAttributesHasBeenSet() const { return m_dukptAttributesHasBeenSet; }
    template<typename DukptAttributesT = DukptAttributes>
    void SetDukptAttributes(DukptAttributesT&& value) { m_dukptAttributesHasBeenSet = true; m_dukptAttributes = std::forward<DukptAttributesT>(value); }
    template<typename DukptAttributesT = DukptAttributes>
    VerifyPinDataRequest& WithDukptAttributes(DukptAttributesT&& value) { SetDukptAttributes(std::forward<DukptAttributesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const WrappedKey& GetEncryptionWrappedKey() const { return m_encryptionWrappedKey; }
    inline bool EncryptionWrappedKeyHasBeenSet() const { return m_encryptionWrappedKeyHasBeenSet; }
    template<typename EncryptionWrappedKeyT = WrappedKey>
    void SetEncryptionWrappedKey(EncryptionWrappedKeyT&& value) { m_encryptionWrappedKeyHasBeenSet = true; m_encryptionWrappedKey = std::forward<EncryptionWrappedKeyT>(value); }
    template<typename EncryptionWrappedKeyT = WrappedKey>
    VerifyPinDataRequest& WithEncryptionWrappedKey(EncryptionWrappedKeyT&& value) { SetEncryptionWrappedKey(std::forward<EncryptionWrappedKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verificationKeyIdentifier;
    bool m_verificationKeyIdentifierHasBeenSet = false;

    Aws::String m_encryptionKeyIdentifier;
    bool m_encryptionKeyIdentifierHasBeenSet = false;

    PinVerificationAttributes m_verificationAttributes;
    bool m_verificationAttributesHasBeenSet = false;

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    Aws::String m_primaryAccountNumber;
    bool m_primaryAccountNumberHasBeenSet = false;

    PinBlockFormatForPinData m_pinBlockFormat{PinBlockFormatForPinData::NOT_SET};
    bool m_pinBlockFormatHasBeenSet = false;

    int m_pinDataLength{0};
    bool m_pinDataLengthHasBeenSet = false;

    DukptAttributes m_dukptAttributes;
    bool m_dukptAttributesHasBeenSet = false;

    WrappedKey m_encryptionWrappedKey;
    bool m_encryptionWrappedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
