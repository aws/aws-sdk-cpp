﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumberDisplayFormatConfiguration.h>
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

NumberDisplayFormatConfiguration::NumberDisplayFormatConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

NumberDisplayFormatConfiguration& NumberDisplayFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");
    m_prefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Suffix"))
  {
    m_suffix = jsonValue.GetString("Suffix");
    m_suffixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SeparatorConfiguration"))
  {
    m_separatorConfiguration = jsonValue.GetObject("SeparatorConfiguration");
    m_separatorConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DecimalPlacesConfiguration"))
  {
    m_decimalPlacesConfiguration = jsonValue.GetObject("DecimalPlacesConfiguration");
    m_decimalPlacesConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumberScale"))
  {
    m_numberScale = NumberScaleMapper::GetNumberScaleForName(jsonValue.GetString("NumberScale"));
    m_numberScaleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NegativeValueConfiguration"))
  {
    m_negativeValueConfiguration = jsonValue.GetObject("NegativeValueConfiguration");
    m_negativeValueConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NullValueFormatConfiguration"))
  {
    m_nullValueFormatConfiguration = jsonValue.GetObject("NullValueFormatConfiguration");
    m_nullValueFormatConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue NumberDisplayFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_suffixHasBeenSet)
  {
   payload.WithString("Suffix", m_suffix);

  }

  if(m_separatorConfigurationHasBeenSet)
  {
   payload.WithObject("SeparatorConfiguration", m_separatorConfiguration.Jsonize());

  }

  if(m_decimalPlacesConfigurationHasBeenSet)
  {
   payload.WithObject("DecimalPlacesConfiguration", m_decimalPlacesConfiguration.Jsonize());

  }

  if(m_numberScaleHasBeenSet)
  {
   payload.WithString("NumberScale", NumberScaleMapper::GetNameForNumberScale(m_numberScale));
  }

  if(m_negativeValueConfigurationHasBeenSet)
  {
   payload.WithObject("NegativeValueConfiguration", m_negativeValueConfiguration.Jsonize());

  }

  if(m_nullValueFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NullValueFormatConfiguration", m_nullValueFormatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
