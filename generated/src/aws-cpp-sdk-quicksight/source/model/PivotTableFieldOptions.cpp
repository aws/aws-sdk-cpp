/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableFieldOptions.h>
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

PivotTableFieldOptions::PivotTableFieldOptions() : 
    m_selectedFieldOptionsHasBeenSet(false),
    m_dataPathOptionsHasBeenSet(false),
    m_collapseStateOptionsHasBeenSet(false)
{
}

PivotTableFieldOptions::PivotTableFieldOptions(JsonView jsonValue) : 
    m_selectedFieldOptionsHasBeenSet(false),
    m_dataPathOptionsHasBeenSet(false),
    m_collapseStateOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableFieldOptions& PivotTableFieldOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectedFieldOptions"))
  {
    Aws::Utils::Array<JsonView> selectedFieldOptionsJsonList = jsonValue.GetArray("SelectedFieldOptions");
    for(unsigned selectedFieldOptionsIndex = 0; selectedFieldOptionsIndex < selectedFieldOptionsJsonList.GetLength(); ++selectedFieldOptionsIndex)
    {
      m_selectedFieldOptions.push_back(selectedFieldOptionsJsonList[selectedFieldOptionsIndex].AsObject());
    }
    m_selectedFieldOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPathOptions"))
  {
    Aws::Utils::Array<JsonView> dataPathOptionsJsonList = jsonValue.GetArray("DataPathOptions");
    for(unsigned dataPathOptionsIndex = 0; dataPathOptionsIndex < dataPathOptionsJsonList.GetLength(); ++dataPathOptionsIndex)
    {
      m_dataPathOptions.push_back(dataPathOptionsJsonList[dataPathOptionsIndex].AsObject());
    }
    m_dataPathOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollapseStateOptions"))
  {
    Aws::Utils::Array<JsonView> collapseStateOptionsJsonList = jsonValue.GetArray("CollapseStateOptions");
    for(unsigned collapseStateOptionsIndex = 0; collapseStateOptionsIndex < collapseStateOptionsJsonList.GetLength(); ++collapseStateOptionsIndex)
    {
      m_collapseStateOptions.push_back(collapseStateOptionsJsonList[collapseStateOptionsIndex].AsObject());
    }
    m_collapseStateOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableFieldOptions::Jsonize() const
{
  JsonValue payload;

  if(m_selectedFieldOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedFieldOptionsJsonList(m_selectedFieldOptions.size());
   for(unsigned selectedFieldOptionsIndex = 0; selectedFieldOptionsIndex < selectedFieldOptionsJsonList.GetLength(); ++selectedFieldOptionsIndex)
   {
     selectedFieldOptionsJsonList[selectedFieldOptionsIndex].AsObject(m_selectedFieldOptions[selectedFieldOptionsIndex].Jsonize());
   }
   payload.WithArray("SelectedFieldOptions", std::move(selectedFieldOptionsJsonList));

  }

  if(m_dataPathOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataPathOptionsJsonList(m_dataPathOptions.size());
   for(unsigned dataPathOptionsIndex = 0; dataPathOptionsIndex < dataPathOptionsJsonList.GetLength(); ++dataPathOptionsIndex)
   {
     dataPathOptionsJsonList[dataPathOptionsIndex].AsObject(m_dataPathOptions[dataPathOptionsIndex].Jsonize());
   }
   payload.WithArray("DataPathOptions", std::move(dataPathOptionsJsonList));

  }

  if(m_collapseStateOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> collapseStateOptionsJsonList(m_collapseStateOptions.size());
   for(unsigned collapseStateOptionsIndex = 0; collapseStateOptionsIndex < collapseStateOptionsJsonList.GetLength(); ++collapseStateOptionsIndex)
   {
     collapseStateOptionsJsonList[collapseStateOptionsIndex].AsObject(m_collapseStateOptions[collapseStateOptionsIndex].Jsonize());
   }
   payload.WithArray("CollapseStateOptions", std::move(collapseStateOptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
