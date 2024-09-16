/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
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

    ///@{
    /**
     * <p>The cluster identifier for this global database cluster. This parameter is
     * stored as a lowercase string.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}
    ///@}

    ///@{
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
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine to use for this global database cluster.</p> <p>Valid
     * Values: <code>aurora-mysql | aurora-postgresql</code> </p> <p>Constraints:</p>
     * <ul> <li> <p>Can't be specified if <code>SourceDBClusterIdentifier</code> is
     * specified. In this case, Amazon Aurora uses the engine of the source DB
     * cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline CreateGlobalClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CreateGlobalClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CreateGlobalClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version to use for this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the engine version of the source DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline CreateGlobalClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline CreateGlobalClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline CreateGlobalClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle type for this global database cluster.</p>  <p>By
     * default, this value is set to <code>open-source-rds-extended-support</code>,
     * which enrolls your global cluster into Amazon RDS Extended Support. At the end
     * of standard support, you can avoid charges for Extended Support by setting the
     * value to <code>open-source-rds-extended-support-disabled</code>. In this case,
     * creating the global cluster will fail if the DB major version is past its end of
     * standard support date.</p>  <p>This setting only applies to Aurora
     * PostgreSQL-based global databases.</p> <p>You can use this setting to enroll
     * your global cluster into Amazon RDS Extended Support. With RDS Extended Support,
     * you can run the selected major engine version on your global cluster past the
     * end of standard support for that engine version. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/extended-support.html">Using
     * Amazon RDS Extended Support</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid Values: <code>open-source-rds-extended-support |
     * open-source-rds-extended-support-disabled</code> </p> <p>Default:
     * <code>open-source-rds-extended-support</code> </p>
     */
    inline const Aws::String& GetEngineLifecycleSupport() const{ return m_engineLifecycleSupport; }
    inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
    inline void SetEngineLifecycleSupport(const Aws::String& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = value; }
    inline void SetEngineLifecycleSupport(Aws::String&& value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport = std::move(value); }
    inline void SetEngineLifecycleSupport(const char* value) { m_engineLifecycleSupportHasBeenSet = true; m_engineLifecycleSupport.assign(value); }
    inline CreateGlobalClusterRequest& WithEngineLifecycleSupport(const Aws::String& value) { SetEngineLifecycleSupport(value); return *this;}
    inline CreateGlobalClusterRequest& WithEngineLifecycleSupport(Aws::String&& value) { SetEngineLifecycleSupport(std::move(value)); return *this;}
    inline CreateGlobalClusterRequest& WithEngineLifecycleSupport(const char* value) { SetEngineLifecycleSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable deletion protection for the new global database
     * cluster. The global database can't be deleted when deletion protection is
     * enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateGlobalClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for your database of up to 64 alphanumeric characters. If you don't
     * specify a name, Amazon Aurora doesn't create a database in the global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the database name from the source DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateGlobalClusterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateGlobalClusterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateGlobalClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable storage encryption for the new global database
     * cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't be specified if
     * <code>SourceDBClusterIdentifier</code> is specified. In this case, Amazon Aurora
     * uses the setting from the source DB cluster.</p> </li> </ul>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline CreateGlobalClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the global cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateGlobalClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateGlobalClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateGlobalClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateGlobalClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_sourceDBClusterIdentifier;
    bool m_sourceDBClusterIdentifierHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_engineLifecycleSupport;
    bool m_engineLifecycleSupportHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
