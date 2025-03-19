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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslatePinDataRequest() = default;

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
    inline const Aws::String& GetIncomingKeyIdentifier() const { return m_incomingKeyIdentifier; }
    inline bool IncomingKeyIdentifierHasBeenSet() const { return m_incomingKeyIdentifierHasBeenSet; }
    template<typename IncomingKeyIdentifierT = Aws::String>
    void SetIncomingKeyIdentifier(IncomingKeyIdentifierT&& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = std::forward<IncomingKeyIdentifierT>(value); }
    template<typename IncomingKeyIdentifierT = Aws::String>
    TranslatePinDataRequest& WithIncomingKeyIdentifier(IncomingKeyIdentifierT&& value) { SetIncomingKeyIdentifier(std::forward<IncomingKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key for encrypting outgoing PIN
     * block data. This key type can be PEK or BDK.</p> <p>For ECDH, it is the
     * <code>keyARN</code> of the asymmetric ECC key.</p>
     */
    inline const Aws::String& GetOutgoingKeyIdentifier() const { return m_outgoingKeyIdentifier; }
    inline bool OutgoingKeyIdentifierHasBeenSet() const { return m_outgoingKeyIdentifierHasBeenSet; }
    template<typename OutgoingKeyIdentifierT = Aws::String>
    void SetOutgoingKeyIdentifier(OutgoingKeyIdentifierT&& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = std::forward<OutgoingKeyIdentifierT>(value); }
    template<typename OutgoingKeyIdentifierT = Aws::String>
    TranslatePinDataRequest& WithOutgoingKeyIdentifier(OutgoingKeyIdentifierT&& value) { SetOutgoingKeyIdentifier(std::forward<OutgoingKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the incoming PIN block data for translation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const TranslationIsoFormats& GetIncomingTranslationAttributes() const { return m_incomingTranslationAttributes; }
    inline bool IncomingTranslationAttributesHasBeenSet() const { return m_incomingTranslationAttributesHasBeenSet; }
    template<typename IncomingTranslationAttributesT = TranslationIsoFormats>
    void SetIncomingTranslationAttributes(IncomingTranslationAttributesT&& value) { m_incomingTranslationAttributesHasBeenSet = true; m_incomingTranslationAttributes = std::forward<IncomingTranslationAttributesT>(value); }
    template<typename IncomingTranslationAttributesT = TranslationIsoFormats>
    TranslatePinDataRequest& WithIncomingTranslationAttributes(IncomingTranslationAttributesT&& value) { SetIncomingTranslationAttributes(std::forward<IncomingTranslationAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the outgoing PIN block data after translation by Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const TranslationIsoFormats& GetOutgoingTranslationAttributes() const { return m_outgoingTranslationAttributes; }
    inline bool OutgoingTranslationAttributesHasBeenSet() const { return m_outgoingTranslationAttributesHasBeenSet; }
    template<typename OutgoingTranslationAttributesT = TranslationIsoFormats>
    void SetOutgoingTranslationAttributes(OutgoingTranslationAttributesT&& value) { m_outgoingTranslationAttributesHasBeenSet = true; m_outgoingTranslationAttributes = std::forward<OutgoingTranslationAttributesT>(value); }
    template<typename OutgoingTranslationAttributesT = TranslationIsoFormats>
    TranslatePinDataRequest& WithOutgoingTranslationAttributes(OutgoingTranslationAttributesT&& value) { SetOutgoingTranslationAttributes(std::forward<OutgoingTranslationAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted PIN block data that Amazon Web Services Payment Cryptography
     * translates.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const { return m_encryptedPinBlock; }
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }
    template<typename EncryptedPinBlockT = Aws::String>
    void SetEncryptedPinBlock(EncryptedPinBlockT&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::forward<EncryptedPinBlockT>(value); }
    template<typename EncryptedPinBlockT = Aws::String>
    TranslatePinDataRequest& WithEncryptedPinBlock(EncryptedPinBlockT&& value) { SetEncryptedPinBlock(std::forward<EncryptedPinBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values to use for incoming DUKPT encryption key for PIN
     * block translation.</p>
     */
    inline const DukptDerivationAttributes& GetIncomingDukptAttributes() const { return m_incomingDukptAttributes; }
    inline bool IncomingDukptAttributesHasBeenSet() const { return m_incomingDukptAttributesHasBeenSet; }
    template<typename IncomingDukptAttributesT = DukptDerivationAttributes>
    void SetIncomingDukptAttributes(IncomingDukptAttributesT&& value) { m_incomingDukptAttributesHasBeenSet = true; m_incomingDukptAttributes = std::forward<IncomingDukptAttributesT>(value); }
    template<typename IncomingDukptAttributesT = DukptDerivationAttributes>
    TranslatePinDataRequest& WithIncomingDukptAttributes(IncomingDukptAttributesT&& value) { SetIncomingDukptAttributes(std::forward<IncomingDukptAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values to use for outgoing DUKPT encryption key after PIN
     * block translation.</p>
     */
    inline const DukptDerivationAttributes& GetOutgoingDukptAttributes() const { return m_outgoingDukptAttributes; }
    inline bool OutgoingDukptAttributesHasBeenSet() const { return m_outgoingDukptAttributesHasBeenSet; }
    template<typename OutgoingDukptAttributesT = DukptDerivationAttributes>
    void SetOutgoingDukptAttributes(OutgoingDukptAttributesT&& value) { m_outgoingDukptAttributesHasBeenSet = true; m_outgoingDukptAttributes = std::forward<OutgoingDukptAttributesT>(value); }
    template<typename OutgoingDukptAttributesT = DukptDerivationAttributes>
    TranslatePinDataRequest& WithOutgoingDukptAttributes(OutgoingDukptAttributesT&& value) { SetOutgoingDukptAttributes(std::forward<OutgoingDukptAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key under which incoming PIN
     * block data is encrypted.</p>
     */
    inline const WrappedKey& GetIncomingWrappedKey() const { return m_incomingWrappedKey; }
    inline bool IncomingWrappedKeyHasBeenSet() const { return m_incomingWrappedKeyHasBeenSet; }
    template<typename IncomingWrappedKeyT = WrappedKey>
    void SetIncomingWrappedKey(IncomingWrappedKeyT&& value) { m_incomingWrappedKeyHasBeenSet = true; m_incomingWrappedKey = std::forward<IncomingWrappedKeyT>(value); }
    template<typename IncomingWrappedKeyT = WrappedKey>
    TranslatePinDataRequest& WithIncomingWrappedKey(IncomingWrappedKeyT&& value) { SetIncomingWrappedKey(std::forward<IncomingWrappedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key for encrypting outgoing PIN
     * block data.</p>
     */
    inline const WrappedKey& GetOutgoingWrappedKey() const { return m_outgoingWrappedKey; }
    inline bool OutgoingWrappedKeyHasBeenSet() const { return m_outgoingWrappedKeyHasBeenSet; }
    template<typename OutgoingWrappedKeyT = WrappedKey>
    void SetOutgoingWrappedKey(OutgoingWrappedKeyT&& value) { m_outgoingWrappedKeyHasBeenSet = true; m_outgoingWrappedKey = std::forward<OutgoingWrappedKeyT>(value); }
    template<typename OutgoingWrappedKeyT = WrappedKey>
    TranslatePinDataRequest& WithOutgoingWrappedKey(OutgoingWrappedKeyT&& value) { SetOutgoingWrappedKey(std::forward<OutgoingWrappedKeyT>(value)); return *this;}
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
