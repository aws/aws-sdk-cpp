/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/SoftwareRevenue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

SoftwareRevenue::SoftwareRevenue(JsonView jsonValue)
{
  *this = jsonValue;
}

SoftwareRevenue& SoftwareRevenue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryModel"))
  {
    m_deliveryModel = RevenueModelMapper::GetRevenueModelForName(jsonValue.GetString("DeliveryModel"));
    m_deliveryModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EffectiveDate"))
  {
    m_effectiveDate = jsonValue.GetString("EffectiveDate");
    m_effectiveDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue SoftwareRevenue::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryModelHasBeenSet)
  {
   payload.WithString("DeliveryModel", RevenueModelMapper::GetNameForRevenueModel(m_deliveryModel));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("Value", m_value.Jsonize());

  }

  if(m_effectiveDateHasBeenSet)
  {
   payload.WithString("EffectiveDate", m_effectiveDate);

  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
