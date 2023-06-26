/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ForwardAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

ForwardAction::ForwardAction() : 
    m_targetGroupsHasBeenSet(false)
{
}

ForwardAction::ForwardAction(JsonView jsonValue) : 
    m_targetGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

ForwardAction& ForwardAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetGroups"))
  {
    Aws::Utils::Array<JsonView> targetGroupsJsonList = jsonValue.GetArray("targetGroups");
    for(unsigned targetGroupsIndex = 0; targetGroupsIndex < targetGroupsJsonList.GetLength(); ++targetGroupsIndex)
    {
      m_targetGroups.push_back(targetGroupsJsonList[targetGroupsIndex].AsObject());
    }
    m_targetGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue ForwardAction::Jsonize() const
{
  JsonValue payload;

  if(m_targetGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetGroupsJsonList(m_targetGroups.size());
   for(unsigned targetGroupsIndex = 0; targetGroupsIndex < targetGroupsJsonList.GetLength(); ++targetGroupsIndex)
   {
     targetGroupsJsonList[targetGroupsIndex].AsObject(m_targetGroups[targetGroupsIndex].Jsonize());
   }
   payload.WithArray("targetGroups", std::move(targetGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
