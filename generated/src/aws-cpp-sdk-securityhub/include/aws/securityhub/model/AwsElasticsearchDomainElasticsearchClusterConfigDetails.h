/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>details about the configuration of an OpenSearch cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainElasticsearchClusterConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainElasticsearchClusterConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainElasticsearchClusterConfigDetails() = default;
    AWS_SECURITYHUB_API AwsElasticsearchDomainElasticsearchClusterConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainElasticsearchClusterConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances to use for the master node. If this attribute is
     * specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p>
     */
    inline int GetDedicatedMasterCount() const { return m_dedicatedMasterCount; }
    inline bool DedicatedMasterCountHasBeenSet() const { return m_dedicatedMasterCountHasBeenSet; }
    inline void SetDedicatedMasterCount(int value) { m_dedicatedMasterCountHasBeenSet = true; m_dedicatedMasterCount = value; }
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use a dedicated master node for the Elasticsearch domain. A
     * dedicated master node performs cluster management tasks, but doesn't hold data
     * or respond to data upload requests.</p>
     */
    inline bool GetDedicatedMasterEnabled() const { return m_dedicatedMasterEnabled; }
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDedicatedMasterType() const { return m_dedicatedMasterType; }
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }
    template<typename DedicatedMasterTypeT = Aws::String>
    void SetDedicatedMasterType(DedicatedMasterTypeT&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::forward<DedicatedMasterTypeT>(value); }
    template<typename DedicatedMasterTypeT = Aws::String>
    AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterType(DedicatedMasterTypeT&& value) { SetDedicatedMasterType(std::forward<DedicatedMasterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data nodes to use in the Elasticsearch domain.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline const AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails& GetZoneAwarenessConfig() const { return m_zoneAwarenessConfig; }
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }
    template<typename ZoneAwarenessConfigT = AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails>
    void SetZoneAwarenessConfig(ZoneAwarenessConfigT&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::forward<ZoneAwarenessConfigT>(value); }
    template<typename ZoneAwarenessConfigT = AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails>
    AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithZoneAwarenessConfig(ZoneAwarenessConfigT&& value) { SetZoneAwarenessConfig(std::forward<ZoneAwarenessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable zone awareness for the Elasticsearch domain. When zone
     * awareness is enabled, OpenSearch allocates the cluster's nodes and replica index
     * shards across Availability Zones in the same Region. This prevents data loss and
     * minimizes downtime if a node or data center fails.</p>
     */
    inline bool GetZoneAwarenessEnabled() const { return m_zoneAwarenessEnabled; }
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}
    ///@}
  private:

    int m_dedicatedMasterCount{0};
    bool m_dedicatedMasterCountHasBeenSet = false;

    bool m_dedicatedMasterEnabled{false};
    bool m_dedicatedMasterEnabledHasBeenSet = false;

    Aws::String m_dedicatedMasterType;
    bool m_dedicatedMasterTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails m_zoneAwarenessConfig;
    bool m_zoneAwarenessConfigHasBeenSet = false;

    bool m_zoneAwarenessEnabled{false};
    bool m_zoneAwarenessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
