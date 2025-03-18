/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDataCaptureConfig.h>
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

BatchDataCaptureConfig::BatchDataCaptureConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchDataCaptureConfig& BatchDataCaptureConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationS3Uri"))
  {
    m_destinationS3Uri = jsonValue.GetString("DestinationS3Uri");
    m_destinationS3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GenerateInferenceId"))
  {
    m_generateInferenceId = jsonValue.GetBool("GenerateInferenceId");
    m_generateInferenceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDataCaptureConfig::Jsonize() const
{
  JsonValue payload;

  if(m_destinationS3UriHasBeenSet)
  {
   payload.WithString("DestinationS3Uri", m_destinationS3Uri);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_generateInferenceIdHasBeenSet)
  {
   payload.WithBool("GenerateInferenceId", m_generateInferenceId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
