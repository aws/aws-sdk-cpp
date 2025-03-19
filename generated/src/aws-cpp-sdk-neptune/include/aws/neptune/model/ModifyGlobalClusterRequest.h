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
  class ModifyGlobalClusterRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API ModifyGlobalClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyGlobalCluster"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB cluster identifier for the global cluster being modified. This
     * parameter is not case-sensitive.</p> <p>Constraints: Must match the identifier
     * of an existing global database cluster.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    ModifyGlobalClusterRequest& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new cluster identifier to assign to the global database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain
     * from 1 to 63 letters, numbers, or hyphens.</p> </li> <li> <p>The first character
     * must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain two
     * consecutive hyphens</p> </li> </ul> <p>Example: <code>my-cluster2</code> </p>
     */
    inline const Aws::String& GetNewGlobalClusterIdentifier() const { return m_newGlobalClusterIdentifier; }
    inline bool NewGlobalClusterIdentifierHasBeenSet() const { return m_newGlobalClusterIdentifierHasBeenSet; }
    template<typename NewGlobalClusterIdentifierT = Aws::String>
    void SetNewGlobalClusterIdentifier(NewGlobalClusterIdentifierT&& value) { m_newGlobalClusterIdentifierHasBeenSet = true; m_newGlobalClusterIdentifier = std::forward<NewGlobalClusterIdentifierT>(value); }
    template<typename NewGlobalClusterIdentifierT = Aws::String>
    ModifyGlobalClusterRequest& WithNewGlobalClusterIdentifier(NewGlobalClusterIdentifierT&& value) { SetNewGlobalClusterIdentifier(std::forward<NewGlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the global database has deletion protection enabled. The
     * global database cannot be deleted when deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline ModifyGlobalClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter will result in an outage. The change is applied during
     * the next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available Neptune engine versions, use the following
     * command:</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    ModifyGlobalClusterRequest& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades if you specify a value for
     * the <code>EngineVersion</code> parameter that is a different major version than
     * the DB cluster's current version.</p> <p>If you upgrade the major version of a
     * global database, the cluster and DB instance parameter groups are set to the
     * default parameter groups for the new version, so you will need to apply any
     * custom parameter groups after completing the upgrade.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const { return m_allowMajorVersionUpgrade; }
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }
    inline ModifyGlobalClusterRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_newGlobalClusterIdentifier;
    bool m_newGlobalClusterIdentifierHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_allowMajorVersionUpgrade{false};
    bool m_allowMajorVersionUpgradeHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
