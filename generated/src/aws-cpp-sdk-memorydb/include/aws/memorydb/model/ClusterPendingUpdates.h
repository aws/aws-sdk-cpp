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
    AWS_MEMORYDB_API ClusterPendingUpdates();
    AWS_MEMORYDB_API ClusterPendingUpdates(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ClusterPendingUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of an online resharding operation.</p>
     */
    inline const ReshardingStatus& GetResharding() const{ return m_resharding; }
    inline bool ReshardingHasBeenSet() const { return m_reshardingHasBeenSet; }
    inline void SetResharding(const ReshardingStatus& value) { m_reshardingHasBeenSet = true; m_resharding = value; }
    inline void SetResharding(ReshardingStatus&& value) { m_reshardingHasBeenSet = true; m_resharding = std::move(value); }
    inline ClusterPendingUpdates& WithResharding(const ReshardingStatus& value) { SetResharding(value); return *this;}
    inline ClusterPendingUpdates& WithResharding(ReshardingStatus&& value) { SetResharding(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ACLs associated with the cluster that are being updated</p>
     */
    inline const ACLsUpdateStatus& GetACLs() const{ return m_aCLs; }
    inline bool ACLsHasBeenSet() const { return m_aCLsHasBeenSet; }
    inline void SetACLs(const ACLsUpdateStatus& value) { m_aCLsHasBeenSet = true; m_aCLs = value; }
    inline void SetACLs(ACLsUpdateStatus&& value) { m_aCLsHasBeenSet = true; m_aCLs = std::move(value); }
    inline ClusterPendingUpdates& WithACLs(const ACLsUpdateStatus& value) { SetACLs(value); return *this;}
    inline ClusterPendingUpdates& WithACLs(ACLsUpdateStatus&& value) { SetACLs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of service updates being applied to the cluster</p>
     */
    inline const Aws::Vector<PendingModifiedServiceUpdate>& GetServiceUpdates() const{ return m_serviceUpdates; }
    inline bool ServiceUpdatesHasBeenSet() const { return m_serviceUpdatesHasBeenSet; }
    inline void SetServiceUpdates(const Aws::Vector<PendingModifiedServiceUpdate>& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates = value; }
    inline void SetServiceUpdates(Aws::Vector<PendingModifiedServiceUpdate>&& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates = std::move(value); }
    inline ClusterPendingUpdates& WithServiceUpdates(const Aws::Vector<PendingModifiedServiceUpdate>& value) { SetServiceUpdates(value); return *this;}
    inline ClusterPendingUpdates& WithServiceUpdates(Aws::Vector<PendingModifiedServiceUpdate>&& value) { SetServiceUpdates(std::move(value)); return *this;}
    inline ClusterPendingUpdates& AddServiceUpdates(const PendingModifiedServiceUpdate& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates.push_back(value); return *this; }
    inline ClusterPendingUpdates& AddServiceUpdates(PendingModifiedServiceUpdate&& value) { m_serviceUpdatesHasBeenSet = true; m_serviceUpdates.push_back(std::move(value)); return *this; }
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
