/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class CreateAliasRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API CreateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlias"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline CreateAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline CreateAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>A friendly name that you can use to refer to a key. An alias must begin with
     * <code>alias/</code> followed by a name, for example
     * <code>alias/ExampleAlias</code>. It can contain only alphanumeric characters,
     * forward slashes (/), underscores (_), and dashes (-).</p>  <p>Don't
     * include personal, confidential or sensitive information in this field. This
     * field may be displayed in plaintext in CloudTrail logs and other output.</p>
     * 
     */
    inline CreateAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline CreateAliasRequest& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline CreateAliasRequest& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key to associate with the alias.</p>
     */
    inline CreateAliasRequest& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
