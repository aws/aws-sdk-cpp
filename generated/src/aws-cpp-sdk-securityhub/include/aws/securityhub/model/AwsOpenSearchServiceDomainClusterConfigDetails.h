/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details about the configuration of an OpenSearch cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOpenSearchServiceDomainClusterConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsOpenSearchServiceDomainClusterConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainClusterConfigDetails();
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainClusterConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainClusterConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of data nodes to use in the OpenSearch domain.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of data nodes to use in the OpenSearch domain.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of data nodes to use in the OpenSearch domain.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of data nodes to use in the OpenSearch domain.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>Whether UltraWarm is enabled.</p>
     */
    inline bool GetWarmEnabled() const{ return m_warmEnabled; }

    /**
     * <p>Whether UltraWarm is enabled.</p>
     */
    inline bool WarmEnabledHasBeenSet() const { return m_warmEnabledHasBeenSet; }

    /**
     * <p>Whether UltraWarm is enabled.</p>
     */
    inline void SetWarmEnabled(bool value) { m_warmEnabledHasBeenSet = true; m_warmEnabled = value; }

    /**
     * <p>Whether UltraWarm is enabled.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmEnabled(bool value) { SetWarmEnabled(value); return *this;}


    /**
     * <p>The number of UltraWarm instances.</p>
     */
    inline int GetWarmCount() const{ return m_warmCount; }

    /**
     * <p>The number of UltraWarm instances.</p>
     */
    inline bool WarmCountHasBeenSet() const { return m_warmCountHasBeenSet; }

    /**
     * <p>The number of UltraWarm instances.</p>
     */
    inline void SetWarmCount(int value) { m_warmCountHasBeenSet = true; m_warmCount = value; }

    /**
     * <p>The number of UltraWarm instances.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmCount(int value) { SetWarmCount(value); return *this;}


    /**
     * <p>Whether to use a dedicated master node for the OpenSearch domain. A dedicated
     * master node performs cluster management tasks, but does not hold data or respond
     * to data upload requests.</p>
     */
    inline bool GetDedicatedMasterEnabled() const{ return m_dedicatedMasterEnabled; }

    /**
     * <p>Whether to use a dedicated master node for the OpenSearch domain. A dedicated
     * master node performs cluster management tasks, but does not hold data or respond
     * to data upload requests.</p>
     */
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }

    /**
     * <p>Whether to use a dedicated master node for the OpenSearch domain. A dedicated
     * master node performs cluster management tasks, but does not hold data or respond
     * to data upload requests.</p>
     */
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }

    /**
     * <p>Whether to use a dedicated master node for the OpenSearch domain. A dedicated
     * master node performs cluster management tasks, but does not hold data or respond
     * to data upload requests.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}


    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline const AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& GetZoneAwarenessConfig() const{ return m_zoneAwarenessConfig; }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline void SetZoneAwarenessConfig(const AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = value; }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline void SetZoneAwarenessConfig(AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::move(value); }

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithZoneAwarenessConfig(const AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& value) { SetZoneAwarenessConfig(value); return *this;}

    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithZoneAwarenessConfig(AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails&& value) { SetZoneAwarenessConfig(std::move(value)); return *this;}


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
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}


    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline const Aws::String& GetWarmType() const{ return m_warmType; }

    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline bool WarmTypeHasBeenSet() const { return m_warmTypeHasBeenSet; }

    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline void SetWarmType(const Aws::String& value) { m_warmTypeHasBeenSet = true; m_warmType = value; }

    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline void SetWarmType(Aws::String&& value) { m_warmTypeHasBeenSet = true; m_warmType = std::move(value); }

    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline void SetWarmType(const char* value) { m_warmTypeHasBeenSet = true; m_warmType.assign(value); }

    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmType(const Aws::String& value) { SetWarmType(value); return *this;}

    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmType(Aws::String&& value) { SetWarmType(std::move(value)); return *this;}

    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmType(const char* value) { SetWarmType(value); return *this;}


    /**
     * <p>Whether to enable zone awareness for the OpenSearch domain. When zone
     * awareness is enabled, OpenSearch Service allocates the cluster's nodes and
     * replica index shards across Availability Zones (AZs) in the same Region. This
     * prevents data loss and minimizes downtime if a node or data center fails.</p>
     */
    inline bool GetZoneAwarenessEnabled() const{ return m_zoneAwarenessEnabled; }

    /**
     * <p>Whether to enable zone awareness for the OpenSearch domain. When zone
     * awareness is enabled, OpenSearch Service allocates the cluster's nodes and
     * replica index shards across Availability Zones (AZs) in the same Region. This
     * prevents data loss and minimizes downtime if a node or data center fails.</p>
     */
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }

    /**
     * <p>Whether to enable zone awareness for the OpenSearch domain. When zone
     * awareness is enabled, OpenSearch Service allocates the cluster's nodes and
     * replica index shards across Availability Zones (AZs) in the same Region. This
     * prevents data loss and minimizes downtime if a node or data center fails.</p>
     */
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }

    /**
     * <p>Whether to enable zone awareness for the OpenSearch domain. When zone
     * awareness is enabled, OpenSearch Service allocates the cluster's nodes and
     * replica index shards across Availability Zones (AZs) in the same Region. This
     * prevents data loss and minimizes downtime if a node or data center fails.</p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}


    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline const Aws::String& GetDedicatedMasterType() const{ return m_dedicatedMasterType; }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline void SetDedicatedMasterType(const Aws::String& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = value; }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline void SetDedicatedMasterType(Aws::String&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::move(value); }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline void SetDedicatedMasterType(const char* value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType.assign(value); }

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterType(const Aws::String& value) { SetDedicatedMasterType(value); return *this;}

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterType(Aws::String&& value) { SetDedicatedMasterType(std::move(value)); return *this;}

    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterType(const char* value) { SetDedicatedMasterType(value); return *this;}

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    bool m_warmEnabled;
    bool m_warmEnabledHasBeenSet = false;

    int m_warmCount;
    bool m_warmCountHasBeenSet = false;

    bool m_dedicatedMasterEnabled;
    bool m_dedicatedMasterEnabledHasBeenSet = false;

    AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails m_zoneAwarenessConfig;
    bool m_zoneAwarenessConfigHasBeenSet = false;

    int m_dedicatedMasterCount;
    bool m_dedicatedMasterCountHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_warmType;
    bool m_warmTypeHasBeenSet = false;

    bool m_zoneAwarenessEnabled;
    bool m_zoneAwarenessEnabledHasBeenSet = false;

    Aws::String m_dedicatedMasterType;
    bool m_dedicatedMasterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
