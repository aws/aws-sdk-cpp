/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EmrServerlessComputeConfig.h>
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

EmrServerlessComputeConfig::EmrServerlessComputeConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EmrServerlessComputeConfig& EmrServerlessComputeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionRoleARN"))
  {
    m_executionRoleARN = jsonValue.GetString("ExecutionRoleARN");
    m_executionRoleARNHasBeenSet = true;
  }
  return *this;
}

JsonValue EmrServerlessComputeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_executionRoleARNHasBeenSet)
  {
   payload.WithString("ExecutionRoleARN", m_executionRoleARN);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
