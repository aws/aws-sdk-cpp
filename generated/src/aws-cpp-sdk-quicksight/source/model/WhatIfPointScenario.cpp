/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WhatIfPointScenario.h>
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

WhatIfPointScenario::WhatIfPointScenario() : 
    m_dateHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

WhatIfPointScenario::WhatIfPointScenario(JsonView jsonValue) : 
    m_dateHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

WhatIfPointScenario& WhatIfPointScenario::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue WhatIfPointScenario::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
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
