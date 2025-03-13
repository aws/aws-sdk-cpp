/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreTableFromClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class RestoreTableFromClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API RestoreTableFromClusterSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableFromClusterSnapshot"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    RestoreTableFromClusterSnapshotRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    RestoreTableFromClusterSnapshotRequest& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline const Aws::String& GetSourceDatabaseName() const { return m_sourceDatabaseName; }
    inline bool SourceDatabaseNameHasBeenSet() const { return m_sourceDatabaseNameHasBeenSet; }
    template<typename SourceDatabaseNameT = Aws::String>
    void SetSourceDatabaseName(SourceDatabaseNameT&& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = std::forward<SourceDatabaseNameT>(value); }
    template<typename SourceDatabaseNameT = Aws::String>
    RestoreTableFromClusterSnapshotRequest& WithSourceDatabaseName(SourceDatabaseNameT&& value) { SetSourceDatabaseName(std::forward<SourceDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline const Aws::String& GetSourceSchemaName() const { return m_sourceSchemaName; }
    inline bool SourceSchemaNameHasBeenSet() const { return m_sourceSchemaNameHasBeenSet; }
    template<typename SourceSchemaNameT = Aws::String>
    void SetSourceSchemaName(SourceSchemaNameT&& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = std::forward<SourceSchemaNameT>(value); }
    template<typename SourceSchemaNameT = Aws::String>
    RestoreTableFromClusterSnapshotRequest& WithSourceSchemaName(SourceSchemaNameT&& value) { SetSourceSchemaName(std::forward<SourceSchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline const Aws::String& GetSourceTableName() const { return m_sourceTableName; }
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }
    template<typename SourceTableNameT = Aws::String>
    void SetSourceTableName(SourceTableNameT&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::forward<SourceTableNameT>(value); }
    template<typename SourceTableNameT = Aws::String>
    RestoreTableFromClusterSnapshotRequest& WithSourceTableName(SourceTableNameT&& value) { SetSourceTableName(std::forward<SourceTableNameT>(value)); return *this;}
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
    RestoreTableFromClusterSnapshotRequest& WithTargetDatabaseName(TargetDatabaseNameT&& value) { SetTargetDatabaseName(std::forward<TargetDatabaseNameT>(value)); return *this;}
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
    RestoreTableFromClusterSnapshotRequest& WithTargetSchemaName(TargetSchemaNameT&& value) { SetTargetSchemaName(std::forward<TargetSchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline const Aws::String& GetNewTableName() const { return m_newTableName; }
    inline bool NewTableNameHasBeenSet() const { return m_newTableNameHasBeenSet; }
    template<typename NewTableNameT = Aws::String>
    void SetNewTableName(NewTableNameT&& value) { m_newTableNameHasBeenSet = true; m_newTableName = std::forward<NewTableNameT>(value); }
    template<typename NewTableNameT = Aws::String>
    RestoreTableFromClusterSnapshotRequest& WithNewTableName(NewTableNameT&& value) { SetNewTableName(std::forward<NewTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether name identifiers for database, schema, and table are case
     * sensitive. If <code>true</code>, the names are case sensitive. If
     * <code>false</code> (default), the names are not case sensitive.</p>
     */
    inline bool GetEnableCaseSensitiveIdentifier() const { return m_enableCaseSensitiveIdentifier; }
    inline bool EnableCaseSensitiveIdentifierHasBeenSet() const { return m_enableCaseSensitiveIdentifierHasBeenSet; }
    inline void SetEnableCaseSensitiveIdentifier(bool value) { m_enableCaseSensitiveIdentifierHasBeenSet = true; m_enableCaseSensitiveIdentifier = value; }
    inline RestoreTableFromClusterSnapshotRequest& WithEnableCaseSensitiveIdentifier(bool value) { SetEnableCaseSensitiveIdentifier(value); return *this;}
    ///@}
  private:

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

    bool m_enableCaseSensitiveIdentifier{false};
    bool m_enableCaseSensitiveIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
