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
    AWS_SECURITYHUB_API AwsElasticsearchDomainElasticsearchClusterConfigDetails();
    AWS_SECURITYHUB_API AwsElasticsearchDomainElasticsearchClusterConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainElasticsearchClusterConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of instances to use for the master node. If this attribute is
     * specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p>
     */
    inline int GetDedicatedMasterCount() const{ return m_dedicatedMasterCount; }

    /**
     * <p>The number of instances to use for the master node. If this attribute is
     * specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p>
     */
    inline bool DedicatedMasterCountHasBeenSet() const { return m_dedicatedMasterCountHasBeenSet; }

    /**
     * <p>The number of instances to use for the master node. If this attribute is
     * specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p>
     */
    inline void SetDedicatedMasterCount(int value) { m_dedicatedMasterCountHasBeenSet = true; m_dedicatedMasterCount = value; }

    /**
     * <p>The number of instances to use for the master node. If this attribute is
     * specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}


    /**
     * <p>Whether to use a dedicated master node for the Elasticsearch domain. A
     * dedicated master node performs cluster management tasks, but doesn't hold data
     * or respond to data upload requests.</p>
     */
    inline bool GetDedicatedMasterEnabled() const{ return m_dedicatedMasterEnabled; }

    /**
     * <p>Whether to use a dedicated master node for the Elasticsearch domain. A
     * dedicated master node performs cluster management tasks, but doesn't hold data
     * or respond to data upload requests.</p>
     */
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }

    /**
     * <p>Whether to use a dedicated master node for the Elasticsearch domain. A
     * dedicated master node performs cluster management tasks, but doesn't hold data
     * or respond to data upload requests.</p>
     */
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }

    /**
     * <p>Whether to use a dedicated master node for the Elasticsearch domain. A
     * dedicated master node performs cluster management tasks, but doesn't hold data
     * or respond to data upload requests.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}


    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDedicatedMasterType() const{ return m_dedicatedMasterType; }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetDedicatedMasterType(const Aws::String& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = value; }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetDedicatedMasterType(Aws::String&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::move(value); }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetDedicatedMasterType(const char* value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType.assign(value); }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterType(const Aws::String& value) { SetDedicatedMasterType(value); return *this;}

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterType(Aws::String&& value) { SetDedicatedMasterType(std::move(value)); return *this;}

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node. A sample value is <code>m3.medium.elasticsearch</code>. If this attribute
     * is specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithDedicatedMasterType(const char* value) { SetDedicatedMasterType(value); return *this;}


    /**
     * <p>The number of data nodes to use in the Elasticsearch domain.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of data nodes to use in the Elasticsearch domain.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of data nodes to use in the Elasticsearch domain.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of data nodes to use in the Elasticsearch domain.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type for your data nodes. For example,
     * <code>m3.medium.elasticsearch</code>.</p> <p>For a list of valid values, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline const AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails& GetZoneAwarenessConfig() const{ return m_zoneAwarenessConfig; }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline void SetZoneAwarenessConfig(const AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = value; }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline void SetZoneAwarenessConfig(AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::move(value); }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithZoneAwarenessConfig(const AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails& value) { SetZoneAwarenessConfig(value); return *this;}

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithZoneAwarenessConfig(AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails&& value) { SetZoneAwarenessConfig(std::move(value)); return *this;}


    /**
     * <p>Whether to enable zone awareness for the Elasticsearch domain. When zone
     * awareness is enabled, OpenSearch allocates the cluster's nodes and replica index
     * shards across Availability Zones in the same Region. This prevents data loss and
     * minimizes downtime if a node or data center fails.</p>
     */
    inline bool GetZoneAwarenessEnabled() const{ return m_zoneAwarenessEnabled; }

    /**
     * <p>Whether to enable zone awareness for the Elasticsearch domain. When zone
     * awareness is enabled, OpenSearch allocates the cluster's nodes and replica index
     * shards across Availability Zones in the same Region. This prevents data loss and
     * minimizes downtime if a node or data center fails.</p>
     */
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }

    /**
     * <p>Whether to enable zone awareness for the Elasticsearch domain. When zone
     * awareness is enabled, OpenSearch allocates the cluster's nodes and replica index
     * shards across Availability Zones in the same Region. This prevents data loss and
     * minimizes downtime if a node or data center fails.</p>
     */
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }

    /**
     * <p>Whether to enable zone awareness for the Elasticsearch domain. When zone
     * awareness is enabled, OpenSearch allocates the cluster's nodes and replica index
     * shards across Availability Zones in the same Region. This prevents data loss and
     * minimizes downtime if a node or data center fails.</p>
     */
    inline AwsElasticsearchDomainElasticsearchClusterConfigDetails& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}

  private:

    int m_dedicatedMasterCount;
    bool m_dedicatedMasterCountHasBeenSet = false;

    bool m_dedicatedMasterEnabled;
    bool m_dedicatedMasterEnabledHasBeenSet = false;

    Aws::String m_dedicatedMasterType;
    bool m_dedicatedMasterTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    AwsElasticsearchDomainElasticsearchClusterConfigZoneAwarenessConfigDetails m_zoneAwarenessConfig;
    bool m_zoneAwarenessConfigHasBeenSet = false;

    bool m_zoneAwarenessEnabled;
    bool m_zoneAwarenessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
