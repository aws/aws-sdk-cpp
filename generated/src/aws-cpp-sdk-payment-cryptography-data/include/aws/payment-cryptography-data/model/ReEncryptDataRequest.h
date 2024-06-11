/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/ReEncryptionAttributes.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReEncryptData"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Ciphertext to be encrypted. The minimum allowed length is 16 bytes and
     * maximum allowed length is 4096 bytes.</p>
     */
    inline const Aws::String& GetCipherText() const{ return m_cipherText; }
    inline bool CipherTextHasBeenSet() const { return m_cipherTextHasBeenSet; }
    inline void SetCipherText(const Aws::String& value) { m_cipherTextHasBeenSet = true; m_cipherText = value; }
    inline void SetCipherText(Aws::String&& value) { m_cipherTextHasBeenSet = true; m_cipherText = std::move(value); }
    inline void SetCipherText(const char* value) { m_cipherTextHasBeenSet = true; m_cipherText.assign(value); }
    inline ReEncryptDataRequest& WithCipherText(const Aws::String& value) { SetCipherText(value); return *this;}
    inline ReEncryptDataRequest& WithCipherText(Aws::String&& value) { SetCipherText(std::move(value)); return *this;}
    inline ReEncryptDataRequest& WithCipherText(const char* value) { SetCipherText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for incoming ciphertext.</p>
     */
    inline const ReEncryptionAttributes& GetIncomingEncryptionAttributes() const{ return m_incomingEncryptionAttributes; }
    inline bool IncomingEncryptionAttributesHasBeenSet() const { return m_incomingEncryptionAttributesHasBeenSet; }
    inline void SetIncomingEncryptionAttributes(const ReEncryptionAttributes& value) { m_incomingEncryptionAttributesHasBeenSet = true; m_incomingEncryptionAttributes = value; }
    inline void SetIncomingEncryptionAttributes(ReEncryptionAttributes&& value) { m_incomingEncryptionAttributesHasBeenSet = true; m_incomingEncryptionAttributes = std::move(value); }
    inline ReEncryptDataRequest& WithIncomingEncryptionAttributes(const ReEncryptionAttributes& value) { SetIncomingEncryptionAttributes(value); return *this;}
    inline ReEncryptDataRequest& WithIncomingEncryptionAttributes(ReEncryptionAttributes&& value) { SetIncomingEncryptionAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key of incoming ciphertext
     * data.</p>
     */
    inline const Aws::String& GetIncomingKeyIdentifier() const{ return m_incomingKeyIdentifier; }
    inline bool IncomingKeyIdentifierHasBeenSet() const { return m_incomingKeyIdentifierHasBeenSet; }
    inline void SetIncomingKeyIdentifier(const Aws::String& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = value; }
    inline void SetIncomingKeyIdentifier(Aws::String&& value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier = std::move(value); }
    inline void SetIncomingKeyIdentifier(const char* value) { m_incomingKeyIdentifierHasBeenSet = true; m_incomingKeyIdentifier.assign(value); }
    inline ReEncryptDataRequest& WithIncomingKeyIdentifier(const Aws::String& value) { SetIncomingKeyIdentifier(value); return *this;}
    inline ReEncryptDataRequest& WithIncomingKeyIdentifier(Aws::String&& value) { SetIncomingKeyIdentifier(std::move(value)); return *this;}
    inline ReEncryptDataRequest& WithIncomingKeyIdentifier(const char* value) { SetIncomingKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values for outgoing ciphertext data after encryption by
     * Amazon Web Services Payment Cryptography.</p>
     */
    inline const ReEncryptionAttributes& GetOutgoingEncryptionAttributes() const{ return m_outgoingEncryptionAttributes; }
    inline bool OutgoingEncryptionAttributesHasBeenSet() const { return m_outgoingEncryptionAttributesHasBeenSet; }
    inline void SetOutgoingEncryptionAttributes(const ReEncryptionAttributes& value) { m_outgoingEncryptionAttributesHasBeenSet = true; m_outgoingEncryptionAttributes = value; }
    inline void SetOutgoingEncryptionAttributes(ReEncryptionAttributes&& value) { m_outgoingEncryptionAttributesHasBeenSet = true; m_outgoingEncryptionAttributes = std::move(value); }
    inline ReEncryptDataRequest& WithOutgoingEncryptionAttributes(const ReEncryptionAttributes& value) { SetOutgoingEncryptionAttributes(value); return *this;}
    inline ReEncryptDataRequest& WithOutgoingEncryptionAttributes(ReEncryptionAttributes&& value) { SetOutgoingEncryptionAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key of outgoing ciphertext data
     * after encryption by Amazon Web Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetOutgoingKeyIdentifier() const{ return m_outgoingKeyIdentifier; }
    inline bool OutgoingKeyIdentifierHasBeenSet() const { return m_outgoingKeyIdentifierHasBeenSet; }
    inline void SetOutgoingKeyIdentifier(const Aws::String& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = value; }
    inline void SetOutgoingKeyIdentifier(Aws::String&& value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier = std::move(value); }
    inline void SetOutgoingKeyIdentifier(const char* value) { m_outgoingKeyIdentifierHasBeenSet = true; m_outgoingKeyIdentifier.assign(value); }
    inline ReEncryptDataRequest& WithOutgoingKeyIdentifier(const Aws::String& value) { SetOutgoingKeyIdentifier(value); return *this;}
    inline ReEncryptDataRequest& WithOutgoingKeyIdentifier(Aws::String&& value) { SetOutgoingKeyIdentifier(std::move(value)); return *this;}
    inline ReEncryptDataRequest& WithOutgoingKeyIdentifier(const char* value) { SetOutgoingKeyIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_cipherText;
    bool m_cipherTextHasBeenSet = false;

    ReEncryptionAttributes m_incomingEncryptionAttributes;
    bool m_incomingEncryptionAttributesHasBeenSet = false;

    Aws::String m_incomingKeyIdentifier;
    bool m_incomingKeyIdentifierHasBeenSet = false;

    ReEncryptionAttributes m_outgoingEncryptionAttributes;
    bool m_outgoingEncryptionAttributesHasBeenSet = false;

    Aws::String m_outgoingKeyIdentifier;
    bool m_outgoingKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
