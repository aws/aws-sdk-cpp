/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericFormatConfiguration.h>
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

NumericFormatConfiguration::NumericFormatConfiguration() : 
    m_numberDisplayFormatConfigurationHasBeenSet(false),
    m_currencyDisplayFormatConfigurationHasBeenSet(false),
    m_percentageDisplayFormatConfigurationHasBeenSet(false)
{
}

NumericFormatConfiguration::NumericFormatConfiguration(JsonView jsonValue) : 
    m_numberDisplayFormatConfigurationHasBeenSet(false),
    m_currencyDisplayFormatConfigurationHasBeenSet(false),
    m_percentageDisplayFormatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NumericFormatConfiguration& NumericFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumberDisplayFormatConfiguration"))
  {
    m_numberDisplayFormatConfiguration = jsonValue.GetObject("NumberDisplayFormatConfiguration");

    m_numberDisplayFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrencyDisplayFormatConfiguration"))
  {
    m_currencyDisplayFormatConfiguration = jsonValue.GetObject("CurrencyDisplayFormatConfiguration");

    m_currencyDisplayFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentageDisplayFormatConfiguration"))
  {
    m_percentageDisplayFormatConfiguration = jsonValue.GetObject("PercentageDisplayFormatConfiguration");

    m_percentageDisplayFormatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_numberDisplayFormatConfigurationHasBeenSet)
  {
   payload.WithObject("NumberDisplayFormatConfiguration", m_numberDisplayFormatConfiguration.Jsonize());

  }

  if(m_currencyDisplayFormatConfigurationHasBeenSet)
  {
   payload.WithObject("CurrencyDisplayFormatConfiguration", m_currencyDisplayFormatConfiguration.Jsonize());

  }

  if(m_percentageDisplayFormatConfigurationHasBeenSet)
  {
   payload.WithObject("PercentageDisplayFormatConfiguration", m_percentageDisplayFormatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
