/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/MasterNodeStatus.h>
#include <aws/opensearch/model/DomainHealth.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/EnvironmentInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeDomainHealth</code> request. Contains health
   * information for the requested domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainHealthResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainHealthResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainHealthResult() = default;
    AWS_OPENSEARCHSERVICE_API DescribeDomainHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current state of the domain.</p> <ul> <li> <p> <code>Processing</code> -
     * The domain has updates in progress.</p> </li> <li> <p> <code>Active</code> -
     * Requested changes have been processed and deployed to the domain.</p> </li>
     * </ul>
     */
    inline DomainState GetDomainState() const { return m_domainState; }
    inline void SetDomainState(DomainState value) { m_domainStateHasBeenSet = true; m_domainState = value; }
    inline DescribeDomainHealthResult& WithDomainState(DomainState value) { SetDomainState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Availability Zones configured for the domain. If the service is
     * unable to fetch this information, it will return <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZoneCount() const { return m_availabilityZoneCount; }
    template<typename AvailabilityZoneCountT = Aws::String>
    void SetAvailabilityZoneCount(AvailabilityZoneCountT&& value) { m_availabilityZoneCountHasBeenSet = true; m_availabilityZoneCount = std::forward<AvailabilityZoneCountT>(value); }
    template<typename AvailabilityZoneCountT = Aws::String>
    DescribeDomainHealthResult& WithAvailabilityZoneCount(AvailabilityZoneCountT&& value) { SetAvailabilityZoneCount(std::forward<AvailabilityZoneCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active Availability Zones configured for the domain. If the
     * service is unable to fetch this information, it will return
     * <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetActiveAvailabilityZoneCount() const { return m_activeAvailabilityZoneCount; }
    template<typename ActiveAvailabilityZoneCountT = Aws::String>
    void SetActiveAvailabilityZoneCount(ActiveAvailabilityZoneCountT&& value) { m_activeAvailabilityZoneCountHasBeenSet = true; m_activeAvailabilityZoneCount = std::forward<ActiveAvailabilityZoneCountT>(value); }
    template<typename ActiveAvailabilityZoneCountT = Aws::String>
    DescribeDomainHealthResult& WithActiveAvailabilityZoneCount(ActiveAvailabilityZoneCountT&& value) { SetActiveAvailabilityZoneCount(std::forward<ActiveAvailabilityZoneCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of standby Availability Zones configured for the domain. If the
     * service is unable to fetch this information, it will return
     * <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetStandByAvailabilityZoneCount() const { return m_standByAvailabilityZoneCount; }
    template<typename StandByAvailabilityZoneCountT = Aws::String>
    void SetStandByAvailabilityZoneCount(StandByAvailabilityZoneCountT&& value) { m_standByAvailabilityZoneCountHasBeenSet = true; m_standByAvailabilityZoneCount = std::forward<StandByAvailabilityZoneCountT>(value); }
    template<typename StandByAvailabilityZoneCountT = Aws::String>
    DescribeDomainHealthResult& WithStandByAvailabilityZoneCount(StandByAvailabilityZoneCountT&& value) { SetStandByAvailabilityZoneCount(std::forward<StandByAvailabilityZoneCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data nodes configured for the domain. If the service is unable
     * to fetch this information, it will return <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetDataNodeCount() const { return m_dataNodeCount; }
    template<typename DataNodeCountT = Aws::String>
    void SetDataNodeCount(DataNodeCountT&& value) { m_dataNodeCountHasBeenSet = true; m_dataNodeCount = std::forward<DataNodeCountT>(value); }
    template<typename DataNodeCountT = Aws::String>
    DescribeDomainHealthResult& WithDataNodeCount(DataNodeCountT&& value) { SetDataNodeCount(std::forward<DataNodeCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that indicates if dedicated master nodes are activated for the
     * domain.</p>
     */
    inline bool GetDedicatedMaster() const { return m_dedicatedMaster; }
    inline void SetDedicatedMaster(bool value) { m_dedicatedMasterHasBeenSet = true; m_dedicatedMaster = value; }
    inline DescribeDomainHealthResult& WithDedicatedMaster(bool value) { SetDedicatedMaster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that can be elected as a master node. If dedicated master
     * nodes is turned on, this value is the number of dedicated master nodes
     * configured for the domain. If the service is unable to fetch this information,
     * it will return <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetMasterEligibleNodeCount() const { return m_masterEligibleNodeCount; }
    template<typename MasterEligibleNodeCountT = Aws::String>
    void SetMasterEligibleNodeCount(MasterEligibleNodeCountT&& value) { m_masterEligibleNodeCountHasBeenSet = true; m_masterEligibleNodeCount = std::forward<MasterEligibleNodeCountT>(value); }
    template<typename MasterEligibleNodeCountT = Aws::String>
    DescribeDomainHealthResult& WithMasterEligibleNodeCount(MasterEligibleNodeCountT&& value) { SetMasterEligibleNodeCount(std::forward<MasterEligibleNodeCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of warm nodes configured for the domain.</p>
     */
    inline const Aws::String& GetWarmNodeCount() const { return m_warmNodeCount; }
    template<typename WarmNodeCountT = Aws::String>
    void SetWarmNodeCount(WarmNodeCountT&& value) { m_warmNodeCountHasBeenSet = true; m_warmNodeCount = std::forward<WarmNodeCountT>(value); }
    template<typename WarmNodeCountT = Aws::String>
    DescribeDomainHealthResult& WithWarmNodeCount(WarmNodeCountT&& value) { SetWarmNodeCount(std::forward<WarmNodeCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain has an elected master node.</p> <ul> <li> <p>
     * <b>Available</b> - The domain has an elected master node.</p> </li> <li> <p>
     * <b>UnAvailable</b> - The master node hasn't yet been elected, and a quorum to
     * elect a new master node hasn't been reached.</p> </li> </ul>
     */
    inline MasterNodeStatus GetMasterNode() const { return m_masterNode; }
    inline void SetMasterNode(MasterNodeStatus value) { m_masterNodeHasBeenSet = true; m_masterNode = value; }
    inline DescribeDomainHealthResult& WithMasterNode(MasterNodeStatus value) { SetMasterNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current health status of your cluster.</p> <ul> <li> <p> <code>Red</code>
     * - At least one primary shard is not allocated to any node.</p> </li> <li> <p>
     * <code>Yellow</code> - All primary shards are allocated to nodes, but some
     * replicas aren’t.</p> </li> <li> <p> <code>Green</code> - All primary shards and
     * their replicas are allocated to nodes.</p> </li> <li> <p>
     * <code>NotAvailable</code> - Unable to retrieve cluster health.</p> </li> </ul>
     */
    inline DomainHealth GetClusterHealth() const { return m_clusterHealth; }
    inline void SetClusterHealth(DomainHealth value) { m_clusterHealthHasBeenSet = true; m_clusterHealth = value; }
    inline DescribeDomainHealthResult& WithClusterHealth(DomainHealth value) { SetClusterHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of primary and replica shards for the domain.</p>
     */
    inline const Aws::String& GetTotalShards() const { return m_totalShards; }
    template<typename TotalShardsT = Aws::String>
    void SetTotalShards(TotalShardsT&& value) { m_totalShardsHasBeenSet = true; m_totalShards = std::forward<TotalShardsT>(value); }
    template<typename TotalShardsT = Aws::String>
    DescribeDomainHealthResult& WithTotalShards(TotalShardsT&& value) { SetTotalShards(std::forward<TotalShardsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of primary and replica shards not allocated to any of the
     * nodes for the cluster.</p>
     */
    inline const Aws::String& GetTotalUnAssignedShards() const { return m_totalUnAssignedShards; }
    template<typename TotalUnAssignedShardsT = Aws::String>
    void SetTotalUnAssignedShards(TotalUnAssignedShardsT&& value) { m_totalUnAssignedShardsHasBeenSet = true; m_totalUnAssignedShards = std::forward<TotalUnAssignedShardsT>(value); }
    template<typename TotalUnAssignedShardsT = Aws::String>
    DescribeDomainHealthResult& WithTotalUnAssignedShards(TotalUnAssignedShardsT&& value) { SetTotalUnAssignedShards(std::forward<TotalUnAssignedShardsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnvironmentInfo</code> for the domain. </p>
     */
    inline const Aws::Vector<EnvironmentInfo>& GetEnvironmentInformation() const { return m_environmentInformation; }
    template<typename EnvironmentInformationT = Aws::Vector<EnvironmentInfo>>
    void SetEnvironmentInformation(EnvironmentInformationT&& value) { m_environmentInformationHasBeenSet = true; m_environmentInformation = std::forward<EnvironmentInformationT>(value); }
    template<typename EnvironmentInformationT = Aws::Vector<EnvironmentInfo>>
    DescribeDomainHealthResult& WithEnvironmentInformation(EnvironmentInformationT&& value) { SetEnvironmentInformation(std::forward<EnvironmentInformationT>(value)); return *this;}
    template<typename EnvironmentInformationT = EnvironmentInfo>
    DescribeDomainHealthResult& AddEnvironmentInformation(EnvironmentInformationT&& value) { m_environmentInformationHasBeenSet = true; m_environmentInformation.emplace_back(std::forward<EnvironmentInformationT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainHealthResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainState m_domainState{DomainState::NOT_SET};
    bool m_domainStateHasBeenSet = false;

    Aws::String m_availabilityZoneCount;
    bool m_availabilityZoneCountHasBeenSet = false;

    Aws::String m_activeAvailabilityZoneCount;
    bool m_activeAvailabilityZoneCountHasBeenSet = false;

    Aws::String m_standByAvailabilityZoneCount;
    bool m_standByAvailabilityZoneCountHasBeenSet = false;

    Aws::String m_dataNodeCount;
    bool m_dataNodeCountHasBeenSet = false;

    bool m_dedicatedMaster{false};
    bool m_dedicatedMasterHasBeenSet = false;

    Aws::String m_masterEligibleNodeCount;
    bool m_masterEligibleNodeCountHasBeenSet = false;

    Aws::String m_warmNodeCount;
    bool m_warmNodeCountHasBeenSet = false;

    MasterNodeStatus m_masterNode{MasterNodeStatus::NOT_SET};
    bool m_masterNodeHasBeenSet = false;

    DomainHealth m_clusterHealth{DomainHealth::NOT_SET};
    bool m_clusterHealthHasBeenSet = false;

    Aws::String m_totalShards;
    bool m_totalShardsHasBeenSet = false;

    Aws::String m_totalUnAssignedShards;
    bool m_totalUnAssignedShardsHasBeenSet = false;

    Aws::Vector<EnvironmentInfo> m_environmentInformation;
    bool m_environmentInformationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
