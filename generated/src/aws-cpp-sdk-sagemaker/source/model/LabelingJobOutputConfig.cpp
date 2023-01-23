/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobOutputConfig.h>
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

LabelingJobOutputConfig::LabelingJobOutputConfig() : 
    m_s3OutputPathHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false)
{
}

LabelingJobOutputConfig::LabelingJobOutputConfig(JsonView jsonValue) : 
    m_s3OutputPathHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobOutputConfig& LabelingJobOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
