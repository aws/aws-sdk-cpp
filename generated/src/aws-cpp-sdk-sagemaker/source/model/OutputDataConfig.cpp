/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OutputDataConfig.h>
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

OutputDataConfig::OutputDataConfig() : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_compressionType(OutputCompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false)
{
}

OutputDataConfig::OutputDataConfig(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_compressionType(OutputCompressionType::NOT_SET),
    m_compressionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

OutputDataConfig& OutputDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompressionType"))
  {
    m_compressionType = OutputCompressionTypeMapper::GetOutputCompressionTypeForName(jsonValue.GetString("CompressionType"));

    m_compressionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_compressionTypeHasBeenSet)
  {
   payload.WithString("CompressionType", OutputCompressionTypeMapper::GetNameForOutputCompressionType(m_compressionType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
