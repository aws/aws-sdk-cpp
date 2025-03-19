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
    AWS_REDSHIFTSERVERLESS_API Workgroup() = default;
    AWS_REDSHIFTSERVERLESS_API Workgroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Workgroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base data warehouse capacity of the workgroup in Redshift Processing
     * Units (RPUs).</p>
     */
    inline int GetBaseCapacity() const { return m_baseCapacity; }
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
    inline const Aws::Vector<ConfigParameter>& GetConfigParameters() const { return m_configParameters; }
    inline bool ConfigParametersHasBeenSet() const { return m_configParametersHasBeenSet; }
    template<typename ConfigParametersT = Aws::Vector<ConfigParameter>>
    void SetConfigParameters(ConfigParametersT&& value) { m_configParametersHasBeenSet = true; m_configParameters = std::forward<ConfigParametersT>(value); }
    template<typename ConfigParametersT = Aws::Vector<ConfigParameter>>
    Workgroup& WithConfigParameters(ConfigParametersT&& value) { SetConfigParameters(std::forward<ConfigParametersT>(value)); return *this;}
    template<typename ConfigParametersT = ConfigParameter>
    Workgroup& AddConfigParameters(ConfigParametersT&& value) { m_configParametersHasBeenSet = true; m_configParameters.emplace_back(std::forward<ConfigParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date of the workgroup.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    Workgroup& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of VPCs. Each entry is the unique identifier of a virtual private
     * cloud with access to Amazon Redshift Serverless. If all of the VPCs for the
     * grantee are allowed, it shows an asterisk.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrossAccountVpcs() const { return m_crossAccountVpcs; }
    inline bool CrossAccountVpcsHasBeenSet() const { return m_crossAccountVpcsHasBeenSet; }
    template<typename CrossAccountVpcsT = Aws::Vector<Aws::String>>
    void SetCrossAccountVpcs(CrossAccountVpcsT&& value) { m_crossAccountVpcsHasBeenSet = true; m_crossAccountVpcs = std::forward<CrossAccountVpcsT>(value); }
    template<typename CrossAccountVpcsT = Aws::Vector<Aws::String>>
    Workgroup& WithCrossAccountVpcs(CrossAccountVpcsT&& value) { SetCrossAccountVpcs(std::forward<CrossAccountVpcsT>(value)); return *this;}
    template<typename CrossAccountVpcsT = Aws::String>
    Workgroup& AddCrossAccountVpcs(CrossAccountVpcsT&& value) { m_crossAccountVpcsHasBeenSet = true; m_crossAccountVpcs.emplace_back(std::forward<CrossAccountVpcsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom domain name’s certificate Amazon resource name (ARN).</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const { return m_customDomainCertificateArn; }
    inline bool CustomDomainCertificateArnHasBeenSet() const { return m_customDomainCertificateArnHasBeenSet; }
    template<typename CustomDomainCertificateArnT = Aws::String>
    void SetCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::forward<CustomDomainCertificateArnT>(value); }
    template<typename CustomDomainCertificateArnT = Aws::String>
    Workgroup& WithCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { SetCustomDomainCertificateArn(std::forward<CustomDomainCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time for the certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomDomainCertificateExpiryTime() const { return m_customDomainCertificateExpiryTime; }
    inline bool CustomDomainCertificateExpiryTimeHasBeenSet() const { return m_customDomainCertificateExpiryTimeHasBeenSet; }
    template<typename CustomDomainCertificateExpiryTimeT = Aws::Utils::DateTime>
    void SetCustomDomainCertificateExpiryTime(CustomDomainCertificateExpiryTimeT&& value) { m_customDomainCertificateExpiryTimeHasBeenSet = true; m_customDomainCertificateExpiryTime = std::forward<CustomDomainCertificateExpiryTimeT>(value); }
    template<typename CustomDomainCertificateExpiryTimeT = Aws::Utils::DateTime>
    Workgroup& WithCustomDomainCertificateExpiryTime(CustomDomainCertificateExpiryTimeT&& value) { SetCustomDomainCertificateExpiryTime(std::forward<CustomDomainCertificateExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom domain name associated with the workgroup.</p>
     */
    inline const Aws::String& GetCustomDomainName() const { return m_customDomainName; }
    inline bool CustomDomainNameHasBeenSet() const { return m_customDomainNameHasBeenSet; }
    template<typename CustomDomainNameT = Aws::String>
    void SetCustomDomainName(CustomDomainNameT&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::forward<CustomDomainNameT>(value); }
    template<typename CustomDomainNameT = Aws::String>
    Workgroup& WithCustomDomainName(CustomDomainNameT&& value) { SetCustomDomainName(std::forward<CustomDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint that is created from the workgroup.</p>
     */
    inline const Endpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Endpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Endpoint>
    Workgroup& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that specifies whether to enable enhanced virtual private cloud
     * (VPC) routing, which forces Amazon Redshift Serverless to route traffic through
     * your VPC.</p>
     */
    inline bool GetEnhancedVpcRouting() const { return m_enhancedVpcRouting; }
    inline bool EnhancedVpcRoutingHasBeenSet() const { return m_enhancedVpcRoutingHasBeenSet; }
    inline void SetEnhancedVpcRouting(bool value) { m_enhancedVpcRoutingHasBeenSet = true; m_enhancedVpcRouting = value; }
    inline Workgroup& WithEnhancedVpcRouting(bool value) { SetEnhancedVpcRouting(value); return *this;}
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
    Workgroup& WithIpAddressType(IpAddressTypeT&& value) { SetIpAddressType(std::forward<IpAddressTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum data-warehouse capacity Amazon Redshift Serverless uses to serve
     * queries. The max capacity is specified in RPUs.</p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline Workgroup& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace the workgroup is associated with.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    Workgroup& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The patch version of your Amazon Redshift Serverless workgroup. For more
     * information about patch versions, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/cluster-versions.html">Cluster
     * versions for Amazon Redshift</a>.</p>
     */
    inline const Aws::String& GetPatchVersion() const { return m_patchVersion; }
    inline bool PatchVersionHasBeenSet() const { return m_patchVersionHasBeenSet; }
    template<typename PatchVersionT = Aws::String>
    void SetPatchVersion(PatchVersionT&& value) { m_patchVersionHasBeenSet = true; m_patchVersion = std::forward<PatchVersionT>(value); }
    template<typename PatchVersionT = Aws::String>
    Workgroup& WithPatchVersion(PatchVersionT&& value) { SetPatchVersion(std::forward<PatchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the track that you want to assign to the workgroup. When the
     * track changes, the workgroup is switched to the latest workgroup release
     * available for the track. At this point, the track name is applied.</p>
     */
    inline const Aws::String& GetPendingTrackName() const { return m_pendingTrackName; }
    inline bool PendingTrackNameHasBeenSet() const { return m_pendingTrackNameHasBeenSet; }
    template<typename PendingTrackNameT = Aws::String>
    void SetPendingTrackName(PendingTrackNameT&& value) { m_pendingTrackNameHasBeenSet = true; m_pendingTrackName = std::forward<PendingTrackNameT>(value); }
    template<typename PendingTrackNameT = Aws::String>
    Workgroup& WithPendingTrackName(PendingTrackNameT&& value) { SetPendingTrackName(std::forward<PendingTrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom port to use when connecting to a workgroup. Valid port ranges are
     * 5431-5455 and 8191-8215. The default is 5439.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Workgroup& WithPort(int value) { SetPort(value); return *this;}
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
    Workgroup& WithPricePerformanceTarget(PricePerformanceTargetT&& value) { SetPricePerformanceTarget(std::forward<PricePerformanceTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the workgroup can be accessible from a public
     * network.</p>
     */
    inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline Workgroup& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
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
    Workgroup& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    Workgroup& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the workgroup.</p>
     */
    inline WorkgroupStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WorkgroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Workgroup& WithStatus(WorkgroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of subnet IDs the workgroup is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    Workgroup& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    Workgroup& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the track for the workgroup.</p>
     */
    inline const Aws::String& GetTrackName() const { return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    template<typename TrackNameT = Aws::String>
    void SetTrackName(TrackNameT&& value) { m_trackNameHasBeenSet = true; m_trackName = std::forward<TrackNameT>(value); }
    template<typename TrackNameT = Aws::String>
    Workgroup& WithTrackName(TrackNameT&& value) { SetTrackName(std::forward<TrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that links to the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupArn() const { return m_workgroupArn; }
    inline bool WorkgroupArnHasBeenSet() const { return m_workgroupArnHasBeenSet; }
    template<typename WorkgroupArnT = Aws::String>
    void SetWorkgroupArn(WorkgroupArnT&& value) { m_workgroupArnHasBeenSet = true; m_workgroupArn = std::forward<WorkgroupArnT>(value); }
    template<typename WorkgroupArnT = Aws::String>
    Workgroup& WithWorkgroupArn(WorkgroupArnT&& value) { SetWorkgroupArn(std::forward<WorkgroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupId() const { return m_workgroupId; }
    inline bool WorkgroupIdHasBeenSet() const { return m_workgroupIdHasBeenSet; }
    template<typename WorkgroupIdT = Aws::String>
    void SetWorkgroupId(WorkgroupIdT&& value) { m_workgroupIdHasBeenSet = true; m_workgroupId = std::forward<WorkgroupIdT>(value); }
    template<typename WorkgroupIdT = Aws::String>
    Workgroup& WithWorkgroupId(WorkgroupIdT&& value) { SetWorkgroupId(std::forward<WorkgroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    Workgroup& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift Serverless version of your workgroup. For more
     * information about Amazon Redshift Serverless versions, see<a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/cluster-versions.html">Cluster
     * versions for Amazon Redshift</a>.</p>
     */
    inline const Aws::String& GetWorkgroupVersion() const { return m_workgroupVersion; }
    inline bool WorkgroupVersionHasBeenSet() const { return m_workgroupVersionHasBeenSet; }
    template<typename WorkgroupVersionT = Aws::String>
    void SetWorkgroupVersion(WorkgroupVersionT&& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = std::forward<WorkgroupVersionT>(value); }
    template<typename WorkgroupVersionT = Aws::String>
    Workgroup& WithWorkgroupVersion(WorkgroupVersionT&& value) { SetWorkgroupVersion(std::forward<WorkgroupVersionT>(value)); return *this;}
    ///@}
  private:

    int m_baseCapacity{0};
    bool m_baseCapacityHasBeenSet = false;

    Aws::Vector<ConfigParameter> m_configParameters;
    bool m_configParametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_crossAccountVpcs;
    bool m_crossAccountVpcsHasBeenSet = false;

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::Utils::DateTime m_customDomainCertificateExpiryTime{};
    bool m_customDomainCertificateExpiryTimeHasBeenSet = false;

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    bool m_enhancedVpcRouting{false};
    bool m_enhancedVpcRoutingHasBeenSet = false;

    Aws::String m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_patchVersion;
    bool m_patchVersionHasBeenSet = false;

    Aws::String m_pendingTrackName;
    bool m_pendingTrackNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    PerformanceTarget m_pricePerformanceTarget;
    bool m_pricePerformanceTargetHasBeenSet = false;

    bool m_publiclyAccessible{false};
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    WorkgroupStatus m_status{WorkgroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_trackName;
    bool m_trackNameHasBeenSet = false;

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
