/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BodySectionRepeatConfiguration.h>
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

BodySectionRepeatConfiguration::BodySectionRepeatConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BodySectionRepeatConfiguration& BodySectionRepeatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionConfigurations"))
  {
    Aws::Utils::Array<JsonView> dimensionConfigurationsJsonList = jsonValue.GetArray("DimensionConfigurations");
    for(unsigned dimensionConfigurationsIndex = 0; dimensionConfigurationsIndex < dimensionConfigurationsJsonList.GetLength(); ++dimensionConfigurationsIndex)
    {
      m_dimensionConfigurations.push_back(dimensionConfigurationsJsonList[dimensionConfigurationsIndex].AsObject());
    }
    m_dimensionConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PageBreakConfiguration"))
  {
    m_pageBreakConfiguration = jsonValue.GetObject("PageBreakConfiguration");
    m_pageBreakConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NonRepeatingVisuals"))
  {
    Aws::Utils::Array<JsonView> nonRepeatingVisualsJsonList = jsonValue.GetArray("NonRepeatingVisuals");
    for(unsigned nonRepeatingVisualsIndex = 0; nonRepeatingVisualsIndex < nonRepeatingVisualsJsonList.GetLength(); ++nonRepeatingVisualsIndex)
    {
      m_nonRepeatingVisuals.push_back(nonRepeatingVisualsJsonList[nonRepeatingVisualsIndex].AsString());
    }
    m_nonRepeatingVisualsHasBeenSet = true;
  }
  return *this;
}

JsonValue BodySectionRepeatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionConfigurationsJsonList(m_dimensionConfigurations.size());
   for(unsigned dimensionConfigurationsIndex = 0; dimensionConfigurationsIndex < dimensionConfigurationsJsonList.GetLength(); ++dimensionConfigurationsIndex)
   {
     dimensionConfigurationsJsonList[dimensionConfigurationsIndex].AsObject(m_dimensionConfigurations[dimensionConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DimensionConfigurations", std::move(dimensionConfigurationsJsonList));

  }

  if(m_pageBreakConfigurationHasBeenSet)
  {
   payload.WithObject("PageBreakConfiguration", m_pageBreakConfiguration.Jsonize());

  }

  if(m_nonRepeatingVisualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nonRepeatingVisualsJsonList(m_nonRepeatingVisuals.size());
   for(unsigned nonRepeatingVisualsIndex = 0; nonRepeatingVisualsIndex < nonRepeatingVisualsJsonList.GetLength(); ++nonRepeatingVisualsIndex)
   {
     nonRepeatingVisualsJsonList[nonRepeatingVisualsIndex].AsString(m_nonRepeatingVisuals[nonRepeatingVisualsIndex]);
   }
   payload.WithArray("NonRepeatingVisuals", std::move(nonRepeatingVisualsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
