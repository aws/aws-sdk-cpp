/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/TranslationIsoFormats.h>
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

TranslationIsoFormats::TranslationIsoFormats() : 
    m_isoFormat0HasBeenSet(false),
    m_isoFormat1HasBeenSet(false),
    m_isoFormat3HasBeenSet(false),
    m_isoFormat4HasBeenSet(false)
{
}

TranslationIsoFormats::TranslationIsoFormats(JsonView jsonValue) : 
    m_isoFormat0HasBeenSet(false),
    m_isoFormat1HasBeenSet(false),
    m_isoFormat3HasBeenSet(false),
    m_isoFormat4HasBeenSet(false)
{
  *this = jsonValue;
}

TranslationIsoFormats& TranslationIsoFormats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsoFormat0"))
  {
    m_isoFormat0 = jsonValue.GetObject("IsoFormat0");

    m_isoFormat0HasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsoFormat1"))
  {
    m_isoFormat1 = jsonValue.GetObject("IsoFormat1");

    m_isoFormat1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsoFormat3"))
  {
    m_isoFormat3 = jsonValue.GetObject("IsoFormat3");

    m_isoFormat3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsoFormat4"))
  {
    m_isoFormat4 = jsonValue.GetObject("IsoFormat4");

    m_isoFormat4HasBeenSet = true;
  }

  return *this;
}

JsonValue TranslationIsoFormats::Jsonize() const
{
  JsonValue payload;

  if(m_isoFormat0HasBeenSet)
  {
   payload.WithObject("IsoFormat0", m_isoFormat0.Jsonize());

  }

  if(m_isoFormat1HasBeenSet)
  {
   payload.WithObject("IsoFormat1", m_isoFormat1.Jsonize());

  }

  if(m_isoFormat3HasBeenSet)
  {
   payload.WithObject("IsoFormat3", m_isoFormat3.Jsonize());

  }

  if(m_isoFormat4HasBeenSet)
  {
   payload.WithObject("IsoFormat4", m_isoFormat4.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
