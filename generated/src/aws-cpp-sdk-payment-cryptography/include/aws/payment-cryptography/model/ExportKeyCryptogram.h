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
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyCryptogram();
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyCryptogram(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyCryptogram& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const{ return m_certificateAuthorityPublicKeyIdentifier; }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = value; }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(const char* value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline ExportKeyCryptogram& WithCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline ExportKeyCryptogram& WithCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the certificate chain that signs the wrapping key
     * certificate during RSA wrap and unwrap key export.</p>
     */
    inline ExportKeyCryptogram& WithCertificateAuthorityPublicKeyIdentifier(const char* value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}


    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline const Aws::String& GetWrappingKeyCertificate() const{ return m_wrappingKeyCertificate; }

    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline bool WrappingKeyCertificateHasBeenSet() const { return m_wrappingKeyCertificateHasBeenSet; }

    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline void SetWrappingKeyCertificate(const Aws::String& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = value; }

    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline void SetWrappingKeyCertificate(Aws::String&& value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate = std::move(value); }

    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline void SetWrappingKeyCertificate(const char* value) { m_wrappingKeyCertificateHasBeenSet = true; m_wrappingKeyCertificate.assign(value); }

    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline ExportKeyCryptogram& WithWrappingKeyCertificate(const Aws::String& value) { SetWrappingKeyCertificate(value); return *this;}

    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline ExportKeyCryptogram& WithWrappingKeyCertificate(Aws::String&& value) { SetWrappingKeyCertificate(std::move(value)); return *this;}

    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded). Amazon Web
     * Services Payment Cryptography uses this certificate to wrap the key under
     * export.</p>
     */
    inline ExportKeyCryptogram& WithWrappingKeyCertificate(const char* value) { SetWrappingKeyCertificate(value); return *this;}


    /**
     * <p>The wrapping spec for the key under export.</p>
     */
    inline const WrappingKeySpec& GetWrappingSpec() const{ return m_wrappingSpec; }

    /**
     * <p>The wrapping spec for the key under export.</p>
     */
    inline bool WrappingSpecHasBeenSet() const { return m_wrappingSpecHasBeenSet; }

    /**
     * <p>The wrapping spec for the key under export.</p>
     */
    inline void SetWrappingSpec(const WrappingKeySpec& value) { m_wrappingSpecHasBeenSet = true; m_wrappingSpec = value; }

    /**
     * <p>The wrapping spec for the key under export.</p>
     */
    inline void SetWrappingSpec(WrappingKeySpec&& value) { m_wrappingSpecHasBeenSet = true; m_wrappingSpec = std::move(value); }

    /**
     * <p>The wrapping spec for the key under export.</p>
     */
    inline ExportKeyCryptogram& WithWrappingSpec(const WrappingKeySpec& value) { SetWrappingSpec(value); return *this;}

    /**
     * <p>The wrapping spec for the key under export.</p>
     */
    inline ExportKeyCryptogram& WithWrappingSpec(WrappingKeySpec&& value) { SetWrappingSpec(std::move(value)); return *this;}

  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_wrappingKeyCertificate;
    bool m_wrappingKeyCertificateHasBeenSet = false;

    WrappingKeySpec m_wrappingSpec;
    bool m_wrappingSpecHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
