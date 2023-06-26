/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColumnSchema.h>
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

ColumnSchema::ColumnSchema() : 
    m_nameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_geographicRoleHasBeenSet(false)
{
}

ColumnSchema::ColumnSchema(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_geographicRoleHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnSchema& ColumnSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataType"))
  {
    m_dataType = jsonValue.GetString("DataType");

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeographicRole"))
  {
    m_geographicRole = jsonValue.GetString("GeographicRole");

    m_geographicRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnSchema::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", m_dataType);

  }

  if(m_geographicRoleHasBeenSet)
  {
   payload.WithString("GeographicRole", m_geographicRole);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
