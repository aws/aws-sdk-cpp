/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationJobOutputConfig.h>
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

OptimizationJobOutputConfig::OptimizationJobOutputConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizationJobOutputConfig& OptimizationJobOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3OutputLocation"))
  {
    m_s3OutputLocation = jsonValue.GetString("S3OutputLocation");
    m_s3OutputLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizationJobOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_s3OutputLocationHasBeenSet)
  {
   payload.WithString("S3OutputLocation", m_s3OutputLocation);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
