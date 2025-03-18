/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SchedulerConfig.h>
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

SchedulerConfig::SchedulerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SchedulerConfig& SchedulerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PriorityClasses"))
  {
    Aws::Utils::Array<JsonView> priorityClassesJsonList = jsonValue.GetArray("PriorityClasses");
    for(unsigned priorityClassesIndex = 0; priorityClassesIndex < priorityClassesJsonList.GetLength(); ++priorityClassesIndex)
    {
      m_priorityClasses.push_back(priorityClassesJsonList[priorityClassesIndex].AsObject());
    }
    m_priorityClassesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FairShare"))
  {
    m_fairShare = FairShareMapper::GetFairShareForName(jsonValue.GetString("FairShare"));
    m_fairShareHasBeenSet = true;
  }
  return *this;
}

JsonValue SchedulerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_priorityClassesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> priorityClassesJsonList(m_priorityClasses.size());
   for(unsigned priorityClassesIndex = 0; priorityClassesIndex < priorityClassesJsonList.GetLength(); ++priorityClassesIndex)
   {
     priorityClassesJsonList[priorityClassesIndex].AsObject(m_priorityClasses[priorityClassesIndex].Jsonize());
   }
   payload.WithArray("PriorityClasses", std::move(priorityClassesJsonList));

  }

  if(m_fairShareHasBeenSet)
  {
   payload.WithString("FairShare", FairShareMapper::GetNameForFairShare(m_fairShare));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
