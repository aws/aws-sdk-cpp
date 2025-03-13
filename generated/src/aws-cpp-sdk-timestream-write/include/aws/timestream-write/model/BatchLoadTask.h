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
    AWS_TIMESTREAMWRITE_API BatchLoadTask() = default;
    AWS_TIMESTREAMWRITE_API BatchLoadTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API BatchLoadTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the batch load task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    BatchLoadTask& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the batch load task.</p>
     */
    inline BatchLoadStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(BatchLoadStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline BatchLoadTask& WithTaskStatus(BatchLoadStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database name for the database into which a batch load task loads data.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    BatchLoadTask& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Table name for the table into which a batch load task loads data.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    BatchLoadTask& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream batch load task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    BatchLoadTask& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream batch load task was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    BatchLoadTask& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const Aws::Utils::DateTime& GetResumableUntil() const { return m_resumableUntil; }
    inline bool ResumableUntilHasBeenSet() const { return m_resumableUntilHasBeenSet; }
    template<typename ResumableUntilT = Aws::Utils::DateTime>
    void SetResumableUntil(ResumableUntilT&& value) { m_resumableUntilHasBeenSet = true; m_resumableUntil = std::forward<ResumableUntilT>(value); }
    template<typename ResumableUntilT = Aws::Utils::DateTime>
    BatchLoadTask& WithResumableUntil(ResumableUntilT&& value) { SetResumableUntil(std::forward<ResumableUntilT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    BatchLoadStatus m_taskStatus{BatchLoadStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_resumableUntil{};
    bool m_resumableUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
