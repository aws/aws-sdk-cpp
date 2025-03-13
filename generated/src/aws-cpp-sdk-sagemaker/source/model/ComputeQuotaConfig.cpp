/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ComputeQuotaConfig.h>
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

ComputeQuotaConfig::ComputeQuotaConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeQuotaConfig& ComputeQuotaConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputeQuotaResources"))
  {
    Aws::Utils::Array<JsonView> computeQuotaResourcesJsonList = jsonValue.GetArray("ComputeQuotaResources");
    for(unsigned computeQuotaResourcesIndex = 0; computeQuotaResourcesIndex < computeQuotaResourcesJsonList.GetLength(); ++computeQuotaResourcesIndex)
    {
      m_computeQuotaResources.push_back(computeQuotaResourcesJsonList[computeQuotaResourcesIndex].AsObject());
    }
    m_computeQuotaResourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceSharingConfig"))
  {
    m_resourceSharingConfig = jsonValue.GetObject("ResourceSharingConfig");
    m_resourceSharingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreemptTeamTasks"))
  {
    m_preemptTeamTasks = PreemptTeamTasksMapper::GetPreemptTeamTasksForName(jsonValue.GetString("PreemptTeamTasks"));
    m_preemptTeamTasksHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeQuotaConfig::Jsonize() const
{
  JsonValue payload;

  if(m_computeQuotaResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computeQuotaResourcesJsonList(m_computeQuotaResources.size());
   for(unsigned computeQuotaResourcesIndex = 0; computeQuotaResourcesIndex < computeQuotaResourcesJsonList.GetLength(); ++computeQuotaResourcesIndex)
   {
     computeQuotaResourcesJsonList[computeQuotaResourcesIndex].AsObject(m_computeQuotaResources[computeQuotaResourcesIndex].Jsonize());
   }
   payload.WithArray("ComputeQuotaResources", std::move(computeQuotaResourcesJsonList));

  }

  if(m_resourceSharingConfigHasBeenSet)
  {
   payload.WithObject("ResourceSharingConfig", m_resourceSharingConfig.Jsonize());

  }

  if(m_preemptTeamTasksHasBeenSet)
  {
   payload.WithString("PreemptTeamTasks", PreemptTeamTasksMapper::GetNameForPreemptTeamTasks(m_preemptTeamTasks));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
