/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Tables
{
namespace Model
{

TableSummary::TableSummary() : 
    m_namespaceHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(TableType::NOT_SET),
    m_typeHasBeenSet(false),
    m_tableARNHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

TableSummary::TableSummary(JsonView jsonValue)
  : TableSummary()
{
  *this = jsonValue;
}

TableSummary& TableSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    Aws::Utils::Array<JsonView> namespaceJsonList = jsonValue.GetArray("namespace");
    for(unsigned namespaceIndex = 0; namespaceIndex < namespaceJsonList.GetLength(); ++namespaceIndex)
    {
      m_namespace.push_back(namespaceJsonList[namespaceIndex].AsString());
    }
    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TableTypeMapper::GetTableTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tableARN"))
  {
    m_tableARN = jsonValue.GetString("tableARN");

    m_tableARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue TableSummary::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namespaceJsonList(m_namespace.size());
   for(unsigned namespaceIndex = 0; namespaceIndex < namespaceJsonList.GetLength(); ++namespaceIndex)
   {
     namespaceJsonList[namespaceIndex].AsString(m_namespace[namespaceIndex]);
   }
   payload.WithArray("namespace", std::move(namespaceJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TableTypeMapper::GetNameForTableType(m_type));
  }

  if(m_tableARNHasBeenSet)
  {
   payload.WithString("tableARN", m_tableARN);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
