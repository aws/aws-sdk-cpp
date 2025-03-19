/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/ReEncryptionAttributes.h>
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
  class ReEncryptDataRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReEncryptData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key of incoming ciphertext
     * data.</p> <p>When a WrappedKeyBlock is provided, this value will be the
     * identifier to the key wrapping key. Otherwise, it is the key identifier used to
     * perform the operation.</p>
     */
    inline const Aws::String& GetIncomingKeyIdentifier() const { return m_incomingKeyIdentifier; }
    inline bool IncomingKeyIdentifierHasBeenSet() const { return m_incomingKeyIdentifierHasBeenSet; }
    template<typename IncomingKeyIdentifierT = Aws::String>
    void SetIncomingKeyIdentifier(IncomingKeyIdentifierT&& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = std::forward<IncomingKeyIdentifierT>(value); }
    template<typename IncomingKeyIdentifierT = Aws::String>
    ReEncryptDataRequest& WithIncomingKeyIdentifier(IncomingKeyIdentifierT&& value) { SetIncomingKeyIdentifier(std::forward<IncomingKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key of outgoing ciphertext data
     * after encryption by Amazon Web Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetOutgoingKeyIdentifier() const { return m_outgoingKeyIdentifier; }
    inline bool OutgoingKeyIdentifierHasBeenSet() const { return m_outgoingKeyIdentifierHasBeenSet; }
    template<typename OutgoingKeyIdentifierT = Aws::String>
    void SetOutgoingKeyIdentifier(OutgoingKeyIdentifierT&& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = std::forward<OutgoingKeyIdentifierT>(value); }
    template<typename OutgoingKeyIdentifierT = Aws::String>
    ReEncryptDataRequest& WithOutgoingKeyIdentifier(OutgoingKeyIdentifierT&& value) { SetOutgoingKeyIdentifier(std::forward<OutgoingKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ciphertext to be encrypted. The minimum allowed length is 16 bytes and
     * maximum allowed length is 4096 bytes.</p>
     */
    inline const Aws::String& GetCipherText() const { return m_cipherText; }
    inline bool CipherTextHasBeenSet() const { return m_cipherTextHasBeenSet; }
    template<typename CipherTextT = Aws::String>
    void SetCipherText(CipherTextT&& value) { m_cipherTextHasBeenSet = true; m_cipherText = std::forward<CipherTextT>(value); }
    template<typename CipherTextT = Aws::String>
    ReEncryptDataRequest& WithCipherText(CipherTextT&& value) { SetCipherText(std::forward<CipherTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for incoming ciphertext.</p>
     */
    inline const ReEncryptionAttributes& GetIncomingEncryptionAttributes() const { return m_incomingEncryptionAttributes; }
    inline bool IncomingEncryptionAttributesHasBeenSet() const { return m_incomingEncryptionAttributesHasBeenSet; }
    template<typename IncomingEncryptionAttributesT = ReEncryptionAttributes>
    void SetIncomingEncryptionAttributes(IncomingEncryptionAttributesT&& value) { m_incomingEncryptionAttributesHasBeenSet = true; m_incomingEncryptionAttributes = std::forward<IncomingEncryptionAttributesT>(value); }
    template<typename IncomingEncryptionAttributesT = ReEncryptionAttributes>
    ReEncryptDataRequest& WithIncomingEncryptionAttributes(IncomingEncryptionAttributesT&& value) { SetIncomingEncryptionAttributes(std::forward<IncomingEncryptionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for outgoing ciphertext data after encryption by
     * Amazon Web Services Payment Cryptography.</p>
     */
    inline const ReEncryptionAttributes& GetOutgoingEncryptionAttributes() const { return m_outgoingEncryptionAttributes; }
    inline bool OutgoingEncryptionAttributesHasBeenSet() const { return m_outgoingEncryptionAttributesHasBeenSet; }
    template<typename OutgoingEncryptionAttributesT = ReEncryptionAttributes>
    void SetOutgoingEncryptionAttributes(OutgoingEncryptionAttributesT&& value) { m_outgoingEncryptionAttributesHasBeenSet = true; m_outgoingEncryptionAttributes = std::forward<OutgoingEncryptionAttributesT>(value); }
    template<typename OutgoingEncryptionAttributesT = ReEncryptionAttributes>
    ReEncryptDataRequest& WithOutgoingEncryptionAttributes(OutgoingEncryptionAttributesT&& value) { SetOutgoingEncryptionAttributes(std::forward<OutgoingEncryptionAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key of incoming ciphertext
     * data.</p>
     */
    inline const WrappedKey& GetIncomingWrappedKey() const { return m_incomingWrappedKey; }
    inline bool IncomingWrappedKeyHasBeenSet() const { return m_incomingWrappedKeyHasBeenSet; }
    template<typename IncomingWrappedKeyT = WrappedKey>
    void SetIncomingWrappedKey(IncomingWrappedKeyT&& value) { m_incomingWrappedKeyHasBeenSet = true; m_incomingWrappedKey = std::forward<IncomingWrappedKeyT>(value); }
    template<typename IncomingWrappedKeyT = WrappedKey>
    ReEncryptDataRequest& WithIncomingWrappedKey(IncomingWrappedKeyT&& value) { SetIncomingWrappedKey(std::forward<IncomingWrappedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WrappedKeyBlock containing the encryption key of outgoing ciphertext data
     * after encryption by Amazon Web Services Payment Cryptography.</p>
     */
    inline const WrappedKey& GetOutgoingWrappedKey() const { return m_outgoingWrappedKey; }
    inline bool OutgoingWrappedKeyHasBeenSet() const { return m_outgoingWrappedKeyHasBeenSet; }
    template<typename OutgoingWrappedKeyT = WrappedKey>
    void SetOutgoingWrappedKey(OutgoingWrappedKeyT&& value) { m_outgoingWrappedKeyHasBeenSet = true; m_outgoingWrappedKey = std::forward<OutgoingWrappedKeyT>(value); }
    template<typename OutgoingWrappedKeyT = WrappedKey>
    ReEncryptDataRequest& WithOutgoingWrappedKey(OutgoingWrappedKeyT&& value) { SetOutgoingWrappedKey(std::forward<OutgoingWrappedKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_incomingKeyIdentifier;
    bool m_incomingKeyIdentifierHasBeenSet = false;

    Aws::String m_outgoingKeyIdentifier;
    bool m_outgoingKeyIdentifierHasBeenSet = false;

    Aws::String m_cipherText;
    bool m_cipherTextHasBeenSet = false;

    ReEncryptionAttributes m_incomingEncryptionAttributes;
    bool m_incomingEncryptionAttributesHasBeenSet = false;

    ReEncryptionAttributes m_outgoingEncryptionAttributes;
    bool m_outgoingEncryptionAttributesHasBeenSet = false;

    WrappedKey m_incomingWrappedKey;
    bool m_incomingWrappedKeyHasBeenSet = false;

    WrappedKey m_outgoingWrappedKey;
    bool m_outgoingWrappedKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
