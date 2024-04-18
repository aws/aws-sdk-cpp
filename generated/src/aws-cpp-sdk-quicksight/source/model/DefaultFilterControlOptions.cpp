/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultFilterControlOptions.h>
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

DefaultFilterControlOptions::DefaultFilterControlOptions() : 
    m_defaultDateTimePickerOptionsHasBeenSet(false),
    m_defaultListOptionsHasBeenSet(false),
    m_defaultDropdownOptionsHasBeenSet(false),
    m_defaultTextFieldOptionsHasBeenSet(false),
    m_defaultTextAreaOptionsHasBeenSet(false),
    m_defaultSliderOptionsHasBeenSet(false),
    m_defaultRelativeDateTimeOptionsHasBeenSet(false)
{
}

DefaultFilterControlOptions::DefaultFilterControlOptions(JsonView jsonValue) : 
    m_defaultDateTimePickerOptionsHasBeenSet(false),
    m_defaultListOptionsHasBeenSet(false),
    m_defaultDropdownOptionsHasBeenSet(false),
    m_defaultTextFieldOptionsHasBeenSet(false),
    m_defaultTextAreaOptionsHasBeenSet(false),
    m_defaultSliderOptionsHasBeenSet(false),
    m_defaultRelativeDateTimeOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultFilterControlOptions& DefaultFilterControlOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DefaultDateTimePickerOptions"))
  {
    m_defaultDateTimePickerOptions = jsonValue.GetObject("DefaultDateTimePickerOptions");

    m_defaultDateTimePickerOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultListOptions"))
  {
    m_defaultListOptions = jsonValue.GetObject("DefaultListOptions");

    m_defaultListOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultDropdownOptions"))
  {
    m_defaultDropdownOptions = jsonValue.GetObject("DefaultDropdownOptions");

    m_defaultDropdownOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultTextFieldOptions"))
  {
    m_defaultTextFieldOptions = jsonValue.GetObject("DefaultTextFieldOptions");

    m_defaultTextFieldOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultTextAreaOptions"))
  {
    m_defaultTextAreaOptions = jsonValue.GetObject("DefaultTextAreaOptions");

    m_defaultTextAreaOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSliderOptions"))
  {
    m_defaultSliderOptions = jsonValue.GetObject("DefaultSliderOptions");

    m_defaultSliderOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRelativeDateTimeOptions"))
  {
    m_defaultRelativeDateTimeOptions = jsonValue.GetObject("DefaultRelativeDateTimeOptions");

    m_defaultRelativeDateTimeOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultFilterControlOptions::Jsonize() const
{
  JsonValue payload;

  if(m_defaultDateTimePickerOptionsHasBeenSet)
  {
   payload.WithObject("DefaultDateTimePickerOptions", m_defaultDateTimePickerOptions.Jsonize());

  }

  if(m_defaultListOptionsHasBeenSet)
  {
   payload.WithObject("DefaultListOptions", m_defaultListOptions.Jsonize());

  }

  if(m_defaultDropdownOptionsHasBeenSet)
  {
   payload.WithObject("DefaultDropdownOptions", m_defaultDropdownOptions.Jsonize());

  }

  if(m_defaultTextFieldOptionsHasBeenSet)
  {
   payload.WithObject("DefaultTextFieldOptions", m_defaultTextFieldOptions.Jsonize());

  }

  if(m_defaultTextAreaOptionsHasBeenSet)
  {
   payload.WithObject("DefaultTextAreaOptions", m_defaultTextAreaOptions.Jsonize());

  }

  if(m_defaultSliderOptionsHasBeenSet)
  {
   payload.WithObject("DefaultSliderOptions", m_defaultSliderOptions.Jsonize());

  }

  if(m_defaultRelativeDateTimeOptionsHasBeenSet)
  {
   payload.WithObject("DefaultRelativeDateTimeOptions", m_defaultRelativeDateTimeOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
