/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/WaveAggregatedStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

WaveAggregatedStatus::WaveAggregatedStatus() : 
    m_healthStatus(WaveHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_lastUpdateDateTimeHasBeenSet(false),
    m_progressStatus(WaveProgressStatus::NOT_SET),
    m_progressStatusHasBeenSet(false),
    m_replicationStartedDateTimeHasBeenSet(false),
    m_totalApplications(0),
    m_totalApplicationsHasBeenSet(false)
{
}

WaveAggregatedStatus::WaveAggregatedStatus(JsonView jsonValue) : 
    m_healthStatus(WaveHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_lastUpdateDateTimeHasBeenSet(false),
    m_progressStatus(WaveProgressStatus::NOT_SET),
    m_progressStatusHasBeenSet(false),
    m_replicationStartedDateTimeHasBeenSet(false),
    m_totalApplications(0),
    m_totalApplicationsHasBeenSet(false)
{
  *this = jsonValue;
}

WaveAggregatedStatus& WaveAggregatedStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("healthStatus"))
  {
    m_healthStatus = WaveHealthStatusMapper::GetWaveHealthStatusForName(jsonValue.GetString("healthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateDateTime"))
  {
    m_lastUpdateDateTime = jsonValue.GetString("lastUpdateDateTime");

    m_lastUpdateDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressStatus"))
  {
    m_progressStatus = WaveProgressStatusMapper::GetWaveProgressStatusForName(jsonValue.GetString("progressStatus"));

    m_progressStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationStartedDateTime"))
  {
    m_replicationStartedDateTime = jsonValue.GetString("replicationStartedDateTime");

    m_replicationStartedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalApplications"))
  {
    m_totalApplications = jsonValue.GetInt64("totalApplications");

    m_totalApplicationsHasBeenSet = true;
  }

  return *this;
}

JsonValue WaveAggregatedStatus::Jsonize() const
{
  JsonValue payload;

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("healthStatus", WaveHealthStatusMapper::GetNameForWaveHealthStatus(m_healthStatus));
  }

  if(m_lastUpdateDateTimeHasBeenSet)
  {
   payload.WithString("lastUpdateDateTime", m_lastUpdateDateTime);

  }

  if(m_progressStatusHasBeenSet)
  {
   payload.WithString("progressStatus", WaveProgressStatusMapper::GetNameForWaveProgressStatus(m_progressStatus));
  }

  if(m_replicationStartedDateTimeHasBeenSet)
  {
   payload.WithString("replicationStartedDateTime", m_replicationStartedDateTime);

  }

  if(m_totalApplicationsHasBeenSet)
  {
   payload.WithInt64("totalApplications", m_totalApplications);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
