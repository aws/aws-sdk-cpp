/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/MacAttributes.h>
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

MacAttributes::MacAttributes() : 
    m_algorithm(MacAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_dukptCmacHasBeenSet(false),
    m_dukptIso9797Algorithm1HasBeenSet(false),
    m_dukptIso9797Algorithm3HasBeenSet(false),
    m_emvMacHasBeenSet(false)
{
}

MacAttributes::MacAttributes(JsonView jsonValue) : 
    m_algorithm(MacAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_dukptCmacHasBeenSet(false),
    m_dukptIso9797Algorithm1HasBeenSet(false),
    m_dukptIso9797Algorithm3HasBeenSet(false),
    m_emvMacHasBeenSet(false)
{
  *this = jsonValue;
}

MacAttributes& MacAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Algorithm"))
  {
    m_algorithm = MacAlgorithmMapper::GetMacAlgorithmForName(jsonValue.GetString("Algorithm"));

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DukptCmac"))
  {
    m_dukptCmac = jsonValue.GetObject("DukptCmac");

    m_dukptCmacHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DukptIso9797Algorithm1"))
  {
    m_dukptIso9797Algorithm1 = jsonValue.GetObject("DukptIso9797Algorithm1");

    m_dukptIso9797Algorithm1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("DukptIso9797Algorithm3"))
  {
    m_dukptIso9797Algorithm3 = jsonValue.GetObject("DukptIso9797Algorithm3");

    m_dukptIso9797Algorithm3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmvMac"))
  {
    m_emvMac = jsonValue.GetObject("EmvMac");

    m_emvMacHasBeenSet = true;
  }

  return *this;
}

JsonValue MacAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("Algorithm", MacAlgorithmMapper::GetNameForMacAlgorithm(m_algorithm));
  }

  if(m_dukptCmacHasBeenSet)
  {
   payload.WithObject("DukptCmac", m_dukptCmac.Jsonize());

  }

  if(m_dukptIso9797Algorithm1HasBeenSet)
  {
   payload.WithObject("DukptIso9797Algorithm1", m_dukptIso9797Algorithm1.Jsonize());

  }

  if(m_dukptIso9797Algorithm3HasBeenSet)
  {
   payload.WithObject("DukptIso9797Algorithm3", m_dukptIso9797Algorithm3.Jsonize());

  }

  if(m_emvMacHasBeenSet)
  {
   payload.WithObject("EmvMac", m_emvMac.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
