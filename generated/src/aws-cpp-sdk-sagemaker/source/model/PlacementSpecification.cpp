/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PlacementSpecification.h>
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

PlacementSpecification::PlacementSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

PlacementSpecification& PlacementSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UltraServerId"))
  {
    m_ultraServerId = jsonValue.GetString("UltraServerId");
    m_ultraServerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");
    m_instanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue PlacementSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_ultraServerIdHasBeenSet)
  {
   payload.WithString("UltraServerId", m_ultraServerId);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
