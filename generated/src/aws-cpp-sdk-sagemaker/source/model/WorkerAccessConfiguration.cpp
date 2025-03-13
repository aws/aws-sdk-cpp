/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/WorkerAccessConfiguration.h>
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

WorkerAccessConfiguration::WorkerAccessConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkerAccessConfiguration& WorkerAccessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Presign"))
  {
    m_s3Presign = jsonValue.GetObject("S3Presign");
    m_s3PresignHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkerAccessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3PresignHasBeenSet)
  {
   payload.WithObject("S3Presign", m_s3Presign.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
