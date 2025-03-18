/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/SymmetricKeyAlgorithm.h>
#include <aws/payment-cryptography-data/model/KeyDerivationFunction.h>
#include <aws/payment-cryptography-data/model/KeyDerivationHashAlgorithm.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameters required to establish ECDH based key exchange.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/EcdhDerivationAttributes">AWS
   * API Reference</a></p>
   */
  class EcdhDerivationAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EcdhDerivationAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EcdhDerivationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EcdhDerivationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyArn</code> of the certificate that signed the client's
     * <code>PublicKeyCertificate</code>.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const { return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    void SetCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::forward<CertificateAuthorityPublicKeyIdentifierT>(value); }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    EcdhDerivationAttributes& WithCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::forward<CertificateAuthorityPublicKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client's public key certificate in PEM format (base64 encoded) to use for
     * ECDH key derivation.</p>
     */
    inline const Aws::String& GetPublicKeyCertificate() const { return m_publicKeyCertificate; }
    inline bool PublicKeyCertificateHasBeenSet() const { return m_publicKeyCertificateHasBeenSet; }
    template<typename PublicKeyCertificateT = Aws::String>
    void SetPublicKeyCertificate(PublicKeyCertificateT&& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = std::forward<PublicKeyCertificateT>(value); }
    template<typename PublicKeyCertificateT = Aws::String>
    EcdhDerivationAttributes& WithPublicKeyCertificate(PublicKeyCertificateT&& value) { SetPublicKeyCertificate(std::forward<PublicKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key algorithm of the derived ECDH key.</p>
     */
    inline SymmetricKeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(SymmetricKeyAlgorithm value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline EcdhDerivationAttributes& WithKeyAlgorithm(SymmetricKeyAlgorithm value) { SetKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key derivation function to use for deriving a key using ECDH.</p>
     */
    inline KeyDerivationFunction GetKeyDerivationFunction() const { return m_keyDerivationFunction; }
    inline bool KeyDerivationFunctionHasBeenSet() const { return m_keyDerivationFunctionHasBeenSet; }
    inline void SetKeyDerivationFunction(KeyDerivationFunction value) { m_keyDerivationFunctionHasBeenSet = true; m_keyDerivationFunction = value; }
    inline EcdhDerivationAttributes& WithKeyDerivationFunction(KeyDerivationFunction value) { SetKeyDerivationFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash type to use for deriving a key using ECDH.</p>
     */
    inline KeyDerivationHashAlgorithm GetKeyDerivationHashAlgorithm() const { return m_keyDerivationHashAlgorithm; }
    inline bool KeyDerivationHashAlgorithmHasBeenSet() const { return m_keyDerivationHashAlgorithmHasBeenSet; }
    inline void SetKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value) { m_keyDerivationHashAlgorithmHasBeenSet = true; m_keyDerivationHashAlgorithm = value; }
    inline EcdhDerivationAttributes& WithKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value) { SetKeyDerivationHashAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A byte string containing information that binds the ECDH derived key to the
     * two parties involved or to the context of the key.</p> <p>It may include details
     * like identities of the two parties deriving the key, context of the operation,
     * session IDs, and optionally a nonce. It must not contain zero bytes, and
     * re-using shared information for multiple ECDH key derivations is not
     * recommended.</p>
     */
    inline const Aws::String& GetSharedInformation() const { return m_sharedInformation; }
    inline bool SharedInformationHasBeenSet() const { return m_sharedInformationHasBeenSet; }
    template<typename SharedInformationT = Aws::String>
    void SetSharedInformation(SharedInformationT&& value) { m_sharedInformationHasBeenSet = true; m_sharedInformation = std::forward<SharedInformationT>(value); }
    template<typename SharedInformationT = Aws::String>
    EcdhDerivationAttributes& WithSharedInformation(SharedInformationT&& value) { SetSharedInformation(std::forward<SharedInformationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_publicKeyCertificate;
    bool m_publicKeyCertificateHasBeenSet = false;

    SymmetricKeyAlgorithm m_keyAlgorithm{SymmetricKeyAlgorithm::NOT_SET};
    bool m_keyAlgorithmHasBeenSet = false;

    KeyDerivationFunction m_keyDerivationFunction{KeyDerivationFunction::NOT_SET};
    bool m_keyDerivationFunctionHasBeenSet = false;

    KeyDerivationHashAlgorithm m_keyDerivationHashAlgorithm{KeyDerivationHashAlgorithm::NOT_SET};
    bool m_keyDerivationHashAlgorithmHasBeenSet = false;

    Aws::String m_sharedInformation;
    bool m_sharedInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
