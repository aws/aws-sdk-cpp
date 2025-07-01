/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/Month.h>
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

Month::Month(JsonView jsonValue)
{
  *this = jsonValue;
}

Month& Month::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = MonthNameMapper::GetMonthNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue Month::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", MonthNameMapper::GetNameForMonthName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
