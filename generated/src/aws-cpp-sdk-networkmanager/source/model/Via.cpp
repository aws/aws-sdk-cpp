/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/Via.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

Via::Via(JsonView jsonValue)
{
  *this = jsonValue;
}

Via& Via::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkFunctionGroups"))
  {
    Aws::Utils::Array<JsonView> networkFunctionGroupsJsonList = jsonValue.GetArray("NetworkFunctionGroups");
    for(unsigned networkFunctionGroupsIndex = 0; networkFunctionGroupsIndex < networkFunctionGroupsJsonList.GetLength(); ++networkFunctionGroupsIndex)
    {
      m_networkFunctionGroups.push_back(networkFunctionGroupsJsonList[networkFunctionGroupsIndex].AsObject());
    }
    m_networkFunctionGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WithEdgeOverrides"))
  {
    Aws::Utils::Array<JsonView> withEdgeOverridesJsonList = jsonValue.GetArray("WithEdgeOverrides");
    for(unsigned withEdgeOverridesIndex = 0; withEdgeOverridesIndex < withEdgeOverridesJsonList.GetLength(); ++withEdgeOverridesIndex)
    {
      m_withEdgeOverrides.push_back(withEdgeOverridesJsonList[withEdgeOverridesIndex].AsObject());
    }
    m_withEdgeOverridesHasBeenSet = true;
  }
  return *this;
}

JsonValue Via::Jsonize() const
{
  JsonValue payload;

  if(m_networkFunctionGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> networkFunctionGroupsJsonList(m_networkFunctionGroups.size());
   for(unsigned networkFunctionGroupsIndex = 0; networkFunctionGroupsIndex < networkFunctionGroupsJsonList.GetLength(); ++networkFunctionGroupsIndex)
   {
     networkFunctionGroupsJsonList[networkFunctionGroupsIndex].AsObject(m_networkFunctionGroups[networkFunctionGroupsIndex].Jsonize());
   }
   payload.WithArray("NetworkFunctionGroups", std::move(networkFunctionGroupsJsonList));

  }

  if(m_withEdgeOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> withEdgeOverridesJsonList(m_withEdgeOverrides.size());
   for(unsigned withEdgeOverridesIndex = 0; withEdgeOverridesIndex < withEdgeOverridesJsonList.GetLength(); ++withEdgeOverridesIndex)
   {
     withEdgeOverridesJsonList[withEdgeOverridesIndex].AsObject(m_withEdgeOverrides[withEdgeOverridesIndex].Jsonize());
   }
   payload.WithArray("WithEdgeOverrides", std::move(withEdgeOverridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
