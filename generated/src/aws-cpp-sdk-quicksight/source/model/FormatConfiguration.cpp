/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FormatConfiguration.h>
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

FormatConfiguration::FormatConfiguration() : 
    m_stringFormatConfigurationHasBeenSet(false),
    m_numberFormatConfigurationHasBeenSet(false),
    m_dateTimeFormatConfigurationHasBeenSet(false)
{
}

FormatConfiguration::FormatConfiguration(JsonView jsonValue) : 
    m_stringFormatConfigurationHasBeenSet(false),
    m_numberFormatConfigurationHasBeenSet(false),
    m_dateTimeFormatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

FormatConfiguration& FormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringFormatConfiguration"))
  {
    m_stringFormatConfiguration = jsonValue.GetObject("StringFormatConfiguration");

    m_stringFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberFormatConfiguration"))
  {
    m_numberFormatConfiguration = jsonValue.GetObject("NumberFormatConfiguration");

    m_numberFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeFormatConfiguration"))
  {
    m_dateTimeFormatConfiguration = jsonValue.GetObject("DateTimeFormatConfiguration");

    m_dateTimeFormatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue FormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_stringFormatConfigurationHasBeenSet)
  {
   payload.WithObject("StringFormatConfiguration", m_stringFormatConfiguration.Jsonize());

  }

  if(m_numberFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NumberFormatConfiguration", m_numberFormatConfiguration.Jsonize());

  }

  if(m_dateTimeFormatConfigurationHasBeenSet)
  {
   payload.WithObject("DateTimeFormatConfiguration", m_dateTimeFormatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
