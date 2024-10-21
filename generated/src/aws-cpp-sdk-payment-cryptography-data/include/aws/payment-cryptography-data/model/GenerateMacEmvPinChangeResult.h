/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/VisaAmexDerivationOutputs.h>
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
  class GenerateMacEmvPinChangeResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeResult();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the <code>keyArn</code> of the PEK protecting the incoming new
     * encrypted PIN block.</p>
     */
    inline const Aws::String& GetNewPinPekArn() const{ return m_newPinPekArn; }
    inline void SetNewPinPekArn(const Aws::String& value) { m_newPinPekArn = value; }
    inline void SetNewPinPekArn(Aws::String&& value) { m_newPinPekArn = std::move(value); }
    inline void SetNewPinPekArn(const char* value) { m_newPinPekArn.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithNewPinPekArn(const Aws::String& value) { SetNewPinPekArn(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithNewPinPekArn(Aws::String&& value) { SetNewPinPekArn(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithNewPinPekArn(const char* value) { SetNewPinPekArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>keyArn</code> of the IMK-SMI used by the operation.</p>
     */
    inline const Aws::String& GetSecureMessagingIntegrityKeyArn() const{ return m_secureMessagingIntegrityKeyArn; }
    inline void SetSecureMessagingIntegrityKeyArn(const Aws::String& value) { m_secureMessagingIntegrityKeyArn = value; }
    inline void SetSecureMessagingIntegrityKeyArn(Aws::String&& value) { m_secureMessagingIntegrityKeyArn = std::move(value); }
    inline void SetSecureMessagingIntegrityKeyArn(const char* value) { m_secureMessagingIntegrityKeyArn.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyArn(const Aws::String& value) { SetSecureMessagingIntegrityKeyArn(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyArn(Aws::String&& value) { SetSecureMessagingIntegrityKeyArn(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyArn(const char* value) { SetSecureMessagingIntegrityKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>keyArn</code> of the IMK-SMC used by the operation.</p>
     */
    inline const Aws::String& GetSecureMessagingConfidentialityKeyArn() const{ return m_secureMessagingConfidentialityKeyArn; }
    inline void SetSecureMessagingConfidentialityKeyArn(const Aws::String& value) { m_secureMessagingConfidentialityKeyArn = value; }
    inline void SetSecureMessagingConfidentialityKeyArn(Aws::String&& value) { m_secureMessagingConfidentialityKeyArn = std::move(value); }
    inline void SetSecureMessagingConfidentialityKeyArn(const char* value) { m_secureMessagingConfidentialityKeyArn.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyArn(const Aws::String& value) { SetSecureMessagingConfidentialityKeyArn(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyArn(Aws::String&& value) { SetSecureMessagingConfidentialityKeyArn(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyArn(const char* value) { SetSecureMessagingConfidentialityKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the mac of the issuer script containing message data and appended
     * target encrypted pin block in ISO2 format.</p>
     */
    inline const Aws::String& GetMac() const{ return m_mac; }
    inline void SetMac(const Aws::String& value) { m_mac = value; }
    inline void SetMac(Aws::String&& value) { m_mac = std::move(value); }
    inline void SetMac(const char* value) { m_mac.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithMac(const Aws::String& value) { SetMac(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithMac(Aws::String&& value) { SetMac(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithMac(const char* value) { SetMac(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the incoming new encrpted PIN block.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const{ return m_encryptedPinBlock; }
    inline void SetEncryptedPinBlock(const Aws::String& value) { m_encryptedPinBlock = value; }
    inline void SetEncryptedPinBlock(Aws::String&& value) { m_encryptedPinBlock = std::move(value); }
    inline void SetEncryptedPinBlock(const char* value) { m_encryptedPinBlock.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithEncryptedPinBlock(const Aws::String& value) { SetEncryptedPinBlock(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithEncryptedPinBlock(Aws::String&& value) { SetEncryptedPinBlock(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithEncryptedPinBlock(const char* value) { SetEncryptedPinBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the PEK uprotecting the incoming new encrypted
     * PIN block.</p>
     */
    inline const Aws::String& GetNewPinPekKeyCheckValue() const{ return m_newPinPekKeyCheckValue; }
    inline void SetNewPinPekKeyCheckValue(const Aws::String& value) { m_newPinPekKeyCheckValue = value; }
    inline void SetNewPinPekKeyCheckValue(Aws::String&& value) { m_newPinPekKeyCheckValue = std::move(value); }
    inline void SetNewPinPekKeyCheckValue(const char* value) { m_newPinPekKeyCheckValue.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithNewPinPekKeyCheckValue(const Aws::String& value) { SetNewPinPekKeyCheckValue(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithNewPinPekKeyCheckValue(Aws::String&& value) { SetNewPinPekKeyCheckValue(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithNewPinPekKeyCheckValue(const char* value) { SetNewPinPekKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the SMI issuer master key used by the
     * operation.</p>
     */
    inline const Aws::String& GetSecureMessagingIntegrityKeyCheckValue() const{ return m_secureMessagingIntegrityKeyCheckValue; }
    inline void SetSecureMessagingIntegrityKeyCheckValue(const Aws::String& value) { m_secureMessagingIntegrityKeyCheckValue = value; }
    inline void SetSecureMessagingIntegrityKeyCheckValue(Aws::String&& value) { m_secureMessagingIntegrityKeyCheckValue = std::move(value); }
    inline void SetSecureMessagingIntegrityKeyCheckValue(const char* value) { m_secureMessagingIntegrityKeyCheckValue.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyCheckValue(const Aws::String& value) { SetSecureMessagingIntegrityKeyCheckValue(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyCheckValue(Aws::String&& value) { SetSecureMessagingIntegrityKeyCheckValue(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyCheckValue(const char* value) { SetSecureMessagingIntegrityKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the SMC issuer master key used by the
     * operation.</p>
     */
    inline const Aws::String& GetSecureMessagingConfidentialityKeyCheckValue() const{ return m_secureMessagingConfidentialityKeyCheckValue; }
    inline void SetSecureMessagingConfidentialityKeyCheckValue(const Aws::String& value) { m_secureMessagingConfidentialityKeyCheckValue = value; }
    inline void SetSecureMessagingConfidentialityKeyCheckValue(Aws::String&& value) { m_secureMessagingConfidentialityKeyCheckValue = std::move(value); }
    inline void SetSecureMessagingConfidentialityKeyCheckValue(const char* value) { m_secureMessagingConfidentialityKeyCheckValue.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyCheckValue(const Aws::String& value) { SetSecureMessagingConfidentialityKeyCheckValue(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyCheckValue(Aws::String&& value) { SetSecureMessagingConfidentialityKeyCheckValue(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyCheckValue(const char* value) { SetSecureMessagingConfidentialityKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute values used for Amex and Visa derivation methods.</p>
     */
    inline const VisaAmexDerivationOutputs& GetVisaAmexDerivationOutputs() const{ return m_visaAmexDerivationOutputs; }
    inline void SetVisaAmexDerivationOutputs(const VisaAmexDerivationOutputs& value) { m_visaAmexDerivationOutputs = value; }
    inline void SetVisaAmexDerivationOutputs(VisaAmexDerivationOutputs&& value) { m_visaAmexDerivationOutputs = std::move(value); }
    inline GenerateMacEmvPinChangeResult& WithVisaAmexDerivationOutputs(const VisaAmexDerivationOutputs& value) { SetVisaAmexDerivationOutputs(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithVisaAmexDerivationOutputs(VisaAmexDerivationOutputs&& value) { SetVisaAmexDerivationOutputs(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateMacEmvPinChangeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateMacEmvPinChangeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateMacEmvPinChangeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_newPinPekArn;

    Aws::String m_secureMessagingIntegrityKeyArn;

    Aws::String m_secureMessagingConfidentialityKeyArn;

    Aws::String m_mac;

    Aws::String m_encryptedPinBlock;

    Aws::String m_newPinPekKeyCheckValue;

    Aws::String m_secureMessagingIntegrityKeyCheckValue;

    Aws::String m_secureMessagingConfidentialityKeyCheckValue;

    VisaAmexDerivationOutputs m_visaAmexDerivationOutputs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
