/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EdgeDeploymentPlanSummary.h>
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

EdgeDeploymentPlanSummary::EdgeDeploymentPlanSummary() : 
    m_edgeDeploymentPlanArnHasBeenSet(false),
    m_edgeDeploymentPlanNameHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_edgeDeploymentSuccess(0),
    m_edgeDeploymentSuccessHasBeenSet(false),
    m_edgeDeploymentPending(0),
    m_edgeDeploymentPendingHasBeenSet(false),
    m_edgeDeploymentFailed(0),
    m_edgeDeploymentFailedHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

EdgeDeploymentPlanSummary::EdgeDeploymentPlanSummary(JsonView jsonValue) : 
    m_edgeDeploymentPlanArnHasBeenSet(false),
    m_edgeDeploymentPlanNameHasBeenSet(false),
    m_deviceFleetNameHasBeenSet(false),
    m_edgeDeploymentSuccess(0),
    m_edgeDeploymentSuccessHasBeenSet(false),
    m_edgeDeploymentPending(0),
    m_edgeDeploymentPendingHasBeenSet(false),
    m_edgeDeploymentFailed(0),
    m_edgeDeploymentFailedHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeDeploymentPlanSummary& EdgeDeploymentPlanSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EdgeDeploymentPlanArn"))
  {
    m_edgeDeploymentPlanArn = jsonValue.GetString("EdgeDeploymentPlanArn");

    m_edgeDeploymentPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentPlanName"))
  {
    m_edgeDeploymentPlanName = jsonValue.GetString("EdgeDeploymentPlanName");

    m_edgeDeploymentPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceFleetName"))
  {
    m_deviceFleetName = jsonValue.GetString("DeviceFleetName");

    m_deviceFleetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentSuccess"))
  {
    m_edgeDeploymentSuccess = jsonValue.GetInteger("EdgeDeploymentSuccess");

    m_edgeDeploymentSuccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentPending"))
  {
    m_edgeDeploymentPending = jsonValue.GetInteger("EdgeDeploymentPending");

    m_edgeDeploymentPendingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeDeploymentFailed"))
  {
    m_edgeDeploymentFailed = jsonValue.GetInteger("EdgeDeploymentFailed");

    m_edgeDeploymentFailedHasBeenSet = true;
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

JsonValue EdgeDeploymentPlanSummary::Jsonize() const
{
  JsonValue payload;

  if(m_edgeDeploymentPlanArnHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanArn", m_edgeDeploymentPlanArn);

  }

  if(m_edgeDeploymentPlanNameHasBeenSet)
  {
   payload.WithString("EdgeDeploymentPlanName", m_edgeDeploymentPlanName);

  }

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_edgeDeploymentSuccessHasBeenSet)
  {
   payload.WithInteger("EdgeDeploymentSuccess", m_edgeDeploymentSuccess);

  }

  if(m_edgeDeploymentPendingHasBeenSet)
  {
   payload.WithInteger("EdgeDeploymentPending", m_edgeDeploymentPending);

  }

  if(m_edgeDeploymentFailedHasBeenSet)
  {
   payload.WithInteger("EdgeDeploymentFailed", m_edgeDeploymentFailed);

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
