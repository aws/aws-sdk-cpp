/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/TranslationPinDataIsoFormat034.h>
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

TranslationPinDataIsoFormat034::TranslationPinDataIsoFormat034() : 
    m_primaryAccountNumberHasBeenSet(false)
{
}

TranslationPinDataIsoFormat034::TranslationPinDataIsoFormat034(JsonView jsonValue) : 
    m_primaryAccountNumberHasBeenSet(false)
{
  *this = jsonValue;
}

TranslationPinDataIsoFormat034& TranslationPinDataIsoFormat034::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryAccountNumber"))
  {
    m_primaryAccountNumber = jsonValue.GetString("PrimaryAccountNumber");

    m_primaryAccountNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue TranslationPinDataIsoFormat034::Jsonize() const
{
  JsonValue payload;

  if(m_primaryAccountNumberHasBeenSet)
  {
   payload.WithString("PrimaryAccountNumber", m_primaryAccountNumber);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
