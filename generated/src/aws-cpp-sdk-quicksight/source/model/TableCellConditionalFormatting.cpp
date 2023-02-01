/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableCellConditionalFormatting.h>
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

TableCellConditionalFormatting::TableCellConditionalFormatting() : 
    m_fieldIdHasBeenSet(false),
    m_textFormatHasBeenSet(false)
{
}

TableCellConditionalFormatting::TableCellConditionalFormatting(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_textFormatHasBeenSet(false)
{
  *this = jsonValue;
}

TableCellConditionalFormatting& TableCellConditionalFormatting::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue TableCellConditionalFormatting::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
