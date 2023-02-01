/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDetails::AwsEcsTaskDetails() : 
    m_clusterArnHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_containersHasBeenSet(false)
{
}

AwsEcsTaskDetails::AwsEcsTaskDetails(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_containersHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDetails& AwsEcsTaskDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("TaskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetString("StartedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedBy"))
  {
    m_startedBy = jsonValue.GetString("StartedBy");

    m_startedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetString("Group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("Volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("Containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("TaskDefinitionArn", m_taskDefinitionArn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithString("StartedAt", m_startedAt);

  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("StartedBy", m_startedBy);

  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("Volumes", std::move(volumesJsonList));

  }

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("Containers", std::move(containersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
