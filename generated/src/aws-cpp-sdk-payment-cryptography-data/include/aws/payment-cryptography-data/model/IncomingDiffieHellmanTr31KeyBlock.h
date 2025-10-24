/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/DiffieHellmanDerivationData.h>
#include <aws/payment-cryptography-data/model/KeyDerivationFunction.h>
#include <aws/payment-cryptography-data/model/KeyDerivationHashAlgorithm.h>
#include <aws/payment-cryptography-data/model/SymmetricKeyAlgorithm.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptographyData {
namespace Model {

/**
 * <p>Parameter information of a TR31KeyBlock wrapped using an ECDH derived
 * key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/IncomingDiffieHellmanTr31KeyBlock">AWS
 * API Reference</a></p>
 */
class IncomingDiffieHellmanTr31KeyBlock {
 public:
  AWS_PAYMENTCRYPTOGRAPHYDATA_API IncomingDiffieHellmanTr31KeyBlock() = default;
  AWS_PAYMENTCRYPTOGRAPHYDATA_API IncomingDiffieHellmanTr31KeyBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API IncomingDiffieHellmanTr31KeyBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The <code>keyARN</code> of the asymmetric ECC key pair.</p>
   */
  inline const Aws::String& GetPrivateKeyIdentifier() const { return m_privateKeyIdentifier; }
  inline bool PrivateKeyIdentifierHasBeenSet() const { return m_privateKeyIdentifierHasBeenSet; }
  template <typename PrivateKeyIdentifierT = Aws::String>
  void SetPrivateKeyIdentifier(PrivateKeyIdentifierT&& value) {
    m_privateKeyIdentifierHasBeenSet = true;
    m_privateKeyIdentifier = std::forward<PrivateKeyIdentifierT>(value);
  }
  template <typename PrivateKeyIdentifierT = Aws::String>
  IncomingDiffieHellmanTr31KeyBlock& WithPrivateKeyIdentifier(PrivateKeyIdentifierT&& value) {
    SetPrivateKeyIdentifier(std::forward<PrivateKeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>keyArn</code> of the certificate that signed the client's
   * <code>PublicKeyCertificate</code>.</p>
   */
  inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const { return m_certificateAuthorityPublicKeyIdentifier; }
  inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
  template <typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
  void SetCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) {
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true;
    m_certificateAuthorityPublicKeyIdentifier = std::forward<CertificateAuthorityPublicKeyIdentifierT>(value);
  }
  template <typename CertificateAuthorityPublicKeyIdentifierT = Aws::String>
  IncomingDiffieHellmanTr31KeyBlock& WithCertificateAuthorityPublicKeyIdentifier(CertificateAuthorityPublicKeyIdentifierT&& value) {
    SetCertificateAuthorityPublicKeyIdentifier(std::forward<CertificateAuthorityPublicKeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client's public key certificate in PEM format (base64 encoded) to use for
   * ECDH key derivation.</p>
   */
  inline const Aws::String& GetPublicKeyCertificate() const { return m_publicKeyCertificate; }
  inline bool PublicKeyCertificateHasBeenSet() const { return m_publicKeyCertificateHasBeenSet; }
  template <typename PublicKeyCertificateT = Aws::String>
  void SetPublicKeyCertificate(PublicKeyCertificateT&& value) {
    m_publicKeyCertificateHasBeenSet = true;
    m_publicKeyCertificate = std::forward<PublicKeyCertificateT>(value);
  }
  template <typename PublicKeyCertificateT = Aws::String>
  IncomingDiffieHellmanTr31KeyBlock& WithPublicKeyCertificate(PublicKeyCertificateT&& value) {
    SetPublicKeyCertificate(std::forward<PublicKeyCertificateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key algorithm of the derived ECDH key.</p>
   */
  inline SymmetricKeyAlgorithm GetDeriveKeyAlgorithm() const { return m_deriveKeyAlgorithm; }
  inline bool DeriveKeyAlgorithmHasBeenSet() const { return m_deriveKeyAlgorithmHasBeenSet; }
  inline void SetDeriveKeyAlgorithm(SymmetricKeyAlgorithm value) {
    m_deriveKeyAlgorithmHasBeenSet = true;
    m_deriveKeyAlgorithm = value;
  }
  inline IncomingDiffieHellmanTr31KeyBlock& WithDeriveKeyAlgorithm(SymmetricKeyAlgorithm value) {
    SetDeriveKeyAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key derivation function to use for deriving a key using ECDH.</p>
   */
  inline KeyDerivationFunction GetKeyDerivationFunction() const { return m_keyDerivationFunction; }
  inline bool KeyDerivationFunctionHasBeenSet() const { return m_keyDerivationFunctionHasBeenSet; }
  inline void SetKeyDerivationFunction(KeyDerivationFunction value) {
    m_keyDerivationFunctionHasBeenSet = true;
    m_keyDerivationFunction = value;
  }
  inline IncomingDiffieHellmanTr31KeyBlock& WithKeyDerivationFunction(KeyDerivationFunction value) {
    SetKeyDerivationFunction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hash type to use for deriving a key using ECDH.</p>
   */
  inline KeyDerivationHashAlgorithm GetKeyDerivationHashAlgorithm() const { return m_keyDerivationHashAlgorithm; }
  inline bool KeyDerivationHashAlgorithmHasBeenSet() const { return m_keyDerivationHashAlgorithmHasBeenSet; }
  inline void SetKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value) {
    m_keyDerivationHashAlgorithmHasBeenSet = true;
    m_keyDerivationHashAlgorithm = value;
  }
  inline IncomingDiffieHellmanTr31KeyBlock& WithKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm value) {
    SetKeyDerivationHashAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{

  inline const DiffieHellmanDerivationData& GetDerivationData() const { return m_derivationData; }
  inline bool DerivationDataHasBeenSet() const { return m_derivationDataHasBeenSet; }
  template <typename DerivationDataT = DiffieHellmanDerivationData>
  void SetDerivationData(DerivationDataT&& value) {
    m_derivationDataHasBeenSet = true;
    m_derivationData = std::forward<DerivationDataT>(value);
  }
  template <typename DerivationDataT = DiffieHellmanDerivationData>
  IncomingDiffieHellmanTr31KeyBlock& WithDerivationData(DerivationDataT&& value) {
    SetDerivationData(std::forward<DerivationDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The WrappedKeyBlock containing the transaction key wrapped using an ECDH
   * dervied key. </p>
   */
  inline const Aws::String& GetWrappedKeyBlock() const { return m_wrappedKeyBlock; }
  inline bool WrappedKeyBlockHasBeenSet() const { return m_wrappedKeyBlockHasBeenSet; }
  template <typename WrappedKeyBlockT = Aws::String>
  void SetWrappedKeyBlock(WrappedKeyBlockT&& value) {
    m_wrappedKeyBlockHasBeenSet = true;
    m_wrappedKeyBlock = std::forward<WrappedKeyBlockT>(value);
  }
  template <typename WrappedKeyBlockT = Aws::String>
  IncomingDiffieHellmanTr31KeyBlock& WithWrappedKeyBlock(WrappedKeyBlockT&& value) {
    SetWrappedKeyBlock(std::forward<WrappedKeyBlockT>(value));
    return *this;
  }
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

  Aws::String m_wrappedKeyBlock;
  bool m_wrappedKeyBlockHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
