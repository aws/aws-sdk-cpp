/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AsyncInferenceOutputConfig.h>
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

AsyncInferenceOutputConfig::AsyncInferenceOutputConfig() : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_s3FailurePathHasBeenSet(false)
{
}

AsyncInferenceOutputConfig::AsyncInferenceOutputConfig(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false),
    m_s3OutputPathHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_s3FailurePathHasBeenSet(false)
{
  *this = jsonValue;
}

AsyncInferenceOutputConfig& AsyncInferenceOutputConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("NotificationConfig"))
  {
    m_notificationConfig = jsonValue.GetObject("NotificationConfig");

    m_notificationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3FailurePath"))
  {
    m_s3FailurePath = jsonValue.GetString("S3FailurePath");

    m_s3FailurePathHasBeenSet = true;
  }

  return *this;
}

JsonValue AsyncInferenceOutputConfig::Jsonize() const
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

  if(m_notificationConfigHasBeenSet)
  {
   payload.WithObject("NotificationConfig", m_notificationConfig.Jsonize());

  }

  if(m_s3FailurePathHasBeenSet)
  {
   payload.WithString("S3FailurePath", m_s3FailurePath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
