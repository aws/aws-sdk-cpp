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
  class GenerateCardValidationDataResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateCardValidationDataResult();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateCardValidationDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateCardValidationDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate CVV or CSC.</p>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate CVV or CSC.</p>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArn = value; }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate CVV or CSC.</p>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArn = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate CVV or CSC.</p>
     */
    inline void SetKeyArn(const char* value) { m_keyArn.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate CVV or CSC.</p>
     */
    inline GenerateCardValidationDataResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate CVV or CSC.</p>
     */
    inline GenerateCardValidationDataResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the CVK encryption key that Amazon Web Services
     * Payment Cryptography uses to generate CVV or CSC.</p>
     */
    inline GenerateCardValidationDataResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const{ return m_keyCheckValue; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetKeyCheckValue(const Aws::String& value) { m_keyCheckValue = value; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetKeyCheckValue(Aws::String&& value) { m_keyCheckValue = std::move(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetKeyCheckValue(const char* value) { m_keyCheckValue.assign(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GenerateCardValidationDataResult& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GenerateCardValidationDataResult& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GenerateCardValidationDataResult& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}


    /**
     * <p>The CVV or CSC value that Amazon Web Services Payment Cryptography generates
     * for the card.</p>
     */
    inline const Aws::String& GetValidationData() const{ return m_validationData; }

    /**
     * <p>The CVV or CSC value that Amazon Web Services Payment Cryptography generates
     * for the card.</p>
     */
    inline void SetValidationData(const Aws::String& value) { m_validationData = value; }

    /**
     * <p>The CVV or CSC value that Amazon Web Services Payment Cryptography generates
     * for the card.</p>
     */
    inline void SetValidationData(Aws::String&& value) { m_validationData = std::move(value); }

    /**
     * <p>The CVV or CSC value that Amazon Web Services Payment Cryptography generates
     * for the card.</p>
     */
    inline void SetValidationData(const char* value) { m_validationData.assign(value); }

    /**
     * <p>The CVV or CSC value that Amazon Web Services Payment Cryptography generates
     * for the card.</p>
     */
    inline GenerateCardValidationDataResult& WithValidationData(const Aws::String& value) { SetValidationData(value); return *this;}

    /**
     * <p>The CVV or CSC value that Amazon Web Services Payment Cryptography generates
     * for the card.</p>
     */
    inline GenerateCardValidationDataResult& WithValidationData(Aws::String&& value) { SetValidationData(std::move(value)); return *this;}

    /**
     * <p>The CVV or CSC value that Amazon Web Services Payment Cryptography generates
     * for the card.</p>
     */
    inline GenerateCardValidationDataResult& WithValidationData(const char* value) { SetValidationData(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GenerateCardValidationDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GenerateCardValidationDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GenerateCardValidationDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_keyArn;

    Aws::String m_keyCheckValue;

    Aws::String m_validationData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
