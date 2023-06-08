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
  class DeleteAliasRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API DeleteAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlias"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline DeleteAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline DeleteAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>A friendly name that you can use to refer Amazon Web Services Payment
     * Cryptography key. This value must begin with <code>alias/</code> followed by a
     * name, such as <code>alias/ExampleAlias</code>.</p>
     */
    inline DeleteAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}

  private:

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
