/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantManagedInstanceScaling.h>
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

ProductionVariantManagedInstanceScaling::ProductionVariantManagedInstanceScaling() : 
    m_status(ManagedInstanceScalingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_minInstanceCount(0),
    m_minInstanceCountHasBeenSet(false),
    m_maxInstanceCount(0),
    m_maxInstanceCountHasBeenSet(false)
{
}

ProductionVariantManagedInstanceScaling::ProductionVariantManagedInstanceScaling(JsonView jsonValue) : 
    m_status(ManagedInstanceScalingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_minInstanceCount(0),
    m_minInstanceCountHasBeenSet(false),
    m_maxInstanceCount(0),
    m_maxInstanceCountHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionVariantManagedInstanceScaling& ProductionVariantManagedInstanceScaling::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ManagedInstanceScalingStatusMapper::GetManagedInstanceScalingStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinInstanceCount"))
  {
    m_minInstanceCount = jsonValue.GetInteger("MinInstanceCount");

    m_minInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxInstanceCount"))
  {
    m_maxInstanceCount = jsonValue.GetInteger("MaxInstanceCount");

    m_maxInstanceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionVariantManagedInstanceScaling::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ManagedInstanceScalingStatusMapper::GetNameForManagedInstanceScalingStatus(m_status));
  }

  if(m_minInstanceCountHasBeenSet)
  {
   payload.WithInteger("MinInstanceCount", m_minInstanceCount);

  }

  if(m_maxInstanceCountHasBeenSet)
  {
   payload.WithInteger("MaxInstanceCount", m_maxInstanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
