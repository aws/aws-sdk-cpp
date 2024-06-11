/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/BatchLoadStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Details about a batch load task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/BatchLoadTask">AWS
   * API Reference</a></p>
   */
  class BatchLoadTask
  {
  public:
    AWS_TIMESTREAMWRITE_API BatchLoadTask();
    AWS_TIMESTREAMWRITE_API BatchLoadTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API BatchLoadTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the batch load task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline BatchLoadTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline BatchLoadTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline BatchLoadTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the batch load task.</p>
     */
    inline const BatchLoadStatus& GetTaskStatus() const{ return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(const BatchLoadStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline void SetTaskStatus(BatchLoadStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }
    inline BatchLoadTask& WithTaskStatus(const BatchLoadStatus& value) { SetTaskStatus(value); return *this;}
    inline BatchLoadTask& WithTaskStatus(BatchLoadStatus&& value) { SetTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline BatchLoadTask& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline BatchLoadTask& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline BatchLoadTask& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline BatchLoadTask& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline BatchLoadTask& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline BatchLoadTask& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline BatchLoadTask& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline BatchLoadTask& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline BatchLoadTask& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline BatchLoadTask& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const Aws::Utils::DateTime& GetResumableUntil() const{ return m_resumableUntil; }
    inline bool ResumableUntilHasBeenSet() const { return m_resumableUntilHasBeenSet; }
    inline void SetResumableUntil(const Aws::Utils::DateTime& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = value; }
    inline void SetResumableUntil(Aws::Utils::DateTime&& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = std::move(value); }
    inline BatchLoadTask& WithResumableUntil(const Aws::Utils::DateTime& value) { SetResumableUntil(value); return *this;}
    inline BatchLoadTask& WithResumableUntil(Aws::Utils::DateTime&& value) { SetResumableUntil(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    BatchLoadStatus m_taskStatus;
    bool m_taskStatusHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_resumableUntil;
    bool m_resumableUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
