﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableBucketSummary.h>
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

TableBucketSummary::TableBucketSummary() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

TableBucketSummary::TableBucketSummary(JsonView jsonValue)
  : TableBucketSummary()
{
  *this = jsonValue;
}

TableBucketSummary& TableBucketSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue TableBucketSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("ownerAccountId", m_ownerAccountId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
