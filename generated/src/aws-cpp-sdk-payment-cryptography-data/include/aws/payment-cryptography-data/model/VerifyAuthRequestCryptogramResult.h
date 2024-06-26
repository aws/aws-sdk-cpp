﻿/**
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramResult();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyAuthRequestCryptogramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }
    inline void SetKeyArn(const Aws::String& value) { m_keyArn = value; }
    inline void SetKeyArn(Aws::String&& value) { m_keyArn = std::move(value); }
    inline void SetKeyArn(const char* value) { m_keyArn.assign(value); }
    inline VerifyAuthRequestCryptogramResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const{ return m_keyCheckValue; }
    inline void SetKeyCheckValue(const Aws::String& value) { m_keyCheckValue = value; }
    inline void SetKeyCheckValue(Aws::String&& value) { m_keyCheckValue = std::move(value); }
    inline void SetKeyCheckValue(const char* value) { m_keyCheckValue.assign(value); }
    inline VerifyAuthRequestCryptogramResult& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetAuthResponseValue() const{ return m_authResponseValue; }
    inline void SetAuthResponseValue(const Aws::String& value) { m_authResponseValue = value; }
    inline void SetAuthResponseValue(Aws::String&& value) { m_authResponseValue = std::move(value); }
    inline void SetAuthResponseValue(const char* value) { m_authResponseValue.assign(value); }
    inline VerifyAuthRequestCryptogramResult& WithAuthResponseValue(const Aws::String& value) { SetAuthResponseValue(value); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithAuthResponseValue(Aws::String&& value) { SetAuthResponseValue(std::move(value)); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithAuthResponseValue(const char* value) { SetAuthResponseValue(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline VerifyAuthRequestCryptogramResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline VerifyAuthRequestCryptogramResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;

    Aws::String m_keyCheckValue;

    Aws::String m_authResponseValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
