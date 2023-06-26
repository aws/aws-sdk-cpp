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
  class StopKeyUsageRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API StopKeyUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopKeyUsage"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline const Aws::String& GetKeyIdentifier() const{ return m_keyIdentifier; }

    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }

    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline void SetKeyIdentifier(const Aws::String& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = value; }

    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline void SetKeyIdentifier(Aws::String&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::move(value); }

    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline void SetKeyIdentifier(const char* value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier.assign(value); }

    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline StopKeyUsageRequest& WithKeyIdentifier(const Aws::String& value) { SetKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline StopKeyUsageRequest& WithKeyIdentifier(Aws::String&& value) { SetKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyArn</code> of the key.</p>
     */
    inline StopKeyUsageRequest& WithKeyIdentifier(const char* value) { SetKeyIdentifier(value); return *this;}

  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
