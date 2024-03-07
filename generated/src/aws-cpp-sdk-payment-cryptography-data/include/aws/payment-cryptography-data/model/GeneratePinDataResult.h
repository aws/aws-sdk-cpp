/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/PinData.h>
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
  class GeneratePinDataResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GeneratePinDataResult();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GeneratePinDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GeneratePinDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const{ return m_encryptedPinBlock; }

    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline void SetEncryptedPinBlock(const Aws::String& value) { m_encryptedPinBlock = value; }

    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline void SetEncryptedPinBlock(Aws::String&& value) { m_encryptedPinBlock = std::move(value); }

    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline void SetEncryptedPinBlock(const char* value) { m_encryptedPinBlock.assign(value); }

    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline GeneratePinDataResult& WithEncryptedPinBlock(const Aws::String& value) { SetEncryptedPinBlock(value); return *this;}

    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline GeneratePinDataResult& WithEncryptedPinBlock(Aws::String&& value) { SetEncryptedPinBlock(std::move(value)); return *this;}

    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline GeneratePinDataResult& WithEncryptedPinBlock(const char* value) { SetEncryptedPinBlock(value); return *this;}


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
    inline GeneratePinDataResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline GeneratePinDataResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline GeneratePinDataResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


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
    inline GeneratePinDataResult& WithEncryptionKeyCheckValue(const Aws::String& value) { SetEncryptionKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GeneratePinDataResult& WithEncryptionKeyCheckValue(Aws::String&& value) { SetEncryptionKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GeneratePinDataResult& WithEncryptionKeyCheckValue(const char* value) { SetEncryptionKeyCheckValue(value); return *this;}


    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline const Aws::String& GetGenerationKeyArn() const{ return m_generationKeyArn; }

    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline void SetGenerationKeyArn(const Aws::String& value) { m_generationKeyArn = value; }

    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline void SetGenerationKeyArn(Aws::String&& value) { m_generationKeyArn = std::move(value); }

    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline void SetGenerationKeyArn(const char* value) { m_generationKeyArn.assign(value); }

    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline GeneratePinDataResult& WithGenerationKeyArn(const Aws::String& value) { SetGenerationKeyArn(value); return *this;}

    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline GeneratePinDataResult& WithGenerationKeyArn(Aws::String&& value) { SetGenerationKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline GeneratePinDataResult& WithGenerationKeyArn(const char* value) { SetGenerationKeyArn(value); return *this;}


    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetGenerationKeyCheckValue() const{ return m_generationKeyCheckValue; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetGenerationKeyCheckValue(const Aws::String& value) { m_generationKeyCheckValue = value; }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetGenerationKeyCheckValue(Aws::String&& value) { m_generationKeyCheckValue = std::move(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline void SetGenerationKeyCheckValue(const char* value) { m_generationKeyCheckValue.assign(value); }

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GeneratePinDataResult& WithGenerationKeyCheckValue(const Aws::String& value) { SetGenerationKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GeneratePinDataResult& WithGenerationKeyCheckValue(Aws::String&& value) { SetGenerationKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline GeneratePinDataResult& WithGenerationKeyCheckValue(const char* value) { SetGenerationKeyCheckValue(value); return *this;}


    /**
     * <p>The attributes and values Amazon Web Services Payment Cryptography uses for
     * pin data generation.</p>
     */
    inline const PinData& GetPinData() const{ return m_pinData; }

    /**
     * <p>The attributes and values Amazon Web Services Payment Cryptography uses for
     * pin data generation.</p>
     */
    inline void SetPinData(const PinData& value) { m_pinData = value; }

    /**
     * <p>The attributes and values Amazon Web Services Payment Cryptography uses for
     * pin data generation.</p>
     */
    inline void SetPinData(PinData&& value) { m_pinData = std::move(value); }

    /**
     * <p>The attributes and values Amazon Web Services Payment Cryptography uses for
     * pin data generation.</p>
     */
    inline GeneratePinDataResult& WithPinData(const PinData& value) { SetPinData(value); return *this;}

    /**
     * <p>The attributes and values Amazon Web Services Payment Cryptography uses for
     * pin data generation.</p>
     */
    inline GeneratePinDataResult& WithPinData(PinData&& value) { SetPinData(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GeneratePinDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GeneratePinDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GeneratePinDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_encryptedPinBlock;

    Aws::String m_encryptionKeyArn;

    Aws::String m_encryptionKeyCheckValue;

    Aws::String m_generationKeyArn;

    Aws::String m_generationKeyCheckValue;

    PinData m_pinData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
