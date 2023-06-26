/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Offering.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

Offering::Offering() : 
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_durationUnits(DurationUnits::NOT_SET),
    m_durationUnitsHasBeenSet(false),
    m_offeringArnHasBeenSet(false),
    m_offeringDescriptionHasBeenSet(false),
    m_pricePerUnitHasBeenSet(false),
    m_priceUnits(PriceUnits::NOT_SET),
    m_priceUnitsHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false)
{
}

Offering::Offering(JsonView jsonValue) : 
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_durationUnits(DurationUnits::NOT_SET),
    m_durationUnitsHasBeenSet(false),
    m_offeringArnHasBeenSet(false),
    m_offeringDescriptionHasBeenSet(false),
    m_pricePerUnitHasBeenSet(false),
    m_priceUnits(PriceUnits::NOT_SET),
    m_priceUnitsHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false)
{
  *this = jsonValue;
}

Offering& Offering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currencyCode"))
  {
    m_currencyCode = jsonValue.GetString("currencyCode");

    m_currencyCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationUnits"))
  {
    m_durationUnits = DurationUnitsMapper::GetDurationUnitsForName(jsonValue.GetString("durationUnits"));

    m_durationUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offeringArn"))
  {
    m_offeringArn = jsonValue.GetString("offeringArn");

    m_offeringArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offeringDescription"))
  {
    m_offeringDescription = jsonValue.GetString("offeringDescription");

    m_offeringDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pricePerUnit"))
  {
    m_pricePerUnit = jsonValue.GetString("pricePerUnit");

    m_pricePerUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("priceUnits"))
  {
    m_priceUnits = PriceUnitsMapper::GetPriceUnitsForName(jsonValue.GetString("priceUnits"));

    m_priceUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");

    m_resourceSpecificationHasBeenSet = true;
  }

  return *this;
}

JsonValue Offering::Jsonize() const
{
  JsonValue payload;

  if(m_currencyCodeHasBeenSet)
  {
   payload.WithString("currencyCode", m_currencyCode);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("duration", m_duration);

  }

  if(m_durationUnitsHasBeenSet)
  {
   payload.WithString("durationUnits", DurationUnitsMapper::GetNameForDurationUnits(m_durationUnits));
  }

  if(m_offeringArnHasBeenSet)
  {
   payload.WithString("offeringArn", m_offeringArn);

  }

  if(m_offeringDescriptionHasBeenSet)
  {
   payload.WithString("offeringDescription", m_offeringDescription);

  }

  if(m_pricePerUnitHasBeenSet)
  {
   payload.WithString("pricePerUnit", m_pricePerUnit);

  }

  if(m_priceUnitsHasBeenSet)
  {
   payload.WithString("priceUnits", PriceUnitsMapper::GetNameForPriceUnits(m_priceUnits));
  }

  if(m_resourceSpecificationHasBeenSet)
  {
   payload.WithObject("resourceSpecification", m_resourceSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
