/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/InputColumn.h>
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

InputColumn::InputColumn() : 
    m_nameHasBeenSet(false),
    m_type(InputColumnDataType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

InputColumn::InputColumn(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(InputColumnDataType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

InputColumn& InputColumn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = InputColumnDataTypeMapper::GetInputColumnDataTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue InputColumn::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InputColumnDataTypeMapper::GetNameForInputColumnDataType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
