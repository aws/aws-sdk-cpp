/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultSliderControlOptions.h>
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

DefaultSliderControlOptions::DefaultSliderControlOptions() : 
    m_displayOptionsHasBeenSet(false),
    m_type(SheetControlSliderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_maximumValue(0.0),
    m_maximumValueHasBeenSet(false),
    m_minimumValue(0.0),
    m_minimumValueHasBeenSet(false),
    m_stepSize(0.0),
    m_stepSizeHasBeenSet(false)
{
}

DefaultSliderControlOptions::DefaultSliderControlOptions(JsonView jsonValue) : 
    m_displayOptionsHasBeenSet(false),
    m_type(SheetControlSliderType::NOT_SET),
    m_typeHasBeenSet(false),
    m_maximumValue(0.0),
    m_maximumValueHasBeenSet(false),
    m_minimumValue(0.0),
    m_minimumValueHasBeenSet(false),
    m_stepSize(0.0),
    m_stepSizeHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultSliderControlOptions& DefaultSliderControlOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisplayOptions"))
  {
    m_displayOptions = jsonValue.GetObject("DisplayOptions");

    m_displayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SheetControlSliderTypeMapper::GetSheetControlSliderTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumValue"))
  {
    m_maximumValue = jsonValue.GetDouble("MaximumValue");

    m_maximumValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumValue"))
  {
    m_minimumValue = jsonValue.GetDouble("MinimumValue");

    m_minimumValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepSize"))
  {
    m_stepSize = jsonValue.GetDouble("StepSize");

    m_stepSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultSliderControlOptions::Jsonize() const
{
  JsonValue payload;

  if(m_displayOptionsHasBeenSet)
  {
   payload.WithObject("DisplayOptions", m_displayOptions.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SheetControlSliderTypeMapper::GetNameForSheetControlSliderType(m_type));
  }

  if(m_maximumValueHasBeenSet)
  {
   payload.WithDouble("MaximumValue", m_maximumValue);

  }

  if(m_minimumValueHasBeenSet)
  {
   payload.WithDouble("MinimumValue", m_minimumValue);

  }

  if(m_stepSizeHasBeenSet)
  {
   payload.WithDouble("StepSize", m_stepSize);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
