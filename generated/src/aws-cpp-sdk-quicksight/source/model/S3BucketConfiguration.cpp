/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/S3BucketConfiguration.h>
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

S3BucketConfiguration::S3BucketConfiguration() : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_bucketRegionHasBeenSet(false)
{
}

S3BucketConfiguration::S3BucketConfiguration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_bucketRegionHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketConfiguration& S3BucketConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("BucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketRegion"))
  {
    m_bucketRegion = jsonValue.GetString("BucketRegion");

    m_bucketRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("BucketPrefix", m_bucketPrefix);

  }

  if(m_bucketRegionHasBeenSet)
  {
   payload.WithString("BucketRegion", m_bucketRegion);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
