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


    ///@{
    /**
     * <p>The number of data nodes to use in the OpenSearch domain.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether UltraWarm is enabled.</p>
     */
    inline bool GetWarmEnabled() const{ return m_warmEnabled; }
    inline bool WarmEnabledHasBeenSet() const { return m_warmEnabledHasBeenSet; }
    inline void SetWarmEnabled(bool value) { m_warmEnabledHasBeenSet = true; m_warmEnabled = value; }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmEnabled(bool value) { SetWarmEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of UltraWarm instances.</p>
     */
    inline int GetWarmCount() const{ return m_warmCount; }
    inline bool WarmCountHasBeenSet() const { return m_warmCountHasBeenSet; }
    inline void SetWarmCount(int value) { m_warmCountHasBeenSet = true; m_warmCount = value; }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmCount(int value) { SetWarmCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to use a dedicated master node for the OpenSearch domain. A dedicated
     * master node performs cluster management tasks, but does not hold data or respond
     * to data upload requests.</p>
     */
    inline bool GetDedicatedMasterEnabled() const{ return m_dedicatedMasterEnabled; }
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for zone awareness. Provided if
     * <code>ZoneAwarenessEnabled</code> is <code>true</code>.</p>
     */
    inline const AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& GetZoneAwarenessConfig() const{ return m_zoneAwarenessConfig; }
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }
    inline void SetZoneAwarenessConfig(const AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = value; }
    inline void SetZoneAwarenessConfig(AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::move(value); }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithZoneAwarenessConfig(const AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails& value) { SetZoneAwarenessConfig(value); return *this;}
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithZoneAwarenessConfig(AwsOpenSearchServiceDomainClusterConfigZoneAwarenessConfigDetails&& value) { SetZoneAwarenessConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances to use for the master node. If this attribute is
     * specified, then <code>DedicatedMasterEnabled</code> must be
     * <code>true</code>.</p>
     */
    inline int GetDedicatedMasterCount() const{ return m_dedicatedMasterCount; }
    inline bool DedicatedMasterCountHasBeenSet() const { return m_dedicatedMasterCountHasBeenSet; }
    inline void SetDedicatedMasterCount(int value) { m_dedicatedMasterCountHasBeenSet = true; m_dedicatedMasterCount = value; }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for your data nodes.</p> <p>For a list of valid values, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/supported-instance-types.html">Supported
     * instance types in Amazon OpenSearch Service</a> in the <i>Amazon OpenSearch
     * Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of UltraWarm instance.</p>
     */
    inline const Aws::String& GetWarmType() const{ return m_warmType; }
    inline bool WarmTypeHasBeenSet() const { return m_warmTypeHasBeenSet; }
    inline void SetWarmType(const Aws::String& value) { m_warmTypeHasBeenSet = true; m_warmType = value; }
    inline void SetWarmType(Aws::String&& value) { m_warmTypeHasBeenSet = true; m_warmType = std::move(value); }
    inline void SetWarmType(const char* value) { m_warmTypeHasBeenSet = true; m_warmType.assign(value); }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmType(const Aws::String& value) { SetWarmType(value); return *this;}
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmType(Aws::String&& value) { SetWarmType(std::move(value)); return *this;}
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithWarmType(const char* value) { SetWarmType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable zone awareness for the OpenSearch domain. When zone
     * awareness is enabled, OpenSearch Service allocates the cluster's nodes and
     * replica index shards across Availability Zones (AZs) in the same Region. This
     * prevents data loss and minimizes downtime if a node or data center fails.</p>
     */
    inline bool GetZoneAwarenessEnabled() const{ return m_zoneAwarenessEnabled; }
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hardware configuration of the computer that hosts the dedicated master
     * node.</p> <p>If this attribute is specified, then
     * <code>DedicatedMasterEnabled</code> must be <code>true</code>. </p>
     */
    inline const Aws::String& GetDedicatedMasterType() const{ return m_dedicatedMasterType; }
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }
    inline void SetDedicatedMasterType(const Aws::String& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = value; }
    inline void SetDedicatedMasterType(Aws::String&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::move(value); }
    inline void SetDedicatedMasterType(const char* value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType.assign(value); }
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterType(const Aws::String& value) { SetDedicatedMasterType(value); return *this;}
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterType(Aws::String&& value) { SetDedicatedMasterType(std::move(value)); return *this;}
    inline AwsOpenSearchServiceDomainClusterConfigDetails& WithDedicatedMasterType(const char* value) { SetDedicatedMasterType(value); return *this;}
    ///@}
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
