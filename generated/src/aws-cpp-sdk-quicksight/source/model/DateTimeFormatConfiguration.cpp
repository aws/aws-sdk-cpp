/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateTimeFormatConfiguration.h>
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

DateTimeFormatConfiguration::DateTimeFormatConfiguration() : 
    m_dateTimeFormatHasBeenSet(false),
    m_nullValueFormatConfigurationHasBeenSet(false),
    m_numericFormatConfigurationHasBeenSet(false)
{
}

DateTimeFormatConfiguration::DateTimeFormatConfiguration(JsonView jsonValue) : 
    m_dateTimeFormatHasBeenSet(false),
    m_nullValueFormatConfigurationHasBeenSet(false),
    m_numericFormatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimeFormatConfiguration& DateTimeFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DateTimeFormat"))
  {
    m_dateTimeFormat = jsonValue.GetString("DateTimeFormat");

    m_dateTimeFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullValueFormatConfiguration"))
  {
    m_nullValueFormatConfiguration = jsonValue.GetObject("NullValueFormatConfiguration");

    m_nullValueFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumericFormatConfiguration"))
  {
    m_numericFormatConfiguration = jsonValue.GetObject("NumericFormatConfiguration");

    m_numericFormatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimeFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dateTimeFormatHasBeenSet)
  {
   payload.WithString("DateTimeFormat", m_dateTimeFormat);

  }

  if(m_nullValueFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NullValueFormatConfiguration", m_nullValueFormatConfiguration.Jsonize());

  }

  if(m_numericFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NumericFormatConfiguration", m_numericFormatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
