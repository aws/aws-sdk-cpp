/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportDiffieHellmanTr31KeyBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

ExportDiffieHellmanTr31KeyBlock::ExportDiffieHellmanTr31KeyBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportDiffieHellmanTr31KeyBlock& ExportDiffieHellmanTr31KeyBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrivateKeyIdentifier"))
  {
    m_privateKeyIdentifier = jsonValue.GetString("PrivateKeyIdentifier");
    m_privateKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CertificateAuthorityPublicKeyIdentifier"))
  {
    m_certificateAuthorityPublicKeyIdentifier = jsonValue.GetString("CertificateAuthorityPublicKeyIdentifier");
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicKeyCertificate"))
  {
    m_publicKeyCertificate = jsonValue.GetString("PublicKeyCertificate");
    m_publicKeyCertificateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeriveKeyAlgorithm"))
  {
    m_deriveKeyAlgorithm = SymmetricKeyAlgorithmMapper::GetSymmetricKeyAlgorithmForName(jsonValue.GetString("DeriveKeyAlgorithm"));
    m_deriveKeyAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyDerivationFunction"))
  {
    m_keyDerivationFunction = KeyDerivationFunctionMapper::GetKeyDerivationFunctionForName(jsonValue.GetString("KeyDerivationFunction"));
    m_keyDerivationFunctionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyDerivationHashAlgorithm"))
  {
    m_keyDerivationHashAlgorithm = KeyDerivationHashAlgorithmMapper::GetKeyDerivationHashAlgorithmForName(jsonValue.GetString("KeyDerivationHashAlgorithm"));
    m_keyDerivationHashAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DerivationData"))
  {
    m_derivationData = jsonValue.GetObject("DerivationData");
    m_derivationDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyBlockHeaders"))
  {
    m_keyBlockHeaders = jsonValue.GetObject("KeyBlockHeaders");
    m_keyBlockHeadersHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportDiffieHellmanTr31KeyBlock::Jsonize() const
{
  JsonValue payload;

  if(m_privateKeyIdentifierHasBeenSet)
  {
   payload.WithString("PrivateKeyIdentifier", m_privateKeyIdentifier);

  }

  if(m_certificateAuthorityPublicKeyIdentifierHasBeenSet)
  {
   payload.WithString("CertificateAuthorityPublicKeyIdentifier", m_certificateAuthorityPublicKeyIdentifier);

  }

  if(m_publicKeyCertificateHasBeenSet)
  {
   payload.WithString("PublicKeyCertificate", m_publicKeyCertificate);

  }

  if(m_deriveKeyAlgorithmHasBeenSet)
  {
   payload.WithString("DeriveKeyAlgorithm", SymmetricKeyAlgorithmMapper::GetNameForSymmetricKeyAlgorithm(m_deriveKeyAlgorithm));
  }

  if(m_keyDerivationFunctionHasBeenSet)
  {
   payload.WithString("KeyDerivationFunction", KeyDerivationFunctionMapper::GetNameForKeyDerivationFunction(m_keyDerivationFunction));
  }

  if(m_keyDerivationHashAlgorithmHasBeenSet)
  {
   payload.WithString("KeyDerivationHashAlgorithm", KeyDerivationHashAlgorithmMapper::GetNameForKeyDerivationHashAlgorithm(m_keyDerivationHashAlgorithm));
  }

  if(m_derivationDataHasBeenSet)
  {
   payload.WithObject("DerivationData", m_derivationData.Jsonize());

  }

  if(m_keyBlockHeadersHasBeenSet)
  {
   payload.WithObject("KeyBlockHeaders", m_keyBlockHeaders.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
