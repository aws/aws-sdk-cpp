/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ForecastScenario.h>
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

ForecastScenario::ForecastScenario() : 
    m_whatIfPointScenarioHasBeenSet(false),
    m_whatIfRangeScenarioHasBeenSet(false)
{
}

ForecastScenario::ForecastScenario(JsonView jsonValue) : 
    m_whatIfPointScenarioHasBeenSet(false),
    m_whatIfRangeScenarioHasBeenSet(false)
{
  *this = jsonValue;
}

ForecastScenario& ForecastScenario::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WhatIfPointScenario"))
  {
    m_whatIfPointScenario = jsonValue.GetObject("WhatIfPointScenario");

    m_whatIfPointScenarioHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WhatIfRangeScenario"))
  {
    m_whatIfRangeScenario = jsonValue.GetObject("WhatIfRangeScenario");

    m_whatIfRangeScenarioHasBeenSet = true;
  }

  return *this;
}

JsonValue ForecastScenario::Jsonize() const
{
  JsonValue payload;

  if(m_whatIfPointScenarioHasBeenSet)
  {
   payload.WithObject("WhatIfPointScenario", m_whatIfPointScenario.Jsonize());

  }

  if(m_whatIfRangeScenarioHasBeenSet)
  {
   payload.WithObject("WhatIfRangeScenario", m_whatIfRangeScenario.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
