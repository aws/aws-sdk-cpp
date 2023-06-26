/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldCustomIconContent.h>
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

TableFieldCustomIconContent::TableFieldCustomIconContent() : 
    m_icon(TableFieldIconSetType::NOT_SET),
    m_iconHasBeenSet(false)
{
}

TableFieldCustomIconContent::TableFieldCustomIconContent(JsonView jsonValue) : 
    m_icon(TableFieldIconSetType::NOT_SET),
    m_iconHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldCustomIconContent& TableFieldCustomIconContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Icon"))
  {
    m_icon = TableFieldIconSetTypeMapper::GetTableFieldIconSetTypeForName(jsonValue.GetString("Icon"));

    m_iconHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldCustomIconContent::Jsonize() const
{
  JsonValue payload;

  if(m_iconHasBeenSet)
  {
   payload.WithString("Icon", TableFieldIconSetTypeMapper::GetNameForTableFieldIconSetType(m_icon));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
