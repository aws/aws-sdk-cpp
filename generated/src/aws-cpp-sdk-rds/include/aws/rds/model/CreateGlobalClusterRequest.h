/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateGlobalClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) to use as the primary cluster of the global
     * database.</p> <p>If you provide a value for this parameter, don't specify values
     * for the following settings because Amazon Aurora uses the values from the
     * specified source DB cluster:</p> <ul> <li> <p> <code>DatabaseName</code> </p>
     * </li> <li> <p> <code>Engine</code> </p> </li> <li> <p>
     * <code>EngineVersion</code> </p> </li> <li> <p> <code>StorageEncrypted</code>
     * </p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}


    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Specifies whether to enable deletion protection for the new global database
     * cluster. The global database can't be deleted when deletion protection is
     * enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Specifies whether to enable deletion protection for the new global database
     * cluster. The global database can't be deleted when deletion protection is
     * enabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Specifies whether to enable deletion protection for the new global database
     * cluster. The global database can't be deleted when deletion protection is
     * enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Specifies whether to enable deletion protection for the new global database
     * cluster. The global database can't be deleted when deletion protection is
     * enabled.</p>
     */
    inline CreateGlobalClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Specifies whether to enable storage encryption for the new global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the setting from the source DB cluster.</p> </li> </ul>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether to enable storage encryption for the new global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the setting from the source DB cluster.</p> </li> </ul>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether to enable storage encryption for the new global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the setting from the source DB cluster.</p> </li> </ul>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether to enable storage encryption for the new global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the setting from the source DB cluster.</p> </li> </ul>
     */
    inline CreateGlobalClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
