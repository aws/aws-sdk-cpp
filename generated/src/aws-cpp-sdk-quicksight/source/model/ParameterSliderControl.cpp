/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ParameterSliderControl.h>
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

ParameterSliderControl::ParameterSliderControl() : 
    m_parameterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_displayOptionsHasBeenSet(false),
    m_maximumValue(0.0),
    m_maximumValueHasBeenSet(false),
    m_minimumValue(0.0),
    m_minimumValueHasBeenSet(false),
    m_stepSize(0.0),
    m_stepSizeHasBeenSet(false)
{
}

ParameterSliderControl::ParameterSliderControl(JsonView jsonValue) : 
    m_parameterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_displayOptionsHasBeenSet(false),
    m_maximumValue(0.0),
    m_maximumValueHasBeenSet(false),
    m_minimumValue(0.0),
    m_minimumValueHasBeenSet(false),
    m_stepSize(0.0),
    m_stepSizeHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterSliderControl& ParameterSliderControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParameterControlId"))
  {
    m_parameterControlId = jsonValue.GetString("ParameterControlId");

    m_parameterControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceParameterName"))
  {
    m_sourceParameterName = jsonValue.GetString("SourceParameterName");

    m_sourceParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayOptions"))
  {
    m_displayOptions = jsonValue.GetObject("DisplayOptions");

    m_displayOptionsHasBeenSet = true;
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

JsonValue ParameterSliderControl::Jsonize() const
{
  JsonValue payload;

  if(m_parameterControlIdHasBeenSet)
  {
   payload.WithString("ParameterControlId", m_parameterControlId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_sourceParameterNameHasBeenSet)
  {
   payload.WithString("SourceParameterName", m_sourceParameterName);

  }

  if(m_displayOptionsHasBeenSet)
  {
   payload.WithObject("DisplayOptions", m_displayOptions.Jsonize());

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
