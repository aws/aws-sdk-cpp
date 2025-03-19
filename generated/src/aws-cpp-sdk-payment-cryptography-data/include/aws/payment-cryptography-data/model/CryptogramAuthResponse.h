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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramAuthResponse() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramAuthResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramAuthResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters that are required for ARPC response generation using method1 after
     * ARQC verification is successful.</p>
     */
    inline const CryptogramVerificationArpcMethod1& GetArpcMethod1() const { return m_arpcMethod1; }
    inline bool ArpcMethod1HasBeenSet() const { return m_arpcMethod1HasBeenSet; }
    template<typename ArpcMethod1T = CryptogramVerificationArpcMethod1>
    void SetArpcMethod1(ArpcMethod1T&& value) { m_arpcMethod1HasBeenSet = true; m_arpcMethod1 = std::forward<ArpcMethod1T>(value); }
    template<typename ArpcMethod1T = CryptogramVerificationArpcMethod1>
    CryptogramAuthResponse& WithArpcMethod1(ArpcMethod1T&& value) { SetArpcMethod1(std::forward<ArpcMethod1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that are required for ARPC response generation using method2 after
     * ARQC verification is successful.</p>
     */
    inline const CryptogramVerificationArpcMethod2& GetArpcMethod2() const { return m_arpcMethod2; }
    inline bool ArpcMethod2HasBeenSet() const { return m_arpcMethod2HasBeenSet; }
    template<typename ArpcMethod2T = CryptogramVerificationArpcMethod2>
    void SetArpcMethod2(ArpcMethod2T&& value) { m_arpcMethod2HasBeenSet = true; m_arpcMethod2 = std::forward<ArpcMethod2T>(value); }
    template<typename ArpcMethod2T = CryptogramVerificationArpcMethod2>
    CryptogramAuthResponse& WithArpcMethod2(ArpcMethod2T&& value) { SetArpcMethod2(std::forward<ArpcMethod2T>(value)); return *this;}
    ///@}
  private:

    CryptogramVerificationArpcMethod1 m_arpcMethod1;
    bool m_arpcMethod1HasBeenSet = false;

    CryptogramVerificationArpcMethod2 m_arpcMethod2;
    bool m_arpcMethod2HasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
