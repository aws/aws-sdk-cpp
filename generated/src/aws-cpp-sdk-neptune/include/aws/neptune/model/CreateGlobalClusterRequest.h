/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class CreateGlobalClusterRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API CreateGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGlobalCluster"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the new global database cluster.</p>
     */
    inline CreateGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline const Aws::String& GetSourceDBClusterIdentifier() const{ return m_sourceDBClusterIdentifier; }

    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline bool SourceDBClusterIdentifierHasBeenSet() const { return m_sourceDBClusterIdentifierHasBeenSet; }

    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline void SetSourceDBClusterIdentifier(const Aws::String& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = value; }

    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline void SetSourceDBClusterIdentifier(Aws::String&& value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier = std::move(value); }

    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline void SetSourceDBClusterIdentifier(const char* value) { m_sourceDBClusterIdentifierHasBeenSet = true; m_sourceDBClusterIdentifier.assign(value); }

    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const Aws::String& value) { SetSourceDBClusterIdentifier(value); return *this;}

    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(Aws::String&& value) { SetSourceDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>(<i>Optional</i>) The Amazon Resource Name (ARN) of an existing Neptune DB
     * cluster to use as the primary cluster of the new global database.</p>
     */
    inline CreateGlobalClusterRequest& WithSourceDBClusterIdentifier(const char* value) { SetSourceDBClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline CreateGlobalClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline CreateGlobalClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used in the global database.</p>
     * <p>Valid values: <code>neptune</code> </p>
     */
    inline CreateGlobalClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The Neptune engine version to be used by the global database.</p> <p>Valid
     * values: <code>1.2.0.0</code> or above.</p>
     */
    inline CreateGlobalClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>The deletion protection setting for the new global database. The global
     * database can't be deleted when deletion protection is enabled.</p>
     */
    inline CreateGlobalClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The storage encryption setting for the new global database cluster.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>The storage encryption setting for the new global database cluster.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>The storage encryption setting for the new global database cluster.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>The storage encryption setting for the new global database cluster.</p>
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

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
