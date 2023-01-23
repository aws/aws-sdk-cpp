/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DynamicDefaultValue.h>
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

DynamicDefaultValue::DynamicDefaultValue() : 
    m_userNameColumnHasBeenSet(false),
    m_groupNameColumnHasBeenSet(false),
    m_defaultValueColumnHasBeenSet(false)
{
}

DynamicDefaultValue::DynamicDefaultValue(JsonView jsonValue) : 
    m_userNameColumnHasBeenSet(false),
    m_groupNameColumnHasBeenSet(false),
    m_defaultValueColumnHasBeenSet(false)
{
  *this = jsonValue;
}

DynamicDefaultValue& DynamicDefaultValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserNameColumn"))
  {
    m_userNameColumn = jsonValue.GetObject("UserNameColumn");

    m_userNameColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupNameColumn"))
  {
    m_groupNameColumn = jsonValue.GetObject("GroupNameColumn");

    m_groupNameColumnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValueColumn"))
  {
    m_defaultValueColumn = jsonValue.GetObject("DefaultValueColumn");

    m_defaultValueColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamicDefaultValue::Jsonize() const
{
  JsonValue payload;

  if(m_userNameColumnHasBeenSet)
  {
   payload.WithObject("UserNameColumn", m_userNameColumn.Jsonize());

  }

  if(m_groupNameColumnHasBeenSet)
  {
   payload.WithObject("GroupNameColumn", m_groupNameColumn.Jsonize());

  }

  if(m_defaultValueColumnHasBeenSet)
  {
   payload.WithObject("DefaultValueColumn", m_defaultValueColumn.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
