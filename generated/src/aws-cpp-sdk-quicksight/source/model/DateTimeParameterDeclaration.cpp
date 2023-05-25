/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateTimeParameterDeclaration.h>
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

DateTimeParameterDeclaration::DateTimeParameterDeclaration() : 
    m_nameHasBeenSet(false),
    m_defaultValuesHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_valueWhenUnsetHasBeenSet(false)
{
}

DateTimeParameterDeclaration::DateTimeParameterDeclaration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_defaultValuesHasBeenSet(false),
    m_timeGranularity(TimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_valueWhenUnsetHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimeParameterDeclaration& DateTimeParameterDeclaration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValues"))
  {
    m_defaultValues = jsonValue.GetObject("DefaultValues");

    m_defaultValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueWhenUnset"))
  {
    m_valueWhenUnset = jsonValue.GetObject("ValueWhenUnset");

    m_valueWhenUnsetHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimeParameterDeclaration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_defaultValuesHasBeenSet)
  {
   payload.WithObject("DefaultValues", m_defaultValues.Jsonize());

  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  if(m_valueWhenUnsetHasBeenSet)
  {
   payload.WithObject("ValueWhenUnset", m_valueWhenUnset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
