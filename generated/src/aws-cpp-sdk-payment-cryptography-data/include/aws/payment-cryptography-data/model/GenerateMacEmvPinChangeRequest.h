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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeRequest() = default;

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
    inline const Aws::String& GetNewPinPekIdentifier() const { return m_newPinPekIdentifier; }
    inline bool NewPinPekIdentifierHasBeenSet() const { return m_newPinPekIdentifierHasBeenSet; }
    template<typename NewPinPekIdentifierT = Aws::String>
    void SetNewPinPekIdentifier(NewPinPekIdentifierT&& value) { m_newPinPekIdentifierHasBeenSet = true; m_newPinPekIdentifier = std::forward<NewPinPekIdentifierT>(value); }
    template<typename NewPinPekIdentifierT = Aws::String>
    GenerateMacEmvPinChangeRequest& WithNewPinPekIdentifier(NewPinPekIdentifierT&& value) { SetNewPinPekIdentifier(std::forward<NewPinPekIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The incoming new encrypted PIN block data for offline pin change on an EMV
     * card.</p>
     */
    inline const Aws::String& GetNewEncryptedPinBlock() const { return m_newEncryptedPinBlock; }
    inline bool NewEncryptedPinBlockHasBeenSet() const { return m_newEncryptedPinBlockHasBeenSet; }
    template<typename NewEncryptedPinBlockT = Aws::String>
    void SetNewEncryptedPinBlock(NewEncryptedPinBlockT&& value) { m_newEncryptedPinBlockHasBeenSet = true; m_newEncryptedPinBlock = std::forward<NewEncryptedPinBlockT>(value); }
    template<typename NewEncryptedPinBlockT = Aws::String>
    GenerateMacEmvPinChangeRequest& WithNewEncryptedPinBlock(NewEncryptedPinBlockT&& value) { SetNewEncryptedPinBlock(std::forward<NewEncryptedPinBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN encoding format of the incoming new encrypted PIN block as specified
     * in ISO 9564.</p>
     */
    inline PinBlockFormatForEmvPinChange GetPinBlockFormat() const { return m_pinBlockFormat; }
    inline bool PinBlockFormatHasBeenSet() const { return m_pinBlockFormatHasBeenSet; }
    inline void SetPinBlockFormat(PinBlockFormatForEmvPinChange value) { m_pinBlockFormatHasBeenSet = true; m_pinBlockFormat = value; }
    inline GenerateMacEmvPinChangeRequest& WithPinBlockFormat(PinBlockFormatForEmvPinChange value) { SetPinBlockFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the issuer master key (IMK-SMI) used to
     * authenticate the issuer script response.</p>
     */
    inline const Aws::String& GetSecureMessagingIntegrityKeyIdentifier() const { return m_secureMessagingIntegrityKeyIdentifier; }
    inline bool SecureMessagingIntegrityKeyIdentifierHasBeenSet() const { return m_secureMessagingIntegrityKeyIdentifierHasBeenSet; }
    template<typename SecureMessagingIntegrityKeyIdentifierT = Aws::String>
    void SetSecureMessagingIntegrityKeyIdentifier(SecureMessagingIntegrityKeyIdentifierT&& value) { m_secureMessagingIntegrityKeyIdentifierHasBeenSet = true; m_secureMessagingIntegrityKeyIdentifier = std::forward<SecureMessagingIntegrityKeyIdentifierT>(value); }
    template<typename SecureMessagingIntegrityKeyIdentifierT = Aws::String>
    GenerateMacEmvPinChangeRequest& WithSecureMessagingIntegrityKeyIdentifier(SecureMessagingIntegrityKeyIdentifierT&& value) { SetSecureMessagingIntegrityKeyIdentifier(std::forward<SecureMessagingIntegrityKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the issuer master key (IMK-SMC) used to protect
     * the PIN block data in the issuer script response.</p>
     */
    inline const Aws::String& GetSecureMessagingConfidentialityKeyIdentifier() const { return m_secureMessagingConfidentialityKeyIdentifier; }
    inline bool SecureMessagingConfidentialityKeyIdentifierHasBeenSet() const { return m_secureMessagingConfidentialityKeyIdentifierHasBeenSet; }
    template<typename SecureMessagingConfidentialityKeyIdentifierT = Aws::String>
    void SetSecureMessagingConfidentialityKeyIdentifier(SecureMessagingConfidentialityKeyIdentifierT&& value) { m_secureMessagingConfidentialityKeyIdentifierHasBeenSet = true; m_secureMessagingConfidentialityKeyIdentifier = std::forward<SecureMessagingConfidentialityKeyIdentifierT>(value); }
    template<typename SecureMessagingConfidentialityKeyIdentifierT = Aws::String>
    GenerateMacEmvPinChangeRequest& WithSecureMessagingConfidentialityKeyIdentifier(SecureMessagingConfidentialityKeyIdentifierT&& value) { SetSecureMessagingConfidentialityKeyIdentifier(std::forward<SecureMessagingConfidentialityKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message data is the APDU command from the card reader or terminal. The
     * target encrypted PIN block, after translation to ISO2 format, is appended to
     * this message data to generate an issuer script response.</p>
     */
    inline const Aws::String& GetMessageData() const { return m_messageData; }
    inline bool MessageDataHasBeenSet() const { return m_messageDataHasBeenSet; }
    template<typename MessageDataT = Aws::String>
    void SetMessageData(MessageDataT&& value) { m_messageDataHasBeenSet = true; m_messageData = std::forward<MessageDataT>(value); }
    template<typename MessageDataT = Aws::String>
    GenerateMacEmvPinChangeRequest& WithMessageData(MessageDataT&& value) { SetMessageData(std::forward<MessageDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and data values to derive payment card specific
     * confidentiality and integrity keys.</p>
     */
    inline const DerivationMethodAttributes& GetDerivationMethodAttributes() const { return m_derivationMethodAttributes; }
    inline bool DerivationMethodAttributesHasBeenSet() const { return m_derivationMethodAttributesHasBeenSet; }
    template<typename DerivationMethodAttributesT = DerivationMethodAttributes>
    void SetDerivationMethodAttributes(DerivationMethodAttributesT&& value) { m_derivationMethodAttributesHasBeenSet = true; m_derivationMethodAttributes = std::forward<DerivationMethodAttributesT>(value); }
    template<typename DerivationMethodAttributesT = DerivationMethodAttributes>
    GenerateMacEmvPinChangeRequest& WithDerivationMethodAttributes(DerivationMethodAttributesT&& value) { SetDerivationMethodAttributes(std::forward<DerivationMethodAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_newPinPekIdentifier;
    bool m_newPinPekIdentifierHasBeenSet = false;

    Aws::String m_newEncryptedPinBlock;
    bool m_newEncryptedPinBlockHasBeenSet = false;

    PinBlockFormatForEmvPinChange m_pinBlockFormat{PinBlockFormatForEmvPinChange::NOT_SET};
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
