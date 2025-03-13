/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrackingServerSummary.h>
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

TrackingServerSummary::TrackingServerSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TrackingServerSummary& TrackingServerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrackingServerArn"))
  {
    m_trackingServerArn = jsonValue.GetString("TrackingServerArn");
    m_trackingServerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackingServerName"))
  {
    m_trackingServerName = jsonValue.GetString("TrackingServerName");
    m_trackingServerNameHasBeenSet = true;
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
  if(jsonValue.ValueExists("TrackingServerStatus"))
  {
    m_trackingServerStatus = TrackingServerStatusMapper::GetTrackingServerStatusForName(jsonValue.GetString("TrackingServerStatus"));
    m_trackingServerStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsActive"))
  {
    m_isActive = IsTrackingServerActiveMapper::GetIsTrackingServerActiveForName(jsonValue.GetString("IsActive"));
    m_isActiveHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MlflowVersion"))
  {
    m_mlflowVersion = jsonValue.GetString("MlflowVersion");
    m_mlflowVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue TrackingServerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_trackingServerArnHasBeenSet)
  {
   payload.WithString("TrackingServerArn", m_trackingServerArn);

  }

  if(m_trackingServerNameHasBeenSet)
  {
   payload.WithString("TrackingServerName", m_trackingServerName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_trackingServerStatusHasBeenSet)
  {
   payload.WithString("TrackingServerStatus", TrackingServerStatusMapper::GetNameForTrackingServerStatus(m_trackingServerStatus));
  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithString("IsActive", IsTrackingServerActiveMapper::GetNameForIsTrackingServerActive(m_isActive));
  }

  if(m_mlflowVersionHasBeenSet)
  {
   payload.WithString("MlflowVersion", m_mlflowVersion);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
