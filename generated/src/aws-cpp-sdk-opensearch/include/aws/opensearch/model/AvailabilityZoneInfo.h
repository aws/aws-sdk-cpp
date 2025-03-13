/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ZoneStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Information about an Availability Zone on a domain.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AvailabilityZoneInfo">AWS
   * API Reference</a></p>
   */
  class AvailabilityZoneInfo
  {
  public:
    AWS_OPENSEARCHSERVICE_API AvailabilityZoneInfo() = default;
    AWS_OPENSEARCHSERVICE_API AvailabilityZoneInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AvailabilityZoneInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const { return m_availabilityZoneName; }
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }
    template<typename AvailabilityZoneNameT = Aws::String>
    void SetAvailabilityZoneName(AvailabilityZoneNameT&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::forward<AvailabilityZoneNameT>(value); }
    template<typename AvailabilityZoneNameT = Aws::String>
    AvailabilityZoneInfo& WithAvailabilityZoneName(AvailabilityZoneNameT&& value) { SetAvailabilityZoneName(std::forward<AvailabilityZoneNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the Availability Zone. Current options are
     * <code>Active</code> and <code>StandBy</code>.</p> <ul> <li> <p>
     * <code>Active</code> - Data nodes in the Availability Zone are in use.</p> </li>
     * <li> <p> <code>StandBy</code> - Data nodes in the Availability Zone are in a
     * standby state.</p> </li> <li> <p> <code>NotAvailable</code> - Unable to retrieve
     * information.</p> </li> </ul>
     */
    inline ZoneStatus GetZoneStatus() const { return m_zoneStatus; }
    inline bool ZoneStatusHasBeenSet() const { return m_zoneStatusHasBeenSet; }
    inline void SetZoneStatus(ZoneStatus value) { m_zoneStatusHasBeenSet = true; m_zoneStatus = value; }
    inline AvailabilityZoneInfo& WithZoneStatus(ZoneStatus value) { SetZoneStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline const Aws::String& GetConfiguredDataNodeCount() const { return m_configuredDataNodeCount; }
    inline bool ConfiguredDataNodeCountHasBeenSet() const { return m_configuredDataNodeCountHasBeenSet; }
    template<typename ConfiguredDataNodeCountT = Aws::String>
    void SetConfiguredDataNodeCount(ConfiguredDataNodeCountT&& value) { m_configuredDataNodeCountHasBeenSet = true; m_configuredDataNodeCount = std::forward<ConfiguredDataNodeCountT>(value); }
    template<typename ConfiguredDataNodeCountT = Aws::String>
    AvailabilityZoneInfo& WithConfiguredDataNodeCount(ConfiguredDataNodeCountT&& value) { SetConfiguredDataNodeCount(std::forward<ConfiguredDataNodeCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailableDataNodeCount() const { return m_availableDataNodeCount; }
    inline bool AvailableDataNodeCountHasBeenSet() const { return m_availableDataNodeCountHasBeenSet; }
    template<typename AvailableDataNodeCountT = Aws::String>
    void SetAvailableDataNodeCount(AvailableDataNodeCountT&& value) { m_availableDataNodeCountHasBeenSet = true; m_availableDataNodeCount = std::forward<AvailableDataNodeCountT>(value); }
    template<typename AvailableDataNodeCountT = Aws::String>
    AvailabilityZoneInfo& WithAvailableDataNodeCount(AvailableDataNodeCountT&& value) { SetAvailableDataNodeCount(std::forward<AvailableDataNodeCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline const Aws::String& GetTotalShards() const { return m_totalShards; }
    inline bool TotalShardsHasBeenSet() const { return m_totalShardsHasBeenSet; }
    template<typename TotalShardsT = Aws::String>
    void SetTotalShards(TotalShardsT&& value) { m_totalShardsHasBeenSet = true; m_totalShards = std::forward<TotalShardsT>(value); }
    template<typename TotalShardsT = Aws::String>
    AvailabilityZoneInfo& WithTotalShards(TotalShardsT&& value) { SetTotalShards(std::forward<TotalShardsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline const Aws::String& GetTotalUnAssignedShards() const { return m_totalUnAssignedShards; }
    inline bool TotalUnAssignedShardsHasBeenSet() const { return m_totalUnAssignedShardsHasBeenSet; }
    template<typename TotalUnAssignedShardsT = Aws::String>
    void SetTotalUnAssignedShards(TotalUnAssignedShardsT&& value) { m_totalUnAssignedShardsHasBeenSet = true; m_totalUnAssignedShards = std::forward<TotalUnAssignedShardsT>(value); }
    template<typename TotalUnAssignedShardsT = Aws::String>
    AvailabilityZoneInfo& WithTotalUnAssignedShards(TotalUnAssignedShardsT&& value) { SetTotalUnAssignedShards(std::forward<TotalUnAssignedShardsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZoneName;
    bool m_availabilityZoneNameHasBeenSet = false;

    ZoneStatus m_zoneStatus{ZoneStatus::NOT_SET};
    bool m_zoneStatusHasBeenSet = false;

    Aws::String m_configuredDataNodeCount;
    bool m_configuredDataNodeCountHasBeenSet = false;

    Aws::String m_availableDataNodeCount;
    bool m_availableDataNodeCountHasBeenSet = false;

    Aws::String m_totalShards;
    bool m_totalShardsHasBeenSet = false;

    Aws::String m_totalUnAssignedShards;
    bool m_totalUnAssignedShardsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
