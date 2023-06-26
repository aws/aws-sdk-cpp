/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeDeploymentConfig.h>
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

EdgeDeploymentConfig::EdgeDeploymentConfig() : 
    m_failureHandlingPolicy(FailureHandlingPolicy::NOT_SET),
    m_failureHandlingPolicyHasBeenSet(false)
{
}

EdgeDeploymentConfig::EdgeDeploymentConfig(JsonView jsonValue) : 
    m_failureHandlingPolicy(FailureHandlingPolicy::NOT_SET),
    m_failureHandlingPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeDeploymentConfig& EdgeDeploymentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailureHandlingPolicy"))
  {
    m_failureHandlingPolicy = FailureHandlingPolicyMapper::GetFailureHandlingPolicyForName(jsonValue.GetString("FailureHandlingPolicy"));

    m_failureHandlingPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeDeploymentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_failureHandlingPolicyHasBeenSet)
  {
   payload.WithString("FailureHandlingPolicy", FailureHandlingPolicyMapper::GetNameForFailureHandlingPolicy(m_failureHandlingPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
