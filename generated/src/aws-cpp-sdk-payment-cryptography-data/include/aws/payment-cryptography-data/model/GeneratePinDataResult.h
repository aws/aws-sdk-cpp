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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GeneratePinDataResult() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GeneratePinDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GeneratePinDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>keyARN</code> of the pin data generation key that Amazon Web
     * Services Payment Cryptography uses for PIN, PVV or PIN Offset generation.</p>
     */
    inline const Aws::String& GetGenerationKeyArn() const { return m_generationKeyArn; }
    template<typename GenerationKeyArnT = Aws::String>
    void SetGenerationKeyArn(GenerationKeyArnT&& value) { m_generationKeyArnHasBeenSet = true; m_generationKeyArn = std::forward<GenerationKeyArnT>(value); }
    template<typename GenerationKeyArnT = Aws::String>
    GeneratePinDataResult& WithGenerationKeyArn(GenerationKeyArnT&& value) { SetGenerationKeyArn(std::forward<GenerationKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetGenerationKeyCheckValue() const { return m_generationKeyCheckValue; }
    template<typename GenerationKeyCheckValueT = Aws::String>
    void SetGenerationKeyCheckValue(GenerationKeyCheckValueT&& value) { m_generationKeyCheckValueHasBeenSet = true; m_generationKeyCheckValue = std::forward<GenerationKeyCheckValueT>(value); }
    template<typename GenerationKeyCheckValueT = Aws::String>
    GeneratePinDataResult& WithGenerationKeyCheckValue(GenerationKeyCheckValueT&& value) { SetGenerationKeyCheckValue(std::forward<GenerationKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation. For ECDH, it is the
     * <code>keyARN</code> of the asymmetric ECC key.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    GeneratePinDataResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetEncryptionKeyCheckValue() const { return m_encryptionKeyCheckValue; }
    template<typename EncryptionKeyCheckValueT = Aws::String>
    void SetEncryptionKeyCheckValue(EncryptionKeyCheckValueT&& value) { m_encryptionKeyCheckValueHasBeenSet = true; m_encryptionKeyCheckValue = std::forward<EncryptionKeyCheckValueT>(value); }
    template<typename EncryptionKeyCheckValueT = Aws::String>
    GeneratePinDataResult& WithEncryptionKeyCheckValue(EncryptionKeyCheckValueT&& value) { SetEncryptionKeyCheckValue(std::forward<EncryptionKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN block encrypted under PEK from Amazon Web Services Payment
     * Cryptography. The encrypted PIN block is a composite of PAN (Primary Account
     * Number) and PIN (Personal Identification Number), generated in accordance with
     * ISO 9564 standard.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const { return m_encryptedPinBlock; }
    template<typename EncryptedPinBlockT = Aws::String>
    void SetEncryptedPinBlock(EncryptedPinBlockT&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::forward<EncryptedPinBlockT>(value); }
    template<typename EncryptedPinBlockT = Aws::String>
    GeneratePinDataResult& WithEncryptedPinBlock(EncryptedPinBlockT&& value) { SetEncryptedPinBlock(std::forward<EncryptedPinBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes and values Amazon Web Services Payment Cryptography uses for
     * pin data generation.</p>
     */
    inline const PinData& GetPinData() const { return m_pinData; }
    template<typename PinDataT = PinData>
    void SetPinData(PinDataT&& value) { m_pinDataHasBeenSet = true; m_pinData = std::forward<PinDataT>(value); }
    template<typename PinDataT = PinData>
    GeneratePinDataResult& WithPinData(PinDataT&& value) { SetPinData(std::forward<PinDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GeneratePinDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_generationKeyArn;
    bool m_generationKeyArnHasBeenSet = false;

    Aws::String m_generationKeyCheckValue;
    bool m_generationKeyCheckValueHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_encryptionKeyCheckValue;
    bool m_encryptionKeyCheckValueHasBeenSet = false;

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    PinData m_pinData;
    bool m_pinDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
