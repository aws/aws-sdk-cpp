/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_PAYMENTCRYPTOGRAPHY_API TrustedCertificatePublicKey() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API TrustedCertificatePublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API TrustedCertificatePublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after a trusted public
     * key is imported.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = KeyAttributes>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = KeyAttributes>
    TrustedCertificatePublicKey& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline const Aws::String& GetPublicKeyCertificate() const { return m_publicKeyCertificate; }
    inline bool PublicKeyCertificateHasBeenSet() const { return m_publicKeyCertificateHasBeenSet; }
    template<typename PublicKeyCertificateT = Aws::String>
    void SetPublicKeyCertificate(PublicKeyCertificateT&& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = std::forward<PublicKeyCertificateT>(value); }
    template<typename PublicKeyCertificateT = Aws::String>
    TrustedCertificatePublicKey& WithPublicKeyCertificate(PublicKeyCertificateT&& value) { SetPublicKeyCertificate(std::forward<PublicKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>KeyARN</code> of the root public key certificate or certificate
     * chain that signs the trusted public key certificate import.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const { return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    void SetCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::forward<CertificateAuthorityPublicKeyIdentifierT>(value); }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    TrustedCertificatePublicKey& WithCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::forward<CertificateAuthorityPublicKeyIdentifierT>(value)); return *this;}
    ///@}
  private:

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_publicKeyCertificate;
    bool m_publicKeyCertificateHasBeenSet = false;

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
