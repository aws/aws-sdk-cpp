/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ImportKeyMaterial.h>
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

ImportKeyMaterial::ImportKeyMaterial() : 
    m_keyCryptogramHasBeenSet(false),
    m_rootCertificatePublicKeyHasBeenSet(false),
    m_tr31KeyBlockHasBeenSet(false),
    m_tr34KeyBlockHasBeenSet(false),
    m_trustedCertificatePublicKeyHasBeenSet(false)
{
}

ImportKeyMaterial::ImportKeyMaterial(JsonView jsonValue) : 
    m_keyCryptogramHasBeenSet(false),
    m_rootCertificatePublicKeyHasBeenSet(false),
    m_tr31KeyBlockHasBeenSet(false),
    m_tr34KeyBlockHasBeenSet(false),
    m_trustedCertificatePublicKeyHasBeenSet(false)
{
  *this = jsonValue;
}

ImportKeyMaterial& ImportKeyMaterial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyCryptogram"))
  {
    m_keyCryptogram = jsonValue.GetObject("KeyCryptogram");

    m_keyCryptogramHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootCertificatePublicKey"))
  {
    m_rootCertificatePublicKey = jsonValue.GetObject("RootCertificatePublicKey");

    m_rootCertificatePublicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tr31KeyBlock"))
  {
    m_tr31KeyBlock = jsonValue.GetObject("Tr31KeyBlock");

    m_tr31KeyBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tr34KeyBlock"))
  {
    m_tr34KeyBlock = jsonValue.GetObject("Tr34KeyBlock");

    m_tr34KeyBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustedCertificatePublicKey"))
  {
    m_trustedCertificatePublicKey = jsonValue.GetObject("TrustedCertificatePublicKey");

    m_trustedCertificatePublicKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportKeyMaterial::Jsonize() const
{
  JsonValue payload;

  if(m_keyCryptogramHasBeenSet)
  {
   payload.WithObject("KeyCryptogram", m_keyCryptogram.Jsonize());

  }

  if(m_rootCertificatePublicKeyHasBeenSet)
  {
   payload.WithObject("RootCertificatePublicKey", m_rootCertificatePublicKey.Jsonize());

  }

  if(m_tr31KeyBlockHasBeenSet)
  {
   payload.WithObject("Tr31KeyBlock", m_tr31KeyBlock.Jsonize());

  }

  if(m_tr34KeyBlockHasBeenSet)
  {
   payload.WithObject("Tr34KeyBlock", m_tr34KeyBlock.Jsonize());

  }

  if(m_trustedCertificatePublicKeyHasBeenSet)
  {
   payload.WithObject("TrustedCertificatePublicKey", m_trustedCertificatePublicKey.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
