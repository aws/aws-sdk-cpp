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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyMacRequest();

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
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }
    inline VerifyMacRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}
    inline VerifyMacRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}
    inline VerifyMacRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline const Aws::String& GetMessageData() const{ return m_messageData; }
    inline bool MessageDataHasBeenSet() const { return m_messageDataHasBeenSet; }
    inline void SetMessageData(const Aws::String& value) { m_messageDataHasBeenSet = true; m_messageData = value; }
    inline void SetMessageData(Aws::String&& value) { m_messageDataHasBeenSet = true; m_messageData = std::move(value); }
    inline void SetMessageData(const char* value) { m_messageDataHasBeenSet = true; m_messageData.assign(value); }
    inline VerifyMacRequest& WithMessageData(const Aws::String& value) { SetMessageData(value); return *this;}
    inline VerifyMacRequest& WithMessageData(Aws::String&& value) { SetMessageData(std::move(value)); return *this;}
    inline VerifyMacRequest& WithMessageData(const char* value) { SetMessageData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC being verified.</p>
     */
    inline const Aws::String& GetMac() const{ return m_mac; }
    inline bool MacHasBeenSet() const { return m_macHasBeenSet; }
    inline void SetMac(const Aws::String& value) { m_macHasBeenSet = true; m_mac = value; }
    inline void SetMac(Aws::String&& value) { m_macHasBeenSet = true; m_mac = std::move(value); }
    inline void SetMac(const char* value) { m_macHasBeenSet = true; m_mac.assign(value); }
    inline VerifyMacRequest& WithMac(const Aws::String& value) { SetMac(value); return *this;}
    inline VerifyMacRequest& WithMac(Aws::String&& value) { SetMac(std::move(value)); return *this;}
    inline VerifyMacRequest& WithMac(const char* value) { SetMac(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const MacAttributes& GetVerificationAttributes() const{ return m_verificationAttributes; }
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }
    inline void SetVerificationAttributes(const MacAttributes& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = value; }
    inline void SetVerificationAttributes(MacAttributes&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::move(value); }
    inline VerifyMacRequest& WithVerificationAttributes(const MacAttributes& value) { SetVerificationAttributes(value); return *this;}
    inline VerifyMacRequest& WithVerificationAttributes(MacAttributes&& value) { SetVerificationAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of the MAC.</p>
     */
    inline int GetMacLength() const{ return m_macLength; }
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

    int m_macLength;
    bool m_macLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
