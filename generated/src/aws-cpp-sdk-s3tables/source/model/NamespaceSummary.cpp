/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/NamespaceSummary.h>
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

NamespaceSummary::NamespaceSummary() : 
    m_namespaceHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false)
{
}

NamespaceSummary::NamespaceSummary(JsonView jsonValue)
  : NamespaceSummary()
{
  *this = jsonValue;
}

NamespaceSummary& NamespaceSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NamespaceSummary::Jsonize() const
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("ownerAccountId", m_ownerAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
