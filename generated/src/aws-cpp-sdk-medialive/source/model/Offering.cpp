/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Offering.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Offering::Offering() : 
    m_arnHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_durationUnits(OfferingDurationUnits::NOT_SET),
    m_durationUnitsHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_offeringDescriptionHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_offeringType(OfferingType::NOT_SET),
    m_offeringTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false)
{
}

Offering::Offering(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_durationUnits(OfferingDurationUnits::NOT_SET),
    m_durationUnitsHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_offeringDescriptionHasBeenSet(false),
    m_offeringIdHasBeenSet(false),
    m_offeringType(OfferingType::NOT_SET),
    m_offeringTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false)
{
  *this = jsonValue;
}

Offering& Offering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

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
    m_durationUnits = OfferingDurationUnitsMapper::GetOfferingDurationUnitsForName(jsonValue.GetString("durationUnits"));

    m_durationUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fixedPrice"))
  {
    m_fixedPrice = jsonValue.GetDouble("fixedPrice");

    m_fixedPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offeringDescription"))
  {
    m_offeringDescription = jsonValue.GetString("offeringDescription");

    m_offeringDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offeringId"))
  {
    m_offeringId = jsonValue.GetString("offeringId");

    m_offeringIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offeringType"))
  {
    m_offeringType = OfferingTypeMapper::GetOfferingTypeForName(jsonValue.GetString("offeringType"));

    m_offeringTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");

    m_resourceSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usagePrice"))
  {
    m_usagePrice = jsonValue.GetDouble("usagePrice");

    m_usagePriceHasBeenSet = true;
  }

  return *this;
}

JsonValue Offering::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

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
   payload.WithString("durationUnits", OfferingDurationUnitsMapper::GetNameForOfferingDurationUnits(m_durationUnits));
  }

  if(m_fixedPriceHasBeenSet)
  {
   payload.WithDouble("fixedPrice", m_fixedPrice);

  }

  if(m_offeringDescriptionHasBeenSet)
  {
   payload.WithString("offeringDescription", m_offeringDescription);

  }

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

  }

  if(m_offeringTypeHasBeenSet)
  {
   payload.WithString("offeringType", OfferingTypeMapper::GetNameForOfferingType(m_offeringType));
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_resourceSpecificationHasBeenSet)
  {
   payload.WithObject("resourceSpecification", m_resourceSpecification.Jsonize());

  }

  if(m_usagePriceHasBeenSet)
  {
   payload.WithDouble("usagePrice", m_usagePrice);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
