/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameters that are required for ARPC response generation using method1 after
   * ARQC verification is successful.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CryptogramVerificationArpcMethod1">AWS
   * API Reference</a></p>
   */
  class CryptogramVerificationArpcMethod1
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramVerificationArpcMethod1();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramVerificationArpcMethod1(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramVerificationArpcMethod1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetAuthResponseCode() const{ return m_authResponseCode; }

    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline bool AuthResponseCodeHasBeenSet() const { return m_authResponseCodeHasBeenSet; }

    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetAuthResponseCode(const Aws::String& value) { m_authResponseCodeHasBeenSet = true; m_authResponseCode = value; }

    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetAuthResponseCode(Aws::String&& value) { m_authResponseCodeHasBeenSet = true; m_authResponseCode = std::move(value); }

    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetAuthResponseCode(const char* value) { m_authResponseCodeHasBeenSet = true; m_authResponseCode.assign(value); }

    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline CryptogramVerificationArpcMethod1& WithAuthResponseCode(const Aws::String& value) { SetAuthResponseCode(value); return *this;}

    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline CryptogramVerificationArpcMethod1& WithAuthResponseCode(Aws::String&& value) { SetAuthResponseCode(std::move(value)); return *this;}

    /**
     * <p>The auth code used to calculate APRC after ARQC verification is successful.
     * This is the same auth code used for ARQC generation outside of Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline CryptogramVerificationArpcMethod1& WithAuthResponseCode(const char* value) { SetAuthResponseCode(value); return *this;}

  private:

    Aws::String m_authResponseCode;
    bool m_authResponseCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
