/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ComputeQuotaSummary.h>
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

ComputeQuotaSummary::ComputeQuotaSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeQuotaSummary& ComputeQuotaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputeQuotaArn"))
  {
    m_computeQuotaArn = jsonValue.GetString("ComputeQuotaArn");
    m_computeQuotaArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeQuotaId"))
  {
    m_computeQuotaId = jsonValue.GetString("ComputeQuotaId");
    m_computeQuotaIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeQuotaVersion"))
  {
    m_computeQuotaVersion = jsonValue.GetInteger("ComputeQuotaVersion");
    m_computeQuotaVersionHasBeenSet = true;
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
  if(jsonValue.ValueExists("ComputeQuotaConfig"))
  {
    m_computeQuotaConfig = jsonValue.GetObject("ComputeQuotaConfig");
    m_computeQuotaConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeQuotaTarget"))
  {
    m_computeQuotaTarget = jsonValue.GetObject("ComputeQuotaTarget");
    m_computeQuotaTargetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActivationState"))
  {
    m_activationState = ActivationStateMapper::GetActivationStateForName(jsonValue.GetString("ActivationState"));
    m_activationStateHasBeenSet = true;
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
  return *this;
}

JsonValue ComputeQuotaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_computeQuotaArnHasBeenSet)
  {
   payload.WithString("ComputeQuotaArn", m_computeQuotaArn);

  }

  if(m_computeQuotaIdHasBeenSet)
  {
   payload.WithString("ComputeQuotaId", m_computeQuotaId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_computeQuotaVersionHasBeenSet)
  {
   payload.WithInteger("ComputeQuotaVersion", m_computeQuotaVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SchedulerResourceStatusMapper::GetNameForSchedulerResourceStatus(m_status));
  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_computeQuotaConfigHasBeenSet)
  {
   payload.WithObject("ComputeQuotaConfig", m_computeQuotaConfig.Jsonize());

  }

  if(m_computeQuotaTargetHasBeenSet)
  {
   payload.WithObject("ComputeQuotaTarget", m_computeQuotaTarget.Jsonize());

  }

  if(m_activationStateHasBeenSet)
  {
   payload.WithString("ActivationState", ActivationStateMapper::GetNameForActivationState(m_activationState));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
