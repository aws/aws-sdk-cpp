/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
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
   * <p>Parameter information for trusted public key certificate
   * import.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/TrustedCertificatePublicKey">AWS
   * API Reference</a></p>
   */
  class TrustedCertificatePublicKey
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API TrustedCertificatePublicKey();
    AWS_PAYMENTCRYPTOGRAPHY_API TrustedCertificatePublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API TrustedCertificatePublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const{ return m_certificateAuthorityPublicKeyIdentifier; }

    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = value; }

    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline void SetCertificateAuthorityPublicKeyIdentifier(const char* value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline TrustedCertificatePublicKey& WithCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline TrustedCertificatePublicKey& WithCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline TrustedCertificatePublicKey& WithCertificateAuthorityPublicKeyIdentifier(const char* value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}


    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after a trusted public
     * key is imported.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const{ return m_keyAttributes; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after a trusted public
     * key is imported.</p>
     */
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after a trusted public
     * key is imported.</p>
     */
    inline void SetKeyAttributes(const KeyAttributes& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = value; }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after a trusted public
     * key is imported.</p>
     */
    inline void SetKeyAttributes(KeyAttributes&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::move(value); }

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after a trusted public
     * key is imported.</p>
     */
    inline TrustedCertificatePublicKey& WithKeyAttributes(const KeyAttributes& value) { SetKeyAttributes(value); return *this;}

    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after a trusted public
     * key is imported.</p>
     */
    inline TrustedCertificatePublicKey& WithKeyAttributes(KeyAttributes&& value) { SetKeyAttributes(std::move(value)); return *this;}


    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline const Aws::String& GetPublicKeyCertificate() const{ return m_publicKeyCertificate; }

    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline bool PublicKeyCertificateHasBeenSet() const { return m_publicKeyCertificateHasBeenSet; }

    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline void SetPublicKeyCertificate(const Aws::String& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = value; }

    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline void SetPublicKeyCertificate(Aws::String&& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = std::move(value); }

    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline void SetPublicKeyCertificate(const char* value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate.assign(value); }

    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline TrustedCertificatePublicKey& WithPublicKeyCertificate(const Aws::String& value) { SetPublicKeyCertificate(value); return *this;}

    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline TrustedCertificatePublicKey& WithPublicKeyCertificate(Aws::String&& value) { SetPublicKeyCertificate(std::move(value)); return *this;}

    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline TrustedCertificatePublicKey& WithPublicKeyCertificate(const char* value) { SetPublicKeyCertificate(value); return *this;}

  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_publicKeyCertificate;
    bool m_publicKeyCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
