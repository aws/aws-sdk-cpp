/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/TrustedCertificatePublicKey.h>
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

TrustedCertificatePublicKey::TrustedCertificatePublicKey() : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_keyAttributesHasBeenSet(false),
    m_publicKeyCertificateHasBeenSet(false)
{
}

TrustedCertificatePublicKey::TrustedCertificatePublicKey(JsonView jsonValue) : 
    m_certificateAuthorityPublicKeyIdentifierHasBeenSet(false),
    m_keyAttributesHasBeenSet(false),
    m_publicKeyCertificateHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedCertificatePublicKey& TrustedCertificatePublicKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateAuthorityPublicKeyIdentifier"))
  {
    m_certificateAuthorityPublicKeyIdentifier = jsonValue.GetString("CertificateAuthorityPublicKeyIdentifier");

    m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAttributes"))
  {
    m_keyAttributes = jsonValue.GetObject("KeyAttributes");

    m_keyAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicKeyCertificate"))
  {
    m_publicKeyCertificate = jsonValue.GetString("PublicKeyCertificate");

    m_publicKeyCertificateHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedCertificatePublicKey::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityPublicKeyIdentifierHasBeenSet)
  {
   payload.WithString("CertificateAuthorityPublicKeyIdentifier", m_certificateAuthorityPublicKeyIdentifier);

  }

  if(m_keyAttributesHasBeenSet)
  {
   payload.WithObject("KeyAttributes", m_keyAttributes.Jsonize());

  }

  if(m_publicKeyCertificateHasBeenSet)
  {
   payload.WithString("PublicKeyCertificate", m_publicKeyCertificate);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
