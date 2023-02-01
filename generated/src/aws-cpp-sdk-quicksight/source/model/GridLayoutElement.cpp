/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GridLayoutElement.h>
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

GridLayoutElement::GridLayoutElement() : 
    m_elementIdHasBeenSet(false),
    m_elementType(LayoutElementType::NOT_SET),
    m_elementTypeHasBeenSet(false),
    m_columnIndex(0),
    m_columnIndexHasBeenSet(false),
    m_columnSpan(0),
    m_columnSpanHasBeenSet(false),
    m_rowIndex(0),
    m_rowIndexHasBeenSet(false),
    m_rowSpan(0),
    m_rowSpanHasBeenSet(false)
{
}

GridLayoutElement::GridLayoutElement(JsonView jsonValue) : 
    m_elementIdHasBeenSet(false),
    m_elementType(LayoutElementType::NOT_SET),
    m_elementTypeHasBeenSet(false),
    m_columnIndex(0),
    m_columnIndexHasBeenSet(false),
    m_columnSpan(0),
    m_columnSpanHasBeenSet(false),
    m_rowIndex(0),
    m_rowIndexHasBeenSet(false),
    m_rowSpan(0),
    m_rowSpanHasBeenSet(false)
{
  *this = jsonValue;
}

GridLayoutElement& GridLayoutElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ElementId"))
  {
    m_elementId = jsonValue.GetString("ElementId");

    m_elementIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElementType"))
  {
    m_elementType = LayoutElementTypeMapper::GetLayoutElementTypeForName(jsonValue.GetString("ElementType"));

    m_elementTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnIndex"))
  {
    m_columnIndex = jsonValue.GetInteger("ColumnIndex");

    m_columnIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnSpan"))
  {
    m_columnSpan = jsonValue.GetInteger("ColumnSpan");

    m_columnSpanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowIndex"))
  {
    m_rowIndex = jsonValue.GetInteger("RowIndex");

    m_rowIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowSpan"))
  {
    m_rowSpan = jsonValue.GetInteger("RowSpan");

    m_rowSpanHasBeenSet = true;
  }

  return *this;
}

JsonValue GridLayoutElement::Jsonize() const
{
  JsonValue payload;

  if(m_elementIdHasBeenSet)
  {
   payload.WithString("ElementId", m_elementId);

  }

  if(m_elementTypeHasBeenSet)
  {
   payload.WithString("ElementType", LayoutElementTypeMapper::GetNameForLayoutElementType(m_elementType));
  }

  if(m_columnIndexHasBeenSet)
  {
   payload.WithInteger("ColumnIndex", m_columnIndex);

  }

  if(m_columnSpanHasBeenSet)
  {
   payload.WithInteger("ColumnSpan", m_columnSpan);

  }

  if(m_rowIndexHasBeenSet)
  {
   payload.WithInteger("RowIndex", m_rowIndex);

  }

  if(m_rowSpanHasBeenSet)
  {
   payload.WithInteger("RowSpan", m_rowSpan);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
