/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Contains information about an alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/Alias">AWS
   * API Reference</a></p>
   */
  class Alias
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API Alias();
    AWS_PAYMENTCRYPTOGRAPHY_API Alias(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Alias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline Alias& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline Alias& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>A friendly name that you can use to refer to a key. The value must begin with
     * <code>alias/</code>.</p>  <p>Do not include confidential or sensitive
     * information in this field. This field may be displayed in plaintext in
     * CloudTrail logs and other output.</p> 
     */
    inline Alias& WithAliasName(const char* value) { SetAliasName(value); return *this;}


    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArnHasBeenSet = true; m_keyArn = value; }

    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArnHasBeenSet = true; m_keyArn.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline Alias& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline Alias& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key associated with the alias.</p>
     */
    inline Alias& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
