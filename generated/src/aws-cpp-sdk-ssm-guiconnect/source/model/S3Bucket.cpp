/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/model/S3Bucket.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMGuiConnect
{
namespace Model
{

S3Bucket::S3Bucket(JsonView jsonValue)
{
  *this = jsonValue;
}

S3Bucket& S3Bucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");
    m_bucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BucketOwner"))
  {
    m_bucketOwner = jsonValue.GetString("BucketOwner");
    m_bucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue S3Bucket::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_bucketOwnerHasBeenSet)
  {
   payload.WithString("BucketOwner", m_bucketOwner);

  }

  return payload;
}

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
