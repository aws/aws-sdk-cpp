/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/ReEncryptionAttributes.h>
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

ReEncryptionAttributes::ReEncryptionAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ReEncryptionAttributes& ReEncryptionAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Symmetric"))
  {
    m_symmetric = jsonValue.GetObject("Symmetric");
    m_symmetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dukpt"))
  {
    m_dukpt = jsonValue.GetObject("Dukpt");
    m_dukptHasBeenSet = true;
  }
  return *this;
}

JsonValue ReEncryptionAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_symmetricHasBeenSet)
  {
   payload.WithObject("Symmetric", m_symmetric.Jsonize());

  }

  if(m_dukptHasBeenSet)
  {
   payload.WithObject("Dukpt", m_dukpt.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
