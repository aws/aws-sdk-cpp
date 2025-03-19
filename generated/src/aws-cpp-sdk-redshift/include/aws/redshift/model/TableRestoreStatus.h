/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/TableRestoreStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the status of a <a>RestoreTableFromClusterSnapshot</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/TableRestoreStatus">AWS
   * API Reference</a></p>
   */
  class TableRestoreStatus
  {
  public:
    AWS_REDSHIFT_API TableRestoreStatus() = default;
    AWS_REDSHIFT_API TableRestoreStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API TableRestoreStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the table restore request.</p>
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
     * <p>A value that describes the current state of the table restore request.</p>
     * <p>Valid Values: <code>SUCCEEDED</code>, <code>FAILED</code>,
     * <code>CANCELED</code>, <code>PENDING</code>, <code>IN_PROGRESS</code> </p>
     */
    inline TableRestoreStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TableRestoreStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline TableRestoreStatus& WithStatus(TableRestoreStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the status of the table restore request. Status values
     * include <code>SUCCEEDED</code>, <code>FAILED</code>, <code>CANCELED</code>,
     * <code>PENDING</code>, <code>IN_PROGRESS</code>.</p>
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
     * <p>The amount of data restored to the new table so far, in megabytes (MB).</p>
     */
    inline long long GetProgressInMegaBytes() const { return m_progressInMegaBytes; }
    inline bool ProgressInMegaBytesHasBeenSet() const { return m_progressInMegaBytesHasBeenSet; }
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }
    inline TableRestoreStatus& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}
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
     * <p>The identifier of the Amazon Redshift cluster that the table is being
     * restored to.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    TableRestoreStatus& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the snapshot that the table is being restored from.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    TableRestoreStatus& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database that contains the table being restored.</p>
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
     * <p>The name of the source schema that contains the table being restored.</p>
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
     * <p>The name of the source table being restored.</p>
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
     * <p>The name of the database to restore the table to.</p>
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
     * <p>The name of the schema to restore the table to.</p>
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
     * <p>The name of the table to create as a result of the table restore request.</p>
     */
    inline const Aws::String& GetNewTableName() const { return m_newTableName; }
    inline bool NewTableNameHasBeenSet() const { return m_newTableNameHasBeenSet; }
    template<typename NewTableNameT = Aws::String>
    void SetNewTableName(NewTableNameT&& value) { m_newTableNameHasBeenSet = true; m_newTableName = std::forward<NewTableNameT>(value); }
    template<typename NewTableNameT = Aws::String>
    TableRestoreStatus& WithNewTableName(NewTableNameT&& value) { SetNewTableName(std::forward<NewTableNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableRestoreRequestId;
    bool m_tableRestoreRequestIdHasBeenSet = false;

    TableRestoreStatusType m_status{TableRestoreStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime{};
    bool m_requestTimeHasBeenSet = false;

    long long m_progressInMegaBytes{0};
    bool m_progressInMegaBytesHasBeenSet = false;

    long long m_totalDataInMegaBytes{0};
    bool m_totalDataInMegaBytesHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_sourceDatabaseName;
    bool m_sourceDatabaseNameHasBeenSet = false;

    Aws::String m_sourceSchemaName;
    bool m_sourceSchemaNameHasBeenSet = false;

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet = false;

    Aws::String m_targetDatabaseName;
    bool m_targetDatabaseNameHasBeenSet = false;

    Aws::String m_targetSchemaName;
    bool m_targetSchemaNameHasBeenSet = false;

    Aws::String m_newTableName;
    bool m_newTableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
