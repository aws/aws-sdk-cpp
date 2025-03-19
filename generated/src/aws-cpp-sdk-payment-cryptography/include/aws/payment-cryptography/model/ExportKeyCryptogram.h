/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/WrappingKeySpec.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>Parameter information for key material export using asymmetric RSA wrap and
   * unwrap key exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportKeyCryptogram">AWS
   * API Reference</a></p>
   */
  class ExportKeyCryptogram
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyCryptogram() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyCryptogram(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyCryptogram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const { return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    void SetCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::forward<CertificateAuthorityPublicKeyIdentifierT>(value); }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    ExportKeyCryptogram& WithCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::forward<CertificateAuthorityPublicKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline const Aws::String& GetWrappingKeyCertificate() const { return m_wrappingKeyCertificate; }
    inline bool WrappingKeyCertificateHasBeenSet() const { return m_wrappingKeyCertificateHasBeenSet; }
    template<typename WrappingKeyCertificateT = Aws::String>
    void SetWrappingKeyCertificate(WrappingKeyCertificateT&& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = std::forward<WrappingKeyCertificateT>(value); }
    template<typename WrappingKeyCertificateT = Aws::String>
    ExportKeyCryptogram& WithWrappingKeyCertificate(WrappingKeyCertificateT&& value) { SetWrappingKeyCertificate(std::forward<WrappingKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wrapping spec for the key under export.</p>
     */
    inline WrappingKeySpec GetWrappingSpec() const { return m_wrappingSpec; }
    inline bool WrappingSpecHasBeenSet() const { return m_wrappingSpecHasBeenSet; }
    inline void SetWrappingSpec(WrappingKeySpec value) { m_wrappingSpecHasBeenSet = true; m_wrappingSpec = value; }
    inline ExportKeyCryptogram& WithWrappingSpec(WrappingKeySpec value) { SetWrappingSpec(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_wrappingKeyCertificate;
    bool m_wrappingKeyCertificateHasBeenSet = false;

    WrappingKeySpec m_wrappingSpec{WrappingKeySpec::NOT_SET};
    bool m_wrappingSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
