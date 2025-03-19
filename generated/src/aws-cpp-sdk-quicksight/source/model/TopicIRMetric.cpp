/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIRMetric.h>
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

TopicIRMetric::TopicIRMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicIRMetric& TopicIRMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricId"))
  {
    m_metricId = jsonValue.GetObject("MetricId");
    m_metricIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Function"))
  {
    m_function = jsonValue.GetObject("Function");
    m_functionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Operands"))
  {
    Aws::Utils::Array<JsonView> operandsJsonList = jsonValue.GetArray("Operands");
    for(unsigned operandsIndex = 0; operandsIndex < operandsJsonList.GetLength(); ++operandsIndex)
    {
      m_operands.push_back(operandsJsonList[operandsIndex].AsObject());
    }
    m_operandsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComparisonMethod"))
  {
    m_comparisonMethod = jsonValue.GetObject("ComparisonMethod");
    m_comparisonMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");
    m_expressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CalculatedFieldReferences"))
  {
    Aws::Utils::Array<JsonView> calculatedFieldReferencesJsonList = jsonValue.GetArray("CalculatedFieldReferences");
    for(unsigned calculatedFieldReferencesIndex = 0; calculatedFieldReferencesIndex < calculatedFieldReferencesJsonList.GetLength(); ++calculatedFieldReferencesIndex)
    {
      m_calculatedFieldReferences.push_back(calculatedFieldReferencesJsonList[calculatedFieldReferencesIndex].AsObject());
    }
    m_calculatedFieldReferencesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayFormat"))
  {
    m_displayFormat = DisplayFormatMapper::GetDisplayFormatForName(jsonValue.GetString("DisplayFormat"));
    m_displayFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayFormatOptions"))
  {
    m_displayFormatOptions = jsonValue.GetObject("DisplayFormatOptions");
    m_displayFormatOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NamedEntity"))
  {
    m_namedEntity = jsonValue.GetObject("NamedEntity");
    m_namedEntityHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicIRMetric::Jsonize() const
{
  JsonValue payload;

  if(m_metricIdHasBeenSet)
  {
   payload.WithObject("MetricId", m_metricId.Jsonize());

  }

  if(m_functionHasBeenSet)
  {
   payload.WithObject("Function", m_function.Jsonize());

  }

  if(m_operandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operandsJsonList(m_operands.size());
   for(unsigned operandsIndex = 0; operandsIndex < operandsJsonList.GetLength(); ++operandsIndex)
   {
     operandsJsonList[operandsIndex].AsObject(m_operands[operandsIndex].Jsonize());
   }
   payload.WithArray("Operands", std::move(operandsJsonList));

  }

  if(m_comparisonMethodHasBeenSet)
  {
   payload.WithObject("ComparisonMethod", m_comparisonMethod.Jsonize());

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_calculatedFieldReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> calculatedFieldReferencesJsonList(m_calculatedFieldReferences.size());
   for(unsigned calculatedFieldReferencesIndex = 0; calculatedFieldReferencesIndex < calculatedFieldReferencesJsonList.GetLength(); ++calculatedFieldReferencesIndex)
   {
     calculatedFieldReferencesJsonList[calculatedFieldReferencesIndex].AsObject(m_calculatedFieldReferences[calculatedFieldReferencesIndex].Jsonize());
   }
   payload.WithArray("CalculatedFieldReferences", std::move(calculatedFieldReferencesJsonList));

  }

  if(m_displayFormatHasBeenSet)
  {
   payload.WithString("DisplayFormat", DisplayFormatMapper::GetNameForDisplayFormat(m_displayFormat));
  }

  if(m_displayFormatOptionsHasBeenSet)
  {
   payload.WithObject("DisplayFormatOptions", m_displayFormatOptions.Jsonize());

  }

  if(m_namedEntityHasBeenSet)
  {
   payload.WithObject("NamedEntity", m_namedEntity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
