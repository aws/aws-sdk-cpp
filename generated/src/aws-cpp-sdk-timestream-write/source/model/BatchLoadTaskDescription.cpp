/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/BatchLoadTaskDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

BatchLoadTaskDescription::BatchLoadTaskDescription() : 
    m_taskIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_dataSourceConfigurationHasBeenSet(false),
    m_progressReportHasBeenSet(false),
    m_reportConfigurationHasBeenSet(false),
    m_dataModelConfigurationHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_taskStatus(BatchLoadStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_recordVersion(0),
    m_recordVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_resumableUntilHasBeenSet(false)
{
}

BatchLoadTaskDescription::BatchLoadTaskDescription(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_dataSourceConfigurationHasBeenSet(false),
    m_progressReportHasBeenSet(false),
    m_reportConfigurationHasBeenSet(false),
    m_dataModelConfigurationHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_taskStatus(BatchLoadStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_recordVersion(0),
    m_recordVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_resumableUntilHasBeenSet(false)
{
  *this = jsonValue;
}

BatchLoadTaskDescription& BatchLoadTaskDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceConfiguration"))
  {
    m_dataSourceConfiguration = jsonValue.GetObject("DataSourceConfiguration");

    m_dataSourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProgressReport"))
  {
    m_progressReport = jsonValue.GetObject("ProgressReport");

    m_progressReportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReportConfiguration"))
  {
    m_reportConfiguration = jsonValue.GetObject("ReportConfiguration");

    m_reportConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataModelConfiguration"))
  {
    m_dataModelConfiguration = jsonValue.GetObject("DataModelConfiguration");

    m_dataModelConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDatabaseName"))
  {
    m_targetDatabaseName = jsonValue.GetString("TargetDatabaseName");

    m_targetDatabaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTableName"))
  {
    m_targetTableName = jsonValue.GetString("TargetTableName");

    m_targetTableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskStatus"))
  {
    m_taskStatus = BatchLoadStatusMapper::GetBatchLoadStatusForName(jsonValue.GetString("TaskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordVersion"))
  {
    m_recordVersion = jsonValue.GetInt64("RecordVersion");

    m_recordVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResumableUntil"))
  {
    m_resumableUntil = jsonValue.GetDouble("ResumableUntil");

    m_resumableUntilHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchLoadTaskDescription::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("TaskId", m_taskId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_dataSourceConfigurationHasBeenSet)
  {
   payload.WithObject("DataSourceConfiguration", m_dataSourceConfiguration.Jsonize());

  }

  if(m_progressReportHasBeenSet)
  {
   payload.WithObject("ProgressReport", m_progressReport.Jsonize());

  }

  if(m_reportConfigurationHasBeenSet)
  {
   payload.WithObject("ReportConfiguration", m_reportConfiguration.Jsonize());

  }

  if(m_dataModelConfigurationHasBeenSet)
  {
   payload.WithObject("DataModelConfiguration", m_dataModelConfiguration.Jsonize());

  }

  if(m_targetDatabaseNameHasBeenSet)
  {
   payload.WithString("TargetDatabaseName", m_targetDatabaseName);

  }

  if(m_targetTableNameHasBeenSet)
  {
   payload.WithString("TargetTableName", m_targetTableName);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("TaskStatus", BatchLoadStatusMapper::GetNameForBatchLoadStatus(m_taskStatus));
  }

  if(m_recordVersionHasBeenSet)
  {
   payload.WithInt64("RecordVersion", m_recordVersion);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_resumableUntilHasBeenSet)
  {
   payload.WithDouble("ResumableUntil", m_resumableUntil.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
