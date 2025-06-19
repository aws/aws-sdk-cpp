/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/SymmetricKeyAlgorithm.h>
#include <aws/payment-cryptography/model/KeyDerivationFunction.h>
#include <aws/payment-cryptography/model/KeyDerivationHashAlgorithm.h>
#include <aws/payment-cryptography/model/DiffieHellmanDerivationData.h>
#include <aws/payment-cryptography/model/KeyBlockHeaders.h>
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
   * <p>Key derivation parameter information for key material export using asymmetric
   * ECDH key exchange method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportDiffieHellmanTr31KeyBlock">AWS
   * API Reference</a></p>
   */
  class ExportDiffieHellmanTr31KeyBlock
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportDiffieHellmanTr31KeyBlock() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ExportDiffieHellmanTr31KeyBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportDiffieHellmanTr31KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyARN</code> of the asymmetric ECC key created within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Aws::String& GetPrivateKeyIdentifier() const { return m_privateKeyIdentifier; }
    inline bool PrivateKeyIdentifierHasBeenSet() const { return m_privateKeyIdentifierHasBeenSet; }
    template<typename PrivateKeyIdentifierT = Aws::String>
    void SetPrivateKeyIdentifier(PrivateKeyIdentifierT&& value) { m_privateKeyIdentifierHasBeenSet = true; m_privateKeyIdentifier = std::forward<PrivateKeyIdentifierT>(value); }
    template<typename PrivateKeyIdentifierT = Aws::String>
    ExportDiffieHellmanTr31KeyBlock& WithPrivateKeyIdentifier(PrivateKeyIdentifierT&& value) { SetPrivateKeyIdentifier(std::forward<PrivateKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyARN</code> of the CA that signed the
     * <code>PublicKeyCertificate</code> for the client's receiving ECC key pair.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const { return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    void SetCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::forward<CertificateAuthorityPublicKeyIdentifierT>(value); }
    template<typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
    ExportDiffieHellmanTr31KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::forward<CertificateAuthorityPublicKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key certificate of the client's receiving ECC key pair, in PEM
     * format (base64 encoded), to use for ECDH key derivation.</p>
     */
    inline const Aws::String& GetPublicKeyCertificate() const { return m_publicKeyCertificate; }
    inline bool PublicKeyCertificateHasBeenSet() const { return m_publicKeyCertificateHasBeenSet; }
    template<typename PublicKeyCertificateT = Aws::String>
    void SetPublicKeyCertificate(PublicKeyCertificateT&& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = std::forward<PublicKeyCertificateT>(value); }
    template<typename PublicKeyCertificateT = Aws::String>
    ExportDiffieHellmanTr31KeyBlock& WithPublicKeyCertificate(PublicKeyCertificateT&& value) { SetPublicKeyCertificate(std::forward<PublicKeyCertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key algorithm of the shared derived ECDH key.</p>
     */
    inline SymmetricKeyAlgorithm GetDeriveKeyAlgorithm() const { return m_deriveKeyAlgorithm; }
    inline bool DeriveKeyAlgorithmHasBeenSet() const { return m_deriveKeyAlgorithmHasBeenSet; }
    inline void SetDeriveKeyAlgorithm(SymmetricKeyAlgorithm value) { m_deriveKeyAlgorithmHasBeenSet = true; m_deriveKeyAlgorithm = value; }
    inline ExportDiffieHellmanTr31KeyBlock& WithDeriveKeyAlgorithm(SymmetricKeyAlgorithm value) { SetDeriveKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key derivation function to use when deriving a key using ECDH.</p>
     */
    inline KeyDerivationFunction GetKeyDerivationFunction() const { return m_keyDerivationFunction; }
    inline bool KeyDerivationFunctionHasBeenSet() const { return m_keyDerivationFunctionHasBeenSet; }
    inline void SetKeyDerivationFunction(KeyDerivationFunction value) { m_keyDerivationFunctionHasBeenSet = true; m_keyDerivationFunction = value; }
    inline ExportDiffieHellmanTr31KeyBlock& WithKeyDerivationFunction(KeyDerivationFunction value) { SetKeyDerivationFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash type to use when deriving a key using ECDH.</p>
     */
    inline KeyDerivationHashAlgorithm GetKeyDerivationHashAlgorithm() const { return m_keyDerivationHashAlgorithm; }
    inline bool KeyDerivationHashAlgorithmHasBeenSet() const { return m_keyDerivationHashAlgorithmHasBeenSet; }
    inline void SetKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value) { m_keyDerivationHashAlgorithmHasBeenSet = true; m_keyDerivationHashAlgorithm = value; }
    inline ExportDiffieHellmanTr31KeyBlock& WithKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value) { SetKeyDerivationHashAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shared information used when deriving a key using ECDH.</p>
     */
    inline const DiffieHellmanDerivationData& GetDerivationData() const { return m_derivationData; }
    inline bool DerivationDataHasBeenSet() const { return m_derivationDataHasBeenSet; }
    template<typename DerivationDataT = DiffieHellmanDerivationData>
    void SetDerivationData(DerivationDataT&& value) { m_derivationDataHasBeenSet = true; m_derivationData = std::forward<DerivationDataT>(value); }
    template<typename DerivationDataT = DiffieHellmanDerivationData>
    ExportDiffieHellmanTr31KeyBlock& WithDerivationData(DerivationDataT&& value) { SetDerivationData(std::forward<DerivationDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KeyBlockHeaders& GetKeyBlockHeaders() const { return m_keyBlockHeaders; }
    inline bool KeyBlockHeadersHasBeenSet() const { return m_keyBlockHeadersHasBeenSet; }
    template<typename KeyBlockHeadersT = KeyBlockHeaders>
    void SetKeyBlockHeaders(KeyBlockHeadersT&& value) { m_keyBlockHeadersHasBeenSet = true; m_keyBlockHeaders = std::forward<KeyBlockHeadersT>(value); }
    template<typename KeyBlockHeadersT = KeyBlockHeaders>
    ExportDiffieHellmanTr31KeyBlock& WithKeyBlockHeaders(KeyBlockHeadersT&& value) { SetKeyBlockHeaders(std::forward<KeyBlockHeadersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_privateKeyIdentifier;
    bool m_privateKeyIdentifierHasBeenSet = false;

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_publicKeyCertificate;
    bool m_publicKeyCertificateHasBeenSet = false;

    SymmetricKeyAlgorithm m_deriveKeyAlgorithm{SymmetricKeyAlgorithm::NOT_SET};
    bool m_deriveKeyAlgorithmHasBeenSet = false;

    KeyDerivationFunction m_keyDerivationFunction{KeyDerivationFunction::NOT_SET};
    bool m_keyDerivationFunctionHasBeenSet = false;

    KeyDerivationHashAlgorithm m_keyDerivationHashAlgorithm{KeyDerivationHashAlgorithm::NOT_SET};
    bool m_keyDerivationHashAlgorithmHasBeenSet = false;

    DiffieHellmanDerivationData m_derivationData;
    bool m_derivationDataHasBeenSet = false;

    KeyBlockHeaders m_keyBlockHeaders;
    bool m_keyBlockHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
