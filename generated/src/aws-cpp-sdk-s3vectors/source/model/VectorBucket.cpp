/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/model/VectorBucket.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

VectorBucket::VectorBucket(JsonView jsonValue)
{
  *this = jsonValue;
}

VectorBucket& VectorBucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vectorBucketName"))
  {
    m_vectorBucketName = jsonValue.GetString("vectorBucketName");
    m_vectorBucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vectorBucketArn"))
  {
    m_vectorBucketArn = jsonValue.GetString("vectorBucketArn");
    m_vectorBucketArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorBucket::Jsonize() const
{
  JsonValue payload;

  if(m_vectorBucketNameHasBeenSet)
  {
   payload.WithString("vectorBucketName", m_vectorBucketName);

  }

  if(m_vectorBucketArnHasBeenSet)
  {
   payload.WithString("vectorBucketArn", m_vectorBucketArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
