/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/BatchLoadTask.h>
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

BatchLoadTask::BatchLoadTask() : 
    m_taskIdHasBeenSet(false),
    m_taskStatus(BatchLoadStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_resumableUntilHasBeenSet(false)
{
}

BatchLoadTask::BatchLoadTask(JsonView jsonValue) : 
    m_taskIdHasBeenSet(false),
    m_taskStatus(BatchLoadStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_resumableUntilHasBeenSet(false)
{
  *this = jsonValue;
}

BatchLoadTask& BatchLoadTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TaskId"))
  {
    m_taskId = jsonValue.GetString("TaskId");

    m_taskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaskStatus"))
  {
    m_taskStatus = BatchLoadStatusMapper::GetBatchLoadStatusForName(jsonValue.GetString("TaskStatus"));

    m_taskStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatabaseName"))
  {
    m_databaseName = jsonValue.GetString("DatabaseName");

    m_databaseNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
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

JsonValue BatchLoadTask::Jsonize() const
{
  JsonValue payload;

  if(m_taskIdHasBeenSet)
  {
   payload.WithString("TaskId", m_taskId);

  }

  if(m_taskStatusHasBeenSet)
  {
   payload.WithString("TaskStatus", BatchLoadStatusMapper::GetNameForBatchLoadStatus(m_taskStatus));
  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

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
