/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterGroup.h>
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

FilterGroup::FilterGroup() : 
    m_filterGroupIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_scopeConfigurationHasBeenSet(false),
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_crossDataset(CrossDatasetTypes::NOT_SET),
    m_crossDatasetHasBeenSet(false)
{
}

FilterGroup::FilterGroup(JsonView jsonValue) : 
    m_filterGroupIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_scopeConfigurationHasBeenSet(false),
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_crossDataset(CrossDatasetTypes::NOT_SET),
    m_crossDatasetHasBeenSet(false)
{
  *this = jsonValue;
}

FilterGroup& FilterGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterGroupId"))
  {
    m_filterGroupId = jsonValue.GetString("FilterGroupId");

    m_filterGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScopeConfiguration"))
  {
    m_scopeConfiguration = jsonValue.GetObject("ScopeConfiguration");

    m_scopeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = WidgetStatusMapper::GetWidgetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossDataset"))
  {
    m_crossDataset = CrossDatasetTypesMapper::GetCrossDatasetTypesForName(jsonValue.GetString("CrossDataset"));

    m_crossDatasetHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterGroup::Jsonize() const
{
  JsonValue payload;

  if(m_filterGroupIdHasBeenSet)
  {
   payload.WithString("FilterGroupId", m_filterGroupId);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_scopeConfigurationHasBeenSet)
  {
   payload.WithObject("ScopeConfiguration", m_scopeConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WidgetStatusMapper::GetNameForWidgetStatus(m_status));
  }

  if(m_crossDatasetHasBeenSet)
  {
   payload.WithString("CrossDataset", CrossDatasetTypesMapper::GetNameForCrossDatasetTypes(m_crossDataset));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
