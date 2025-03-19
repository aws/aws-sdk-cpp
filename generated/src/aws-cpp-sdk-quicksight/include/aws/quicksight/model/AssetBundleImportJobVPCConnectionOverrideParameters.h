/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The override parameters for a single VPC connection that is
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobVPCConnectionOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobVPCConnectionOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideParameters() = default;
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const { return m_vPCConnectionId; }
    inline bool VPCConnectionIdHasBeenSet() const { return m_vPCConnectionIdHasBeenSet; }
    template<typename VPCConnectionIdT = Aws::String>
    void SetVPCConnectionId(VPCConnectionIdT&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::forward<VPCConnectionIdT>(value); }
    template<typename VPCConnectionIdT = Aws::String>
    AssetBundleImportJobVPCConnectionOverrideParameters& WithVPCConnectionId(VPCConnectionIdT&& value) { SetVPCConnectionId(std::forward<VPCConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetBundleImportJobVPCConnectionOverrideParameters& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobVPCConnectionOverrideParameters& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    AssetBundleImportJobVPCConnectionOverrideParameters& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    AssetBundleImportJobVPCConnectionOverrideParameters& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    AssetBundleImportJobVPCConnectionOverrideParameters& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsResolvers() const { return m_dnsResolvers; }
    inline bool DnsResolversHasBeenSet() const { return m_dnsResolversHasBeenSet; }
    template<typename DnsResolversT = Aws::Vector<Aws::String>>
    void SetDnsResolvers(DnsResolversT&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = std::forward<DnsResolversT>(value); }
    template<typename DnsResolversT = Aws::Vector<Aws::String>>
    AssetBundleImportJobVPCConnectionOverrideParameters& WithDnsResolvers(DnsResolversT&& value) { SetDnsResolvers(std::forward<DnsResolversT>(value)); return *this;}
    template<typename DnsResolversT = Aws::String>
    AssetBundleImportJobVPCConnectionOverrideParameters& AddDnsResolvers(DnsResolversT&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.emplace_back(std::forward<DnsResolversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AssetBundleImportJobVPCConnectionOverrideParameters& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vPCConnectionId;
    bool m_vPCConnectionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsResolvers;
    bool m_dnsResolversHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
