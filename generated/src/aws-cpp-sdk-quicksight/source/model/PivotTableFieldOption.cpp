/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableFieldOption.h>
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

PivotTableFieldOption::PivotTableFieldOption() : 
    m_fieldIdHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

PivotTableFieldOption::PivotTableFieldOption(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableFieldOption& PivotTableFieldOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomLabel"))
  {
    m_customLabel = jsonValue.GetString("CustomLabel");

    m_customLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableFieldOption::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_customLabelHasBeenSet)
  {
   payload.WithString("CustomLabel", m_customLabel);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
