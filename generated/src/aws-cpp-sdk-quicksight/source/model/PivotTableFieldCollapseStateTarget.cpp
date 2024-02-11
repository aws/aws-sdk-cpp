/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableFieldCollapseStateTarget.h>
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

PivotTableFieldCollapseStateTarget::PivotTableFieldCollapseStateTarget() : 
    m_fieldIdHasBeenSet(false),
    m_fieldDataPathValuesHasBeenSet(false)
{
}

PivotTableFieldCollapseStateTarget::PivotTableFieldCollapseStateTarget(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_fieldDataPathValuesHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableFieldCollapseStateTarget& PivotTableFieldCollapseStateTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldDataPathValues"))
  {
    Aws::Utils::Array<JsonView> fieldDataPathValuesJsonList = jsonValue.GetArray("FieldDataPathValues");
    for(unsigned fieldDataPathValuesIndex = 0; fieldDataPathValuesIndex < fieldDataPathValuesJsonList.GetLength(); ++fieldDataPathValuesIndex)
    {
      m_fieldDataPathValues.push_back(fieldDataPathValuesJsonList[fieldDataPathValuesIndex].AsObject());
    }
    m_fieldDataPathValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableFieldCollapseStateTarget::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_fieldDataPathValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldDataPathValuesJsonList(m_fieldDataPathValues.size());
   for(unsigned fieldDataPathValuesIndex = 0; fieldDataPathValuesIndex < fieldDataPathValuesJsonList.GetLength(); ++fieldDataPathValuesIndex)
   {
     fieldDataPathValuesJsonList[fieldDataPathValuesIndex].AsObject(m_fieldDataPathValues[fieldDataPathValuesIndex].Jsonize());
   }
   payload.WithArray("FieldDataPathValues", std::move(fieldDataPathValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
