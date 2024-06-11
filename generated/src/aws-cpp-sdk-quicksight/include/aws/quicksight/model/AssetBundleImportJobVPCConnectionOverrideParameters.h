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
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideParameters();
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobVPCConnectionOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }
    inline bool VPCConnectionIdHasBeenSet() const { return m_vPCConnectionIdHasBeenSet; }
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = value; }
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::move(value); }
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId.assign(value); }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsResolvers() const{ return m_dnsResolvers; }
    inline bool DnsResolversHasBeenSet() const { return m_dnsResolversHasBeenSet; }
    inline void SetDnsResolvers(const Aws::Vector<Aws::String>& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = value; }
    inline void SetDnsResolvers(Aws::Vector<Aws::String>&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = std::move(value); }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithDnsResolvers(const Aws::Vector<Aws::String>& value) { SetDnsResolvers(value); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithDnsResolvers(Aws::Vector<Aws::String>&& value) { SetDnsResolvers(std::move(value)); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddDnsResolvers(const Aws::String& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddDnsResolvers(Aws::String&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(std::move(value)); return *this; }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddDnsResolvers(const char* value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
