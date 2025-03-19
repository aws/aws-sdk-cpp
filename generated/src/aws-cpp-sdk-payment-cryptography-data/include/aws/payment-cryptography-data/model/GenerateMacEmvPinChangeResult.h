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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeResult() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API GenerateMacEmvPinChangeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the <code>keyArn</code> of the PEK protecting the incoming new
     * encrypted PIN block.</p>
     */
    inline const Aws::String& GetNewPinPekArn() const { return m_newPinPekArn; }
    template<typename NewPinPekArnT = Aws::String>
    void SetNewPinPekArn(NewPinPekArnT&& value) { m_newPinPekArnHasBeenSet = true; m_newPinPekArn = std::forward<NewPinPekArnT>(value); }
    template<typename NewPinPekArnT = Aws::String>
    GenerateMacEmvPinChangeResult& WithNewPinPekArn(NewPinPekArnT&& value) { SetNewPinPekArn(std::forward<NewPinPekArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>keyArn</code> of the IMK-SMI used by the operation.</p>
     */
    inline const Aws::String& GetSecureMessagingIntegrityKeyArn() const { return m_secureMessagingIntegrityKeyArn; }
    template<typename SecureMessagingIntegrityKeyArnT = Aws::String>
    void SetSecureMessagingIntegrityKeyArn(SecureMessagingIntegrityKeyArnT&& value) { m_secureMessagingIntegrityKeyArnHasBeenSet = true; m_secureMessagingIntegrityKeyArn = std::forward<SecureMessagingIntegrityKeyArnT>(value); }
    template<typename SecureMessagingIntegrityKeyArnT = Aws::String>
    GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyArn(SecureMessagingIntegrityKeyArnT&& value) { SetSecureMessagingIntegrityKeyArn(std::forward<SecureMessagingIntegrityKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>keyArn</code> of the IMK-SMC used by the operation.</p>
     */
    inline const Aws::String& GetSecureMessagingConfidentialityKeyArn() const { return m_secureMessagingConfidentialityKeyArn; }
    template<typename SecureMessagingConfidentialityKeyArnT = Aws::String>
    void SetSecureMessagingConfidentialityKeyArn(SecureMessagingConfidentialityKeyArnT&& value) { m_secureMessagingConfidentialityKeyArnHasBeenSet = true; m_secureMessagingConfidentialityKeyArn = std::forward<SecureMessagingConfidentialityKeyArnT>(value); }
    template<typename SecureMessagingConfidentialityKeyArnT = Aws::String>
    GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyArn(SecureMessagingConfidentialityKeyArnT&& value) { SetSecureMessagingConfidentialityKeyArn(std::forward<SecureMessagingConfidentialityKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the mac of the issuer script containing message data and appended
     * target encrypted pin block in ISO2 format.</p>
     */
    inline const Aws::String& GetMac() const { return m_mac; }
    template<typename MacT = Aws::String>
    void SetMac(MacT&& value) { m_macHasBeenSet = true; m_mac = std::forward<MacT>(value); }
    template<typename MacT = Aws::String>
    GenerateMacEmvPinChangeResult& WithMac(MacT&& value) { SetMac(std::forward<MacT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the incoming new encrpted PIN block.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const { return m_encryptedPinBlock; }
    template<typename EncryptedPinBlockT = Aws::String>
    void SetEncryptedPinBlock(EncryptedPinBlockT&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::forward<EncryptedPinBlockT>(value); }
    template<typename EncryptedPinBlockT = Aws::String>
    GenerateMacEmvPinChangeResult& WithEncryptedPinBlock(EncryptedPinBlockT&& value) { SetEncryptedPinBlock(std::forward<EncryptedPinBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the PEK uprotecting the incoming new encrypted
     * PIN block.</p>
     */
    inline const Aws::String& GetNewPinPekKeyCheckValue() const { return m_newPinPekKeyCheckValue; }
    template<typename NewPinPekKeyCheckValueT = Aws::String>
    void SetNewPinPekKeyCheckValue(NewPinPekKeyCheckValueT&& value) { m_newPinPekKeyCheckValueHasBeenSet = true; m_newPinPekKeyCheckValue = std::forward<NewPinPekKeyCheckValueT>(value); }
    template<typename NewPinPekKeyCheckValueT = Aws::String>
    GenerateMacEmvPinChangeResult& WithNewPinPekKeyCheckValue(NewPinPekKeyCheckValueT&& value) { SetNewPinPekKeyCheckValue(std::forward<NewPinPekKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the SMI issuer master key used by the
     * operation.</p>
     */
    inline const Aws::String& GetSecureMessagingIntegrityKeyCheckValue() const { return m_secureMessagingIntegrityKeyCheckValue; }
    template<typename SecureMessagingIntegrityKeyCheckValueT = Aws::String>
    void SetSecureMessagingIntegrityKeyCheckValue(SecureMessagingIntegrityKeyCheckValueT&& value) { m_secureMessagingIntegrityKeyCheckValueHasBeenSet = true; m_secureMessagingIntegrityKeyCheckValue = std::forward<SecureMessagingIntegrityKeyCheckValueT>(value); }
    template<typename SecureMessagingIntegrityKeyCheckValueT = Aws::String>
    GenerateMacEmvPinChangeResult& WithSecureMessagingIntegrityKeyCheckValue(SecureMessagingIntegrityKeyCheckValueT&& value) { SetSecureMessagingIntegrityKeyCheckValue(std::forward<SecureMessagingIntegrityKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the SMC issuer master key used by the
     * operation.</p>
     */
    inline const Aws::String& GetSecureMessagingConfidentialityKeyCheckValue() const { return m_secureMessagingConfidentialityKeyCheckValue; }
    template<typename SecureMessagingConfidentialityKeyCheckValueT = Aws::String>
    void SetSecureMessagingConfidentialityKeyCheckValue(SecureMessagingConfidentialityKeyCheckValueT&& value) { m_secureMessagingConfidentialityKeyCheckValueHasBeenSet = true; m_secureMessagingConfidentialityKeyCheckValue = std::forward<SecureMessagingConfidentialityKeyCheckValueT>(value); }
    template<typename SecureMessagingConfidentialityKeyCheckValueT = Aws::String>
    GenerateMacEmvPinChangeResult& WithSecureMessagingConfidentialityKeyCheckValue(SecureMessagingConfidentialityKeyCheckValueT&& value) { SetSecureMessagingConfidentialityKeyCheckValue(std::forward<SecureMessagingConfidentialityKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute values used for Amex and Visa derivation methods.</p>
     */
    inline const VisaAmexDerivationOutputs& GetVisaAmexDerivationOutputs() const { return m_visaAmexDerivationOutputs; }
    template<typename VisaAmexDerivationOutputsT = VisaAmexDerivationOutputs>
    void SetVisaAmexDerivationOutputs(VisaAmexDerivationOutputsT&& value) { m_visaAmexDerivationOutputsHasBeenSet = true; m_visaAmexDerivationOutputs = std::forward<VisaAmexDerivationOutputsT>(value); }
    template<typename VisaAmexDerivationOutputsT = VisaAmexDerivationOutputs>
    GenerateMacEmvPinChangeResult& WithVisaAmexDerivationOutputs(VisaAmexDerivationOutputsT&& value) { SetVisaAmexDerivationOutputs(std::forward<VisaAmexDerivationOutputsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateMacEmvPinChangeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_newPinPekArn;
    bool m_newPinPekArnHasBeenSet = false;

    Aws::String m_secureMessagingIntegrityKeyArn;
    bool m_secureMessagingIntegrityKeyArnHasBeenSet = false;

    Aws::String m_secureMessagingConfidentialityKeyArn;
    bool m_secureMessagingConfidentialityKeyArnHasBeenSet = false;

    Aws::String m_mac;
    bool m_macHasBeenSet = false;

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    Aws::String m_newPinPekKeyCheckValue;
    bool m_newPinPekKeyCheckValueHasBeenSet = false;

    Aws::String m_secureMessagingIntegrityKeyCheckValue;
    bool m_secureMessagingIntegrityKeyCheckValueHasBeenSet = false;

    Aws::String m_secureMessagingConfidentialityKeyCheckValue;
    bool m_secureMessagingConfidentialityKeyCheckValueHasBeenSet = false;

    VisaAmexDerivationOutputs m_visaAmexDerivationOutputs;
    bool m_visaAmexDerivationOutputsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
