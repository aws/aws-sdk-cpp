/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GaugeChartConditionalFormattingOption.h>
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

GaugeChartConditionalFormattingOption::GaugeChartConditionalFormattingOption() : 
    m_primaryValueHasBeenSet(false),
    m_arcHasBeenSet(false)
{
}

GaugeChartConditionalFormattingOption::GaugeChartConditionalFormattingOption(JsonView jsonValue) : 
    m_primaryValueHasBeenSet(false),
    m_arcHasBeenSet(false)
{
  *this = jsonValue;
}

GaugeChartConditionalFormattingOption& GaugeChartConditionalFormattingOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryValue"))
  {
    m_primaryValue = jsonValue.GetObject("PrimaryValue");

    m_primaryValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arc"))
  {
    m_arc = jsonValue.GetObject("Arc");

    m_arcHasBeenSet = true;
  }

  return *this;
}

JsonValue GaugeChartConditionalFormattingOption::Jsonize() const
{
  JsonValue payload;

  if(m_primaryValueHasBeenSet)
  {
   payload.WithObject("PrimaryValue", m_primaryValue.Jsonize());

  }

  if(m_arcHasBeenSet)
  {
   payload.WithObject("Arc", m_arc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
