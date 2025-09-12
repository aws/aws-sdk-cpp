/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/SigningAlgorithmType.h>
#include <aws/payment-cryptography/model/CertificateSubjectType.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class GetCertificateSigningRequestRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetCertificateSigningRequestRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCertificateSigningRequest"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Asymmetric key used for generating the certificate signing request</p>
     */
    inline const Aws::String& GetKeyIdentifier() const { return m_keyIdentifier; }
    inline bool KeyIdentifierHasBeenSet() const { return m_keyIdentifierHasBeenSet; }
    template<typename KeyIdentifierT = Aws::String>
    void SetKeyIdentifier(KeyIdentifierT&& value) { m_keyIdentifierHasBeenSet = true; m_keyIdentifier = std::forward<KeyIdentifierT>(value); }
    template<typename KeyIdentifierT = Aws::String>
    GetCertificateSigningRequestRequest& WithKeyIdentifier(KeyIdentifierT&& value) { SetKeyIdentifier(std::forward<KeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm used to generate the certificate signing request</p>
     */
    inline SigningAlgorithmType GetSigningAlgorithm() const { return m_signingAlgorithm; }
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }
    inline void SetSigningAlgorithm(SigningAlgorithmType value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }
    inline GetCertificateSigningRequestRequest& WithSigningAlgorithm(SigningAlgorithmType value) { SetSigningAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Certificate subject data</p>
     */
    inline const CertificateSubjectType& GetCertificateSubject() const { return m_certificateSubject; }
    inline bool CertificateSubjectHasBeenSet() const { return m_certificateSubjectHasBeenSet; }
    template<typename CertificateSubjectT = CertificateSubjectType>
    void SetCertificateSubject(CertificateSubjectT&& value) { m_certificateSubjectHasBeenSet = true; m_certificateSubject = std::forward<CertificateSubjectT>(value); }
    template<typename CertificateSubjectT = CertificateSubjectType>
    GetCertificateSigningRequestRequest& WithCertificateSubject(CertificateSubjectT&& value) { SetCertificateSubject(std::forward<CertificateSubjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyIdentifier;
    bool m_keyIdentifierHasBeenSet = false;

    SigningAlgorithmType m_signingAlgorithm{SigningAlgorithmType::NOT_SET};
    bool m_signingAlgorithmHasBeenSet = false;

    CertificateSubjectType m_certificateSubject;
    bool m_certificateSubjectHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
