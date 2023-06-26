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


    /**
     * <p>The ID of the batch load task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline BatchLoadTask& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline BatchLoadTask& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the batch load task.</p>
     */
    inline BatchLoadTask& WithTaskId(const char* value) { SetTaskId(value); return *this;}


    /**
     * <p>Status of the batch load task.</p>
     */
    inline const BatchLoadStatus& GetTaskStatus() const{ return m_taskStatus; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline void SetTaskStatus(const BatchLoadStatus& value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline void SetTaskStatus(BatchLoadStatus&& value) { m_taskStatusHasBeenSet = true; m_taskStatus = std::move(value); }

    /**
     * <p>Status of the batch load task.</p>
     */
    inline BatchLoadTask& WithTaskStatus(const BatchLoadStatus& value) { SetTaskStatus(value); return *this;}

    /**
     * <p>Status of the batch load task.</p>
     */
    inline BatchLoadTask& WithTaskStatus(BatchLoadStatus&& value) { SetTaskStatus(std::move(value)); return *this;}


    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline BatchLoadTask& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline BatchLoadTask& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline BatchLoadTask& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline BatchLoadTask& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline BatchLoadTask& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline BatchLoadTask& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline BatchLoadTask& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline BatchLoadTask& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline BatchLoadTask& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline BatchLoadTask& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p> </p>
     */
    inline const Aws::Utils::DateTime& GetResumableUntil() const{ return m_resumableUntil; }

    /**
     * <p> </p>
     */
    inline bool ResumableUntilHasBeenSet() const { return m_resumableUntilHasBeenSet; }

    /**
     * <p> </p>
     */
    inline void SetResumableUntil(const Aws::Utils::DateTime& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = value; }

    /**
     * <p> </p>
     */
    inline void SetResumableUntil(Aws::Utils::DateTime&& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = std::move(value); }

    /**
     * <p> </p>
     */
    inline BatchLoadTask& WithResumableUntil(const Aws::Utils::DateTime& value) { SetResumableUntil(value); return *this;}

    /**
     * <p> </p>
     */
    inline BatchLoadTask& WithResumableUntil(Aws::Utils::DateTime&& value) { SetResumableUntil(std::move(value)); return *this;}

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
