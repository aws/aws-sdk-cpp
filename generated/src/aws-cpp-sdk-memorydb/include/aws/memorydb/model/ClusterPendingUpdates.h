/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/ReshardingStatus.h>
#include <aws/memorydb/model/ACLsUpdateStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/PendingModifiedServiceUpdate.h>
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
   * <p>A list of updates being applied to the cluster</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ClusterPendingUpdates">AWS
   * API Reference</a></p>
   */
  class ClusterPendingUpdates
  {
  public:
    AWS_MEMORYDB_API ClusterPendingUpdates() = default;
    AWS_MEMORYDB_API ClusterPendingUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ClusterPendingUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline const ReshardingStatus& GetResharding() const { return m_resharding; }
    inline bool ReshardingHasBeenSet() const { return m_reshardingHasBeenSet; }
    template<typename ReshardingT = ReshardingStatus>
    void SetResharding(ReshardingT&& value) { m_reshardingHasBeenSet = true; m_resharding = std::forward<ReshardingT>(value); }
    template<typename ReshardingT = ReshardingStatus>
    ClusterPendingUpdates& WithResharding(ReshardingT&& value) { SetResharding(std::forward<ReshardingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ACLs associated with the cluster that are being updated</p>
     */
    inline const ACLsUpdateStatus& GetACLs() const { return m_aCLs; }
    inline bool ACLsHasBeenSet() const { return m_aCLsHasBeenSet; }
    template<typename ACLsT = ACLsUpdateStatus>
    void SetACLs(ACLsT&& value) { m_aCLsHasBeenSet = true; m_aCLs = std::forward<ACLsT>(value); }
    template<typename ACLsT = ACLsUpdateStatus>
    ClusterPendingUpdates& WithACLs(ACLsT&& value) { SetACLs(std::forward<ACLsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of service updates being applied to the cluster</p>
     */
    inline const Aws::Vector<PendingModifiedServiceUpdate>& GetServiceUpdates() const { return m_serviceUpdates; }
    inline bool ServiceUpdatesHasBeenSet() const { return m_serviceUpdatesHasBeenSet; }
    template<typename ServiceUpdatesT = Aws::Vector<PendingModifiedServiceUpdate>>
    void SetServiceUpdates(ServiceUpdatesT&& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates = std::forward<ServiceUpdatesT>(value); }
    template<typename ServiceUpdatesT = Aws::Vector<PendingModifiedServiceUpdate>>
    ClusterPendingUpdates& WithServiceUpdates(ServiceUpdatesT&& value) { SetServiceUpdates(std::forward<ServiceUpdatesT>(value)); return *this;}
    template<typename ServiceUpdatesT = PendingModifiedServiceUpdate>
    ClusterPendingUpdates& AddServiceUpdates(ServiceUpdatesT&& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates.emplace_back(std::forward<ServiceUpdatesT>(value)); return *this; }
    ///@}
  private:

    ReshardingStatus m_resharding;
    bool m_reshardingHasBeenSet = false;

    ACLsUpdateStatus m_aCLs;
    bool m_aCLsHasBeenSet = false;

    Aws::Vector<PendingModifiedServiceUpdate> m_serviceUpdates;
    bool m_serviceUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
