/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportDukptInitialKey.h>
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

ExportDukptInitialKey::ExportDukptInitialKey() : 
    m_keySerialNumberHasBeenSet(false)
{
}

ExportDukptInitialKey::ExportDukptInitialKey(JsonView jsonValue) : 
    m_keySerialNumberHasBeenSet(false)
{
  *this = jsonValue;
}

ExportDukptInitialKey& ExportDukptInitialKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeySerialNumber"))
  {
    m_keySerialNumber = jsonValue.GetString("KeySerialNumber");

    m_keySerialNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportDukptInitialKey::Jsonize() const
{
  JsonValue payload;

  if(m_keySerialNumberHasBeenSet)
  {
   payload.WithString("KeySerialNumber", m_keySerialNumber);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
