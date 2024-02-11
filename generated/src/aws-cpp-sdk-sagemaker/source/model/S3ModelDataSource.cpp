/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/S3ModelDataSource.h>
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

S3ModelDataSource::S3ModelDataSource() : 
    m_s3UriHasBeenSet(false),
    m_s3DataType(S3ModelDataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_compressionType(ModelCompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_modelAccessConfigHasBeenSet(false)
{
}

S3ModelDataSource::S3ModelDataSource(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_s3DataType(S3ModelDataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_compressionType(ModelCompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false),
    m_modelAccessConfigHasBeenSet(false)
{
  *this = jsonValue;
}

S3ModelDataSource& S3ModelDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DataType"))
  {
    m_s3DataType = S3ModelDataTypeMapper::GetS3ModelDataTypeForName(jsonValue.GetString("S3DataType"));

    m_s3DataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = ModelCompressionTypeMapper::GetModelCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelAccessConfig"))
  {
    m_modelAccessConfig = jsonValue.GetObject("ModelAccessConfig");

    m_modelAccessConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ModelDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_s3DataTypeHasBeenSet)
  {
   payload.WithString("S3DataType", S3ModelDataTypeMapper::GetNameForS3ModelDataType(m_s3DataType));
  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", ModelCompressionTypeMapper::GetNameForModelCompressionType(m_compressionType));
  }

  if(m_modelAccessConfigHasBeenSet)
  {
   payload.WithObject("ModelAccessConfig", m_modelAccessConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
