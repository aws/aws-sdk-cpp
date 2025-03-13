/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/Consent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

Consent::Consent(JsonView jsonValue)
{
  *this = jsonValue;
}

Consent& Consent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxPrice"))
  {
    m_maxPrice = jsonValue.GetDouble("MaxPrice");
    m_maxPriceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Currency"))
  {
    m_currency = jsonValue.GetString("Currency");
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue Consent::Jsonize() const
{
  JsonValue payload;

  if(m_maxPriceHasBeenSet)
  {
   payload.WithDouble("MaxPrice", m_maxPrice);

  }

  if(m_currencyHasBeenSet)
  {
   payload.WithString("Currency", m_currency);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
