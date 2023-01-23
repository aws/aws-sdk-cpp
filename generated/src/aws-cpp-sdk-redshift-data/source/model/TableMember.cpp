/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/TableMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{

TableMember::TableMember() : 
    m_nameHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

TableMember::TableMember(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

TableMember& TableMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetString("schema");

    m_schemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue TableMember::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
