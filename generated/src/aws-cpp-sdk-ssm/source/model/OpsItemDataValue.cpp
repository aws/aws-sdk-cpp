/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemDataValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemDataValue::OpsItemDataValue() : 
    m_valueHasBeenSet(false),
    m_type(OpsItemDataType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

OpsItemDataValue::OpsItemDataValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_type(OpsItemDataType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemDataValue& OpsItemDataValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = OpsItemDataTypeMapper::GetOpsItemDataTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemDataValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OpsItemDataTypeMapper::GetNameForOpsItemDataType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
