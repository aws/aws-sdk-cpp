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
    AWS_OPENSEARCHSERVICE_API AvailabilityZoneInfo();
    AWS_OPENSEARCHSERVICE_API AvailabilityZoneInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AvailabilityZoneInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZoneName() const{ return m_availabilityZoneName; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetAvailabilityZoneName(const Aws::String& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = value; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetAvailabilityZoneName(Aws::String&& value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName = std::move(value); }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetAvailabilityZoneName(const char* value) { m_availabilityZoneNameHasBeenSet = true; m_availabilityZoneName.assign(value); }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithAvailabilityZoneName(const Aws::String& value) { SetAvailabilityZoneName(value); return *this;}

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithAvailabilityZoneName(Aws::String&& value) { SetAvailabilityZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithAvailabilityZoneName(const char* value) { SetAvailabilityZoneName(value); return *this;}


    /**
     * <p>The current state of the Availability Zone. Current options are
     * <code>Active</code> and <code>StandBy</code>.</p> <ul> <li> <p>
     * <code>Active</code> - Data nodes in the Availability Zone are in use.</p> </li>
     * <li> <p> <code>StandBy</code> - Data nodes in the Availability Zone are in a
     * standby state.</p> </li> <li> <p> <code>NotAvailable</code> - Unable to retrieve
     * information.</p> </li> </ul>
     */
    inline const ZoneStatus& GetZoneStatus() const{ return m_zoneStatus; }

    /**
     * <p>The current state of the Availability Zone. Current options are
     * <code>Active</code> and <code>StandBy</code>.</p> <ul> <li> <p>
     * <code>Active</code> - Data nodes in the Availability Zone are in use.</p> </li>
     * <li> <p> <code>StandBy</code> - Data nodes in the Availability Zone are in a
     * standby state.</p> </li> <li> <p> <code>NotAvailable</code> - Unable to retrieve
     * information.</p> </li> </ul>
     */
    inline bool ZoneStatusHasBeenSet() const { return m_zoneStatusHasBeenSet; }

    /**
     * <p>The current state of the Availability Zone. Current options are
     * <code>Active</code> and <code>StandBy</code>.</p> <ul> <li> <p>
     * <code>Active</code> - Data nodes in the Availability Zone are in use.</p> </li>
     * <li> <p> <code>StandBy</code> - Data nodes in the Availability Zone are in a
     * standby state.</p> </li> <li> <p> <code>NotAvailable</code> - Unable to retrieve
     * information.</p> </li> </ul>
     */
    inline void SetZoneStatus(const ZoneStatus& value) { m_zoneStatusHasBeenSet = true; m_zoneStatus = value; }

    /**
     * <p>The current state of the Availability Zone. Current options are
     * <code>Active</code> and <code>StandBy</code>.</p> <ul> <li> <p>
     * <code>Active</code> - Data nodes in the Availability Zone are in use.</p> </li>
     * <li> <p> <code>StandBy</code> - Data nodes in the Availability Zone are in a
     * standby state.</p> </li> <li> <p> <code>NotAvailable</code> - Unable to retrieve
     * information.</p> </li> </ul>
     */
    inline void SetZoneStatus(ZoneStatus&& value) { m_zoneStatusHasBeenSet = true; m_zoneStatus = std::move(value); }

    /**
     * <p>The current state of the Availability Zone. Current options are
     * <code>Active</code> and <code>StandBy</code>.</p> <ul> <li> <p>
     * <code>Active</code> - Data nodes in the Availability Zone are in use.</p> </li>
     * <li> <p> <code>StandBy</code> - Data nodes in the Availability Zone are in a
     * standby state.</p> </li> <li> <p> <code>NotAvailable</code> - Unable to retrieve
     * information.</p> </li> </ul>
     */
    inline AvailabilityZoneInfo& WithZoneStatus(const ZoneStatus& value) { SetZoneStatus(value); return *this;}

    /**
     * <p>The current state of the Availability Zone. Current options are
     * <code>Active</code> and <code>StandBy</code>.</p> <ul> <li> <p>
     * <code>Active</code> - Data nodes in the Availability Zone are in use.</p> </li>
     * <li> <p> <code>StandBy</code> - Data nodes in the Availability Zone are in a
     * standby state.</p> </li> <li> <p> <code>NotAvailable</code> - Unable to retrieve
     * information.</p> </li> </ul>
     */
    inline AvailabilityZoneInfo& WithZoneStatus(ZoneStatus&& value) { SetZoneStatus(std::move(value)); return *this;}


    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline const Aws::String& GetConfiguredDataNodeCount() const{ return m_configuredDataNodeCount; }

    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline bool ConfiguredDataNodeCountHasBeenSet() const { return m_configuredDataNodeCountHasBeenSet; }

    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline void SetConfiguredDataNodeCount(const Aws::String& value) { m_configuredDataNodeCountHasBeenSet = true; m_configuredDataNodeCount = value; }

    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline void SetConfiguredDataNodeCount(Aws::String&& value) { m_configuredDataNodeCountHasBeenSet = true; m_configuredDataNodeCount = std::move(value); }

    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline void SetConfiguredDataNodeCount(const char* value) { m_configuredDataNodeCountHasBeenSet = true; m_configuredDataNodeCount.assign(value); }

    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithConfiguredDataNodeCount(const Aws::String& value) { SetConfiguredDataNodeCount(value); return *this;}

    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithConfiguredDataNodeCount(Aws::String&& value) { SetConfiguredDataNodeCount(std::move(value)); return *this;}

    /**
     * <p>The total number of data nodes configured in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithConfiguredDataNodeCount(const char* value) { SetConfiguredDataNodeCount(value); return *this;}


    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline const Aws::String& GetAvailableDataNodeCount() const{ return m_availableDataNodeCount; }

    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline bool AvailableDataNodeCountHasBeenSet() const { return m_availableDataNodeCountHasBeenSet; }

    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline void SetAvailableDataNodeCount(const Aws::String& value) { m_availableDataNodeCountHasBeenSet = true; m_availableDataNodeCount = value; }

    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline void SetAvailableDataNodeCount(Aws::String&& value) { m_availableDataNodeCountHasBeenSet = true; m_availableDataNodeCount = std::move(value); }

    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline void SetAvailableDataNodeCount(const char* value) { m_availableDataNodeCountHasBeenSet = true; m_availableDataNodeCount.assign(value); }

    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithAvailableDataNodeCount(const Aws::String& value) { SetAvailableDataNodeCount(value); return *this;}

    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithAvailableDataNodeCount(Aws::String&& value) { SetAvailableDataNodeCount(std::move(value)); return *this;}

    /**
     * <p>The number of data nodes active in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithAvailableDataNodeCount(const char* value) { SetAvailableDataNodeCount(value); return *this;}


    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline const Aws::String& GetTotalShards() const{ return m_totalShards; }

    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline bool TotalShardsHasBeenSet() const { return m_totalShardsHasBeenSet; }

    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline void SetTotalShards(const Aws::String& value) { m_totalShardsHasBeenSet = true; m_totalShards = value; }

    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline void SetTotalShards(Aws::String&& value) { m_totalShardsHasBeenSet = true; m_totalShards = std::move(value); }

    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline void SetTotalShards(const char* value) { m_totalShardsHasBeenSet = true; m_totalShards.assign(value); }

    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithTotalShards(const Aws::String& value) { SetTotalShards(value); return *this;}

    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithTotalShards(Aws::String&& value) { SetTotalShards(std::move(value)); return *this;}

    /**
     * <p>The total number of primary and replica shards in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithTotalShards(const char* value) { SetTotalShards(value); return *this;}


    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline const Aws::String& GetTotalUnAssignedShards() const{ return m_totalUnAssignedShards; }

    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline bool TotalUnAssignedShardsHasBeenSet() const { return m_totalUnAssignedShardsHasBeenSet; }

    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline void SetTotalUnAssignedShards(const Aws::String& value) { m_totalUnAssignedShardsHasBeenSet = true; m_totalUnAssignedShards = value; }

    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline void SetTotalUnAssignedShards(Aws::String&& value) { m_totalUnAssignedShardsHasBeenSet = true; m_totalUnAssignedShards = std::move(value); }

    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline void SetTotalUnAssignedShards(const char* value) { m_totalUnAssignedShardsHasBeenSet = true; m_totalUnAssignedShards.assign(value); }

    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithTotalUnAssignedShards(const Aws::String& value) { SetTotalUnAssignedShards(value); return *this;}

    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithTotalUnAssignedShards(Aws::String&& value) { SetTotalUnAssignedShards(std::move(value)); return *this;}

    /**
     * <p>The total number of primary and replica shards that aren't allocated to any
     * of the nodes in the Availability Zone.</p>
     */
    inline AvailabilityZoneInfo& WithTotalUnAssignedShards(const char* value) { SetTotalUnAssignedShards(value); return *this;}

  private:

    Aws::String m_availabilityZoneName;
    bool m_availabilityZoneNameHasBeenSet = false;

    ZoneStatus m_zoneStatus;
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
