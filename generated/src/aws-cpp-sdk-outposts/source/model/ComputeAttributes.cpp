/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/ComputeAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

ComputeAttributes::ComputeAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeAttributes& ComputeAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostId"))
  {
    m_hostId = jsonValue.GetString("HostId");
    m_hostIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ComputeAssetStateMapper::GetComputeAssetStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceFamilies"))
  {
    Aws::Utils::Array<JsonView> instanceFamiliesJsonList = jsonValue.GetArray("InstanceFamilies");
    for(unsigned instanceFamiliesIndex = 0; instanceFamiliesIndex < instanceFamiliesJsonList.GetLength(); ++instanceFamiliesIndex)
    {
      m_instanceFamilies.push_back(instanceFamiliesJsonList[instanceFamiliesIndex].AsString());
    }
    m_instanceFamiliesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceTypeCapacities"))
  {
    Aws::Utils::Array<JsonView> instanceTypeCapacitiesJsonList = jsonValue.GetArray("InstanceTypeCapacities");
    for(unsigned instanceTypeCapacitiesIndex = 0; instanceTypeCapacitiesIndex < instanceTypeCapacitiesJsonList.GetLength(); ++instanceTypeCapacitiesIndex)
    {
      m_instanceTypeCapacities.push_back(instanceTypeCapacitiesJsonList[instanceTypeCapacitiesIndex].AsObject());
    }
    m_instanceTypeCapacitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxVcpus"))
  {
    m_maxVcpus = jsonValue.GetInteger("MaxVcpus");
    m_maxVcpusHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_hostIdHasBeenSet)
  {
   payload.WithString("HostId", m_hostId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", ComputeAssetStateMapper::GetNameForComputeAssetState(m_state));
  }

  if(m_instanceFamiliesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceFamiliesJsonList(m_instanceFamilies.size());
   for(unsigned instanceFamiliesIndex = 0; instanceFamiliesIndex < instanceFamiliesJsonList.GetLength(); ++instanceFamiliesIndex)
   {
     instanceFamiliesJsonList[instanceFamiliesIndex].AsString(m_instanceFamilies[instanceFamiliesIndex]);
   }
   payload.WithArray("InstanceFamilies", std::move(instanceFamiliesJsonList));

  }

  if(m_instanceTypeCapacitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypeCapacitiesJsonList(m_instanceTypeCapacities.size());
   for(unsigned instanceTypeCapacitiesIndex = 0; instanceTypeCapacitiesIndex < instanceTypeCapacitiesJsonList.GetLength(); ++instanceTypeCapacitiesIndex)
   {
     instanceTypeCapacitiesJsonList[instanceTypeCapacitiesIndex].AsObject(m_instanceTypeCapacities[instanceTypeCapacitiesIndex].Jsonize());
   }
   payload.WithArray("InstanceTypeCapacities", std::move(instanceTypeCapacitiesJsonList));

  }

  if(m_maxVcpusHasBeenSet)
  {
   payload.WithInteger("MaxVcpus", m_maxVcpus);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
