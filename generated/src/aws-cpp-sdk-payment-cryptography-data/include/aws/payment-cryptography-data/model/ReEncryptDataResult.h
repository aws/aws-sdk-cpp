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
  class ReEncryptDataResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptDataResult();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The keyARN (Amazon Resource Name) of the encryption key that Amazon Web
     * Services Payment Cryptography uses for plaintext encryption.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }
    inline void SetKeyArn(const Aws::String& value) { m_keyArn = value; }
    inline void SetKeyArn(Aws::String&& value) { m_keyArn = std::move(value); }
    inline void SetKeyArn(const char* value) { m_keyArn.assign(value); }
    inline ReEncryptDataResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}
    inline ReEncryptDataResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}
    inline ReEncryptDataResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}
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
    inline ReEncryptDataResult& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}
    inline ReEncryptDataResult& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}
    inline ReEncryptDataResult& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted ciphertext.</p>
     */
    inline const Aws::String& GetCipherText() const{ return m_cipherText; }
    inline void SetCipherText(const Aws::String& value) { m_cipherText = value; }
    inline void SetCipherText(Aws::String&& value) { m_cipherText = std::move(value); }
    inline void SetCipherText(const char* value) { m_cipherText.assign(value); }
    inline ReEncryptDataResult& WithCipherText(const Aws::String& value) { SetCipherText(value); return *this;}
    inline ReEncryptDataResult& WithCipherText(Aws::String&& value) { SetCipherText(std::move(value)); return *this;}
    inline ReEncryptDataResult& WithCipherText(const char* value) { SetCipherText(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ReEncryptDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ReEncryptDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ReEncryptDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;

    Aws::String m_keyCheckValue;

    Aws::String m_cipherText;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
