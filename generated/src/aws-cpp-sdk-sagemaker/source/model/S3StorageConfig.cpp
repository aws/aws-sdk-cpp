/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/S3StorageConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

S3StorageConfig::S3StorageConfig() : 
    m_s3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resolvedOutputS3UriHasBeenSet(false)
{
}

S3StorageConfig::S3StorageConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_resolvedOutputS3UriHasBeenSet(false)
{
  *this = jsonValue;
}

S3StorageConfig& S3StorageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolvedOutputS3Uri"))
  {
    m_resolvedOutputS3Uri = jsonValue.GetString("ResolvedOutputS3Uri");

    m_resolvedOutputS3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue S3StorageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_resolvedOutputS3UriHasBeenSet)
  {
   payload.WithString("ResolvedOutputS3Uri", m_resolvedOutputS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
