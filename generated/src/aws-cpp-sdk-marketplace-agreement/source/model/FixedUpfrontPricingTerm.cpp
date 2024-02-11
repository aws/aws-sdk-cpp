/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/FixedUpfrontPricingTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AgreementService
{
namespace Model
{

FixedUpfrontPricingTerm::FixedUpfrontPricingTerm() : 
    m_currencyCodeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_grantsHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

FixedUpfrontPricingTerm::FixedUpfrontPricingTerm(JsonView jsonValue) : 
    m_currencyCodeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_grantsHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

FixedUpfrontPricingTerm& FixedUpfrontPricingTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetString("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("grants"))
  {
    Aws::Utils::Array<JsonView> grantsJsonList = jsonValue.GetArray("grants");
    for(unsigned grantsIndex = 0; grantsIndex < grantsJsonList.GetLength(); ++grantsIndex)
    {
      m_grants.push_back(grantsJsonList[grantsIndex].AsObject());
    }
    m_grantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetString("price");

    m_priceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue FixedUpfrontPricingTerm::Jsonize() const
{
  JsonValue payload;

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", m_currencyCode);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithString("duration", m_duration);

  }

  if(m_grantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantsJsonList(m_grants.size());
   for(unsigned grantsIndex = 0; grantsIndex < grantsJsonList.GetLength(); ++grantsIndex)
   {
     grantsJsonList[grantsIndex].AsObject(m_grants[grantsIndex].Jsonize());
   }
   payload.WithArray("grants", std::move(grantsJsonList));

  }

  if(m_priceHasBeenSet)
  {
   payload.WithString("price", m_price);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
