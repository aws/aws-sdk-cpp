/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/PerformanceTarget.h>
#include <aws/redshift-serverless/model/ConfigParameter.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateWorkgroupRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateWorkgroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkgroup"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The new base data warehouse capacity in Redshift Processing Units (RPUs).</p>
     */
    inline int GetBaseCapacity() const { return m_baseCapacity; }
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }
    inline UpdateWorkgroupRequest& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of parameters to set for advanced control over a database. The
     * options are <code>auto_mv</code>, <code>datestyle</code>,
     * <code>enable_case_sensitive_identifier</code>,
     * <code>enable_user_activity_logging</code>, <code>query_group</code>,
     * <code>search_path</code>, <code>require_ssl</code>, <code>use_fips_ssl</code>,
     * and query monitoring metrics that let you define performance boundaries. For
     * more information about query monitoring rules and available metrics, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/dg/cm-c-wlm-query-monitoring-rules.html#cm-c-wlm-query-monitoring-metrics-serverless">
     * Query monitoring metrics for Amazon Redshift Serverless</a>.</p>
     */
    inline const Aws::Vector<ConfigParameter>& GetConfigParameters() const { return m_configParameters; }
    inline bool ConfigParametersHasBeenSet() const { return m_configParametersHasBeenSet; }
    template<typename ConfigParametersT = Aws::Vector<ConfigParameter>>
    void SetConfigParameters(ConfigParametersT&& value) { m_configParametersHasBeenSet = true; m_configParameters = std::forward<ConfigParametersT>(value); }
    template<typename ConfigParametersT = Aws::Vector<ConfigParameter>>
    UpdateWorkgroupRequest& WithConfigParameters(ConfigParametersT&& value) { SetConfigParameters(std::forward<ConfigParametersT>(value)); return *this;}
    template<typename ConfigParametersT = ConfigParameter>
    UpdateWorkgroupRequest& AddConfigParameters(ConfigParametersT&& value) { m_configParametersHasBeenSet = true; m_configParameters.emplace_back(std::forward<ConfigParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that specifies whether to turn on enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool GetEnhancedVpcRouting() const { return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline UpdateWorkgroupRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that the workgroup supports. Possible values are
     * <code>ipv4</code> and <code>dualstack</code>.</p>
     */
    inline const Aws::String& GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    template<typename IpAddressTypeT = Aws::String>
    void SetIpAddressType(IpAddressTypeT&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::forward<IpAddressTypeT>(value); }
    template<typename IpAddressTypeT = Aws::String>
    UpdateWorkgroupRequest& WithIpAddressType(IpAddressTypeT&& value) { SetIpAddressType(std::forward<IpAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum data-warehouse capacity Amazon Redshift Serverless uses to serve
     * queries. The max capacity is specified in RPUs.</p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline UpdateWorkgroupRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline UpdateWorkgroupRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the price performance target settings for the
     * workgroup.</p>
     */
    inline const PerformanceTarget& GetPricePerformanceTarget() const { return m_pricePerformanceTarget; }
    inline bool PricePerformanceTargetHasBeenSet() const { return m_pricePerformanceTargetHasBeenSet; }
    template<typename PricePerformanceTargetT = PerformanceTarget>
    void SetPricePerformanceTarget(PricePerformanceTargetT&& value) { m_pricePerformanceTargetHasBeenSet = true; m_pricePerformanceTarget = std::forward<PricePerformanceTargetT>(value); }
    template<typename PricePerformanceTargetT = PerformanceTarget>
    UpdateWorkgroupRequest& WithPricePerformanceTarget(PricePerformanceTargetT&& value) { SetPricePerformanceTarget(std::forward<PricePerformanceTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline UpdateWorkgroupRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    UpdateWorkgroupRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    UpdateWorkgroupRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    UpdateWorkgroupRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    UpdateWorkgroupRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter for the name of the track for the workgroup. If you
     * don't provide a track name, the workgroup is assigned to the
     * <code>current</code> track.</p>
     */
    inline const Aws::String& GetTrackName() const { return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    template<typename TrackNameT = Aws::String>
    void SetTrackName(TrackNameT&& value) { m_trackNameHasBeenSet = true; m_trackName = std::forward<TrackNameT>(value); }
    template<typename TrackNameT = Aws::String>
    UpdateWorkgroupRequest& WithTrackName(TrackNameT&& value) { SetTrackName(std::forward<TrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup to update. You can't update the name of a workgroup
     * once it is created.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    UpdateWorkgroupRequest& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}
  private:

    int m_baseCapacity{0};
    bool m_baseCapacityHasBeenSet = false;

    Aws::Vector<ConfigParameter> m_configParameters;
    bool m_configParametersHasBeenSet = false;

    bool m_enhancedVpcRouting{false};
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    PerformanceTarget m_pricePerformanceTarget;
    bool m_pricePerformanceTargetHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_trackName;
    bool m_trackNameHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
