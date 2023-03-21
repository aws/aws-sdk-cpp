/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/S3BucketSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

S3BucketSource::S3BucketSource() : 
    m_s3BucketHasBeenSet(false),
    m_s3BucketOwnerHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
}

S3BucketSource::S3BucketSource(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3BucketOwnerHasBeenSet(false),
    m_s3KeyHasBeenSet(false)
{
  *this = jsonValue;
}

S3BucketSource& S3BucketSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketOwner"))
  {
    m_s3BucketOwner = jsonValue.GetString("s3BucketOwner");

    m_s3BucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Key"))
  {
    m_s3Key = jsonValue.GetString("s3Key");

    m_s3KeyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3BucketSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3BucketOwnerHasBeenSet)
  {
   payload.WithString("s3BucketOwner", m_s3BucketOwner);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("s3Key", m_s3Key);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
