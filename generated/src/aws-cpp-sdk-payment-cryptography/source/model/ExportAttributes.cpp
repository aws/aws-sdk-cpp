/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportAttributes.h>
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

ExportAttributes::ExportAttributes() : 
    m_exportDukptInitialKeyHasBeenSet(false),
    m_keyCheckValueAlgorithm(KeyCheckValueAlgorithm::NOT_SET),
    m_keyCheckValueAlgorithmHasBeenSet(false)
{
}

ExportAttributes::ExportAttributes(JsonView jsonValue) : 
    m_exportDukptInitialKeyHasBeenSet(false),
    m_keyCheckValueAlgorithm(KeyCheckValueAlgorithm::NOT_SET),
    m_keyCheckValueAlgorithmHasBeenSet(false)
{
  *this = jsonValue;
}

ExportAttributes& ExportAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportDukptInitialKey"))
  {
    m_exportDukptInitialKey = jsonValue.GetObject("ExportDukptInitialKey");

    m_exportDukptInitialKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyCheckValueAlgorithm"))
  {
    m_keyCheckValueAlgorithm = KeyCheckValueAlgorithmMapper::GetKeyCheckValueAlgorithmForName(jsonValue.GetString("KeyCheckValueAlgorithm"));

    m_keyCheckValueAlgorithmHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_exportDukptInitialKeyHasBeenSet)
  {
   payload.WithObject("ExportDukptInitialKey", m_exportDukptInitialKey.Jsonize());

  }

  if(m_keyCheckValueAlgorithmHasBeenSet)
  {
   payload.WithString("KeyCheckValueAlgorithm", KeyCheckValueAlgorithmMapper::GetNameForKeyCheckValueAlgorithm(m_keyCheckValueAlgorithm));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
