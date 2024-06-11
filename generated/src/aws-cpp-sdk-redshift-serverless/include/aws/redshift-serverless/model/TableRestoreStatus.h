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
    AWS_REDSHIFTSERVERLESS_API TableRestoreStatus();
    AWS_REDSHIFTSERVERLESS_API TableRestoreStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API TableRestoreStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message that explains the returned status. For example, if the status of
     * the operation is <code>FAILED</code>, the message explains why the operation
     * failed.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TableRestoreStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TableRestoreStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TableRestoreStatus& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the table being restored from.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline TableRestoreStatus& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline TableRestoreStatus& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline const Aws::String& GetNewTableName() const{ return m_newTableName; }
    inline bool NewTableNameHasBeenSet() const { return m_newTableNameHasBeenSet; }
    inline void SetNewTableName(const Aws::String& value) { m_newTableNameHasBeenSet = true; m_newTableName = value; }
    inline void SetNewTableName(Aws::String&& value) { m_newTableNameHasBeenSet = true; m_newTableName = std::move(value); }
    inline void SetNewTableName(const char* value) { m_newTableNameHasBeenSet = true; m_newTableName.assign(value); }
    inline TableRestoreStatus& WithNewTableName(const Aws::String& value) { SetNewTableName(value); return *this;}
    inline TableRestoreStatus& WithNewTableName(Aws::String&& value) { SetNewTableName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithNewTableName(const char* value) { SetNewTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of data restored to the new table so far, in megabytes (MB).</p>
     */
    inline long long GetProgressInMegaBytes() const{ return m_progressInMegaBytes; }
    inline bool ProgressInMegaBytesHasBeenSet() const { return m_progressInMegaBytesHasBeenSet; }
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }
    inline TableRestoreStatus& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the recovery point being restored from.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const{ return m_recoveryPointId; }
    inline bool RecoveryPointIdHasBeenSet() const { return m_recoveryPointIdHasBeenSet; }
    inline void SetRecoveryPointId(const Aws::String& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = value; }
    inline void SetRecoveryPointId(Aws::String&& value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId = std::move(value); }
    inline void SetRecoveryPointId(const char* value) { m_recoveryPointIdHasBeenSet = true; m_recoveryPointId.assign(value); }
    inline TableRestoreStatus& WithRecoveryPointId(const Aws::String& value) { SetRecoveryPointId(value); return *this;}
    inline TableRestoreStatus& WithRecoveryPointId(Aws::String&& value) { SetRecoveryPointId(std::move(value)); return *this;}
    inline TableRestoreStatus& WithRecoveryPointId(const char* value) { SetRecoveryPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the table restore request was made, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const{ return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    inline void SetRequestTime(const Aws::Utils::DateTime& value) { m_requestTimeHasBeenSet = true; m_requestTime = value; }
    inline void SetRequestTime(Aws::Utils::DateTime&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::move(value); }
    inline TableRestoreStatus& WithRequestTime(const Aws::Utils::DateTime& value) { SetRequestTime(value); return *this;}
    inline TableRestoreStatus& WithRequestTime(Aws::Utils::DateTime&& value) { SetRequestTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot being restored from.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline TableRestoreStatus& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline TableRestoreStatus& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database being restored from.</p>
     */
    inline const Aws::String& GetSourceDatabaseName() const{ return m_sourceDatabaseName; }
    inline bool SourceDatabaseNameHasBeenSet() const { return m_sourceDatabaseNameHasBeenSet; }
    inline void SetSourceDatabaseName(const Aws::String& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = value; }
    inline void SetSourceDatabaseName(Aws::String&& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = std::move(value); }
    inline void SetSourceDatabaseName(const char* value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName.assign(value); }
    inline TableRestoreStatus& WithSourceDatabaseName(const Aws::String& value) { SetSourceDatabaseName(value); return *this;}
    inline TableRestoreStatus& WithSourceDatabaseName(Aws::String&& value) { SetSourceDatabaseName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithSourceDatabaseName(const char* value) { SetSourceDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source schema being restored from.</p>
     */
    inline const Aws::String& GetSourceSchemaName() const{ return m_sourceSchemaName; }
    inline bool SourceSchemaNameHasBeenSet() const { return m_sourceSchemaNameHasBeenSet; }
    inline void SetSourceSchemaName(const Aws::String& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = value; }
    inline void SetSourceSchemaName(Aws::String&& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = std::move(value); }
    inline void SetSourceSchemaName(const char* value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName.assign(value); }
    inline TableRestoreStatus& WithSourceSchemaName(const Aws::String& value) { SetSourceSchemaName(value); return *this;}
    inline TableRestoreStatus& WithSourceSchemaName(Aws::String&& value) { SetSourceSchemaName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithSourceSchemaName(const char* value) { SetSourceSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source table being restored from.</p>
     */
    inline const Aws::String& GetSourceTableName() const{ return m_sourceTableName; }
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }
    inline void SetSourceTableName(const Aws::String& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = value; }
    inline void SetSourceTableName(Aws::String&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::move(value); }
    inline void SetSourceTableName(const char* value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName.assign(value); }
    inline TableRestoreStatus& WithSourceTableName(const Aws::String& value) { SetSourceTableName(value); return *this;}
    inline TableRestoreStatus& WithSourceTableName(Aws::String&& value) { SetSourceTableName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithSourceTableName(const char* value) { SetSourceTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that describes the current state of the table restore request.
     * Possible values are <code>SUCCEEDED</code>, <code>FAILED</code>,
     * <code>CANCELED</code>, <code>PENDING</code>, and <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline TableRestoreStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline TableRestoreStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline TableRestoreStatus& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the RestoreTableFromSnapshot request.</p>
     */
    inline const Aws::String& GetTableRestoreRequestId() const{ return m_tableRestoreRequestId; }
    inline bool TableRestoreRequestIdHasBeenSet() const { return m_tableRestoreRequestIdHasBeenSet; }
    inline void SetTableRestoreRequestId(const Aws::String& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = value; }
    inline void SetTableRestoreRequestId(Aws::String&& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = std::move(value); }
    inline void SetTableRestoreRequestId(const char* value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId.assign(value); }
    inline TableRestoreStatus& WithTableRestoreRequestId(const Aws::String& value) { SetTableRestoreRequestId(value); return *this;}
    inline TableRestoreStatus& WithTableRestoreRequestId(Aws::String&& value) { SetTableRestoreRequestId(std::move(value)); return *this;}
    inline TableRestoreStatus& WithTableRestoreRequestId(const char* value) { SetTableRestoreRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database to restore to.</p>
     */
    inline const Aws::String& GetTargetDatabaseName() const{ return m_targetDatabaseName; }
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }
    inline void SetTargetDatabaseName(const Aws::String& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = value; }
    inline void SetTargetDatabaseName(Aws::String&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::move(value); }
    inline void SetTargetDatabaseName(const char* value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName.assign(value); }
    inline TableRestoreStatus& WithTargetDatabaseName(const Aws::String& value) { SetTargetDatabaseName(value); return *this;}
    inline TableRestoreStatus& WithTargetDatabaseName(Aws::String&& value) { SetTargetDatabaseName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithTargetDatabaseName(const char* value) { SetTargetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema to restore to.</p>
     */
    inline const Aws::String& GetTargetSchemaName() const{ return m_targetSchemaName; }
    inline bool TargetSchemaNameHasBeenSet() const { return m_targetSchemaNameHasBeenSet; }
    inline void SetTargetSchemaName(const Aws::String& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = value; }
    inline void SetTargetSchemaName(Aws::String&& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = std::move(value); }
    inline void SetTargetSchemaName(const char* value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName.assign(value); }
    inline TableRestoreStatus& WithTargetSchemaName(const Aws::String& value) { SetTargetSchemaName(value); return *this;}
    inline TableRestoreStatus& WithTargetSchemaName(Aws::String&& value) { SetTargetSchemaName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithTargetSchemaName(const char* value) { SetTargetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of data to restore to the new table, in megabytes (MB).</p>
     */
    inline long long GetTotalDataInMegaBytes() const{ return m_totalDataInMegaBytes; }
    inline bool TotalDataInMegaBytesHasBeenSet() const { return m_totalDataInMegaBytesHasBeenSet; }
    inline void SetTotalDataInMegaBytes(long long value) { m_totalDataInMegaBytesHasBeenSet = true; m_totalDataInMegaBytes = value; }
    inline TableRestoreStatus& WithTotalDataInMegaBytes(long long value) { SetTotalDataInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup being restored from.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }
    inline TableRestoreStatus& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline TableRestoreStatus& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline TableRestoreStatus& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_newTableName;
    bool m_newTableNameHasBeenSet = false;

    long long m_progressInMegaBytes;
    bool m_progressInMegaBytesHasBeenSet = false;

    Aws::String m_recoveryPointId;
    bool m_recoveryPointIdHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime;
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

    long long m_totalDataInMegaBytes;
    bool m_totalDataInMegaBytesHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
