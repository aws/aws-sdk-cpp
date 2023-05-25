/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableFieldSubtotalOptions.h>
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

PivotTableFieldSubtotalOptions::PivotTableFieldSubtotalOptions() : 
    m_fieldIdHasBeenSet(false)
{
}

PivotTableFieldSubtotalOptions::PivotTableFieldSubtotalOptions(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableFieldSubtotalOptions& PivotTableFieldSubtotalOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableFieldSubtotalOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
