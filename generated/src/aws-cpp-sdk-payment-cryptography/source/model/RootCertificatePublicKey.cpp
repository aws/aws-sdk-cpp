/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/RootCertificatePublicKey.h>
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

RootCertificatePublicKey::RootCertificatePublicKey() : 
    m_keyAttributesHasBeenSet(false),
    m_publicKeyCertificateHasBeenSet(false)
{
}

RootCertificatePublicKey::RootCertificatePublicKey(JsonView jsonValue) : 
    m_keyAttributesHasBeenSet(false),
    m_publicKeyCertificateHasBeenSet(false)
{
  *this = jsonValue;
}

RootCertificatePublicKey& RootCertificatePublicKey::operator =(JsonView jsonValue)
{
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

JsonValue RootCertificatePublicKey::Jsonize() const
{
  JsonValue payload;

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
