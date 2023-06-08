/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/CryptogramVerificationArpcMethod1.h>
#include <aws/payment-cryptography-data/model/CryptogramVerificationArpcMethod2.h>
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
   * <p>Parameters that are required for Authorization Response Cryptogram (ARPC)
   * generation after Authorization Request Cryptogram (ARQC) verification is
   * successful.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CryptogramAuthResponse">AWS
   * API Reference</a></p>
   */
  class CryptogramAuthResponse
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramAuthResponse();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramAuthResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramAuthResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Parameters that are required for ARPC response generation using method1 after
     * ARQC verification is successful.</p>
     */
    inline const CryptogramVerificationArpcMethod1& GetArpcMethod1() const{ return m_arpcMethod1; }

    /**
     * <p>Parameters that are required for ARPC response generation using method1 after
     * ARQC verification is successful.</p>
     */
    inline bool ArpcMethod1HasBeenSet() const { return m_arpcMethod1HasBeenSet; }

    /**
     * <p>Parameters that are required for ARPC response generation using method1 after
     * ARQC verification is successful.</p>
     */
    inline void SetArpcMethod1(const CryptogramVerificationArpcMethod1& value) { m_arpcMethod1HasBeenSet = true; m_arpcMethod1 = value; }

    /**
     * <p>Parameters that are required for ARPC response generation using method1 after
     * ARQC verification is successful.</p>
     */
    inline void SetArpcMethod1(CryptogramVerificationArpcMethod1&& value) { m_arpcMethod1HasBeenSet = true; m_arpcMethod1 = std::move(value); }

    /**
     * <p>Parameters that are required for ARPC response generation using method1 after
     * ARQC verification is successful.</p>
     */
    inline CryptogramAuthResponse& WithArpcMethod1(const CryptogramVerificationArpcMethod1& value) { SetArpcMethod1(value); return *this;}

    /**
     * <p>Parameters that are required for ARPC response generation using method1 after
     * ARQC verification is successful.</p>
     */
    inline CryptogramAuthResponse& WithArpcMethod1(CryptogramVerificationArpcMethod1&& value) { SetArpcMethod1(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required for ARPC response generation using method2 after
     * ARQC verification is successful.</p>
     */
    inline const CryptogramVerificationArpcMethod2& GetArpcMethod2() const{ return m_arpcMethod2; }

    /**
     * <p>Parameters that are required for ARPC response generation using method2 after
     * ARQC verification is successful.</p>
     */
    inline bool ArpcMethod2HasBeenSet() const { return m_arpcMethod2HasBeenSet; }

    /**
     * <p>Parameters that are required for ARPC response generation using method2 after
     * ARQC verification is successful.</p>
     */
    inline void SetArpcMethod2(const CryptogramVerificationArpcMethod2& value) { m_arpcMethod2HasBeenSet = true; m_arpcMethod2 = value; }

    /**
     * <p>Parameters that are required for ARPC response generation using method2 after
     * ARQC verification is successful.</p>
     */
    inline void SetArpcMethod2(CryptogramVerificationArpcMethod2&& value) { m_arpcMethod2HasBeenSet = true; m_arpcMethod2 = std::move(value); }

    /**
     * <p>Parameters that are required for ARPC response generation using method2 after
     * ARQC verification is successful.</p>
     */
    inline CryptogramAuthResponse& WithArpcMethod2(const CryptogramVerificationArpcMethod2& value) { SetArpcMethod2(value); return *this;}

    /**
     * <p>Parameters that are required for ARPC response generation using method2 after
     * ARQC verification is successful.</p>
     */
    inline CryptogramAuthResponse& WithArpcMethod2(CryptogramVerificationArpcMethod2&& value) { SetArpcMethod2(std::move(value)); return *this;}

  private:

    CryptogramVerificationArpcMethod1 m_arpcMethod1;
    bool m_arpcMethod1HasBeenSet = false;

    CryptogramVerificationArpcMethod2 m_arpcMethod2;
    bool m_arpcMethod2HasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
