/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultFilterListControlOptions.h>
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

DefaultFilterListControlOptions::DefaultFilterListControlOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DefaultFilterListControlOptions& DefaultFilterListControlOptions::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue DefaultFilterListControlOptions::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
