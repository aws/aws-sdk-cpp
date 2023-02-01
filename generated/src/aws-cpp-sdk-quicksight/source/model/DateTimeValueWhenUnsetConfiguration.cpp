/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateTimeValueWhenUnsetConfiguration.h>
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

DateTimeValueWhenUnsetConfiguration::DateTimeValueWhenUnsetConfiguration() : 
    m_valueWhenUnsetOption(ValueWhenUnsetOption::NOT_SET),
    m_valueWhenUnsetOptionHasBeenSet(false),
    m_customValueHasBeenSet(false)
{
}

DateTimeValueWhenUnsetConfiguration::DateTimeValueWhenUnsetConfiguration(JsonView jsonValue) : 
    m_valueWhenUnsetOption(ValueWhenUnsetOption::NOT_SET),
    m_valueWhenUnsetOptionHasBeenSet(false),
    m_customValueHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimeValueWhenUnsetConfiguration& DateTimeValueWhenUnsetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValueWhenUnsetOption"))
  {
    m_valueWhenUnsetOption = ValueWhenUnsetOptionMapper::GetValueWhenUnsetOptionForName(jsonValue.GetString("ValueWhenUnsetOption"));

    m_valueWhenUnsetOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomValue"))
  {
    m_customValue = jsonValue.GetDouble("CustomValue");

    m_customValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimeValueWhenUnsetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_valueWhenUnsetOptionHasBeenSet)
  {
   payload.WithString("ValueWhenUnsetOption", ValueWhenUnsetOptionMapper::GetNameForValueWhenUnsetOption(m_valueWhenUnsetOption));
  }

  if(m_customValueHasBeenSet)
  {
   payload.WithDouble("CustomValue", m_customValue.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
