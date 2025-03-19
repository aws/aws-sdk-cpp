/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/EcdhDerivationAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

EcdhDerivationAttributes::EcdhDerivationAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

EcdhDerivationAttributes& EcdhDerivationAttributes::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("KeyAlgorithm"))
  {
    m_keyAlgorithm = SymmetricKeyAlgorithmMapper::GetSymmetricKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));
    m_keyAlgorithmHasBeenSet = true;
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
  if(jsonValue.ValueExists("SharedInformation"))
  {
    m_sharedInformation = jsonValue.GetString("SharedInformation");
    m_sharedInformationHasBeenSet = true;
  }
  return *this;
}

JsonValue EcdhDerivationAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityPublicKeyIdentifierHasBeenSet)
  {
   payload.WithString("CertificateAuthorityPublicKeyIdentifier", m_certificateAuthorityPublicKeyIdentifier);

  }

  if(m_publicKeyCertificateHasBeenSet)
  {
   payload.WithString("PublicKeyCertificate", m_publicKeyCertificate);

  }

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("KeyAlgorithm", SymmetricKeyAlgorithmMapper::GetNameForSymmetricKeyAlgorithm(m_keyAlgorithm));
  }

  if(m_keyDerivationFunctionHasBeenSet)
  {
   payload.WithString("KeyDerivationFunction", KeyDerivationFunctionMapper::GetNameForKeyDerivationFunction(m_keyDerivationFunction));
  }

  if(m_keyDerivationHashAlgorithmHasBeenSet)
  {
   payload.WithString("KeyDerivationHashAlgorithm", KeyDerivationHashAlgorithmMapper::GetNameForKeyDerivationHashAlgorithm(m_keyDerivationHashAlgorithm));
  }

  if(m_sharedInformationHasBeenSet)
  {
   payload.WithString("SharedInformation", m_sharedInformation);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
