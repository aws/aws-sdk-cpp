/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SubtotalOptions.h>
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

SubtotalOptions::SubtotalOptions() : 
    m_totalsVisibility(Visibility::NOT_SET),
    m_totalsVisibilityHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_fieldLevel(PivotTableSubtotalLevel::NOT_SET),
    m_fieldLevelHasBeenSet(false),
    m_fieldLevelOptionsHasBeenSet(false),
    m_totalCellStyleHasBeenSet(false),
    m_valueCellStyleHasBeenSet(false),
    m_metricHeaderCellStyleHasBeenSet(false)
{
}

SubtotalOptions::SubtotalOptions(JsonView jsonValue) : 
    m_totalsVisibility(Visibility::NOT_SET),
    m_totalsVisibilityHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_fieldLevel(PivotTableSubtotalLevel::NOT_SET),
    m_fieldLevelHasBeenSet(false),
    m_fieldLevelOptionsHasBeenSet(false),
    m_totalCellStyleHasBeenSet(false),
    m_valueCellStyleHasBeenSet(false),
    m_metricHeaderCellStyleHasBeenSet(false)
{
  *this = jsonValue;
}

SubtotalOptions& SubtotalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalsVisibility"))
  {
    m_totalsVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("TotalsVisibility"));

    m_totalsVisibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomLabel"))
  {
    m_customLabel = jsonValue.GetString("CustomLabel");

    m_customLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldLevel"))
  {
    m_fieldLevel = PivotTableSubtotalLevelMapper::GetPivotTableSubtotalLevelForName(jsonValue.GetString("FieldLevel"));

    m_fieldLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldLevelOptions"))
  {
    Aws::Utils::Array<JsonView> fieldLevelOptionsJsonList = jsonValue.GetArray("FieldLevelOptions");
    for(unsigned fieldLevelOptionsIndex = 0; fieldLevelOptionsIndex < fieldLevelOptionsJsonList.GetLength(); ++fieldLevelOptionsIndex)
    {
      m_fieldLevelOptions.push_back(fieldLevelOptionsJsonList[fieldLevelOptionsIndex].AsObject());
    }
    m_fieldLevelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCellStyle"))
  {
    m_totalCellStyle = jsonValue.GetObject("TotalCellStyle");

    m_totalCellStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueCellStyle"))
  {
    m_valueCellStyle = jsonValue.GetObject("ValueCellStyle");

    m_valueCellStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricHeaderCellStyle"))
  {
    m_metricHeaderCellStyle = jsonValue.GetObject("MetricHeaderCellStyle");

    m_metricHeaderCellStyleHasBeenSet = true;
  }

  return *this;
}

JsonValue SubtotalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_totalsVisibilityHasBeenSet)
  {
   payload.WithString("TotalsVisibility", VisibilityMapper::GetNameForVisibility(m_totalsVisibility));
  }

  if(m_customLabelHasBeenSet)
  {
   payload.WithString("CustomLabel", m_customLabel);

  }

  if(m_fieldLevelHasBeenSet)
  {
   payload.WithString("FieldLevel", PivotTableSubtotalLevelMapper::GetNameForPivotTableSubtotalLevel(m_fieldLevel));
  }

  if(m_fieldLevelOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldLevelOptionsJsonList(m_fieldLevelOptions.size());
   for(unsigned fieldLevelOptionsIndex = 0; fieldLevelOptionsIndex < fieldLevelOptionsJsonList.GetLength(); ++fieldLevelOptionsIndex)
   {
     fieldLevelOptionsJsonList[fieldLevelOptionsIndex].AsObject(m_fieldLevelOptions[fieldLevelOptionsIndex].Jsonize());
   }
   payload.WithArray("FieldLevelOptions", std::move(fieldLevelOptionsJsonList));

  }

  if(m_totalCellStyleHasBeenSet)
  {
   payload.WithObject("TotalCellStyle", m_totalCellStyle.Jsonize());

  }

  if(m_valueCellStyleHasBeenSet)
  {
   payload.WithObject("ValueCellStyle", m_valueCellStyle.Jsonize());

  }

  if(m_metricHeaderCellStyleHasBeenSet)
  {
   payload.WithObject("MetricHeaderCellStyle", m_metricHeaderCellStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
