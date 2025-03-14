﻿/**
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
    AWS_REDSHIFTSERVERLESS_API UpdateWorkgroupRequest();

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
    inline int GetBaseCapacity() const{ return m_baseCapacity; }
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
    inline const Aws::Vector<ConfigParameter>& GetConfigParameters() const{ return m_configParameters; }
    inline bool ConfigParametersHasBeenSet() const { return m_configParametersHasBeenSet; }
    inline void SetConfigParameters(const Aws::Vector<ConfigParameter>& value) { m_configParametersHasBeenSet = true; m_configParameters = value; }
    inline void SetConfigParameters(Aws::Vector<ConfigParameter>&& value) { m_configParametersHasBeenSet = true; m_configParameters = std::move(value); }
    inline UpdateWorkgroupRequest& WithConfigParameters(const Aws::Vector<ConfigParameter>& value) { SetConfigParameters(value); return *this;}
    inline UpdateWorkgroupRequest& WithConfigParameters(Aws::Vector<ConfigParameter>&& value) { SetConfigParameters(std::move(value)); return *this;}
    inline UpdateWorkgroupRequest& AddConfigParameters(const ConfigParameter& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(value); return *this; }
    inline UpdateWorkgroupRequest& AddConfigParameters(ConfigParameter&& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that specifies whether to turn on enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline UpdateWorkgroupRequest& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that the workgroup supports. Possible values are
     * <code>ipv4</code> and <code>dualstack</code>.</p>
     */
    inline const Aws::String& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const Aws::String& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(Aws::String&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline void SetIpAddressType(const char* value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType.assign(value); }
    inline UpdateWorkgroupRequest& WithIpAddressType(const Aws::String& value) { SetIpAddressType(value); return *this;}
    inline UpdateWorkgroupRequest& WithIpAddressType(Aws::String&& value) { SetIpAddressType(std::move(value)); return *this;}
    inline UpdateWorkgroupRequest& WithIpAddressType(const char* value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum data-warehouse capacity Amazon Redshift Serverless uses to serve
     * queries. The max capacity is specified in RPUs.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline UpdateWorkgroupRequest& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline UpdateWorkgroupRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the price performance target settings for the
     * workgroup.</p>
     */
    inline const PerformanceTarget& GetPricePerformanceTarget() const{ return m_pricePerformanceTarget; }
    inline bool PricePerformanceTargetHasBeenSet() const { return m_pricePerformanceTargetHasBeenSet; }
    inline void SetPricePerformanceTarget(const PerformanceTarget& value) { m_pricePerformanceTargetHasBeenSet = true; m_pricePerformanceTarget = value; }
    inline void SetPricePerformanceTarget(PerformanceTarget&& value) { m_pricePerformanceTargetHasBeenSet = true; m_pricePerformanceTarget = std::move(value); }
    inline UpdateWorkgroupRequest& WithPricePerformanceTarget(const PerformanceTarget& value) { SetPricePerformanceTarget(value); return *this;}
    inline UpdateWorkgroupRequest& WithPricePerformanceTarget(PerformanceTarget&& value) { SetPricePerformanceTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline UpdateWorkgroupRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline UpdateWorkgroupRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline UpdateWorkgroupRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline UpdateWorkgroupRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline UpdateWorkgroupRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline UpdateWorkgroupRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of VPC subnet IDs to associate with the workgroup.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline UpdateWorkgroupRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline UpdateWorkgroupRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline UpdateWorkgroupRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline UpdateWorkgroupRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline UpdateWorkgroupRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter for the name of the track for the workgroup. If you
     * don't provide a track name, the workgroup is assigned to the
     * <code>current</code> track.</p>
     */
    inline const Aws::String& GetTrackName() const{ return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    inline void SetTrackName(const Aws::String& value) { m_trackNameHasBeenSet = true; m_trackName = value; }
    inline void SetTrackName(Aws::String&& value) { m_trackNameHasBeenSet = true; m_trackName = std::move(value); }
    inline void SetTrackName(const char* value) { m_trackNameHasBeenSet = true; m_trackName.assign(value); }
    inline UpdateWorkgroupRequest& WithTrackName(const Aws::String& value) { SetTrackName(value); return *this;}
    inline UpdateWorkgroupRequest& WithTrackName(Aws::String&& value) { SetTrackName(std::move(value)); return *this;}
    inline UpdateWorkgroupRequest& WithTrackName(const char* value) { SetTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup to update. You can't update the name of a workgroup
     * once it is created.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }
    inline UpdateWorkgroupRequest& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline UpdateWorkgroupRequest& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline UpdateWorkgroupRequest& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}
  private:

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    Aws::Vector<ConfigParameter> m_configParameters;
    bool m_configParametersHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    PerformanceTarget m_pricePerformanceTarget;
    bool m_pricePerformanceTargetHasBeenSet = false;

    bool m_publiclyAccessible;
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
