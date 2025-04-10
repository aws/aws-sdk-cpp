/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetOptions.h>
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

AssetOptions::AssetOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetOptions& AssetOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");
    m_timezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WeekStart"))
  {
    m_weekStart = DayOfTheWeekMapper::GetDayOfTheWeekForName(jsonValue.GetString("WeekStart"));
    m_weekStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QBusinessInsightsStatus"))
  {
    m_qBusinessInsightsStatus = QBusinessInsightsStatusMapper::GetQBusinessInsightsStatusForName(jsonValue.GetString("QBusinessInsightsStatus"));
    m_qBusinessInsightsStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludedDataSetArns"))
  {
    Aws::Utils::Array<JsonView> excludedDataSetArnsJsonList = jsonValue.GetArray("ExcludedDataSetArns");
    for(unsigned excludedDataSetArnsIndex = 0; excludedDataSetArnsIndex < excludedDataSetArnsJsonList.GetLength(); ++excludedDataSetArnsIndex)
    {
      m_excludedDataSetArns.push_back(excludedDataSetArnsJsonList[excludedDataSetArnsIndex].AsString());
    }
    m_excludedDataSetArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomActionDefaults"))
  {
    m_customActionDefaults = jsonValue.GetObject("CustomActionDefaults");
    m_customActionDefaultsHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetOptions::Jsonize() const
{
  JsonValue payload;

  if(m_timezoneHasBeenSet)
  {
   payload.WithString("Timezone", m_timezone);

  }

  if(m_weekStartHasBeenSet)
  {
   payload.WithString("WeekStart", DayOfTheWeekMapper::GetNameForDayOfTheWeek(m_weekStart));
  }

  if(m_qBusinessInsightsStatusHasBeenSet)
  {
   payload.WithString("QBusinessInsightsStatus", QBusinessInsightsStatusMapper::GetNameForQBusinessInsightsStatus(m_qBusinessInsightsStatus));
  }

  if(m_excludedDataSetArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedDataSetArnsJsonList(m_excludedDataSetArns.size());
   for(unsigned excludedDataSetArnsIndex = 0; excludedDataSetArnsIndex < excludedDataSetArnsJsonList.GetLength(); ++excludedDataSetArnsIndex)
   {
     excludedDataSetArnsJsonList[excludedDataSetArnsIndex].AsString(m_excludedDataSetArns[excludedDataSetArnsIndex]);
   }
   payload.WithArray("ExcludedDataSetArns", std::move(excludedDataSetArnsJsonList));

  }

  if(m_customActionDefaultsHasBeenSet)
  {
   payload.WithObject("CustomActionDefaults", m_customActionDefaults.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
