/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterSchedulerConfigSummary.h>
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

ClusterSchedulerConfigSummary::ClusterSchedulerConfigSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterSchedulerConfigSummary& ClusterSchedulerConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterSchedulerConfigArn"))
  {
    m_clusterSchedulerConfigArn = jsonValue.GetString("ClusterSchedulerConfigArn");
    m_clusterSchedulerConfigArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterSchedulerConfigId"))
  {
    m_clusterSchedulerConfigId = jsonValue.GetString("ClusterSchedulerConfigId");
    m_clusterSchedulerConfigIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterSchedulerConfigVersion"))
  {
    m_clusterSchedulerConfigVersion = jsonValue.GetInteger("ClusterSchedulerConfigVersion");
    m_clusterSchedulerConfigVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SchedulerResourceStatusMapper::GetSchedulerResourceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterSchedulerConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_clusterSchedulerConfigArnHasBeenSet)
  {
   payload.WithString("ClusterSchedulerConfigArn", m_clusterSchedulerConfigArn);

  }

  if(m_clusterSchedulerConfigIdHasBeenSet)
  {
   payload.WithString("ClusterSchedulerConfigId", m_clusterSchedulerConfigId);

  }

  if(m_clusterSchedulerConfigVersionHasBeenSet)
  {
   payload.WithInteger("ClusterSchedulerConfigVersion", m_clusterSchedulerConfigVersion);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SchedulerResourceStatusMapper::GetNameForSchedulerResourceStatus(m_status));
  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
