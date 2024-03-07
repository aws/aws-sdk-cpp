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
  class VerifyPinDataResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataResult();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArn = value; }

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArn.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline VerifyPinDataResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline VerifyPinDataResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline VerifyPinDataResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetEncryptionKeyCheckValue() const{ return m_encryptionKeyCheckValue; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetEncryptionKeyCheckValue(const Aws::String& value) { m_encryptionKeyCheckValue = value; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetEncryptionKeyCheckValue(Aws::String&& value) { m_encryptionKeyCheckValue = std::move(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetEncryptionKeyCheckValue(const char* value) { m_encryptionKeyCheckValue.assign(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline VerifyPinDataResult& WithEncryptionKeyCheckValue(const Aws::String& value) { SetEncryptionKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline VerifyPinDataResult& WithEncryptionKeyCheckValue(Aws::String&& value) { SetEncryptionKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline VerifyPinDataResult& WithEncryptionKeyCheckValue(const char* value) { SetEncryptionKeyCheckValue(value); return *this;}


    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline const Aws::String& GetVerificationKeyArn() const{ return m_verificationKeyArn; }

    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline void SetVerificationKeyArn(const Aws::String& value) { m_verificationKeyArn = value; }

    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline void SetVerificationKeyArn(Aws::String&& value) { m_verificationKeyArn = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline void SetVerificationKeyArn(const char* value) { m_verificationKeyArn.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline VerifyPinDataResult& WithVerificationKeyArn(const Aws::String& value) { SetVerificationKeyArn(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline VerifyPinDataResult& WithVerificationKeyArn(Aws::String&& value) { SetVerificationKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline VerifyPinDataResult& WithVerificationKeyArn(const char* value) { SetVerificationKeyArn(value); return *this;}


    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetVerificationKeyCheckValue() const{ return m_verificationKeyCheckValue; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetVerificationKeyCheckValue(const Aws::String& value) { m_verificationKeyCheckValue = value; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetVerificationKeyCheckValue(Aws::String&& value) { m_verificationKeyCheckValue = std::move(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetVerificationKeyCheckValue(const char* value) { m_verificationKeyCheckValue.assign(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline VerifyPinDataResult& WithVerificationKeyCheckValue(const Aws::String& value) { SetVerificationKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline VerifyPinDataResult& WithVerificationKeyCheckValue(Aws::String&& value) { SetVerificationKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline VerifyPinDataResult& WithVerificationKeyCheckValue(const char* value) { SetVerificationKeyCheckValue(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline VerifyPinDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline VerifyPinDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline VerifyPinDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_encryptionKeyArn;

    Aws::String m_encryptionKeyCheckValue;

    Aws::String m_verificationKeyArn;

    Aws::String m_verificationKeyCheckValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
