/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/PinBlockFormatForEmvPinChange.h>
#include <aws/payment-cryptography-data/model/DerivationMethodAttributes.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class GenerateMacEmvPinChangeRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateMacEmvPinChange"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the PEK protecting the incoming new encrypted PIN
     * block.</p>
     */
    inline const Aws::String& GetNewPinPekIdentifier() const{ return m_newPinPekIdentifier; }
    inline bool NewPinPekIdentifierHasBeenSet() const { return m_newPinPekIdentifierHasBeenSet; }
    inline void SetNewPinPekIdentifier(const Aws::String& value) { m_newPinPekIdentifierHasBeenSet = true; m_newPinPekIdentifier = value; }
    inline void SetNewPinPekIdentifier(Aws::String&& value) { m_newPinPekIdentifierHasBeenSet = true; m_newPinPekIdentifier = std::move(value); }
    inline void SetNewPinPekIdentifier(const char* value) { m_newPinPekIdentifierHasBeenSet = true; m_newPinPekIdentifier.assign(value); }
    inline GenerateMacEmvPinChangeRequest& WithNewPinPekIdentifier(const Aws::String& value) { SetNewPinPekIdentifier(value); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithNewPinPekIdentifier(Aws::String&& value) { SetNewPinPekIdentifier(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithNewPinPekIdentifier(const char* value) { SetNewPinPekIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The incoming new encrypted PIN block data for offline pin change on an EMV
     * card.</p>
     */
    inline const Aws::String& GetNewEncryptedPinBlock() const{ return m_newEncryptedPinBlock; }
    inline bool NewEncryptedPinBlockHasBeenSet() const { return m_newEncryptedPinBlockHasBeenSet; }
    inline void SetNewEncryptedPinBlock(const Aws::String& value) { m_newEncryptedPinBlockHasBeenSet = true; m_newEncryptedPinBlock = value; }
    inline void SetNewEncryptedPinBlock(Aws::String&& value) { m_newEncryptedPinBlockHasBeenSet = true; m_newEncryptedPinBlock = std::move(value); }
    inline void SetNewEncryptedPinBlock(const char* value) { m_newEncryptedPinBlockHasBeenSet = true; m_newEncryptedPinBlock.assign(value); }
    inline GenerateMacEmvPinChangeRequest& WithNewEncryptedPinBlock(const Aws::String& value) { SetNewEncryptedPinBlock(value); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithNewEncryptedPinBlock(Aws::String&& value) { SetNewEncryptedPinBlock(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithNewEncryptedPinBlock(const char* value) { SetNewEncryptedPinBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN encoding format of the incoming new encrypted PIN block as specified
     * in ISO 9564.</p>
     */
    inline const PinBlockFormatForEmvPinChange& GetPinBlockFormat() const{ return m_pinBlockFormat; }
    inline bool PinBlockFormatHasBeenSet() const { return m_pinBlockFormatHasBeenSet; }
    inline void SetPinBlockFormat(const PinBlockFormatForEmvPinChange& value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = value; }
    inline void SetPinBlockFormat(PinBlockFormatForEmvPinChange&& value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = std::move(value); }
    inline GenerateMacEmvPinChangeRequest& WithPinBlockFormat(const PinBlockFormatForEmvPinChange& value) { SetPinBlockFormat(value); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithPinBlockFormat(PinBlockFormatForEmvPinChange&& value) { SetPinBlockFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the issuer master key (IMK-SMI) used to
     * authenticate the issuer script response.</p>
     */
    inline const Aws::String& GetSecureMessagingIntegrityKeyIdentifier() const{ return m_secureMessagingIntegrityKeyIdentifier; }
    inline bool SecureMessagingIntegrityKeyIdentifierHasBeenSet() const { return m_secureMessagingIntegrityKeyIdentifierHasBeenSet; }
    inline void SetSecureMessagingIntegrityKeyIdentifier(const Aws::String& value) { m_secureMessagingIntegrityKeyIdentifierHasBeenSet = true; m_secureMessagingIntegrityKeyIdentifier = value; }
    inline void SetSecureMessagingIntegrityKeyIdentifier(Aws::String&& value) { m_secureMessagingIntegrityKeyIdentifierHasBeenSet = true; m_secureMessagingIntegrityKeyIdentifier = std::move(value); }
    inline void SetSecureMessagingIntegrityKeyIdentifier(const char* value) { m_secureMessagingIntegrityKeyIdentifierHasBeenSet = true; m_secureMessagingIntegrityKeyIdentifier.assign(value); }
    inline GenerateMacEmvPinChangeRequest& WithSecureMessagingIntegrityKeyIdentifier(const Aws::String& value) { SetSecureMessagingIntegrityKeyIdentifier(value); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithSecureMessagingIntegrityKeyIdentifier(Aws::String&& value) { SetSecureMessagingIntegrityKeyIdentifier(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithSecureMessagingIntegrityKeyIdentifier(const char* value) { SetSecureMessagingIntegrityKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the issuer master key (IMK-SMC) used to protect
     * the PIN block data in the issuer script response.</p>
     */
    inline const Aws::String& GetSecureMessagingConfidentialityKeyIdentifier() const{ return m_secureMessagingConfidentialityKeyIdentifier; }
    inline bool SecureMessagingConfidentialityKeyIdentifierHasBeenSet() const { return m_secureMessagingConfidentialityKeyIdentifierHasBeenSet; }
    inline void SetSecureMessagingConfidentialityKeyIdentifier(const Aws::String& value) { m_secureMessagingConfidentialityKeyIdentifierHasBeenSet = true; m_secureMessagingConfidentialityKeyIdentifier = value; }
    inline void SetSecureMessagingConfidentialityKeyIdentifier(Aws::String&& value) { m_secureMessagingConfidentialityKeyIdentifierHasBeenSet = true; m_secureMessagingConfidentialityKeyIdentifier = std::move(value); }
    inline void SetSecureMessagingConfidentialityKeyIdentifier(const char* value) { m_secureMessagingConfidentialityKeyIdentifierHasBeenSet = true; m_secureMessagingConfidentialityKeyIdentifier.assign(value); }
    inline GenerateMacEmvPinChangeRequest& WithSecureMessagingConfidentialityKeyIdentifier(const Aws::String& value) { SetSecureMessagingConfidentialityKeyIdentifier(value); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithSecureMessagingConfidentialityKeyIdentifier(Aws::String&& value) { SetSecureMessagingConfidentialityKeyIdentifier(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithSecureMessagingConfidentialityKeyIdentifier(const char* value) { SetSecureMessagingConfidentialityKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message data is the APDU command from the card reader or terminal. The
     * target encrypted PIN block, after translation to ISO2 format, is appended to
     * this message data to generate an issuer script response.</p>
     */
    inline const Aws::String& GetMessageData() const{ return m_messageData; }
    inline bool MessageDataHasBeenSet() const { return m_messageDataHasBeenSet; }
    inline void SetMessageData(const Aws::String& value) { m_messageDataHasBeenSet = true; m_messageData = value; }
    inline void SetMessageData(Aws::String&& value) { m_messageDataHasBeenSet = true; m_messageData = std::move(value); }
    inline void SetMessageData(const char* value) { m_messageDataHasBeenSet = true; m_messageData.assign(value); }
    inline GenerateMacEmvPinChangeRequest& WithMessageData(const Aws::String& value) { SetMessageData(value); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithMessageData(Aws::String&& value) { SetMessageData(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithMessageData(const char* value) { SetMessageData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and data values to derive payment card specific
     * confidentiality and integrity keys.</p>
     */
    inline const DerivationMethodAttributes& GetDerivationMethodAttributes() const{ return m_derivationMethodAttributes; }
    inline bool DerivationMethodAttributesHasBeenSet() const { return m_derivationMethodAttributesHasBeenSet; }
    inline void SetDerivationMethodAttributes(const DerivationMethodAttributes& value) { m_derivationMethodAttributesHasBeenSet = true; m_derivationMethodAttributes = value; }
    inline void SetDerivationMethodAttributes(DerivationMethodAttributes&& value) { m_derivationMethodAttributesHasBeenSet = true; m_derivationMethodAttributes = std::move(value); }
    inline GenerateMacEmvPinChangeRequest& WithDerivationMethodAttributes(const DerivationMethodAttributes& value) { SetDerivationMethodAttributes(value); return *this;}
    inline GenerateMacEmvPinChangeRequest& WithDerivationMethodAttributes(DerivationMethodAttributes&& value) { SetDerivationMethodAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_newPinPekIdentifier;
    bool m_newPinPekIdentifierHasBeenSet = false;

    Aws::String m_newEncryptedPinBlock;
    bool m_newEncryptedPinBlockHasBeenSet = false;

    PinBlockFormatForEmvPinChange m_pinBlockFormat;
    bool m_pinBlockFormatHasBeenSet = false;

    Aws::String m_secureMessagingIntegrityKeyIdentifier;
    bool m_secureMessagingIntegrityKeyIdentifierHasBeenSet = false;

    Aws::String m_secureMessagingConfidentialityKeyIdentifier;
    bool m_secureMessagingConfidentialityKeyIdentifierHasBeenSet = false;

    Aws::String m_messageData;
    bool m_messageDataHasBeenSet = false;

    DerivationMethodAttributes m_derivationMethodAttributes;
    bool m_derivationMethodAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
