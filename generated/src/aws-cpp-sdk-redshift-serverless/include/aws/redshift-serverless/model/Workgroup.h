/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/Endpoint.h>
#include <aws/redshift-serverless/model/PerformanceTarget.h>
#include <aws/redshift-serverless/model/WorkgroupStatus.h>
#include <aws/redshift-serverless/model/ConfigParameter.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>The collection of computing resources from which an endpoint is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/Workgroup">AWS
   * API Reference</a></p>
   */
  class Workgroup
  {
  public:
    AWS_REDSHIFTSERVERLESS_API Workgroup();
    AWS_REDSHIFTSERVERLESS_API Workgroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Workgroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base data warehouse capacity of the workgroup in Redshift Processing
     * Units (RPUs).</p>
     */
    inline int GetBaseCapacity() const{ return m_baseCapacity; }
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }
    inline Workgroup& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}
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
    inline Workgroup& WithConfigParameters(const Aws::Vector<ConfigParameter>& value) { SetConfigParameters(value); return *this;}
    inline Workgroup& WithConfigParameters(Aws::Vector<ConfigParameter>&& value) { SetConfigParameters(std::move(value)); return *this;}
    inline Workgroup& AddConfigParameters(const ConfigParameter& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(value); return *this; }
    inline Workgroup& AddConfigParameters(ConfigParameter&& value) { m_configParametersHasBeenSet = true; m_configParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline Workgroup& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline Workgroup& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPCs. Each entry is the unique identifier of a virtual private
     * cloud with access to Amazon Redshift Serverless. If all of the VPCs for the
     * grantee are allowed, it shows an asterisk.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrossAccountVpcs() const{ return m_crossAccountVpcs; }
    inline bool CrossAccountVpcsHasBeenSet() const { return m_crossAccountVpcsHasBeenSet; }
    inline void SetCrossAccountVpcs(const Aws::Vector<Aws::String>& value) { m_crossAccountVpcsHasBeenSet = true; m_crossAccountVpcs = value; }
    inline void SetCrossAccountVpcs(Aws::Vector<Aws::String>&& value) { m_crossAccountVpcsHasBeenSet = true; m_crossAccountVpcs = std::move(value); }
    inline Workgroup& WithCrossAccountVpcs(const Aws::Vector<Aws::String>& value) { SetCrossAccountVpcs(value); return *this;}
    inline Workgroup& WithCrossAccountVpcs(Aws::Vector<Aws::String>&& value) { SetCrossAccountVpcs(std::move(value)); return *this;}
    inline Workgroup& AddCrossAccountVpcs(const Aws::String& value) { m_crossAccountVpcsHasBeenSet = true; m_crossAccountVpcs.push_back(value); return *this; }
    inline Workgroup& AddCrossAccountVpcs(Aws::String&& value) { m_crossAccountVpcsHasBeenSet = true; m_crossAccountVpcs.push_back(std::move(value)); return *this; }
    inline Workgroup& AddCrossAccountVpcs(const char* value) { m_crossAccountVpcsHasBeenSet = true; m_crossAccountVpcs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = value; }
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::move(value); }
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn.assign(value); }
    inline Workgroup& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}
    inline Workgroup& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}
    inline Workgroup& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryTime() const{ return m_customDomainCertificateExpiryTime; }
    inline bool CustomDomainCertificateExpiryTimeHasBeenSet() const { return m_customDomainCertificateExpiryTimeHasBeenSet; }
    inline void SetCustomDomainCertificateExpiryTime(const Aws::Utils::DateTime& value) { m_customDomainCertificateExpiryTimeHasBeenSet = true; m_customDomainCertificateExpiryTime = value; }
    inline void SetCustomDomainCertificateExpiryTime(Aws::Utils::DateTime&& value) { m_customDomainCertificateExpiryTimeHasBeenSet = true; m_customDomainCertificateExpiryTime = std::move(value); }
    inline Workgroup& WithCustomDomainCertificateExpiryTime(const Aws::Utils::DateTime& value) { SetCustomDomainCertificateExpiryTime(value); return *this;}
    inline Workgroup& WithCustomDomainCertificateExpiryTime(Aws::Utils::DateTime&& value) { SetCustomDomainCertificateExpiryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainNameHasBeenSet = true; m_customDomainName.assign(value); }
    inline Workgroup& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline Workgroup& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline Workgroup& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline Workgroup& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}
    inline Workgroup& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that specifies whether to enable enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool GetEnhancedVpcRouting() const{ return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline Workgroup& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
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
    inline Workgroup& WithIpAddressType(const Aws::String& value) { SetIpAddressType(value); return *this;}
    inline Workgroup& WithIpAddressType(Aws::String&& value) { SetIpAddressType(std::move(value)); return *this;}
    inline Workgroup& WithIpAddressType(const char* value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum data-warehouse capacity Amazon Redshift Serverless uses to serve
     * queries. The max capacity is specified in RPUs.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline Workgroup& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline const Aws::String& GetNamespaceName() const{ return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    inline void SetNamespaceName(const Aws::String& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = value; }
    inline void SetNamespaceName(Aws::String&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::move(value); }
    inline void SetNamespaceName(const char* value) { m_namespaceNameHasBeenSet = true; m_namespaceName.assign(value); }
    inline Workgroup& WithNamespaceName(const Aws::String& value) { SetNamespaceName(value); return *this;}
    inline Workgroup& WithNamespaceName(Aws::String&& value) { SetNamespaceName(std::move(value)); return *this;}
    inline Workgroup& WithNamespaceName(const char* value) { SetNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patch version of your Amazon Redshift Serverless workgroup. For more
     * information about patch versions, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/cluster-versions.html">Cluster
     * versions for Amazon Redshift</a>.</p>
     */
    inline const Aws::String& GetPatchVersion() const{ return m_patchVersion; }
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }
    inline void SetPatchVersion(const Aws::String& value) { m_patchVersionHasBeenSet = true; m_patchVersion = value; }
    inline void SetPatchVersion(Aws::String&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::move(value); }
    inline void SetPatchVersion(const char* value) { m_patchVersionHasBeenSet = true; m_patchVersion.assign(value); }
    inline Workgroup& WithPatchVersion(const Aws::String& value) { SetPatchVersion(value); return *this;}
    inline Workgroup& WithPatchVersion(Aws::String&& value) { SetPatchVersion(std::move(value)); return *this;}
    inline Workgroup& WithPatchVersion(const char* value) { SetPatchVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Workgroup& WithPort(int value) { SetPort(value); return *this;}
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
    inline Workgroup& WithPricePerformanceTarget(const PerformanceTarget& value) { SetPricePerformanceTarget(value); return *this;}
    inline Workgroup& WithPricePerformanceTarget(PerformanceTarget&& value) { SetPricePerformanceTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline Workgroup& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of security group IDs to associate with the workgroup.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline Workgroup& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline Workgroup& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline Workgroup& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline Workgroup& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline Workgroup& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the workgroup.</p>
     */
    inline const WorkgroupStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WorkgroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WorkgroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Workgroup& WithStatus(const WorkgroupStatus& value) { SetStatus(value); return *this;}
    inline Workgroup& WithStatus(WorkgroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline Workgroup& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline Workgroup& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline Workgroup& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline Workgroup& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline Workgroup& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupArn() const{ return m_workgroupArn; }
    inline bool WorkgroupArnHasBeenSet() const { return m_workgroupArnHasBeenSet; }
    inline void SetWorkgroupArn(const Aws::String& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = value; }
    inline void SetWorkgroupArn(Aws::String&& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = std::move(value); }
    inline void SetWorkgroupArn(const char* value) { m_workgroupArnHasBeenSet = true; m_workgroupArn.assign(value); }
    inline Workgroup& WithWorkgroupArn(const Aws::String& value) { SetWorkgroupArn(value); return *this;}
    inline Workgroup& WithWorkgroupArn(Aws::String&& value) { SetWorkgroupArn(std::move(value)); return *this;}
    inline Workgroup& WithWorkgroupArn(const char* value) { SetWorkgroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupId() const{ return m_workgroupId; }
    inline bool WorkgroupIdHasBeenSet() const { return m_workgroupIdHasBeenSet; }
    inline void SetWorkgroupId(const Aws::String& value) { m_workgroupIdHasBeenSet = true; m_workgroupId = value; }
    inline void SetWorkgroupId(Aws::String&& value) { m_workgroupIdHasBeenSet = true; m_workgroupId = std::move(value); }
    inline void SetWorkgroupId(const char* value) { m_workgroupIdHasBeenSet = true; m_workgroupId.assign(value); }
    inline Workgroup& WithWorkgroupId(const Aws::String& value) { SetWorkgroupId(value); return *this;}
    inline Workgroup& WithWorkgroupId(Aws::String&& value) { SetWorkgroupId(std::move(value)); return *this;}
    inline Workgroup& WithWorkgroupId(const char* value) { SetWorkgroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupName() const{ return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    inline void SetWorkgroupName(const Aws::String& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = value; }
    inline void SetWorkgroupName(Aws::String&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::move(value); }
    inline void SetWorkgroupName(const char* value) { m_workgroupNameHasBeenSet = true; m_workgroupName.assign(value); }
    inline Workgroup& WithWorkgroupName(const Aws::String& value) { SetWorkgroupName(value); return *this;}
    inline Workgroup& WithWorkgroupName(Aws::String&& value) { SetWorkgroupName(std::move(value)); return *this;}
    inline Workgroup& WithWorkgroupName(const char* value) { SetWorkgroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift Serverless version of your workgroup. For more
     * information about Amazon Redshift Serverless versions, see<a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/cluster-versions.html">Cluster
     * versions for Amazon Redshift</a>.</p>
     */
    inline const Aws::String& GetWorkgroupVersion() const{ return m_workgroupVersion; }
    inline bool WorkgroupVersionHasBeenSet() const { return m_workgroupVersionHasBeenSet; }
    inline void SetWorkgroupVersion(const Aws::String& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = value; }
    inline void SetWorkgroupVersion(Aws::String&& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = std::move(value); }
    inline void SetWorkgroupVersion(const char* value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion.assign(value); }
    inline Workgroup& WithWorkgroupVersion(const Aws::String& value) { SetWorkgroupVersion(value); return *this;}
    inline Workgroup& WithWorkgroupVersion(Aws::String&& value) { SetWorkgroupVersion(std::move(value)); return *this;}
    inline Workgroup& WithWorkgroupVersion(const char* value) { SetWorkgroupVersion(value); return *this;}
    ///@}
  private:

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    Aws::Vector<ConfigParameter> m_configParameters;
    bool m_configParametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_crossAccountVpcs;
    bool m_crossAccountVpcsHasBeenSet = false;

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::Utils::DateTime m_customDomainCertificateExpiryTime;
    bool m_customDomainCertificateExpiryTimeHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_enhancedVpcRouting;
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    PerformanceTarget m_pricePerformanceTarget;
    bool m_pricePerformanceTargetHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    WorkgroupStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_workgroupArn;
    bool m_workgroupArnHasBeenSet = false;

    Aws::String m_workgroupId;
    bool m_workgroupIdHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;

    Aws::String m_workgroupVersion;
    bool m_workgroupVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
