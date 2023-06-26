/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

ResourceQuery::ResourceQuery() : 
    m_type(QueryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

ResourceQuery::ResourceQuery(JsonView jsonValue) : 
    m_type(QueryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_queryHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceQuery& ResourceQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = QueryTypeMapper::GetQueryTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Query"))
  {
    m_query = jsonValue.GetString("Query");

    m_queryHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceQuery::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", QueryTypeMapper::GetNameForQueryType(m_type));
  }

  if(m_queryHasBeenSet)
  {
   payload.WithString("Query", m_query);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
