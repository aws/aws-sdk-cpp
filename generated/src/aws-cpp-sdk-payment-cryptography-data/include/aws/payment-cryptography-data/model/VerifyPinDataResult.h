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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataResult() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VerifyPinDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>keyARN</code> of the PIN encryption key that Amazon Web Services
     * Payment Cryptography uses for PIN or PIN Offset verification.</p>
     */
    inline const Aws::String& GetVerificationKeyArn() const { return m_verificationKeyArn; }
    template<typename VerificationKeyArnT = Aws::String>
    void SetVerificationKeyArn(VerificationKeyArnT&& value) { m_verificationKeyArnHasBeenSet = true; m_verificationKeyArn = std::forward<VerificationKeyArnT>(value); }
    template<typename VerificationKeyArnT = Aws::String>
    VerifyPinDataResult& WithVerificationKeyArn(VerificationKeyArnT&& value) { SetVerificationKeyArn(std::forward<VerificationKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the encryption key. The KCV is used to check if
     * all parties holding a given key have the same key or to detect that a key has
     * changed.</p> <p>Amazon Web Services Payment Cryptography computes the KCV
     * according to the CMAC specification.</p>
     */
    inline const Aws::String& GetVerificationKeyCheckValue() const { return m_verificationKeyCheckValue; }
    template<typename VerificationKeyCheckValueT = Aws::String>
    void SetVerificationKeyCheckValue(VerificationKeyCheckValueT&& value) { m_verificationKeyCheckValueHasBeenSet = true; m_verificationKeyCheckValue = std::forward<VerificationKeyCheckValueT>(value); }
    template<typename VerificationKeyCheckValueT = Aws::String>
    VerifyPinDataResult& WithVerificationKeyCheckValue(VerificationKeyCheckValueT&& value) { SetVerificationKeyCheckValue(std::forward<VerificationKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the PEK that Amazon Web Services Payment
     * Cryptography uses for encrypted pin block generation.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    VerifyPinDataResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
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
    VerifyPinDataResult& WithEncryptionKeyCheckValue(EncryptionKeyCheckValueT&& value) { SetEncryptionKeyCheckValue(std::forward<EncryptionKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifyPinDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verificationKeyArn;
    bool m_verificationKeyArnHasBeenSet = false;

    Aws::String m_verificationKeyCheckValue;
    bool m_verificationKeyCheckValueHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_encryptionKeyCheckValue;
    bool m_encryptionKeyCheckValueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
