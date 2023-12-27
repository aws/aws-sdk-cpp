/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataPathValue.h>
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

DataPathValue::DataPathValue() : 
    m_fieldIdHasBeenSet(false),
    m_fieldValueHasBeenSet(false),
    m_dataPathTypeHasBeenSet(false)
{
}

DataPathValue::DataPathValue(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_fieldValueHasBeenSet(false),
    m_dataPathTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DataPathValue& DataPathValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldValue"))
  {
    m_fieldValue = jsonValue.GetString("FieldValue");

    m_fieldValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPathType"))
  {
    m_dataPathType = jsonValue.GetObject("DataPathType");

    m_dataPathTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataPathValue::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_fieldValueHasBeenSet)
  {
   payload.WithString("FieldValue", m_fieldValue);

  }

  if(m_dataPathTypeHasBeenSet)
  {
   payload.WithObject("DataPathType", m_dataPathType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
