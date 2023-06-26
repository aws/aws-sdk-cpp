/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/KPIOptions.h>
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

KPIOptions::KPIOptions() : 
    m_progressBarHasBeenSet(false),
    m_trendArrowsHasBeenSet(false),
    m_secondaryValueHasBeenSet(false),
    m_comparisonHasBeenSet(false),
    m_primaryValueDisplayType(PrimaryValueDisplayType::NOT_SET),
    m_primaryValueDisplayTypeHasBeenSet(false),
    m_primaryValueFontConfigurationHasBeenSet(false),
    m_secondaryValueFontConfigurationHasBeenSet(false)
{
}

KPIOptions::KPIOptions(JsonView jsonValue) : 
    m_progressBarHasBeenSet(false),
    m_trendArrowsHasBeenSet(false),
    m_secondaryValueHasBeenSet(false),
    m_comparisonHasBeenSet(false),
    m_primaryValueDisplayType(PrimaryValueDisplayType::NOT_SET),
    m_primaryValueDisplayTypeHasBeenSet(false),
    m_primaryValueFontConfigurationHasBeenSet(false),
    m_secondaryValueFontConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

KPIOptions& KPIOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProgressBar"))
  {
    m_progressBar = jsonValue.GetObject("ProgressBar");

    m_progressBarHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrendArrows"))
  {
    m_trendArrows = jsonValue.GetObject("TrendArrows");

    m_trendArrowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryValue"))
  {
    m_secondaryValue = jsonValue.GetObject("SecondaryValue");

    m_secondaryValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comparison"))
  {
    m_comparison = jsonValue.GetObject("Comparison");

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryValueDisplayType"))
  {
    m_primaryValueDisplayType = PrimaryValueDisplayTypeMapper::GetPrimaryValueDisplayTypeForName(jsonValue.GetString("PrimaryValueDisplayType"));

    m_primaryValueDisplayTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryValueFontConfiguration"))
  {
    m_primaryValueFontConfiguration = jsonValue.GetObject("PrimaryValueFontConfiguration");

    m_primaryValueFontConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecondaryValueFontConfiguration"))
  {
    m_secondaryValueFontConfiguration = jsonValue.GetObject("SecondaryValueFontConfiguration");

    m_secondaryValueFontConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue KPIOptions::Jsonize() const
{
  JsonValue payload;

  if(m_progressBarHasBeenSet)
  {
   payload.WithObject("ProgressBar", m_progressBar.Jsonize());

  }

  if(m_trendArrowsHasBeenSet)
  {
   payload.WithObject("TrendArrows", m_trendArrows.Jsonize());

  }

  if(m_secondaryValueHasBeenSet)
  {
   payload.WithObject("SecondaryValue", m_secondaryValue.Jsonize());

  }

  if(m_comparisonHasBeenSet)
  {
   payload.WithObject("Comparison", m_comparison.Jsonize());

  }

  if(m_primaryValueDisplayTypeHasBeenSet)
  {
   payload.WithString("PrimaryValueDisplayType", PrimaryValueDisplayTypeMapper::GetNameForPrimaryValueDisplayType(m_primaryValueDisplayType));
  }

  if(m_primaryValueFontConfigurationHasBeenSet)
  {
   payload.WithObject("PrimaryValueFontConfiguration", m_primaryValueFontConfiguration.Jsonize());

  }

  if(m_secondaryValueFontConfigurationHasBeenSet)
  {
   payload.WithObject("SecondaryValueFontConfiguration", m_secondaryValueFontConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
