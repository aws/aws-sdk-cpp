/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisLabelReferenceOptions.h>
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

AxisLabelReferenceOptions::AxisLabelReferenceOptions() : 
    m_fieldIdHasBeenSet(false),
    m_columnHasBeenSet(false)
{
}

AxisLabelReferenceOptions::AxisLabelReferenceOptions(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_columnHasBeenSet(false)
{
  *this = jsonValue;
}

AxisLabelReferenceOptions& AxisLabelReferenceOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisLabelReferenceOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
