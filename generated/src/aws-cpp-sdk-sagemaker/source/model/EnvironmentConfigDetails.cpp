/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EnvironmentConfigDetails.h>
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

EnvironmentConfigDetails::EnvironmentConfigDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentConfigDetails& EnvironmentConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FSxLustreConfig"))
  {
    m_fSxLustreConfig = jsonValue.GetObject("FSxLustreConfig");
    m_fSxLustreConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");
    m_s3OutputPathHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_fSxLustreConfigHasBeenSet)
  {
   payload.WithObject("FSxLustreConfig", m_fSxLustreConfig.Jsonize());

  }

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
