/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/Queue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

Queue::Queue(JsonView jsonValue)
{
  *this = jsonValue;
}

Queue& Queue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterId"))
  {
    m_clusterId = jsonValue.GetString("clusterId");
    m_clusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = QueueStatusMapper::GetQueueStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeNodeGroupConfigurations"))
  {
    Aws::Utils::Array<JsonView> computeNodeGroupConfigurationsJsonList = jsonValue.GetArray("computeNodeGroupConfigurations");
    for(unsigned computeNodeGroupConfigurationsIndex = 0; computeNodeGroupConfigurationsIndex < computeNodeGroupConfigurationsJsonList.GetLength(); ++computeNodeGroupConfigurationsIndex)
    {
      m_computeNodeGroupConfigurations.push_back(computeNodeGroupConfigurationsJsonList[computeNodeGroupConfigurationsIndex].AsObject());
    }
    m_computeNodeGroupConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorInfo"))
  {
    Aws::Utils::Array<JsonView> errorInfoJsonList = jsonValue.GetArray("errorInfo");
    for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
    {
      m_errorInfo.push_back(errorInfoJsonList[errorInfoIndex].AsObject());
    }
    m_errorInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue Queue::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("clusterId", m_clusterId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QueueStatusMapper::GetNameForQueueStatus(m_status));
  }

  if(m_computeNodeGroupConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computeNodeGroupConfigurationsJsonList(m_computeNodeGroupConfigurations.size());
   for(unsigned computeNodeGroupConfigurationsIndex = 0; computeNodeGroupConfigurationsIndex < computeNodeGroupConfigurationsJsonList.GetLength(); ++computeNodeGroupConfigurationsIndex)
   {
     computeNodeGroupConfigurationsJsonList[computeNodeGroupConfigurationsIndex].AsObject(m_computeNodeGroupConfigurations[computeNodeGroupConfigurationsIndex].Jsonize());
   }
   payload.WithArray("computeNodeGroupConfigurations", std::move(computeNodeGroupConfigurationsJsonList));

  }

  if(m_errorInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorInfoJsonList(m_errorInfo.size());
   for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
   {
     errorInfoJsonList[errorInfoIndex].AsObject(m_errorInfo[errorInfoIndex].Jsonize());
   }
   payload.WithArray("errorInfo", std::move(errorInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
