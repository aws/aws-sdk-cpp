/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/EncryptionDecryptionAttributes.h>
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

EncryptionDecryptionAttributes::EncryptionDecryptionAttributes() : 
    m_asymmetricHasBeenSet(false),
    m_dukptHasBeenSet(false),
    m_emvHasBeenSet(false),
    m_symmetricHasBeenSet(false)
{
}

EncryptionDecryptionAttributes::EncryptionDecryptionAttributes(JsonView jsonValue) : 
    m_asymmetricHasBeenSet(false),
    m_dukptHasBeenSet(false),
    m_emvHasBeenSet(false),
    m_symmetricHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionDecryptionAttributes& EncryptionDecryptionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Asymmetric"))
  {
    m_asymmetric = jsonValue.GetObject("Asymmetric");

    m_asymmetricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dukpt"))
  {
    m_dukpt = jsonValue.GetObject("Dukpt");

    m_dukptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Emv"))
  {
    m_emv = jsonValue.GetObject("Emv");

    m_emvHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Symmetric"))
  {
    m_symmetric = jsonValue.GetObject("Symmetric");

    m_symmetricHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionDecryptionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_asymmetricHasBeenSet)
  {
   payload.WithObject("Asymmetric", m_asymmetric.Jsonize());

  }

  if(m_dukptHasBeenSet)
  {
   payload.WithObject("Dukpt", m_dukpt.Jsonize());

  }

  if(m_emvHasBeenSet)
  {
   payload.WithObject("Emv", m_emv.Jsonize());

  }

  if(m_symmetricHasBeenSet)
  {
   payload.WithObject("Symmetric", m_symmetric.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
