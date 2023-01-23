/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableCellConditionalFormatting.h>
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

PivotTableCellConditionalFormatting::PivotTableCellConditionalFormatting() : 
    m_fieldIdHasBeenSet(false),
    m_textFormatHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

PivotTableCellConditionalFormatting::PivotTableCellConditionalFormatting(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_textFormatHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableCellConditionalFormatting& PivotTableCellConditionalFormatting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextFormat"))
  {
    m_textFormat = jsonValue.GetObject("TextFormat");

    m_textFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetObject("Scope");

    m_scopeHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableCellConditionalFormatting::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_textFormatHasBeenSet)
  {
   payload.WithObject("TextFormat", m_textFormat.Jsonize());

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("Scope", m_scope.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
