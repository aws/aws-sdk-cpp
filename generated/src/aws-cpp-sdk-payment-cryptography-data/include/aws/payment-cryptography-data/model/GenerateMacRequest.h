/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataRequest.h>
#include <aws/payment-cryptography-data/model/MacAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   */
  class GenerateMacRequest : public PaymentCryptographyDataRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateMac"; }

    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The attributes and data values to use for MAC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const MacAttributes& GetGenerationAttributes() const{ return m_generationAttributes; }

    /**
     * <p>The attributes and data values to use for MAC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline bool GenerationAttributesHasBeenSet() const { return m_generationAttributesHasBeenSet; }

    /**
     * <p>The attributes and data values to use for MAC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetGenerationAttributes(const MacAttributes& value) { m_generationAttributesHasBeenSet = true; m_generationAttributes = value; }

    /**
     * <p>The attributes and data values to use for MAC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetGenerationAttributes(MacAttributes&& value) { m_generationAttributesHasBeenSet = true; m_generationAttributes = std::move(value); }

    /**
     * <p>The attributes and data values to use for MAC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline GenerateMacRequest& WithGenerationAttributes(const MacAttributes& value) { SetGenerationAttributes(value); return *this;}

    /**
     * <p>The attributes and data values to use for MAC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline GenerateMacRequest& WithGenerationAttributes(MacAttributes&& value) { SetGenerationAttributes(std::move(value)); return *this;}


    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }

    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }

    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }

    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline GenerateMacRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline GenerateMacRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the MAC generation encryption key.</p>
     */
    inline GenerateMacRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}


    /**
     * <p>The length of a MAC under generation.</p>
     */
    inline int GetMacLength() const{ return m_macLength; }

    /**
     * <p>The length of a MAC under generation.</p>
     */
    inline bool MacLengthHasBeenSet() const { return m_macLengthHasBeenSet; }

    /**
     * <p>The length of a MAC under generation.</p>
     */
    inline void SetMacLength(int value) { m_macLengthHasBeenSet = true; m_macLength = value; }

    /**
     * <p>The length of a MAC under generation.</p>
     */
    inline GenerateMacRequest& WithMacLength(int value) { SetMacLength(value); return *this;}


    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline const Aws::String& GetMessageData() const{ return m_messageData; }

    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline bool MessageDataHasBeenSet() const { return m_messageDataHasBeenSet; }

    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline void SetMessageData(const Aws::String& value) { m_messageDataHasBeenSet = true; m_messageData = value; }

    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline void SetMessageData(Aws::String&& value) { m_messageDataHasBeenSet = true; m_messageData = std::move(value); }

    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline void SetMessageData(const char* value) { m_messageDataHasBeenSet = true; m_messageData.assign(value); }

    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline GenerateMacRequest& WithMessageData(const Aws::String& value) { SetMessageData(value); return *this;}

    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline GenerateMacRequest& WithMessageData(Aws::String&& value) { SetMessageData(std::move(value)); return *this;}

    /**
     * <p>The data for which a MAC is under generation. This value must be
     * hexBinary.</p>
     */
    inline GenerateMacRequest& WithMessageData(const char* value) { SetMessageData(value); return *this;}

  private:

    MacAttributes m_generationAttributes;
    bool m_generationAttributesHasBeenSet = false;

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    int m_macLength;
    bool m_macLengthHasBeenSet = false;

    Aws::String m_messageData;
    bool m_messageDataHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
