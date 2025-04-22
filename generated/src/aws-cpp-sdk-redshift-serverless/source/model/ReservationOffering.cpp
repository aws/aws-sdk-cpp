/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ReservationOffering.h>
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

ReservationOffering::ReservationOffering(JsonView jsonValue)
{
  *this = jsonValue;
}

ReservationOffering& ReservationOffering::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("hourlyCharge"))
  {
    m_hourlyCharge = jsonValue.GetDouble("hourlyCharge");
    m_hourlyChargeHasBeenSet = true;
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
  if(jsonValue.ValueExists("upfrontCharge"))
  {
    m_upfrontCharge = jsonValue.GetDouble("upfrontCharge");
    m_upfrontChargeHasBeenSet = true;
  }
  return *this;
}

JsonValue ReservationOffering::Jsonize() const
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

  if(m_hourlyChargeHasBeenSet)
  {
   payload.WithDouble("hourlyCharge", m_hourlyCharge);

  }

  if(m_offeringIdHasBeenSet)
  {
   payload.WithString("offeringId", m_offeringId);

  }

  if(m_offeringTypeHasBeenSet)
  {
   payload.WithString("offeringType", OfferingTypeMapper::GetNameForOfferingType(m_offeringType));
  }

  if(m_upfrontChargeHasBeenSet)
  {
   payload.WithDouble("upfrontCharge", m_upfrontCharge);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
