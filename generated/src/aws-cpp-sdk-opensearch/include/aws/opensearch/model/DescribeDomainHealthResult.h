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
    AWS_OPENSEARCHSERVICE_API DescribeDomainHealthResult();
    AWS_OPENSEARCHSERVICE_API DescribeDomainHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current state of the domain.</p> <ul> <li> <p> <code>Processing</code> -
     * The domain has updates in progress.</p> </li> <li> <p> <code>Active</code> -
     * Requested changes have been processed and deployed to the domain.</p> </li>
     * </ul>
     */
    inline const DomainState& GetDomainState() const{ return m_domainState; }
    inline void SetDomainState(const DomainState& value) { m_domainState = value; }
    inline void SetDomainState(DomainState&& value) { m_domainState = std::move(value); }
    inline DescribeDomainHealthResult& WithDomainState(const DomainState& value) { SetDomainState(value); return *this;}
    inline DescribeDomainHealthResult& WithDomainState(DomainState&& value) { SetDomainState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Availability Zones configured for the domain. If the service is
     * unable to fetch this information, it will return <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZoneCount() const{ return m_availabilityZoneCount; }
    inline void SetAvailabilityZoneCount(const Aws::String& value) { m_availabilityZoneCount = value; }
    inline void SetAvailabilityZoneCount(Aws::String&& value) { m_availabilityZoneCount = std::move(value); }
    inline void SetAvailabilityZoneCount(const char* value) { m_availabilityZoneCount.assign(value); }
    inline DescribeDomainHealthResult& WithAvailabilityZoneCount(const Aws::String& value) { SetAvailabilityZoneCount(value); return *this;}
    inline DescribeDomainHealthResult& WithAvailabilityZoneCount(Aws::String&& value) { SetAvailabilityZoneCount(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithAvailabilityZoneCount(const char* value) { SetAvailabilityZoneCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active Availability Zones configured for the domain. If the
     * service is unable to fetch this information, it will return
     * <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetActiveAvailabilityZoneCount() const{ return m_activeAvailabilityZoneCount; }
    inline void SetActiveAvailabilityZoneCount(const Aws::String& value) { m_activeAvailabilityZoneCount = value; }
    inline void SetActiveAvailabilityZoneCount(Aws::String&& value) { m_activeAvailabilityZoneCount = std::move(value); }
    inline void SetActiveAvailabilityZoneCount(const char* value) { m_activeAvailabilityZoneCount.assign(value); }
    inline DescribeDomainHealthResult& WithActiveAvailabilityZoneCount(const Aws::String& value) { SetActiveAvailabilityZoneCount(value); return *this;}
    inline DescribeDomainHealthResult& WithActiveAvailabilityZoneCount(Aws::String&& value) { SetActiveAvailabilityZoneCount(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithActiveAvailabilityZoneCount(const char* value) { SetActiveAvailabilityZoneCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of standby Availability Zones configured for the domain. If the
     * service is unable to fetch this information, it will return
     * <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetStandByAvailabilityZoneCount() const{ return m_standByAvailabilityZoneCount; }
    inline void SetStandByAvailabilityZoneCount(const Aws::String& value) { m_standByAvailabilityZoneCount = value; }
    inline void SetStandByAvailabilityZoneCount(Aws::String&& value) { m_standByAvailabilityZoneCount = std::move(value); }
    inline void SetStandByAvailabilityZoneCount(const char* value) { m_standByAvailabilityZoneCount.assign(value); }
    inline DescribeDomainHealthResult& WithStandByAvailabilityZoneCount(const Aws::String& value) { SetStandByAvailabilityZoneCount(value); return *this;}
    inline DescribeDomainHealthResult& WithStandByAvailabilityZoneCount(Aws::String&& value) { SetStandByAvailabilityZoneCount(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithStandByAvailabilityZoneCount(const char* value) { SetStandByAvailabilityZoneCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data nodes configured for the domain. If the service is unable
     * to fetch this information, it will return <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetDataNodeCount() const{ return m_dataNodeCount; }
    inline void SetDataNodeCount(const Aws::String& value) { m_dataNodeCount = value; }
    inline void SetDataNodeCount(Aws::String&& value) { m_dataNodeCount = std::move(value); }
    inline void SetDataNodeCount(const char* value) { m_dataNodeCount.assign(value); }
    inline DescribeDomainHealthResult& WithDataNodeCount(const Aws::String& value) { SetDataNodeCount(value); return *this;}
    inline DescribeDomainHealthResult& WithDataNodeCount(Aws::String&& value) { SetDataNodeCount(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithDataNodeCount(const char* value) { SetDataNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that indicates if dedicated master nodes are activated for the
     * domain.</p>
     */
    inline bool GetDedicatedMaster() const{ return m_dedicatedMaster; }
    inline void SetDedicatedMaster(bool value) { m_dedicatedMaster = value; }
    inline DescribeDomainHealthResult& WithDedicatedMaster(bool value) { SetDedicatedMaster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that can be elected as a master node. If dedicated master
     * nodes is turned on, this value is the number of dedicated master nodes
     * configured for the domain. If the service is unable to fetch this information,
     * it will return <code>NotAvailable</code>.</p>
     */
    inline const Aws::String& GetMasterEligibleNodeCount() const{ return m_masterEligibleNodeCount; }
    inline void SetMasterEligibleNodeCount(const Aws::String& value) { m_masterEligibleNodeCount = value; }
    inline void SetMasterEligibleNodeCount(Aws::String&& value) { m_masterEligibleNodeCount = std::move(value); }
    inline void SetMasterEligibleNodeCount(const char* value) { m_masterEligibleNodeCount.assign(value); }
    inline DescribeDomainHealthResult& WithMasterEligibleNodeCount(const Aws::String& value) { SetMasterEligibleNodeCount(value); return *this;}
    inline DescribeDomainHealthResult& WithMasterEligibleNodeCount(Aws::String&& value) { SetMasterEligibleNodeCount(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithMasterEligibleNodeCount(const char* value) { SetMasterEligibleNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of warm nodes configured for the domain.</p>
     */
    inline const Aws::String& GetWarmNodeCount() const{ return m_warmNodeCount; }
    inline void SetWarmNodeCount(const Aws::String& value) { m_warmNodeCount = value; }
    inline void SetWarmNodeCount(Aws::String&& value) { m_warmNodeCount = std::move(value); }
    inline void SetWarmNodeCount(const char* value) { m_warmNodeCount.assign(value); }
    inline DescribeDomainHealthResult& WithWarmNodeCount(const Aws::String& value) { SetWarmNodeCount(value); return *this;}
    inline DescribeDomainHealthResult& WithWarmNodeCount(Aws::String&& value) { SetWarmNodeCount(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithWarmNodeCount(const char* value) { SetWarmNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain has an elected master node.</p> <ul> <li> <p>
     * <b>Available</b> - The domain has an elected master node.</p> </li> <li> <p>
     * <b>UnAvailable</b> - The master node hasn't yet been elected, and a quorum to
     * elect a new master node hasn't been reached.</p> </li> </ul>
     */
    inline const MasterNodeStatus& GetMasterNode() const{ return m_masterNode; }
    inline void SetMasterNode(const MasterNodeStatus& value) { m_masterNode = value; }
    inline void SetMasterNode(MasterNodeStatus&& value) { m_masterNode = std::move(value); }
    inline DescribeDomainHealthResult& WithMasterNode(const MasterNodeStatus& value) { SetMasterNode(value); return *this;}
    inline DescribeDomainHealthResult& WithMasterNode(MasterNodeStatus&& value) { SetMasterNode(std::move(value)); return *this;}
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
    inline const DomainHealth& GetClusterHealth() const{ return m_clusterHealth; }
    inline void SetClusterHealth(const DomainHealth& value) { m_clusterHealth = value; }
    inline void SetClusterHealth(DomainHealth&& value) { m_clusterHealth = std::move(value); }
    inline DescribeDomainHealthResult& WithClusterHealth(const DomainHealth& value) { SetClusterHealth(value); return *this;}
    inline DescribeDomainHealthResult& WithClusterHealth(DomainHealth&& value) { SetClusterHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of primary and replica shards for the domain.</p>
     */
    inline const Aws::String& GetTotalShards() const{ return m_totalShards; }
    inline void SetTotalShards(const Aws::String& value) { m_totalShards = value; }
    inline void SetTotalShards(Aws::String&& value) { m_totalShards = std::move(value); }
    inline void SetTotalShards(const char* value) { m_totalShards.assign(value); }
    inline DescribeDomainHealthResult& WithTotalShards(const Aws::String& value) { SetTotalShards(value); return *this;}
    inline DescribeDomainHealthResult& WithTotalShards(Aws::String&& value) { SetTotalShards(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithTotalShards(const char* value) { SetTotalShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of primary and replica shards not allocated to any of the
     * nodes for the cluster.</p>
     */
    inline const Aws::String& GetTotalUnAssignedShards() const{ return m_totalUnAssignedShards; }
    inline void SetTotalUnAssignedShards(const Aws::String& value) { m_totalUnAssignedShards = value; }
    inline void SetTotalUnAssignedShards(Aws::String&& value) { m_totalUnAssignedShards = std::move(value); }
    inline void SetTotalUnAssignedShards(const char* value) { m_totalUnAssignedShards.assign(value); }
    inline DescribeDomainHealthResult& WithTotalUnAssignedShards(const Aws::String& value) { SetTotalUnAssignedShards(value); return *this;}
    inline DescribeDomainHealthResult& WithTotalUnAssignedShards(Aws::String&& value) { SetTotalUnAssignedShards(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithTotalUnAssignedShards(const char* value) { SetTotalUnAssignedShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnvironmentInfo</code> for the domain. </p>
     */
    inline const Aws::Vector<EnvironmentInfo>& GetEnvironmentInformation() const{ return m_environmentInformation; }
    inline void SetEnvironmentInformation(const Aws::Vector<EnvironmentInfo>& value) { m_environmentInformation = value; }
    inline void SetEnvironmentInformation(Aws::Vector<EnvironmentInfo>&& value) { m_environmentInformation = std::move(value); }
    inline DescribeDomainHealthResult& WithEnvironmentInformation(const Aws::Vector<EnvironmentInfo>& value) { SetEnvironmentInformation(value); return *this;}
    inline DescribeDomainHealthResult& WithEnvironmentInformation(Aws::Vector<EnvironmentInfo>&& value) { SetEnvironmentInformation(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& AddEnvironmentInformation(const EnvironmentInfo& value) { m_environmentInformation.push_back(value); return *this; }
    inline DescribeDomainHealthResult& AddEnvironmentInformation(EnvironmentInfo&& value) { m_environmentInformation.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDomainHealthResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDomainHealthResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDomainHealthResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DomainState m_domainState;

    Aws::String m_availabilityZoneCount;

    Aws::String m_activeAvailabilityZoneCount;

    Aws::String m_standByAvailabilityZoneCount;

    Aws::String m_dataNodeCount;

    bool m_dedicatedMaster;

    Aws::String m_masterEligibleNodeCount;

    Aws::String m_warmNodeCount;

    MasterNodeStatus m_masterNode;

    DomainHealth m_clusterHealth;

    Aws::String m_totalShards;

    Aws::String m_totalUnAssignedShards;

    Aws::Vector<EnvironmentInfo> m_environmentInformation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
