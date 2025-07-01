/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ExadataIormConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

ExadataIormConfig::ExadataIormConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ExadataIormConfig& ExadataIormConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbPlans"))
  {
    Aws::Utils::Array<JsonView> dbPlansJsonList = jsonValue.GetArray("dbPlans");
    for(unsigned dbPlansIndex = 0; dbPlansIndex < dbPlansJsonList.GetLength(); ++dbPlansIndex)
    {
      m_dbPlans.push_back(dbPlansJsonList[dbPlansIndex].AsObject());
    }
    m_dbPlansHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleDetails"))
  {
    m_lifecycleDetails = jsonValue.GetString("lifecycleDetails");
    m_lifecycleDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifecycleState"))
  {
    m_lifecycleState = IormLifecycleStateMapper::GetIormLifecycleStateForName(jsonValue.GetString("lifecycleState"));
    m_lifecycleStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("objective"))
  {
    m_objective = ObjectiveMapper::GetObjectiveForName(jsonValue.GetString("objective"));
    m_objectiveHasBeenSet = true;
  }
  return *this;
}

JsonValue ExadataIormConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dbPlansHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbPlansJsonList(m_dbPlans.size());
   for(unsigned dbPlansIndex = 0; dbPlansIndex < dbPlansJsonList.GetLength(); ++dbPlansIndex)
   {
     dbPlansJsonList[dbPlansIndex].AsObject(m_dbPlans[dbPlansIndex].Jsonize());
   }
   payload.WithArray("dbPlans", std::move(dbPlansJsonList));

  }

  if(m_lifecycleDetailsHasBeenSet)
  {
   payload.WithString("lifecycleDetails", m_lifecycleDetails);

  }

  if(m_lifecycleStateHasBeenSet)
  {
   payload.WithString("lifecycleState", IormLifecycleStateMapper::GetNameForIormLifecycleState(m_lifecycleState));
  }

  if(m_objectiveHasBeenSet)
  {
   payload.WithString("objective", ObjectiveMapper::GetNameForObjective(m_objective));
  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
