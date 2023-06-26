/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ParameterListControl.h>
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

ParameterListControl::ParameterListControl() : 
    m_parameterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_displayOptionsHasBeenSet(false),
    m_type(SheetControlListType::NOT_SET),
    m_typeHasBeenSet(false),
    m_selectableValuesHasBeenSet(false),
    m_cascadingControlConfigurationHasBeenSet(false)
{
}

ParameterListControl::ParameterListControl(JsonView jsonValue) : 
    m_parameterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_displayOptionsHasBeenSet(false),
    m_type(SheetControlListType::NOT_SET),
    m_typeHasBeenSet(false),
    m_selectableValuesHasBeenSet(false),
    m_cascadingControlConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterListControl& ParameterListControl::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SheetControlListTypeMapper::GetSheetControlListTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectableValues"))
  {
    m_selectableValues = jsonValue.GetObject("SelectableValues");

    m_selectableValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CascadingControlConfiguration"))
  {
    m_cascadingControlConfiguration = jsonValue.GetObject("CascadingControlConfiguration");

    m_cascadingControlConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterListControl::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SheetControlListTypeMapper::GetNameForSheetControlListType(m_type));
  }

  if(m_selectableValuesHasBeenSet)
  {
   payload.WithObject("SelectableValues", m_selectableValues.Jsonize());

  }

  if(m_cascadingControlConfigurationHasBeenSet)
  {
   payload.WithObject("CascadingControlConfiguration", m_cascadingControlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
