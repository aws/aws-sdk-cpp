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
    AWS_REDSHIFTSERVERLESS_API RestoreTableFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableFromSnapshot"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Indicates whether name identifiers for database, schema, and table are case
     * sensitive. If true, the names are case sensitive. If false, the names are not
     * case sensitive. The default is false.</p>
     */
    inline bool GetActivateCaseSensitiveIdentifier() const{ return m_activateCaseSensitiveIdentifier; }

    /**
     * <p>Indicates whether name identifiers for database, schema, and table are case
     * sensitive. If true, the names are case sensitive. If false, the names are not
     * case sensitive. The default is false.</p>
     */
    inline bool ActivateCaseSensitiveIdentifierHasBeenSet() const { return m_activateCaseSensitiveIdentifierHasBeenSet; }

    /**
     * <p>Indicates whether name identifiers for database, schema, and table are case
     * sensitive. If true, the names are case sensitive. If false, the names are not
     * case sensitive. The default is false.</p>
     */
    inline void SetActivateCaseSensitiveIdentifier(bool value) { m_activateCaseSensitiveIdentifierHasBeenSet = true; m_activateCaseSensitiveIdentifier = value; }

    /**
     * <p>Indicates whether name identifiers for database, schema, and table are case
     * sensitive. If true, the names are case sensitive. If false, the names are not
     * case sensitive. The default is false.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithActivateCaseSensitiveIdentifier(bool value) { SetActivateCaseSensitiveIdentifier(value); return *this;}


    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }

    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }

    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }

    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }

    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }

    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}

    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The namespace of the snapshot to restore from.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}


    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline const Aws::String& GetNewTableName() const{ return m_newTableName; }

    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline bool NewTableNameHasBeenSet() const { return m_newTableNameHasBeenSet; }

    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline void SetNewTableName(const Aws::String& value) { m_newTableNameHasBeenSet = true; m_newTableName = value; }

    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline void SetNewTableName(Aws::String&& value) { m_newTableNameHasBeenSet = true; m_newTableName = std::move(value); }

    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline void SetNewTableName(const char* value) { m_newTableNameHasBeenSet = true; m_newTableName.assign(value); }

    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithNewTableName(const Aws::String& value) { SetNewTableName(value); return *this;}

    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithNewTableName(Aws::String&& value) { SetNewTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table to create from the restore operation.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithNewTableName(const char* value) { SetNewTableName(value); return *this;}


    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot to restore the table from.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline const Aws::String& GetSourceDatabaseName() const{ return m_sourceDatabaseName; }

    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline bool SourceDatabaseNameHasBeenSet() const { return m_sourceDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline void SetSourceDatabaseName(const Aws::String& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = value; }

    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline void SetSourceDatabaseName(Aws::String&& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = std::move(value); }

    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline void SetSourceDatabaseName(const char* value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName.assign(value); }

    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceDatabaseName(const Aws::String& value) { SetSourceDatabaseName(value); return *this;}

    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceDatabaseName(Aws::String&& value) { SetSourceDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the source database that contains the table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceDatabaseName(const char* value) { SetSourceDatabaseName(value); return *this;}


    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline const Aws::String& GetSourceSchemaName() const{ return m_sourceSchemaName; }

    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline bool SourceSchemaNameHasBeenSet() const { return m_sourceSchemaNameHasBeenSet; }

    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline void SetSourceSchemaName(const Aws::String& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = value; }

    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline void SetSourceSchemaName(Aws::String&& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = std::move(value); }

    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline void SetSourceSchemaName(const char* value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName.assign(value); }

    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceSchemaName(const Aws::String& value) { SetSourceSchemaName(value); return *this;}

    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceSchemaName(Aws::String&& value) { SetSourceSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the source schema that contains the table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceSchemaName(const char* value) { SetSourceSchemaName(value); return *this;}


    /**
     * <p>The name of the source table being restored.</p>
     */
    inline const Aws::String& GetSourceTableName() const{ return m_sourceTableName; }

    /**
     * <p>The name of the source table being restored.</p>
     */
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }

    /**
     * <p>The name of the source table being restored.</p>
     */
    inline void SetSourceTableName(const Aws::String& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = value; }

    /**
     * <p>The name of the source table being restored.</p>
     */
    inline void SetSourceTableName(Aws::String&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::move(value); }

    /**
     * <p>The name of the source table being restored.</p>
     */
    inline void SetSourceTableName(const char* value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName.assign(value); }

    /**
     * <p>The name of the source table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceTableName(const Aws::String& value) { SetSourceTableName(value); return *this;}

    /**
     * <p>The name of the source table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceTableName(Aws::String&& value) { SetSourceTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the source table being restored.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithSourceTableName(const char* value) { SetSourceTableName(value); return *this;}


    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline const Aws::String& GetTargetDatabaseName() const{ return m_targetDatabaseName; }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline void SetTargetDatabaseName(const Aws::String& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = value; }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline void SetTargetDatabaseName(Aws::String&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::move(value); }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline void SetTargetDatabaseName(const char* value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName.assign(value); }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithTargetDatabaseName(const Aws::String& value) { SetTargetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithTargetDatabaseName(Aws::String&& value) { SetTargetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithTargetDatabaseName(const char* value) { SetTargetDatabaseName(value); return *this;}


    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline const Aws::String& GetTargetSchemaName() const{ return m_targetSchemaName; }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline bool TargetSchemaNameHasBeenSet() const { return m_targetSchemaNameHasBeenSet; }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline void SetTargetSchemaName(const Aws::String& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = value; }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline void SetTargetSchemaName(Aws::String&& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = std::move(value); }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline void SetTargetSchemaName(const char* value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName.assign(value); }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithTargetSchemaName(const Aws::String& value) { SetTargetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithTargetSchemaName(Aws::String&& value) { SetTargetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithTargetSchemaName(const char* value) { SetTargetSchemaName(value); return *this;}


    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }

    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }

    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }

    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }

    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }

    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}

    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}

    /**
     * <p>The workgroup to restore the table to.</p>
     */
    inline RestoreTableFromSnapshotRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}

  private:

    bool m_activateCaseSensitiveIdentifier;
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
