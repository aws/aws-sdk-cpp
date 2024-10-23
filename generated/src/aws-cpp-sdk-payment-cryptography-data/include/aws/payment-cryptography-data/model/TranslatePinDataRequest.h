/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/TranslationIsoFormats.h>
#include <aws/payment-cryptography-data/model/DukptDerivationAttributes.h>
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
  class TranslatePinDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslatePinDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TranslatePinData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p> <p>For dynamic keys, it
     * is the <code>keyARN</code> of KEK of the TR-31 wrapped PEK. For ECDH, it is the
     * <code>keyARN</code> of the asymmetric ECC key.</p>
     */
    inline const Aws::String& GetIncomingKeyIdentifier() const{ return m_incomingKeyIdentifier; }
    inline bool IncomingKeyIdentifierHasBeenSet() const { return m_incomingKeyIdentifierHasBeenSet; }
    inline void SetIncomingKeyIdentifier(const Aws::String& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = value; }
    inline void SetIncomingKeyIdentifier(Aws::String&& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = std::move(value); }
    inline void SetIncomingKeyIdentifier(const char* value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier.assign(value); }
    inline TranslatePinDataRequest& WithIncomingKeyIdentifier(const Aws::String& value) { SetIncomingKeyIdentifier(value); return *this;}
    inline TranslatePinDataRequest& WithIncomingKeyIdentifier(Aws::String&& value) { SetIncomingKeyIdentifier(std::move(value)); return *this;}
    inline TranslatePinDataRequest& WithIncomingKeyIdentifier(const char* value) { SetIncomingKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p> <p>For ECDH, it is the
     * <code>keyARN</code> of the asymmetric ECC key.</p>
     */
    inline const Aws::String& GetOutgoingKeyIdentifier() const{ return m_outgoingKeyIdentifier; }
    inline bool OutgoingKeyIdentifierHasBeenSet() const { return m_outgoingKeyIdentifierHasBeenSet; }
    inline void SetOutgoingKeyIdentifier(const Aws::String& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = value; }
    inline void SetOutgoingKeyIdentifier(Aws::String&& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = std::move(value); }
    inline void SetOutgoingKeyIdentifier(const char* value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier.assign(value); }
    inline TranslatePinDataRequest& WithOutgoingKeyIdentifier(const Aws::String& value) { SetOutgoingKeyIdentifier(value); return *this;}
    inline TranslatePinDataRequest& WithOutgoingKeyIdentifier(Aws::String&& value) { SetOutgoingKeyIdentifier(std::move(value)); return *this;}
    inline TranslatePinDataRequest& WithOutgoingKeyIdentifier(const char* value) { SetOutgoingKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const TranslationIsoFormats& GetIncomingTranslationAttributes() const{ return m_incomingTranslationAttributes; }
    inline bool IncomingTranslationAttributesHasBeenSet() const { return m_incomingTranslationAttributesHasBeenSet; }
    inline void SetIncomingTranslationAttributes(const TranslationIsoFormats& value) { m_incomingTranslationAttributesHasBeenSet = true; m_incomingTranslationAttributes = value; }
    inline void SetIncomingTranslationAttributes(TranslationIsoFormats&& value) { m_incomingTranslationAttributesHasBeenSet = true; m_incomingTranslationAttributes = std::move(value); }
    inline TranslatePinDataRequest& WithIncomingTranslationAttributes(const TranslationIsoFormats& value) { SetIncomingTranslationAttributes(value); return *this;}
    inline TranslatePinDataRequest& WithIncomingTranslationAttributes(TranslationIsoFormats&& value) { SetIncomingTranslationAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const TranslationIsoFormats& GetOutgoingTranslationAttributes() const{ return m_outgoingTranslationAttributes; }
    inline bool OutgoingTranslationAttributesHasBeenSet() const { return m_outgoingTranslationAttributesHasBeenSet; }
    inline void SetOutgoingTranslationAttributes(const TranslationIsoFormats& value) { m_outgoingTranslationAttributesHasBeenSet = true; m_outgoingTranslationAttributes = value; }
    inline void SetOutgoingTranslationAttributes(TranslationIsoFormats&& value) { m_outgoingTranslationAttributesHasBeenSet = true; m_outgoingTranslationAttributes = std::move(value); }
    inline TranslatePinDataRequest& WithOutgoingTranslationAttributes(const TranslationIsoFormats& value) { SetOutgoingTranslationAttributes(value); return *this;}
    inline TranslatePinDataRequest& WithOutgoingTranslationAttributes(TranslationIsoFormats&& value) { SetOutgoingTranslationAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const{ return m_encryptedPinBlock; }
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }
    inline void SetEncryptedPinBlock(const Aws::String& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = value; }
    inline void SetEncryptedPinBlock(Aws::String&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::move(value); }
    inline void SetEncryptedPinBlock(const char* value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock.assign(value); }
    inline TranslatePinDataRequest& WithEncryptedPinBlock(const Aws::String& value) { SetEncryptedPinBlock(value); return *this;}
    inline TranslatePinDataRequest& WithEncryptedPinBlock(Aws::String&& value) { SetEncryptedPinBlock(std::move(value)); return *this;}
    inline TranslatePinDataRequest& WithEncryptedPinBlock(const char* value) { SetEncryptedPinBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline const DukptDerivationAttributes& GetIncomingDukptAttributes() const{ return m_incomingDukptAttributes; }
    inline bool IncomingDukptAttributesHasBeenSet() const { return m_incomingDukptAttributesHasBeenSet; }
    inline void SetIncomingDukptAttributes(const DukptDerivationAttributes& value) { m_incomingDukptAttributesHasBeenSet = true; m_incomingDukptAttributes = value; }
    inline void SetIncomingDukptAttributes(DukptDerivationAttributes&& value) { m_incomingDukptAttributesHasBeenSet = true; m_incomingDukptAttributes = std::move(value); }
    inline TranslatePinDataRequest& WithIncomingDukptAttributes(const DukptDerivationAttributes& value) { SetIncomingDukptAttributes(value); return *this;}
    inline TranslatePinDataRequest& WithIncomingDukptAttributes(DukptDerivationAttributes&& value) { SetIncomingDukptAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline const DukptDerivationAttributes& GetOutgoingDukptAttributes() const{ return m_outgoingDukptAttributes; }
    inline bool OutgoingDukptAttributesHasBeenSet() const { return m_outgoingDukptAttributesHasBeenSet; }
    inline void SetOutgoingDukptAttributes(const DukptDerivationAttributes& value) { m_outgoingDukptAttributesHasBeenSet = true; m_outgoingDukptAttributes = value; }
    inline void SetOutgoingDukptAttributes(DukptDerivationAttributes&& value) { m_outgoingDukptAttributesHasBeenSet = true; m_outgoingDukptAttributes = std::move(value); }
    inline TranslatePinDataRequest& WithOutgoingDukptAttributes(const DukptDerivationAttributes& value) { SetOutgoingDukptAttributes(value); return *this;}
    inline TranslatePinDataRequest& WithOutgoingDukptAttributes(DukptDerivationAttributes&& value) { SetOutgoingDukptAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key under which incoming PIN
     * block data is encrypted.</p>
     */
    inline const WrappedKey& GetIncomingWrappedKey() const{ return m_incomingWrappedKey; }
    inline bool IncomingWrappedKeyHasBeenSet() const { return m_incomingWrappedKeyHasBeenSet; }
    inline void SetIncomingWrappedKey(const WrappedKey& value) { m_incomingWrappedKeyHasBeenSet = true; m_incomingWrappedKey = value; }
    inline void SetIncomingWrappedKey(WrappedKey&& value) { m_incomingWrappedKeyHasBeenSet = true; m_incomingWrappedKey = std::move(value); }
    inline TranslatePinDataRequest& WithIncomingWrappedKey(const WrappedKey& value) { SetIncomingWrappedKey(value); return *this;}
    inline TranslatePinDataRequest& WithIncomingWrappedKey(WrappedKey&& value) { SetIncomingWrappedKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key for encrypting outgoing PIN
     * block data.</p>
     */
    inline const WrappedKey& GetOutgoingWrappedKey() const{ return m_outgoingWrappedKey; }
    inline bool OutgoingWrappedKeyHasBeenSet() const { return m_outgoingWrappedKeyHasBeenSet; }
    inline void SetOutgoingWrappedKey(const WrappedKey& value) { m_outgoingWrappedKeyHasBeenSet = true; m_outgoingWrappedKey = value; }
    inline void SetOutgoingWrappedKey(WrappedKey&& value) { m_outgoingWrappedKeyHasBeenSet = true; m_outgoingWrappedKey = std::move(value); }
    inline TranslatePinDataRequest& WithOutgoingWrappedKey(const WrappedKey& value) { SetOutgoingWrappedKey(value); return *this;}
    inline TranslatePinDataRequest& WithOutgoingWrappedKey(WrappedKey&& value) { SetOutgoingWrappedKey(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_incomingKeyIdentifier;
    bool m_incomingKeyIdentifierHasBeenSet = false;

    Aws::String m_outgoingKeyIdentifier;
    bool m_outgoingKeyIdentifierHasBeenSet = false;

    TranslationIsoFormats m_incomingTranslationAttributes;
    bool m_incomingTranslationAttributesHasBeenSet = false;

    TranslationIsoFormats m_outgoingTranslationAttributes;
    bool m_outgoingTranslationAttributesHasBeenSet = false;

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    DukptDerivationAttributes m_incomingDukptAttributes;
    bool m_incomingDukptAttributesHasBeenSet = false;

    DukptDerivationAttributes m_outgoingDukptAttributes;
    bool m_outgoingDukptAttributesHasBeenSet = false;

    WrappedKey m_incomingWrappedKey;
    bool m_incomingWrappedKeyHasBeenSet = false;

    WrappedKey m_outgoingWrappedKey;
    bool m_outgoingWrappedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
