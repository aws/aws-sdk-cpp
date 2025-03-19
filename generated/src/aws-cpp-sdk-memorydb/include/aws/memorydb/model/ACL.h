/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ACLPendingChanges.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>An Access Control List. You can authenticate users with Access Contol Lists.
   * ACLs enable you to control cluster access by grouping users. These Access
   * control lists are designed as a way to organize access to
   * clusters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ACL">AWS API
   * Reference</a></p>
   */
  class ACL
  {
  public:
    AWS_MEMORYDB_API ACL() = default;
    AWS_MEMORYDB_API ACL(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ACL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Access Control List</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ACL& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates ACL status. Can be "creating", "active", "modifying",
     * "deleting".</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ACL& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user names that belong to the ACL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserNames() const { return m_userNames; }
    inline bool UserNamesHasBeenSet() const { return m_userNamesHasBeenSet; }
    template<typename UserNamesT = Aws::Vector<Aws::String>>
    void SetUserNames(UserNamesT&& value) { m_userNamesHasBeenSet = true; m_userNames = std::forward<UserNamesT>(value); }
    template<typename UserNamesT = Aws::Vector<Aws::String>>
    ACL& WithUserNames(UserNamesT&& value) { SetUserNames(std::forward<UserNamesT>(value)); return *this;}
    template<typename UserNamesT = Aws::String>
    ACL& AddUserNames(UserNamesT&& value) { m_userNamesHasBeenSet = true; m_userNames.emplace_back(std::forward<UserNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum engine version supported for the ACL</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const { return m_minimumEngineVersion; }
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }
    template<typename MinimumEngineVersionT = Aws::String>
    void SetMinimumEngineVersion(MinimumEngineVersionT&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::forward<MinimumEngineVersionT>(value); }
    template<typename MinimumEngineVersionT = Aws::String>
    ACL& WithMinimumEngineVersion(MinimumEngineVersionT&& value) { SetMinimumEngineVersion(std::forward<MinimumEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of updates being applied to the ACL.</p>
     */
    inline const ACLPendingChanges& GetPendingChanges() const { return m_pendingChanges; }
    inline bool PendingChangesHasBeenSet() const { return m_pendingChangesHasBeenSet; }
    template<typename PendingChangesT = ACLPendingChanges>
    void SetPendingChanges(PendingChangesT&& value) { m_pendingChangesHasBeenSet = true; m_pendingChanges = std::forward<PendingChangesT>(value); }
    template<typename PendingChangesT = ACLPendingChanges>
    ACL& WithPendingChanges(PendingChangesT&& value) { SetPendingChanges(std::forward<PendingChangesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of clusters associated with the ACL.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const { return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    ACL& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = Aws::String>
    ACL& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ACL</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    ACL& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_userNames;
    bool m_userNamesHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;

    ACLPendingChanges m_pendingChanges;
    bool m_pendingChangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
