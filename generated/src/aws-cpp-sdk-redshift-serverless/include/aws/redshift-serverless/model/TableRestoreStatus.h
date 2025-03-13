/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>Contains information about a table restore request.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/TableRestoreStatus">AWS
   * API Reference</a></p>
   */
  class TableRestoreStatus
  {
  public:
    AWS_REDSHIFTSERVERLESS_API TableRestoreStatus() = default;
    AWS_REDSHIFTSERVERLESS_API TableRestoreStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API TableRestoreStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message that explains the returned status. For example, if the status of
     * the operation is <code>FAILED</code>, the message explains why the operation
     * failed.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TableRestoreStatus& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the table being restored from.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    TableRestoreStatus& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline const Aws::String& GetNewTableName() const { return m_newTableName; }
    inline bool NewTableNameHasBeenSet() const { return m_newTableNameHasBeenSet; }
    template<typename NewTableNameT = Aws::String>
    void SetNewTableName(NewTableNameT&& value) { m_newTableNameHasBeenSet = true; m_newTableName = std::forward<NewTableNameT>(value); }
    template<typename NewTableNameT = Aws::String>
    TableRestoreStatus& WithNewTableName(NewTableNameT&& value) { SetNewTableName(std::forward<NewTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of data restored to the new table so far, in megabytes (MB).</p>
     */
    inline long long GetProgressInMegaBytes() const { return m_progressInMegaBytes; }
    inline bool ProgressInMegaBytesHasBeenSet() const { return m_progressInMegaBytesHasBeenSet; }
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }
    inline TableRestoreStatus& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the recovery point being restored from.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const { return m_recoveryPointId; }
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }
    template<typename RecoveryPointIdT = Aws::String>
    void SetRecoveryPointId(RecoveryPointIdT&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::forward<RecoveryPointIdT>(value); }
    template<typename RecoveryPointIdT = Aws::String>
    TableRestoreStatus& WithRecoveryPointId(RecoveryPointIdT&& value) { SetRecoveryPointId(std::forward<RecoveryPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the table restore request was made, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const { return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    void SetRequestTime(RequestTimeT&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::forward<RequestTimeT>(value); }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    TableRestoreStatus& WithRequestTime(RequestTimeT&& value) { SetRequestTime(std::forward<RequestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot being restored from.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    TableRestoreStatus& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database being restored from.</p>
     */
    inline const Aws::String& GetSourceDatabaseName() const { return m_sourceDatabaseName; }
    inline bool SourceDatabaseNameHasBeenSet() const { return m_sourceDatabaseNameHasBeenSet; }
    template<typename SourceDatabaseNameT = Aws::String>
    void SetSourceDatabaseName(SourceDatabaseNameT&& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = std::forward<SourceDatabaseNameT>(value); }
    template<typename SourceDatabaseNameT = Aws::String>
    TableRestoreStatus& WithSourceDatabaseName(SourceDatabaseNameT&& value) { SetSourceDatabaseName(std::forward<SourceDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source schema being restored from.</p>
     */
    inline const Aws::String& GetSourceSchemaName() const { return m_sourceSchemaName; }
    inline bool SourceSchemaNameHasBeenSet() const { return m_sourceSchemaNameHasBeenSet; }
    template<typename SourceSchemaNameT = Aws::String>
    void SetSourceSchemaName(SourceSchemaNameT&& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = std::forward<SourceSchemaNameT>(value); }
    template<typename SourceSchemaNameT = Aws::String>
    TableRestoreStatus& WithSourceSchemaName(SourceSchemaNameT&& value) { SetSourceSchemaName(std::forward<SourceSchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source table being restored from.</p>
     */
    inline const Aws::String& GetSourceTableName() const { return m_sourceTableName; }
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }
    template<typename SourceTableNameT = Aws::String>
    void SetSourceTableName(SourceTableNameT&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::forward<SourceTableNameT>(value); }
    template<typename SourceTableNameT = Aws::String>
    TableRestoreStatus& WithSourceTableName(SourceTableNameT&& value) { SetSourceTableName(std::forward<SourceTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that describes the current state of the table restore request.
     * Possible values are <code>SUCCEEDED</code>, <code>FAILED</code>,
     * <code>CANCELED</code>, <code>PENDING</code>, and <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TableRestoreStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RestoreTableFromSnapshot request.</p>
     */
    inline const Aws::String& GetTableRestoreRequestId() const { return m_tableRestoreRequestId; }
    inline bool TableRestoreRequestIdHasBeenSet() const { return m_tableRestoreRequestIdHasBeenSet; }
    template<typename TableRestoreRequestIdT = Aws::String>
    void SetTableRestoreRequestId(TableRestoreRequestIdT&& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = std::forward<TableRestoreRequestIdT>(value); }
    template<typename TableRestoreRequestIdT = Aws::String>
    TableRestoreStatus& WithTableRestoreRequestId(TableRestoreRequestIdT&& value) { SetTableRestoreRequestId(std::forward<TableRestoreRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database to restore to.</p>
     */
    inline const Aws::String& GetTargetDatabaseName() const { return m_targetDatabaseName; }
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }
    template<typename TargetDatabaseNameT = Aws::String>
    void SetTargetDatabaseName(TargetDatabaseNameT&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::forward<TargetDatabaseNameT>(value); }
    template<typename TargetDatabaseNameT = Aws::String>
    TableRestoreStatus& WithTargetDatabaseName(TargetDatabaseNameT&& value) { SetTargetDatabaseName(std::forward<TargetDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema to restore to.</p>
     */
    inline const Aws::String& GetTargetSchemaName() const { return m_targetSchemaName; }
    inline bool TargetSchemaNameHasBeenSet() const { return m_targetSchemaNameHasBeenSet; }
    template<typename TargetSchemaNameT = Aws::String>
    void SetTargetSchemaName(TargetSchemaNameT&& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = std::forward<TargetSchemaNameT>(value); }
    template<typename TargetSchemaNameT = Aws::String>
    TableRestoreStatus& WithTargetSchemaName(TargetSchemaNameT&& value) { SetTargetSchemaName(std::forward<TargetSchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of data to restore to the new table, in megabytes (MB).</p>
     */
    inline long long GetTotalDataInMegaBytes() const { return m_totalDataInMegaBytes; }
    inline bool TotalDataInMegaBytesHasBeenSet() const { return m_totalDataInMegaBytesHasBeenSet; }
    inline void SetTotalDataInMegaBytes(long long value) { m_totalDataInMegaBytesHasBeenSet = true; m_totalDataInMegaBytes = value; }
    inline TableRestoreStatus& WithTotalDataInMegaBytes(long long value) { SetTotalDataInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup being restored from.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    TableRestoreStatus& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_newTableName;
    bool m_newTableNameHasBeenSet = false;

    long long m_progressInMegaBytes{0};
    bool m_progressInMegaBytesHasBeenSet = false;

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime{};
    bool m_requestTimeHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_sourceDatabaseName;
    bool m_sourceDatabaseNameHasBeenSet = false;

    Aws::String m_sourceSchemaName;
    bool m_sourceSchemaNameHasBeenSet = false;

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_tableRestoreRequestId;
    bool m_tableRestoreRequestIdHasBeenSet = false;

    Aws::String m_targetDatabaseName;
    bool m_targetDatabaseNameHasBeenSet = false;

    Aws::String m_targetSchemaName;
    bool m_targetSchemaNameHasBeenSet = false;

    long long m_totalDataInMegaBytes{0};
    bool m_totalDataInMegaBytesHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
