﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DataSourceSyncJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DataSourceSyncJob::DataSourceSyncJob(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSourceSyncJob& DataSourceSyncJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceSyncJobStatusMapper::GetDataSourceSyncJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSourceErrorCode"))
  {
    m_dataSourceErrorCode = jsonValue.GetString("dataSourceErrorCode");
    m_dataSourceErrorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metrics"))
  {
    m_metrics = jsonValue.GetObject("metrics");
    m_metricsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceSyncJob::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DataSourceSyncJobStatusMapper::GetNameForDataSourceSyncJobStatus(m_status));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  if(m_dataSourceErrorCodeHasBeenSet)
  {
   payload.WithString("dataSourceErrorCode", m_dataSourceErrorCode);

  }

  if(m_metricsHasBeenSet)
  {
   payload.WithObject("metrics", m_metrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
