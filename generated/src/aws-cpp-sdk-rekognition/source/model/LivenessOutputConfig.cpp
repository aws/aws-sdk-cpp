/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/LivenessOutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

LivenessOutputConfig::LivenessOutputConfig() : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
}

LivenessOutputConfig::LivenessOutputConfig(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3KeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

LivenessOutputConfig& LivenessOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KeyPrefix"))
  {
    m_s3KeyPrefix = jsonValue.GetString("S3KeyPrefix");

    m_s3KeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue LivenessOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3KeyPrefixHasBeenSet)
  {
   payload.WithString("S3KeyPrefix", m_s3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
