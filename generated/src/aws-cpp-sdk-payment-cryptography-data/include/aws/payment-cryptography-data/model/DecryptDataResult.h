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
  class DecryptDataResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DecryptDataResult();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DecryptDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DecryptDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>keyARN</code> of the encryption key that Amazon Web Services
     * Payment Cryptography uses for ciphertext decryption.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }
    inline void SetKeyArn(const Aws::String& value) { m_keyArn = value; }
    inline void SetKeyArn(Aws::String&& value) { m_keyArn = std::move(value); }
    inline void SetKeyArn(const char* value) { m_keyArn.assign(value); }
    inline DecryptDataResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}
    inline DecryptDataResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}
    inline DecryptDataResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}
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
    inline DecryptDataResult& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}
    inline DecryptDataResult& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}
    inline DecryptDataResult& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decrypted plaintext data in hexBinary format.</p>
     */
    inline const Aws::String& GetPlainText() const{ return m_plainText; }
    inline void SetPlainText(const Aws::String& value) { m_plainText = value; }
    inline void SetPlainText(Aws::String&& value) { m_plainText = std::move(value); }
    inline void SetPlainText(const char* value) { m_plainText.assign(value); }
    inline DecryptDataResult& WithPlainText(const Aws::String& value) { SetPlainText(value); return *this;}
    inline DecryptDataResult& WithPlainText(Aws::String&& value) { SetPlainText(std::move(value)); return *this;}
    inline DecryptDataResult& WithPlainText(const char* value) { SetPlainText(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DecryptDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DecryptDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DecryptDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;

    Aws::String m_keyCheckValue;

    Aws::String m_plainText;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
