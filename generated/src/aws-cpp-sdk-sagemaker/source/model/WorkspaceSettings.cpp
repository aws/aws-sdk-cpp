/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/WorkspaceSettings.h>
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

WorkspaceSettings::WorkspaceSettings() : 
    m_s3ArtifactPathHasBeenSet(false),
    m_s3KmsKeyIdHasBeenSet(false)
{
}

WorkspaceSettings::WorkspaceSettings(JsonView jsonValue) : 
    m_s3ArtifactPathHasBeenSet(false),
    m_s3KmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceSettings& WorkspaceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ArtifactPath"))
  {
    m_s3ArtifactPath = jsonValue.GetString("S3ArtifactPath");

    m_s3ArtifactPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3KmsKeyId"))
  {
    m_s3KmsKeyId = jsonValue.GetString("S3KmsKeyId");

    m_s3KmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_s3ArtifactPathHasBeenSet)
  {
   payload.WithString("S3ArtifactPath", m_s3ArtifactPath);

  }

  if(m_s3KmsKeyIdHasBeenSet)
  {
   payload.WithString("S3KmsKeyId", m_s3KmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
