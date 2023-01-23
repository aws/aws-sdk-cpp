/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingS3Input.h>
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

ProcessingS3Input::ProcessingS3Input() : 
    m_s3UriHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3DataType(ProcessingS3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3InputMode(ProcessingS3InputMode::NOT_SET),
    m_s3InputModeHasBeenSet(false),
    m_s3DataDistributionType(ProcessingS3DataDistributionType::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false),
    m_s3CompressionType(ProcessingS3CompressionType::NOT_SET),
    m_s3CompressionTypeHasBeenSet(false)
{
}

ProcessingS3Input::ProcessingS3Input(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3DataType(ProcessingS3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3InputMode(ProcessingS3InputMode::NOT_SET),
    m_s3InputModeHasBeenSet(false),
    m_s3DataDistributionType(ProcessingS3DataDistributionType::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false),
    m_s3CompressionType(ProcessingS3CompressionType::NOT_SET),
    m_s3CompressionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingS3Input& ProcessingS3Input::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("S3DataType"))
  {
    m_s3DataType = ProcessingS3DataTypeMapper::GetProcessingS3DataTypeForName(jsonValue.GetString("S3DataType"));

    m_s3DataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3InputMode"))
  {
    m_s3InputMode = ProcessingS3InputModeMapper::GetProcessingS3InputModeForName(jsonValue.GetString("S3InputMode"));

    m_s3InputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DataDistributionType"))
  {
    m_s3DataDistributionType = ProcessingS3DataDistributionTypeMapper::GetProcessingS3DataDistributionTypeForName(jsonValue.GetString("S3DataDistributionType"));

    m_s3DataDistributionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3CompressionType"))
  {
    m_s3CompressionType = ProcessingS3CompressionTypeMapper::GetProcessingS3CompressionTypeForName(jsonValue.GetString("S3CompressionType"));

    m_s3CompressionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingS3Input::Jsonize() const
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

  if(m_s3DataTypeHasBeenSet)
  {
   payload.WithString("S3DataType", ProcessingS3DataTypeMapper::GetNameForProcessingS3DataType(m_s3DataType));
  }

  if(m_s3InputModeHasBeenSet)
  {
   payload.WithString("S3InputMode", ProcessingS3InputModeMapper::GetNameForProcessingS3InputMode(m_s3InputMode));
  }

  if(m_s3DataDistributionTypeHasBeenSet)
  {
   payload.WithString("S3DataDistributionType", ProcessingS3DataDistributionTypeMapper::GetNameForProcessingS3DataDistributionType(m_s3DataDistributionType));
  }

  if(m_s3CompressionTypeHasBeenSet)
  {
   payload.WithString("S3CompressionType", ProcessingS3CompressionTypeMapper::GetNameForProcessingS3CompressionType(m_s3CompressionType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
