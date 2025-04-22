/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/Reservation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

Reservation::Reservation(JsonView jsonValue)
{
  *this = jsonValue;
}

Reservation& Reservation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("capacity"))
  {
    m_capacity = jsonValue.GetInteger("capacity");
    m_capacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endDate"))
  {
    m_endDate = jsonValue.GetString("endDate");
    m_endDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offering"))
  {
    m_offering = jsonValue.GetObject("offering");
    m_offeringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservationArn"))
  {
    m_reservationArn = jsonValue.GetString("reservationArn");
    m_reservationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservationId"))
  {
    m_reservationId = jsonValue.GetString("reservationId");
    m_reservationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetString("startDate");
    m_startDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue Reservation::Jsonize() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithInteger("capacity", m_capacity);

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithString("endDate", m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_offeringHasBeenSet)
  {
   payload.WithObject("offering", m_offering.Jsonize());

  }

  if(m_reservationArnHasBeenSet)
  {
   payload.WithString("reservationArn", m_reservationArn);

  }

  if(m_reservationIdHasBeenSet)
  {
   payload.WithString("reservationId", m_reservationId);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("startDate", m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
