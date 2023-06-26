/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/LongRangeType.h>
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

LongRangeType::LongRangeType() : 
    m_startValue(0),
    m_startValueHasBeenSet(false),
    m_endValue(0),
    m_endValueHasBeenSet(false)
{
}

LongRangeType::LongRangeType(JsonView jsonValue) : 
    m_startValue(0),
    m_startValueHasBeenSet(false),
    m_endValue(0),
    m_endValueHasBeenSet(false)
{
  *this = jsonValue;
}

LongRangeType& LongRangeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartValue"))
  {
    m_startValue = jsonValue.GetInt64("StartValue");

    m_startValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndValue"))
  {
    m_endValue = jsonValue.GetInt64("EndValue");

    m_endValueHasBeenSet = true;
  }

  return *this;
}

JsonValue LongRangeType::Jsonize() const
{
  JsonValue payload;

  if(m_startValueHasBeenSet)
  {
   payload.WithInt64("StartValue", m_startValue);

  }

  if(m_endValueHasBeenSet)
  {
   payload.WithInt64("EndValue", m_endValue);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
