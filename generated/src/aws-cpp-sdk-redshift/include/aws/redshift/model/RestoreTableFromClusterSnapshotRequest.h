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
    AWS_REDSHIFT_API RestoreTableFromClusterSnapshotRequest();

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
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline const Aws::String& GetSourceDatabaseName() const{ return m_sourceDatabaseName; }
    inline bool SourceDatabaseNameHasBeenSet() const { return m_sourceDatabaseNameHasBeenSet; }
    inline void SetSourceDatabaseName(const Aws::String& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = value; }
    inline void SetSourceDatabaseName(Aws::String&& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = std::move(value); }
    inline void SetSourceDatabaseName(const char* value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithSourceDatabaseName(const Aws::String& value) { SetSourceDatabaseName(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSourceDatabaseName(Aws::String&& value) { SetSourceDatabaseName(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSourceDatabaseName(const char* value) { SetSourceDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline const Aws::String& GetSourceSchemaName() const{ return m_sourceSchemaName; }
    inline bool SourceSchemaNameHasBeenSet() const { return m_sourceSchemaNameHasBeenSet; }
    inline void SetSourceSchemaName(const Aws::String& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = value; }
    inline void SetSourceSchemaName(Aws::String&& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = std::move(value); }
    inline void SetSourceSchemaName(const char* value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithSourceSchemaName(const Aws::String& value) { SetSourceSchemaName(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSourceSchemaName(Aws::String&& value) { SetSourceSchemaName(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSourceSchemaName(const char* value) { SetSourceSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline const Aws::String& GetSourceTableName() const{ return m_sourceTableName; }
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }
    inline void SetSourceTableName(const Aws::String& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = value; }
    inline void SetSourceTableName(Aws::String&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::move(value); }
    inline void SetSourceTableName(const char* value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithSourceTableName(const Aws::String& value) { SetSourceTableName(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSourceTableName(Aws::String&& value) { SetSourceTableName(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithSourceTableName(const char* value) { SetSourceTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline const Aws::String& GetTargetDatabaseName() const{ return m_targetDatabaseName; }
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }
    inline void SetTargetDatabaseName(const Aws::String& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = value; }
    inline void SetTargetDatabaseName(Aws::String&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::move(value); }
    inline void SetTargetDatabaseName(const char* value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithTargetDatabaseName(const Aws::String& value) { SetTargetDatabaseName(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithTargetDatabaseName(Aws::String&& value) { SetTargetDatabaseName(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithTargetDatabaseName(const char* value) { SetTargetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline const Aws::String& GetTargetSchemaName() const{ return m_targetSchemaName; }
    inline bool TargetSchemaNameHasBeenSet() const { return m_targetSchemaNameHasBeenSet; }
    inline void SetTargetSchemaName(const Aws::String& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = value; }
    inline void SetTargetSchemaName(Aws::String&& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = std::move(value); }
    inline void SetTargetSchemaName(const char* value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithTargetSchemaName(const Aws::String& value) { SetTargetSchemaName(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithTargetSchemaName(Aws::String&& value) { SetTargetSchemaName(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithTargetSchemaName(const char* value) { SetTargetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline const Aws::String& GetNewTableName() const{ return m_newTableName; }
    inline bool NewTableNameHasBeenSet() const { return m_newTableNameHasBeenSet; }
    inline void SetNewTableName(const Aws::String& value) { m_newTableNameHasBeenSet = true; m_newTableName = value; }
    inline void SetNewTableName(Aws::String&& value) { m_newTableNameHasBeenSet = true; m_newTableName = std::move(value); }
    inline void SetNewTableName(const char* value) { m_newTableNameHasBeenSet = true; m_newTableName.assign(value); }
    inline RestoreTableFromClusterSnapshotRequest& WithNewTableName(const Aws::String& value) { SetNewTableName(value); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithNewTableName(Aws::String&& value) { SetNewTableName(std::move(value)); return *this;}
    inline RestoreTableFromClusterSnapshotRequest& WithNewTableName(const char* value) { SetNewTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether name identifiers for database, schema, and table are case
     * sensitive. If <code>true</code>, the names are case sensitive. If
     * <code>false</code> (default), the names are not case sensitive.</p>
     */
    inline bool GetEnableCaseSensitiveIdentifier() const{ return m_enableCaseSensitiveIdentifier; }
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

    bool m_enableCaseSensitiveIdentifier;
    bool m_enableCaseSensitiveIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
