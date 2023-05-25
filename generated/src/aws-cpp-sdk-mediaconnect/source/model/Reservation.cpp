/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Reservation.h>
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

Reservation::Reservation() : 
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_durationUnits(DurationUnits::NOT_SET),
    m_durationUnitsHasBeenSet(false),
    m_endHasBeenSet(false),
    m_offeringArnHasBeenSet(false),
    m_offeringDescriptionHasBeenSet(false),
    m_pricePerUnitHasBeenSet(false),
    m_priceUnits(PriceUnits::NOT_SET),
    m_priceUnitsHasBeenSet(false),
    m_reservationArnHasBeenSet(false),
    m_reservationNameHasBeenSet(false),
    m_reservationState(ReservationState::NOT_SET),
    m_reservationStateHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false),
    m_startHasBeenSet(false)
{
}

Reservation::Reservation(JsonView jsonValue) : 
    m_currencyCodeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_durationUnits(DurationUnits::NOT_SET),
    m_durationUnitsHasBeenSet(false),
    m_endHasBeenSet(false),
    m_offeringArnHasBeenSet(false),
    m_offeringDescriptionHasBeenSet(false),
    m_pricePerUnitHasBeenSet(false),
    m_priceUnits(PriceUnits::NOT_SET),
    m_priceUnitsHasBeenSet(false),
    m_reservationArnHasBeenSet(false),
    m_reservationNameHasBeenSet(false),
    m_reservationState(ReservationState::NOT_SET),
    m_reservationStateHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false),
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

Reservation& Reservation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetString("end");

    m_endHasBeenSet = true;
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

  if(jsonValue.ValueExists("reservationArn"))
  {
    m_reservationArn = jsonValue.GetString("reservationArn");

    m_reservationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reservationName"))
  {
    m_reservationName = jsonValue.GetString("reservationName");

    m_reservationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reservationState"))
  {
    m_reservationState = ReservationStateMapper::GetReservationStateForName(jsonValue.GetString("reservationState"));

    m_reservationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");

    m_resourceSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetString("start");

    m_startHasBeenSet = true;
  }

  return *this;
}

JsonValue Reservation::Jsonize() const
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

  if(m_endHasBeenSet)
  {
   payload.WithString("end", m_end);

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

  if(m_reservationArnHasBeenSet)
  {
   payload.WithString("reservationArn", m_reservationArn);

  }

  if(m_reservationNameHasBeenSet)
  {
   payload.WithString("reservationName", m_reservationName);

  }

  if(m_reservationStateHasBeenSet)
  {
   payload.WithString("reservationState", ReservationStateMapper::GetNameForReservationState(m_reservationState));
  }

  if(m_resourceSpecificationHasBeenSet)
  {
   payload.WithObject("resourceSpecification", m_resourceSpecification.Jsonize());

  }

  if(m_startHasBeenSet)
  {
   payload.WithString("start", m_start);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
