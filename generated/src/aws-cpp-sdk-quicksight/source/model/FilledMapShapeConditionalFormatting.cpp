/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilledMapShapeConditionalFormatting.h>
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

FilledMapShapeConditionalFormatting::FilledMapShapeConditionalFormatting() : 
    m_fieldIdHasBeenSet(false),
    m_formatHasBeenSet(false)
{
}

FilledMapShapeConditionalFormatting::FilledMapShapeConditionalFormatting(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

FilledMapShapeConditionalFormatting& FilledMapShapeConditionalFormatting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetObject("Format");

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue FilledMapShapeConditionalFormatting::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithObject("Format", m_format.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
