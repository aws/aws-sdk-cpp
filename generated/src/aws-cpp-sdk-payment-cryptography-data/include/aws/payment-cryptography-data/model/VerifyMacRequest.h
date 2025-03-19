/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/MacAttributes.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class VerifyMacRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyMacRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyMac"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    VerifyMacRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline const Aws::String& GetMessageData() const { return m_messageData; }
    inline bool MessageDataHasBeenSet() const { return m_messageDataHasBeenSet; }
    template<typename MessageDataT = Aws::String>
    void SetMessageData(MessageDataT&& value) { m_messageDataHasBeenSet = true; m_messageData = std::forward<MessageDataT>(value); }
    template<typename MessageDataT = Aws::String>
    VerifyMacRequest& WithMessageData(MessageDataT&& value) { SetMessageData(std::forward<MessageDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC being verified.</p>
     */
    inline const Aws::String& GetMac() const { return m_mac; }
    inline bool MacHasBeenSet() const { return m_macHasBeenSet; }
    template<typename MacT = Aws::String>
    void SetMac(MacT&& value) { m_macHasBeenSet = true; m_mac = std::forward<MacT>(value); }
    template<typename MacT = Aws::String>
    VerifyMacRequest& WithMac(MacT&& value) { SetMac(std::forward<MacT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const MacAttributes& GetVerificationAttributes() const { return m_verificationAttributes; }
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }
    template<typename VerificationAttributesT = MacAttributes>
    void SetVerificationAttributes(VerificationAttributesT&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::forward<VerificationAttributesT>(value); }
    template<typename VerificationAttributesT = MacAttributes>
    VerifyMacRequest& WithVerificationAttributes(VerificationAttributesT&& value) { SetVerificationAttributes(std::forward<VerificationAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the MAC.</p>
     */
    inline int GetMacLength() const { return m_macLength; }
    inline bool MacLengthHasBeenSet() const { return m_macLengthHasBeenSet; }
    inline void SetMacLength(int value) { m_macLengthHasBeenSet = true; m_macLength = value; }
    inline VerifyMacRequest& WithMacLength(int value) { SetMacLength(value); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_messageData;
    bool m_messageDataHasBeenSet = false;

    Aws::String m_mac;
    bool m_macHasBeenSet = false;

    MacAttributes m_verificationAttributes;
    bool m_verificationAttributesHasBeenSet = false;

    int m_macLength{0};
    bool m_macLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
