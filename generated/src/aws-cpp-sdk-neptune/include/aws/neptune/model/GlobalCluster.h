/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/FailoverState.h>
#include <aws/neptune/model/GlobalClusterMember.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the details of an Amazon Neptune global database.</p> <p>This data
   * type is used as a response element for the <a>CreateGlobalCluster</a>,
   * <a>DescribeGlobalClusters</a>, <a>ModifyGlobalCluster</a>,
   * <a>DeleteGlobalCluster</a>, <a>FailoverGlobalCluster</a>, and
   * <a>RemoveFromGlobalCluster</a> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/GlobalCluster">AWS
   * API Reference</a></p>
   */
  class GlobalCluster
  {
  public:
    AWS_NEPTUNE_API GlobalCluster() = default;
    AWS_NEPTUNE_API GlobalCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API GlobalCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Contains a user-supplied global database cluster identifier. This identifier
     * is the unique key that identifies a global database.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    GlobalCluster& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable identifier for the global database that is unique within in all
     * regions. This identifier is found in CloudTrail log entries whenever the KMS key
     * for the DB cluster is accessed.</p>
     */
    inline const Aws::String& GetGlobalClusterResourceId() const { return m_globalClusterResourceId; }
    inline bool GlobalClusterResourceIdHasBeenSet() const { return m_globalClusterResourceIdHasBeenSet; }
    template<typename GlobalClusterResourceIdT = Aws::String>
    void SetGlobalClusterResourceId(GlobalClusterResourceIdT&& value) { m_globalClusterResourceIdHasBeenSet = true; m_globalClusterResourceId = std::forward<GlobalClusterResourceIdT>(value); }
    template<typename GlobalClusterResourceIdT = Aws::String>
    GlobalCluster& WithGlobalClusterResourceId(GlobalClusterResourceIdT&& value) { SetGlobalClusterResourceId(std::forward<GlobalClusterResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the global database.</p>
     */
    inline const Aws::String& GetGlobalClusterArn() const { return m_globalClusterArn; }
    inline bool GlobalClusterArnHasBeenSet() const { return m_globalClusterArnHasBeenSet; }
    template<typename GlobalClusterArnT = Aws::String>
    void SetGlobalClusterArn(GlobalClusterArnT&& value) { m_globalClusterArnHasBeenSet = true; m_globalClusterArn = std::forward<GlobalClusterArnT>(value); }
    template<typename GlobalClusterArnT = Aws::String>
    GlobalCluster& WithGlobalClusterArn(GlobalClusterArnT&& value) { SetGlobalClusterArn(std::forward<GlobalClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current state of this global database.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GlobalCluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Neptune database engine used by the global database
     * (<code>"neptune"</code>).</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    GlobalCluster& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Neptune engine version used by the global database.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    GlobalCluster& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage encryption setting for the global database.</p>
     */
    inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }
    inline GlobalCluster& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deletion protection setting for the global database.</p>
     */
    inline bool GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline GlobalCluster& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cluster ARNs and instance ARNs for all the DB clusters that are
     * part of the global database.</p>
     */
    inline const Aws::Vector<GlobalClusterMember>& GetGlobalClusterMembers() const { return m_globalClusterMembers; }
    inline bool GlobalClusterMembersHasBeenSet() const { return m_globalClusterMembersHasBeenSet; }
    template<typename GlobalClusterMembersT = Aws::Vector<GlobalClusterMember>>
    void SetGlobalClusterMembers(GlobalClusterMembersT&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers = std::forward<GlobalClusterMembersT>(value); }
    template<typename GlobalClusterMembersT = Aws::Vector<GlobalClusterMember>>
    GlobalCluster& WithGlobalClusterMembers(GlobalClusterMembersT&& value) { SetGlobalClusterMembers(std::forward<GlobalClusterMembersT>(value)); return *this;}
    template<typename GlobalClusterMembersT = GlobalClusterMember>
    GlobalCluster& AddGlobalClusterMembers(GlobalClusterMembersT&& value) { m_globalClusterMembersHasBeenSet = true; m_globalClusterMembers.emplace_back(std::forward<GlobalClusterMembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A data object containing all properties for the current state of an
     * in-process or pending switchover or failover process for this global cluster
     * (Neptune global database). This object is empty unless the
     * <code>SwitchoverGlobalCluster</code> or <code>FailoverGlobalCluster</code>
     * operation was called on this global cluster.</p>
     */
    inline const FailoverState& GetFailoverState() const { return m_failoverState; }
    inline bool FailoverStateHasBeenSet() const { return m_failoverStateHasBeenSet; }
    template<typename FailoverStateT = FailoverState>
    void SetFailoverState(FailoverStateT&& value) { m_failoverStateHasBeenSet = true; m_failoverState = std::forward<FailoverStateT>(value); }
    template<typename FailoverStateT = FailoverState>
    GlobalCluster& WithFailoverState(FailoverStateT&& value) { SetFailoverState(std::forward<FailoverStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_globalClusterResourceId;
    bool m_globalClusterResourceIdHasBeenSet = false;

    Aws::String m_globalClusterArn;
    bool m_globalClusterArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_storageEncrypted{false};
    bool m_storageEncryptedHasBeenSet = false;

    bool m_deletionProtection{false};
    bool m_deletionProtectionHasBeenSet = false;

    Aws::Vector<GlobalClusterMember> m_globalClusterMembers;
    bool m_globalClusterMembersHasBeenSet = false;

    FailoverState m_failoverState;
    bool m_failoverStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
