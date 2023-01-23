/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterListControl.h>
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

FilterListControl::FilterListControl() : 
    m_filterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceFilterIdHasBeenSet(false),
    m_displayOptionsHasBeenSet(false),
    m_type(SheetControlListType::NOT_SET),
    m_typeHasBeenSet(false),
    m_selectableValuesHasBeenSet(false),
    m_cascadingControlConfigurationHasBeenSet(false)
{
}

FilterListControl::FilterListControl(JsonView jsonValue) : 
    m_filterControlIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_sourceFilterIdHasBeenSet(false),
    m_displayOptionsHasBeenSet(false),
    m_type(SheetControlListType::NOT_SET),
    m_typeHasBeenSet(false),
    m_selectableValuesHasBeenSet(false),
    m_cascadingControlConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

FilterListControl& FilterListControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterControlId"))
  {
    m_filterControlId = jsonValue.GetString("FilterControlId");

    m_filterControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFilterId"))
  {
    m_sourceFilterId = jsonValue.GetString("SourceFilterId");

    m_sourceFilterIdHasBeenSet = true;
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

JsonValue FilterListControl::Jsonize() const
{
  JsonValue payload;

  if(m_filterControlIdHasBeenSet)
  {
   payload.WithString("FilterControlId", m_filterControlId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_sourceFilterIdHasBeenSet)
  {
   payload.WithString("SourceFilterId", m_sourceFilterId);

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
