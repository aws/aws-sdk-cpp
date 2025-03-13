/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OptimizationJobModelSourceS3.h>
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

OptimizationJobModelSourceS3::OptimizationJobModelSourceS3(JsonView jsonValue)
{
  *this = jsonValue;
}

OptimizationJobModelSourceS3& OptimizationJobModelSourceS3::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelAccessConfig"))
  {
    m_modelAccessConfig = jsonValue.GetObject("ModelAccessConfig");
    m_modelAccessConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue OptimizationJobModelSourceS3::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

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
