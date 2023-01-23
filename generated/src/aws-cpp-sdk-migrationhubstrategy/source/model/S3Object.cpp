/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/S3Object.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

S3Object::S3Object() : 
    m_s3BucketHasBeenSet(false),
    m_s3keyHasBeenSet(false)
{
}

S3Object::S3Object(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3keyHasBeenSet(false)
{
  *this = jsonValue;
}

S3Object& S3Object::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3key"))
  {
    m_s3key = jsonValue.GetString("s3key");

    m_s3keyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Object::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3keyHasBeenSet)
  {
   payload.WithString("s3key", m_s3key);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
