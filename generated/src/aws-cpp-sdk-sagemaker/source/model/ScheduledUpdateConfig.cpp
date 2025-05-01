/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ScheduledUpdateConfig.h>
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

ScheduledUpdateConfig::ScheduledUpdateConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduledUpdateConfig& ScheduledUpdateConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentConfig"))
  {
    m_deploymentConfig = jsonValue.GetObject("DeploymentConfig");
    m_deploymentConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledUpdateConfig::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_deploymentConfigHasBeenSet)
  {
   payload.WithObject("DeploymentConfig", m_deploymentConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
