/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AdditionalS3DataSource.h>
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

AdditionalS3DataSource::AdditionalS3DataSource() : 
    m_s3DataType(AdditionalS3DataSourceDataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false)
{
}

AdditionalS3DataSource::AdditionalS3DataSource(JsonView jsonValue) : 
    m_s3DataType(AdditionalS3DataSourceDataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false),
    m_compressionType(CompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalS3DataSource& AdditionalS3DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DataType"))
  {
    m_s3DataType = AdditionalS3DataSourceDataTypeMapper::GetAdditionalS3DataSourceDataTypeForName(jsonValue.GetString("S3DataType"));

    m_s3DataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = CompressionTypeMapper::GetCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalS3DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataTypeHasBeenSet)
  {
   payload.WithString("S3DataType", AdditionalS3DataSourceDataTypeMapper::GetNameForAdditionalS3DataSourceDataType(m_s3DataType));
  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", CompressionTypeMapper::GetNameForCompressionType(m_compressionType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
