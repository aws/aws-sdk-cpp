/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DayOfWeek.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

DayOfWeek::DayOfWeek(JsonView jsonValue)
{
  *this = jsonValue;
}

DayOfWeek& DayOfWeek::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = DayOfWeekNameMapper::GetDayOfWeekNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue DayOfWeek::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", DayOfWeekNameMapper::GetNameForDayOfWeekName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
