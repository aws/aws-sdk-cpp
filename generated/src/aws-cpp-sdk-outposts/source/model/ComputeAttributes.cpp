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

ComputeAttributes::ComputeAttributes() : 
    m_hostIdHasBeenSet(false),
    m_state(ComputeAssetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false)
{
}

ComputeAttributes::ComputeAttributes(JsonView jsonValue) : 
    m_hostIdHasBeenSet(false),
    m_state(ComputeAssetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
