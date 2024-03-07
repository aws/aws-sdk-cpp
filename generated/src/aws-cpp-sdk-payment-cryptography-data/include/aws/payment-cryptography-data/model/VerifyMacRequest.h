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


    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline VerifyMacRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline VerifyMacRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses to verify MAC data.</p>
     */
    inline VerifyMacRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}


    /**
     * <p>The MAC being verified.</p>
     */
    inline const Aws::String& GetMac() const{ return m_mac; }

    /**
     * <p>The MAC being verified.</p>
     */
    inline bool MacHasBeenSet() const { return m_macHasBeenSet; }

    /**
     * <p>The MAC being verified.</p>
     */
    inline void SetMac(const Aws::String& value) { m_macHasBeenSet = true; m_mac = value; }

    /**
     * <p>The MAC being verified.</p>
     */
    inline void SetMac(Aws::String&& value) { m_macHasBeenSet = true; m_mac = std::move(value); }

    /**
     * <p>The MAC being verified.</p>
     */
    inline void SetMac(const char* value) { m_macHasBeenSet = true; m_mac.assign(value); }

    /**
     * <p>The MAC being verified.</p>
     */
    inline VerifyMacRequest& WithMac(const Aws::String& value) { SetMac(value); return *this;}

    /**
     * <p>The MAC being verified.</p>
     */
    inline VerifyMacRequest& WithMac(Aws::String&& value) { SetMac(std::move(value)); return *this;}

    /**
     * <p>The MAC being verified.</p>
     */
    inline VerifyMacRequest& WithMac(const char* value) { SetMac(value); return *this;}


    /**
     * <p>The length of the MAC.</p>
     */
    inline int GetMacLength() const{ return m_macLength; }

    /**
     * <p>The length of the MAC.</p>
     */
    inline bool MacLengthHasBeenSet() const { return m_macLengthHasBeenSet; }

    /**
     * <p>The length of the MAC.</p>
     */
    inline void SetMacLength(int value) { m_macLengthHasBeenSet = true; m_macLength = value; }

    /**
     * <p>The length of the MAC.</p>
     */
    inline VerifyMacRequest& WithMacLength(int value) { SetMacLength(value); return *this;}


    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline const Aws::String& GetMessageData() const{ return m_messageData; }

    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline bool MessageDataHasBeenSet() const { return m_messageDataHasBeenSet; }

    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline void SetMessageData(const Aws::String& value) { m_messageDataHasBeenSet = true; m_messageData = value; }

    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline void SetMessageData(Aws::String&& value) { m_messageDataHasBeenSet = true; m_messageData = std::move(value); }

    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline void SetMessageData(const char* value) { m_messageDataHasBeenSet = true; m_messageData.assign(value); }

    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline VerifyMacRequest& WithMessageData(const Aws::String& value) { SetMessageData(value); return *this;}

    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline VerifyMacRequest& WithMessageData(Aws::String&& value) { SetMessageData(std::move(value)); return *this;}

    /**
     * <p>The data on for which MAC is under verification. This value must be
     * hexBinary.</p>
     */
    inline VerifyMacRequest& WithMessageData(const char* value) { SetMessageData(value); return *this;}


    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const MacAttributes& GetVerificationAttributes() const{ return m_verificationAttributes; }

    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline bool VerificationAttributesHasBeenSet() const { return m_verificationAttributesHasBeenSet; }

    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetVerificationAttributes(const MacAttributes& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = value; }

    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetVerificationAttributes(MacAttributes&& value) { m_verificationAttributesHasBeenSet = true; m_verificationAttributes = std::move(value); }

    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyMacRequest& WithVerificationAttributes(const MacAttributes& value) { SetVerificationAttributes(value); return *this;}

    /**
     * <p>The attributes and data values to use for MAC verification within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyMacRequest& WithVerificationAttributes(MacAttributes&& value) { SetVerificationAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    Aws::String m_mac;
    bool m_macHasBeenSet = false;

    int m_macLength;
    bool m_macLengthHasBeenSet = false;

    Aws::String m_messageData;
    bool m_messageDataHasBeenSet = false;

    MacAttributes m_verificationAttributes;
    bool m_verificationAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
