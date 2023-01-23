/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumberFormatConfiguration.h>
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

NumberFormatConfiguration::NumberFormatConfiguration() : 
    m_formatConfigurationHasBeenSet(false)
{
}

NumberFormatConfiguration::NumberFormatConfiguration(JsonView jsonValue) : 
    m_formatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NumberFormatConfiguration& NumberFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FormatConfiguration"))
  {
    m_formatConfiguration = jsonValue.GetObject("FormatConfiguration");

    m_formatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NumberFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_formatConfigurationHasBeenSet)
  {
   payload.WithObject("FormatConfiguration", m_formatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
