/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class RestoreTableFromSnapshotRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableFromSnapshot"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Indicates whether name identifiers for database, schema, and table are case
     * sensitive. If true, the names are case sensitive. If false, the names are not
     * case sensitive. The default is false.</p>
     */
    inline bool GetActivateCaseSensitiveIdentifier() const { return m_activateCaseSensitiveIdentifier; }
    inline bool ActivateCaseSensitiveIdentifierHasBeenSet() const { return m_activateCaseSensitiveIdentifierHasBeenSet; }
    inline void SetActivateCaseSensitiveIdentifier(bool value) { m_activateCaseSensitiveIdentifierHasBeenSet = true; m_activateCaseSensitiveIdentifier = value; }
    inline RestoreTableFromSnapshotRequest& WithActivateCaseSensitiveIdentifier(bool value) { SetActivateCaseSensitiveIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    RestoreTableFromSnapshotRequest& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
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
    RestoreTableFromSnapshotRequest& WithNewTableName(NewTableNameT&& value) { SetNewTableName(std::forward<NewTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    RestoreTableFromSnapshotRequest& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
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
    RestoreTableFromSnapshotRequest& WithSourceDatabaseName(SourceDatabaseNameT&& value) { SetSourceDatabaseName(std::forward<SourceDatabaseNameT>(value)); return *this;}
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
    RestoreTableFromSnapshotRequest& WithSourceSchemaName(SourceSchemaNameT&& value) { SetSourceSchemaName(std::forward<SourceSchemaNameT>(value)); return *this;}
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
    RestoreTableFromSnapshotRequest& WithSourceTableName(SourceTableNameT&& value) { SetSourceTableName(std::forward<SourceTableNameT>(value)); return *this;}
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
    RestoreTableFromSnapshotRequest& WithTargetDatabaseName(TargetDatabaseNameT&& value) { SetTargetDatabaseName(std::forward<TargetDatabaseNameT>(value)); return *this;}
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
    RestoreTableFromSnapshotRequest& WithTargetSchemaName(TargetSchemaNameT&& value) { SetTargetSchemaName(std::forward<TargetSchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    RestoreTableFromSnapshotRequest& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}
  private:

    bool m_activateCaseSensitiveIdentifier{false};
    bool m_activateCaseSensitiveIdentifierHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_newTableName;
    bool m_newTableNameHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

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

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
