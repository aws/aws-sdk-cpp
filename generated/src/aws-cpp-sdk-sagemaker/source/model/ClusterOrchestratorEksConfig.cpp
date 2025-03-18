/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterOrchestratorEksConfig.h>
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

ClusterOrchestratorEksConfig::ClusterOrchestratorEksConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterOrchestratorEksConfig& ClusterOrchestratorEksConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterOrchestratorEksConfig::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
