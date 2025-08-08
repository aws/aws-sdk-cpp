/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UltraServerSummary.h>
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

UltraServerSummary::UltraServerSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

UltraServerSummary& UltraServerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UltraServerType"))
  {
    m_ultraServerType = jsonValue.GetString("UltraServerType");
    m_ultraServerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ReservedCapacityInstanceTypeMapper::GetReservedCapacityInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UltraServerCount"))
  {
    m_ultraServerCount = jsonValue.GetInteger("UltraServerCount");
    m_ultraServerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailableSpareInstanceCount"))
  {
    m_availableSpareInstanceCount = jsonValue.GetInteger("AvailableSpareInstanceCount");
    m_availableSpareInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UnhealthyInstanceCount"))
  {
    m_unhealthyInstanceCount = jsonValue.GetInteger("UnhealthyInstanceCount");
    m_unhealthyInstanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue UltraServerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_ultraServerTypeHasBeenSet)
  {
   payload.WithString("UltraServerType", m_ultraServerType);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ReservedCapacityInstanceTypeMapper::GetNameForReservedCapacityInstanceType(m_instanceType));
  }

  if(m_ultraServerCountHasBeenSet)
  {
   payload.WithInteger("UltraServerCount", m_ultraServerCount);

  }

  if(m_availableSpareInstanceCountHasBeenSet)
  {
   payload.WithInteger("AvailableSpareInstanceCount", m_availableSpareInstanceCount);

  }

  if(m_unhealthyInstanceCountHasBeenSet)
  {
   payload.WithInteger("UnhealthyInstanceCount", m_unhealthyInstanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
