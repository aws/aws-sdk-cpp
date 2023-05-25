/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DateRangeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

DateRangeType::DateRangeType() : 
    m_startValueHasBeenSet(false),
    m_endValueHasBeenSet(false)
{
}

DateRangeType::DateRangeType(JsonView jsonValue) : 
    m_startValueHasBeenSet(false),
    m_endValueHasBeenSet(false)
{
  *this = jsonValue;
}

DateRangeType& DateRangeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartValue"))
  {
    m_startValue = jsonValue.GetDouble("StartValue");

    m_startValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndValue"))
  {
    m_endValue = jsonValue.GetDouble("EndValue");

    m_endValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DateRangeType::Jsonize() const
{
  JsonValue payload;

  if(m_startValueHasBeenSet)
  {
   payload.WithDouble("StartValue", m_startValue.SecondsWithMSPrecision());
  }

  if(m_endValueHasBeenSet)
  {
   payload.WithDouble("EndValue", m_endValue.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
