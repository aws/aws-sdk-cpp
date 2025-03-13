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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PaymentCryptographyData
{
namespace Model
{
  class VerifyAuthRequestCryptogramResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramResult() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline const Aws::String& GetKeyArn() const { return m_keyArn; }
    template<typename KeyArnT = Aws::String>
    void SetKeyArn(KeyArnT&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::forward<KeyArnT>(value); }
    template<typename KeyArnT = Aws::String>
    VerifyAuthRequestCryptogramResult& WithKeyArn(KeyArnT&& value) { SetKeyArn(std::forward<KeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const { return m_keyCheckValue; }
    template<typename KeyCheckValueT = Aws::String>
    void SetKeyCheckValue(KeyCheckValueT&& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = std::forward<KeyCheckValueT>(value); }
    template<typename KeyCheckValueT = Aws::String>
    VerifyAuthRequestCryptogramResult& WithKeyCheckValue(KeyCheckValueT&& value) { SetKeyCheckValue(std::forward<KeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetAuthResponseValue() const { return m_authResponseValue; }
    template<typename AuthResponseValueT = Aws::String>
    void SetAuthResponseValue(AuthResponseValueT&& value) { m_authResponseValueHasBeenSet = true; m_authResponseValue = std::forward<AuthResponseValueT>(value); }
    template<typename AuthResponseValueT = Aws::String>
    VerifyAuthRequestCryptogramResult& WithAuthResponseValue(AuthResponseValueT&& value) { SetAuthResponseValue(std::forward<AuthResponseValueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifyAuthRequestCryptogramResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    Aws::String m_keyCheckValue;
    bool m_keyCheckValueHasBeenSet = false;

    Aws::String m_authResponseValue;
    bool m_authResponseValueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
