/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SelectedSheetsFilterScopeConfiguration.h>
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

SelectedSheetsFilterScopeConfiguration::SelectedSheetsFilterScopeConfiguration() : 
    m_sheetVisualScopingConfigurationsHasBeenSet(false)
{
}

SelectedSheetsFilterScopeConfiguration::SelectedSheetsFilterScopeConfiguration(JsonView jsonValue) : 
    m_sheetVisualScopingConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

SelectedSheetsFilterScopeConfiguration& SelectedSheetsFilterScopeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetVisualScopingConfigurations"))
  {
    Aws::Utils::Array<JsonView> sheetVisualScopingConfigurationsJsonList = jsonValue.GetArray("SheetVisualScopingConfigurations");
    for(unsigned sheetVisualScopingConfigurationsIndex = 0; sheetVisualScopingConfigurationsIndex < sheetVisualScopingConfigurationsJsonList.GetLength(); ++sheetVisualScopingConfigurationsIndex)
    {
      m_sheetVisualScopingConfigurations.push_back(sheetVisualScopingConfigurationsJsonList[sheetVisualScopingConfigurationsIndex].AsObject());
    }
    m_sheetVisualScopingConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue SelectedSheetsFilterScopeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sheetVisualScopingConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetVisualScopingConfigurationsJsonList(m_sheetVisualScopingConfigurations.size());
   for(unsigned sheetVisualScopingConfigurationsIndex = 0; sheetVisualScopingConfigurationsIndex < sheetVisualScopingConfigurationsJsonList.GetLength(); ++sheetVisualScopingConfigurationsIndex)
   {
     sheetVisualScopingConfigurationsJsonList[sheetVisualScopingConfigurationsIndex].AsObject(m_sheetVisualScopingConfigurations[sheetVisualScopingConfigurationsIndex].Jsonize());
   }
   payload.WithArray("SheetVisualScopingConfigurations", std::move(sheetVisualScopingConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
