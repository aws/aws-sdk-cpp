/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/PostLaunchActionsStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

PostLaunchActionsStatus::PostLaunchActionsStatus() : 
    m_postLaunchActionsLaunchStatusListHasBeenSet(false),
    m_ssmAgentDiscoveryDatetimeHasBeenSet(false)
{
}

PostLaunchActionsStatus::PostLaunchActionsStatus(JsonView jsonValue) : 
    m_postLaunchActionsLaunchStatusListHasBeenSet(false),
    m_ssmAgentDiscoveryDatetimeHasBeenSet(false)
{
  *this = jsonValue;
}

PostLaunchActionsStatus& PostLaunchActionsStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("postLaunchActionsLaunchStatusList"))
  {
    Aws::Utils::Array<JsonView> postLaunchActionsLaunchStatusListJsonList = jsonValue.GetArray("postLaunchActionsLaunchStatusList");
    for(unsigned postLaunchActionsLaunchStatusListIndex = 0; postLaunchActionsLaunchStatusListIndex < postLaunchActionsLaunchStatusListJsonList.GetLength(); ++postLaunchActionsLaunchStatusListIndex)
    {
      m_postLaunchActionsLaunchStatusList.push_back(postLaunchActionsLaunchStatusListJsonList[postLaunchActionsLaunchStatusListIndex].AsObject());
    }
    m_postLaunchActionsLaunchStatusListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmAgentDiscoveryDatetime"))
  {
    m_ssmAgentDiscoveryDatetime = jsonValue.GetString("ssmAgentDiscoveryDatetime");

    m_ssmAgentDiscoveryDatetimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PostLaunchActionsStatus::Jsonize() const
{
  JsonValue payload;

  if(m_postLaunchActionsLaunchStatusListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> postLaunchActionsLaunchStatusListJsonList(m_postLaunchActionsLaunchStatusList.size());
   for(unsigned postLaunchActionsLaunchStatusListIndex = 0; postLaunchActionsLaunchStatusListIndex < postLaunchActionsLaunchStatusListJsonList.GetLength(); ++postLaunchActionsLaunchStatusListIndex)
   {
     postLaunchActionsLaunchStatusListJsonList[postLaunchActionsLaunchStatusListIndex].AsObject(m_postLaunchActionsLaunchStatusList[postLaunchActionsLaunchStatusListIndex].Jsonize());
   }
   payload.WithArray("postLaunchActionsLaunchStatusList", std::move(postLaunchActionsLaunchStatusListJsonList));

  }

  if(m_ssmAgentDiscoveryDatetimeHasBeenSet)
  {
   payload.WithString("ssmAgentDiscoveryDatetime", m_ssmAgentDiscoveryDatetime);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
