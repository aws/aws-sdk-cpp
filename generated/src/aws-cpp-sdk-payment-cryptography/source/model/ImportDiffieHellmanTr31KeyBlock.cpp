﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/ImportDiffieHellmanTr31KeyBlock.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {

ImportDiffieHellmanTr31KeyBlock::ImportDiffieHellmanTr31KeyBlock(JsonView jsonValue) { *this = jsonValue; }

ImportDiffieHellmanTr31KeyBlock& ImportDiffieHellmanTr31KeyBlock::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrivateKeyIdentifier")) {
    m_privateKeyIdentifier = jsonValue.GetString("PrivateKeyIdentifier");
    m_privateKeyIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CertificateAuthorityPublicKeyIdentifier")) {
    m_certificateAuthorityPublicKeyIdentifier = jsonValue.GetString("CertificateAuthorityPublicKeyIdentifier");
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublicKeyCertificate")) {
    m_publicKeyCertificate = jsonValue.GetString("PublicKeyCertificate");
    m_publicKeyCertificateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeriveKeyAlgorithm")) {
    m_deriveKeyAlgorithm = SymmetricKeyAlgorithmMapper::GetSymmetricKeyAlgorithmForName(jsonValue.GetString("DeriveKeyAlgorithm"));
    m_deriveKeyAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyDerivationFunction")) {
    m_keyDerivationFunction = KeyDerivationFunctionMapper::GetKeyDerivationFunctionForName(jsonValue.GetString("KeyDerivationFunction"));
    m_keyDerivationFunctionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyDerivationHashAlgorithm")) {
    m_keyDerivationHashAlgorithm =
        KeyDerivationHashAlgorithmMapper::GetKeyDerivationHashAlgorithmForName(jsonValue.GetString("KeyDerivationHashAlgorithm"));
    m_keyDerivationHashAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DerivationData")) {
    m_derivationData = jsonValue.GetObject("DerivationData");
    m_derivationDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WrappedKeyBlock")) {
    m_wrappedKeyBlock = jsonValue.GetString("WrappedKeyBlock");
    m_wrappedKeyBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportDiffieHellmanTr31KeyBlock::Jsonize() const {
  JsonValue payload;

  if (m_privateKeyIdentifierHasBeenSet) {
    payload.WithString("PrivateKeyIdentifier", m_privateKeyIdentifier);
  }

  if (m_certificateAuthorityPublicKeyIdentifierHasBeenSet) {
    payload.WithString("CertificateAuthorityPublicKeyIdentifier", m_certificateAuthorityPublicKeyIdentifier);
  }

  if (m_publicKeyCertificateHasBeenSet) {
    payload.WithString("PublicKeyCertificate", m_publicKeyCertificate);
  }

  if (m_deriveKeyAlgorithmHasBeenSet) {
    payload.WithString("DeriveKeyAlgorithm", SymmetricKeyAlgorithmMapper::GetNameForSymmetricKeyAlgorithm(m_deriveKeyAlgorithm));
  }

  if (m_keyDerivationFunctionHasBeenSet) {
    payload.WithString("KeyDerivationFunction", KeyDerivationFunctionMapper::GetNameForKeyDerivationFunction(m_keyDerivationFunction));
  }

  if (m_keyDerivationHashAlgorithmHasBeenSet) {
    payload.WithString("KeyDerivationHashAlgorithm",
                       KeyDerivationHashAlgorithmMapper::GetNameForKeyDerivationHashAlgorithm(m_keyDerivationHashAlgorithm));
  }

  if (m_derivationDataHasBeenSet) {
    payload.WithObject("DerivationData", m_derivationData.Jsonize());
  }

  if (m_wrappedKeyBlockHasBeenSet) {
    payload.WithString("WrappedKeyBlock", m_wrappedKeyBlock);
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
