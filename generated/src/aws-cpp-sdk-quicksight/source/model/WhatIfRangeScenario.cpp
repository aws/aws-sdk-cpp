/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WhatIfRangeScenario.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

WhatIfRangeScenario::WhatIfRangeScenario() : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

WhatIfRangeScenario::WhatIfRangeScenario(JsonView jsonValue) : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

WhatIfRangeScenario& WhatIfRangeScenario::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetDouble("EndDate");

    m_endDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue WhatIfRangeScenario::Jsonize() const
{
  JsonValue payload;

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
