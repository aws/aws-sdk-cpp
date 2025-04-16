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

NamespaceSummary::NamespaceSummary(JsonView jsonValue)
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
  if(jsonValue.ValueExists("namespaceId"))
  {
    m_namespaceId = jsonValue.GetString("namespaceId");
    m_namespaceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableBucketId"))
  {
    m_tableBucketId = jsonValue.GetString("tableBucketId");
    m_tableBucketIdHasBeenSet = true;
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

  if(m_namespaceIdHasBeenSet)
  {
   payload.WithString("namespaceId", m_namespaceId);

  }

  if(m_tableBucketIdHasBeenSet)
  {
   payload.WithString("tableBucketId", m_tableBucketId);

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
