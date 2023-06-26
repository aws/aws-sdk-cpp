/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/MonthlySetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

MonthlySetting::MonthlySetting() : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false),
    m_handOffTimeHasBeenSet(false)
{
}

MonthlySetting::MonthlySetting(JsonView jsonValue) : 
    m_dayOfMonth(0),
    m_dayOfMonthHasBeenSet(false),
    m_handOffTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MonthlySetting& MonthlySetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DayOfMonth"))
  {
    m_dayOfMonth = jsonValue.GetInteger("DayOfMonth");

    m_dayOfMonthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HandOffTime"))
  {
    m_handOffTime = jsonValue.GetObject("HandOffTime");

    m_handOffTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MonthlySetting::Jsonize() const
{
  JsonValue payload;

  if(m_dayOfMonthHasBeenSet)
  {
   payload.WithInteger("DayOfMonth", m_dayOfMonth);

  }

  if(m_handOffTimeHasBeenSet)
  {
   payload.WithObject("HandOffTime", m_handOffTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
