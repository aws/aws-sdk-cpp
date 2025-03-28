﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnConfiguration.h>
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

ColumnConfiguration::ColumnConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ColumnConfiguration& ColumnConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FormatConfiguration"))
  {
    m_formatConfiguration = jsonValue.GetObject("FormatConfiguration");
    m_formatConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = ColumnRoleMapper::GetColumnRoleForName(jsonValue.GetString("Role"));
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColorsConfiguration"))
  {
    m_colorsConfiguration = jsonValue.GetObject("ColorsConfiguration");
    m_colorsConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_formatConfigurationHasBeenSet)
  {
   payload.WithObject("FormatConfiguration", m_formatConfiguration.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", ColumnRoleMapper::GetNameForColumnRole(m_role));
  }

  if(m_colorsConfigurationHasBeenSet)
  {
   payload.WithObject("ColorsConfiguration", m_colorsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
