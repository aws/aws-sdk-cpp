/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/S3FileSystemConfig.h>
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

S3FileSystemConfig::S3FileSystemConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

S3FileSystemConfig& S3FileSystemConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MountPath"))
  {
    m_mountPath = jsonValue.GetString("MountPath");
    m_mountPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue S3FileSystemConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mountPathHasBeenSet)
  {
   payload.WithString("MountPath", m_mountPath);

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
