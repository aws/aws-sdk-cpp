/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/DukptDerivationAttributes.h>
#include <aws/payment-cryptography-data/model/TranslationIsoFormats.h>
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


    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const{ return m_encryptedPinBlock; }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline void SetEncryptedPinBlock(const Aws::String& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = value; }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline void SetEncryptedPinBlock(Aws::String&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::move(value); }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline void SetEncryptedPinBlock(const char* value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock.assign(value); }

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline TranslatePinDataRequest& WithEncryptedPinBlock(const Aws::String& value) { SetEncryptedPinBlock(value); return *this;}

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline TranslatePinDataRequest& WithEncryptedPinBlock(Aws::String&& value) { SetEncryptedPinBlock(std::move(value)); return *this;}

    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline TranslatePinDataRequest& WithEncryptedPinBlock(const char* value) { SetEncryptedPinBlock(value); return *this;}


    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline const DukptDerivationAttributes& GetIncomingDukptAttributes() const{ return m_incomingDukptAttributes; }

    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline bool IncomingDukptAttributesHasBeenSet() const { return m_incomingDukptAttributesHasBeenSet; }

    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline void SetIncomingDukptAttributes(const DukptDerivationAttributes& value) { m_incomingDukptAttributesHasBeenSet = true; m_incomingDukptAttributes = value; }

    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline void SetIncomingDukptAttributes(DukptDerivationAttributes&& value) { m_incomingDukptAttributesHasBeenSet = true; m_incomingDukptAttributes = std::move(value); }

    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline TranslatePinDataRequest& WithIncomingDukptAttributes(const DukptDerivationAttributes& value) { SetIncomingDukptAttributes(value); return *this;}

    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline TranslatePinDataRequest& WithIncomingDukptAttributes(DukptDerivationAttributes&& value) { SetIncomingDukptAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline const Aws::String& GetIncomingKeyIdentifier() const{ return m_incomingKeyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline bool IncomingKeyIdentifierHasBeenSet() const { return m_incomingKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline void SetIncomingKeyIdentifier(const Aws::String& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline void SetIncomingKeyIdentifier(Aws::String&& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline void SetIncomingKeyIdentifier(const char* value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline TranslatePinDataRequest& WithIncomingKeyIdentifier(const Aws::String& value) { SetIncomingKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline TranslatePinDataRequest& WithIncomingKeyIdentifier(Aws::String&& value) { SetIncomingKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key under which incoming PIN block
     * data is encrypted. This key type can be PEK or BDK.</p>
     */
    inline TranslatePinDataRequest& WithIncomingKeyIdentifier(const char* value) { SetIncomingKeyIdentifier(value); return *this;}


    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const TranslationIsoFormats& GetIncomingTranslationAttributes() const{ return m_incomingTranslationAttributes; }

    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline bool IncomingTranslationAttributesHasBeenSet() const { return m_incomingTranslationAttributesHasBeenSet; }

    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetIncomingTranslationAttributes(const TranslationIsoFormats& value) { m_incomingTranslationAttributesHasBeenSet = true; m_incomingTranslationAttributes = value; }

    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetIncomingTranslationAttributes(TranslationIsoFormats&& value) { m_incomingTranslationAttributesHasBeenSet = true; m_incomingTranslationAttributes = std::move(value); }

    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline TranslatePinDataRequest& WithIncomingTranslationAttributes(const TranslationIsoFormats& value) { SetIncomingTranslationAttributes(value); return *this;}

    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline TranslatePinDataRequest& WithIncomingTranslationAttributes(TranslationIsoFormats&& value) { SetIncomingTranslationAttributes(std::move(value)); return *this;}


    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline const DukptDerivationAttributes& GetOutgoingDukptAttributes() const{ return m_outgoingDukptAttributes; }

    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline bool OutgoingDukptAttributesHasBeenSet() const { return m_outgoingDukptAttributesHasBeenSet; }

    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline void SetOutgoingDukptAttributes(const DukptDerivationAttributes& value) { m_outgoingDukptAttributesHasBeenSet = true; m_outgoingDukptAttributes = value; }

    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline void SetOutgoingDukptAttributes(DukptDerivationAttributes&& value) { m_outgoingDukptAttributesHasBeenSet = true; m_outgoingDukptAttributes = std::move(value); }

    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline TranslatePinDataRequest& WithOutgoingDukptAttributes(const DukptDerivationAttributes& value) { SetOutgoingDukptAttributes(value); return *this;}

    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline TranslatePinDataRequest& WithOutgoingDukptAttributes(DukptDerivationAttributes&& value) { SetOutgoingDukptAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline const Aws::String& GetOutgoingKeyIdentifier() const{ return m_outgoingKeyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline bool OutgoingKeyIdentifierHasBeenSet() const { return m_outgoingKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline void SetOutgoingKeyIdentifier(const Aws::String& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline void SetOutgoingKeyIdentifier(Aws::String&& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline void SetOutgoingKeyIdentifier(const char* value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline TranslatePinDataRequest& WithOutgoingKeyIdentifier(const Aws::String& value) { SetOutgoingKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline TranslatePinDataRequest& WithOutgoingKeyIdentifier(Aws::String&& value) { SetOutgoingKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p>
     */
    inline TranslatePinDataRequest& WithOutgoingKeyIdentifier(const char* value) { SetOutgoingKeyIdentifier(value); return *this;}


    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const TranslationIsoFormats& GetOutgoingTranslationAttributes() const{ return m_outgoingTranslationAttributes; }

    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline bool OutgoingTranslationAttributesHasBeenSet() const { return m_outgoingTranslationAttributesHasBeenSet; }

    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetOutgoingTranslationAttributes(const TranslationIsoFormats& value) { m_outgoingTranslationAttributesHasBeenSet = true; m_outgoingTranslationAttributes = value; }

    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetOutgoingTranslationAttributes(TranslationIsoFormats&& value) { m_outgoingTranslationAttributesHasBeenSet = true; m_outgoingTranslationAttributes = std::move(value); }

    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline TranslatePinDataRequest& WithOutgoingTranslationAttributes(const TranslationIsoFormats& value) { SetOutgoingTranslationAttributes(value); return *this;}

    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline TranslatePinDataRequest& WithOutgoingTranslationAttributes(TranslationIsoFormats&& value) { SetOutgoingTranslationAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    DukptDerivationAttributes m_incomingDukptAttributes;
    bool m_incomingDukptAttributesHasBeenSet = false;

    Aws::String m_incomingKeyIdentifier;
    bool m_incomingKeyIdentifierHasBeenSet = false;

    TranslationIsoFormats m_incomingTranslationAttributes;
    bool m_incomingTranslationAttributesHasBeenSet = false;

    DukptDerivationAttributes m_outgoingDukptAttributes;
    bool m_outgoingDukptAttributesHasBeenSet = false;

    Aws::String m_outgoingKeyIdentifier;
    bool m_outgoingKeyIdentifierHasBeenSet = false;

    TranslationIsoFormats m_outgoingTranslationAttributes;
    bool m_outgoingTranslationAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
