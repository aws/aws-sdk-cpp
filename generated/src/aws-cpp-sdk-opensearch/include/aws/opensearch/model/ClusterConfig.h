/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <aws/opensearch/model/ZoneAwarenessConfig.h>
#include <aws/opensearch/model/OpenSearchWarmPartitionInstanceType.h>
#include <aws/opensearch/model/ColdStorageOptions.h>
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
   * <p>Container for the cluster configuration of an OpenSearch Service domain. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html">Creating
   * and managing Amazon OpenSearch Service domains</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ClusterConfig">AWS
   * API Reference</a></p>
   */
  class ClusterConfig
  {
  public:
    AWS_OPENSEARCHSERVICE_API ClusterConfig();
    AWS_OPENSEARCHSERVICE_API ClusterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ClusterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Instance type of data nodes in the cluster.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>Instance type of data nodes in the cluster.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>Instance type of data nodes in the cluster.</p>
     */
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>Instance type of data nodes in the cluster.</p>
     */
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>Instance type of data nodes in the cluster.</p>
     */
    inline ClusterConfig& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>Instance type of data nodes in the cluster.</p>
     */
    inline ClusterConfig& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline ClusterConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>Indicates whether dedicated master nodes are enabled for the
     * cluster.<code>True</code> if the cluster will use a dedicated master
     * node.<code>False</code> if the cluster will not.</p>
     */
    inline bool GetDedicatedMasterEnabled() const{ return m_dedicatedMasterEnabled; }

    /**
     * <p>Indicates whether dedicated master nodes are enabled for the
     * cluster.<code>True</code> if the cluster will use a dedicated master
     * node.<code>False</code> if the cluster will not.</p>
     */
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }

    /**
     * <p>Indicates whether dedicated master nodes are enabled for the
     * cluster.<code>True</code> if the cluster will use a dedicated master
     * node.<code>False</code> if the cluster will not.</p>
     */
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }

    /**
     * <p>Indicates whether dedicated master nodes are enabled for the
     * cluster.<code>True</code> if the cluster will use a dedicated master
     * node.<code>False</code> if the cluster will not.</p>
     */
    inline ClusterConfig& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}


    /**
     * <p>Indicates whether multiple Availability Zones are enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html">Configuring
     * a multi-AZ domain in Amazon OpenSearch Service</a>.</p>
     */
    inline bool GetZoneAwarenessEnabled() const{ return m_zoneAwarenessEnabled; }

    /**
     * <p>Indicates whether multiple Availability Zones are enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html">Configuring
     * a multi-AZ domain in Amazon OpenSearch Service</a>.</p>
     */
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }

    /**
     * <p>Indicates whether multiple Availability Zones are enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html">Configuring
     * a multi-AZ domain in Amazon OpenSearch Service</a>.</p>
     */
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }

    /**
     * <p>Indicates whether multiple Availability Zones are enabled. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html">Configuring
     * a multi-AZ domain in Amazon OpenSearch Service</a>.</p>
     */
    inline ClusterConfig& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}


    /**
     * <p>Container for zone awareness configuration options. Only required if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline const ZoneAwarenessConfig& GetZoneAwarenessConfig() const{ return m_zoneAwarenessConfig; }

    /**
     * <p>Container for zone awareness configuration options. Only required if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }

    /**
     * <p>Container for zone awareness configuration options. Only required if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline void SetZoneAwarenessConfig(const ZoneAwarenessConfig& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = value; }

    /**
     * <p>Container for zone awareness configuration options. Only required if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline void SetZoneAwarenessConfig(ZoneAwarenessConfig&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::move(value); }

    /**
     * <p>Container for zone awareness configuration options. Only required if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline ClusterConfig& WithZoneAwarenessConfig(const ZoneAwarenessConfig& value) { SetZoneAwarenessConfig(value); return *this;}

    /**
     * <p>Container for zone awareness configuration options. Only required if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline ClusterConfig& WithZoneAwarenessConfig(ZoneAwarenessConfig&& value) { SetZoneAwarenessConfig(std::move(value)); return *this;}


    /**
     * <p>OpenSearch Service instance type of the dedicated master nodes in the
     * cluster.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetDedicatedMasterType() const{ return m_dedicatedMasterType; }

    /**
     * <p>OpenSearch Service instance type of the dedicated master nodes in the
     * cluster.</p>
     */
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }

    /**
     * <p>OpenSearch Service instance type of the dedicated master nodes in the
     * cluster.</p>
     */
    inline void SetDedicatedMasterType(const OpenSearchPartitionInstanceType& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = value; }

    /**
     * <p>OpenSearch Service instance type of the dedicated master nodes in the
     * cluster.</p>
     */
    inline void SetDedicatedMasterType(OpenSearchPartitionInstanceType&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::move(value); }

    /**
     * <p>OpenSearch Service instance type of the dedicated master nodes in the
     * cluster.</p>
     */
    inline ClusterConfig& WithDedicatedMasterType(const OpenSearchPartitionInstanceType& value) { SetDedicatedMasterType(value); return *this;}

    /**
     * <p>OpenSearch Service instance type of the dedicated master nodes in the
     * cluster.</p>
     */
    inline ClusterConfig& WithDedicatedMasterType(OpenSearchPartitionInstanceType&& value) { SetDedicatedMasterType(std::move(value)); return *this;}


    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline int GetDedicatedMasterCount() const{ return m_dedicatedMasterCount; }

    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline bool DedicatedMasterCountHasBeenSet() const { return m_dedicatedMasterCountHasBeenSet; }

    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline void SetDedicatedMasterCount(int value) { m_dedicatedMasterCountHasBeenSet = true; m_dedicatedMasterCount = value; }

    /**
     * <p>Number of dedicated master nodes in the cluster. This number must be greater
     * than 1, otherwise you receive a validation exception.</p>
     */
    inline ClusterConfig& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}


    /**
     * <p>Whether to enable warm storage for the cluster.</p>
     */
    inline bool GetWarmEnabled() const{ return m_warmEnabled; }

    /**
     * <p>Whether to enable warm storage for the cluster.</p>
     */
    inline bool WarmEnabledHasBeenSet() const { return m_warmEnabledHasBeenSet; }

    /**
     * <p>Whether to enable warm storage for the cluster.</p>
     */
    inline void SetWarmEnabled(bool value) { m_warmEnabledHasBeenSet = true; m_warmEnabled = value; }

    /**
     * <p>Whether to enable warm storage for the cluster.</p>
     */
    inline ClusterConfig& WithWarmEnabled(bool value) { SetWarmEnabled(value); return *this;}


    /**
     * <p>The instance type for the cluster's warm nodes.</p>
     */
    inline const OpenSearchWarmPartitionInstanceType& GetWarmType() const{ return m_warmType; }

    /**
     * <p>The instance type for the cluster's warm nodes.</p>
     */
    inline bool WarmTypeHasBeenSet() const { return m_warmTypeHasBeenSet; }

    /**
     * <p>The instance type for the cluster's warm nodes.</p>
     */
    inline void SetWarmType(const OpenSearchWarmPartitionInstanceType& value) { m_warmTypeHasBeenSet = true; m_warmType = value; }

    /**
     * <p>The instance type for the cluster's warm nodes.</p>
     */
    inline void SetWarmType(OpenSearchWarmPartitionInstanceType&& value) { m_warmTypeHasBeenSet = true; m_warmType = std::move(value); }

    /**
     * <p>The instance type for the cluster's warm nodes.</p>
     */
    inline ClusterConfig& WithWarmType(const OpenSearchWarmPartitionInstanceType& value) { SetWarmType(value); return *this;}

    /**
     * <p>The instance type for the cluster's warm nodes.</p>
     */
    inline ClusterConfig& WithWarmType(OpenSearchWarmPartitionInstanceType&& value) { SetWarmType(std::move(value)); return *this;}


    /**
     * <p>The number of warm nodes in the cluster.</p>
     */
    inline int GetWarmCount() const{ return m_warmCount; }

    /**
     * <p>The number of warm nodes in the cluster.</p>
     */
    inline bool WarmCountHasBeenSet() const { return m_warmCountHasBeenSet; }

    /**
     * <p>The number of warm nodes in the cluster.</p>
     */
    inline void SetWarmCount(int value) { m_warmCountHasBeenSet = true; m_warmCount = value; }

    /**
     * <p>The number of warm nodes in the cluster.</p>
     */
    inline ClusterConfig& WithWarmCount(int value) { SetWarmCount(value); return *this;}


    /**
     * <p>Container for cold storage configuration options.</p>
     */
    inline const ColdStorageOptions& GetColdStorageOptions() const{ return m_coldStorageOptions; }

    /**
     * <p>Container for cold storage configuration options.</p>
     */
    inline bool ColdStorageOptionsHasBeenSet() const { return m_coldStorageOptionsHasBeenSet; }

    /**
     * <p>Container for cold storage configuration options.</p>
     */
    inline void SetColdStorageOptions(const ColdStorageOptions& value) { m_coldStorageOptionsHasBeenSet = true; m_coldStorageOptions = value; }

    /**
     * <p>Container for cold storage configuration options.</p>
     */
    inline void SetColdStorageOptions(ColdStorageOptions&& value) { m_coldStorageOptionsHasBeenSet = true; m_coldStorageOptions = std::move(value); }

    /**
     * <p>Container for cold storage configuration options.</p>
     */
    inline ClusterConfig& WithColdStorageOptions(const ColdStorageOptions& value) { SetColdStorageOptions(value); return *this;}

    /**
     * <p>Container for cold storage configuration options.</p>
     */
    inline ClusterConfig& WithColdStorageOptions(ColdStorageOptions&& value) { SetColdStorageOptions(std::move(value)); return *this;}

  private:

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    bool m_dedicatedMasterEnabled;
    bool m_dedicatedMasterEnabledHasBeenSet = false;

    bool m_zoneAwarenessEnabled;
    bool m_zoneAwarenessEnabledHasBeenSet = false;

    ZoneAwarenessConfig m_zoneAwarenessConfig;
    bool m_zoneAwarenessConfigHasBeenSet = false;

    OpenSearchPartitionInstanceType m_dedicatedMasterType;
    bool m_dedicatedMasterTypeHasBeenSet = false;

    int m_dedicatedMasterCount;
    bool m_dedicatedMasterCountHasBeenSet = false;

    bool m_warmEnabled;
    bool m_warmEnabledHasBeenSet = false;

    OpenSearchWarmPartitionInstanceType m_warmType;
    bool m_warmTypeHasBeenSet = false;

    int m_warmCount;
    bool m_warmCountHasBeenSet = false;

    ColdStorageOptions m_coldStorageOptions;
    bool m_coldStorageOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
