/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericalDimensionField.h>
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

NumericalDimensionField::NumericalDimensionField() : 
    m_fieldIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_hierarchyIdHasBeenSet(false),
    m_formatConfigurationHasBeenSet(false)
{
}

NumericalDimensionField::NumericalDimensionField(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_hierarchyIdHasBeenSet(false),
    m_formatConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

NumericalDimensionField& NumericalDimensionField::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("HierarchyId"))
  {
    m_hierarchyId = jsonValue.GetString("HierarchyId");

    m_hierarchyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FormatConfiguration"))
  {
    m_formatConfiguration = jsonValue.GetObject("FormatConfiguration");

    m_formatConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericalDimensionField::Jsonize() const
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

  if(m_hierarchyIdHasBeenSet)
  {
   payload.WithString("HierarchyId", m_hierarchyId);

  }

  if(m_formatConfigurationHasBeenSet)
  {
   payload.WithObject("FormatConfiguration", m_formatConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
