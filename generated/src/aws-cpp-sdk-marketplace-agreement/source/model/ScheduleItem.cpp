/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-agreement/model/ScheduleItem.h>
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

ScheduleItem::ScheduleItem() : 
    m_chargeAmountHasBeenSet(false),
    m_chargeDateHasBeenSet(false)
{
}

ScheduleItem::ScheduleItem(JsonView jsonValue) : 
    m_chargeAmountHasBeenSet(false),
    m_chargeDateHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleItem& ScheduleItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("chargeAmount"))
  {
    m_chargeAmount = jsonValue.GetString("chargeAmount");

    m_chargeAmountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("chargeDate"))
  {
    m_chargeDate = jsonValue.GetDouble("chargeDate");

    m_chargeDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleItem::Jsonize() const
{
  JsonValue payload;

  if(m_chargeAmountHasBeenSet)
  {
   payload.WithString("chargeAmount", m_chargeAmount);

  }

  if(m_chargeDateHasBeenSet)
  {
   payload.WithDouble("chargeDate", m_chargeDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AgreementService
} // namespace Aws
