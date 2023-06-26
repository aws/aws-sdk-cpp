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


    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetAuthResponseValue() const{ return m_authResponseValue; }

    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetAuthResponseValue(const Aws::String& value) { m_authResponseValue = value; }

    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetAuthResponseValue(Aws::String&& value) { m_authResponseValue = std::move(value); }

    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetAuthResponseValue(const char* value) { m_authResponseValue.assign(value); }

    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithAuthResponseValue(const Aws::String& value) { SetAuthResponseValue(value); return *this;}

    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithAuthResponseValue(Aws::String&& value) { SetAuthResponseValue(std::move(value)); return *this;}

    /**
     * <p>The result for ARQC verification or ARPC generation within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithAuthResponseValue(const char* value) { SetAuthResponseValue(value); return *this;}


    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArn = value; }

    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArn = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArn.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the major encryption key that Amazon Web Services
     * Payment Cryptography uses for ARQC verification.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed. Amazon Web Services Payment Cryptography calculates the KCV by using
     * standard algorithms, typically by encrypting 8 or 16 bytes or "00" or "01" and
     * then truncating the result to the first 3 bytes, or 6 hex digits, of the
     * resulting cryptogram.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const{ return m_keyCheckValue; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed. Amazon Web Services Payment Cryptography calculates the KCV by using
     * standard algorithms, typically by encrypting 8 or 16 bytes or "00" or "01" and
     * then truncating the result to the first 3 bytes, or 6 hex digits, of the
     * resulting cryptogram.</p>
     */
    inline void SetKeyCheckValue(const Aws::String& value) { m_keyCheckValue = value; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed. Amazon Web Services Payment Cryptography calculates the KCV by using
     * standard algorithms, typically by encrypting 8 or 16 bytes or "00" or "01" and
     * then truncating the result to the first 3 bytes, or 6 hex digits, of the
     * resulting cryptogram.</p>
     */
    inline void SetKeyCheckValue(Aws::String&& value) { m_keyCheckValue = std::move(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed. Amazon Web Services Payment Cryptography calculates the KCV by using
     * standard algorithms, typically by encrypting 8 or 16 bytes or "00" or "01" and
     * then truncating the result to the first 3 bytes, or 6 hex digits, of the
     * resulting cryptogram.</p>
     */
    inline void SetKeyCheckValue(const char* value) { m_keyCheckValue.assign(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed. Amazon Web Services Payment Cryptography calculates the KCV by using
     * standard algorithms, typically by encrypting 8 or 16 bytes or "00" or "01" and
     * then truncating the result to the first 3 bytes, or 6 hex digits, of the
     * resulting cryptogram.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed. Amazon Web Services Payment Cryptography calculates the KCV by using
     * standard algorithms, typically by encrypting 8 or 16 bytes or "00" or "01" and
     * then truncating the result to the first 3 bytes, or 6 hex digits, of the
     * resulting cryptogram.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed. Amazon Web Services Payment Cryptography calculates the KCV by using
     * standard algorithms, typically by encrypting 8 or 16 bytes or "00" or "01" and
     * then truncating the result to the first 3 bytes, or 6 hex digits, of the
     * resulting cryptogram.</p>
     */
    inline VerifyAuthRequestCryptogramResult& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline VerifyAuthRequestCryptogramResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline VerifyAuthRequestCryptogramResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline VerifyAuthRequestCryptogramResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_authResponseValue;

    Aws::String m_keyArn;

    Aws::String m_keyCheckValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
