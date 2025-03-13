/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingS3Output.h>
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

ProcessingS3Output::ProcessingS3Output(JsonView jsonValue)
{
  *this = jsonValue;
}

ProcessingS3Output& ProcessingS3Output::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");
    m_localPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3UploadMode"))
  {
    m_s3UploadMode = ProcessingS3UploadModeMapper::GetProcessingS3UploadModeForName(jsonValue.GetString("S3UploadMode"));
    m_s3UploadModeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcessingS3Output::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3UploadModeHasBeenSet)
  {
   payload.WithString("S3UploadMode", ProcessingS3UploadModeMapper::GetNameForProcessingS3UploadMode(m_s3UploadMode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
