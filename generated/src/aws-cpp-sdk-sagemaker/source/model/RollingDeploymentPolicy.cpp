/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RollingDeploymentPolicy.h>
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

RollingDeploymentPolicy::RollingDeploymentPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

RollingDeploymentPolicy& RollingDeploymentPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumBatchSize"))
  {
    m_maximumBatchSize = jsonValue.GetObject("MaximumBatchSize");
    m_maximumBatchSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RollbackMaximumBatchSize"))
  {
    m_rollbackMaximumBatchSize = jsonValue.GetObject("RollbackMaximumBatchSize");
    m_rollbackMaximumBatchSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue RollingDeploymentPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_maximumBatchSizeHasBeenSet)
  {
   payload.WithObject("MaximumBatchSize", m_maximumBatchSize.Jsonize());

  }

  if(m_rollbackMaximumBatchSizeHasBeenSet)
  {
   payload.WithObject("RollbackMaximumBatchSize", m_rollbackMaximumBatchSize.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
