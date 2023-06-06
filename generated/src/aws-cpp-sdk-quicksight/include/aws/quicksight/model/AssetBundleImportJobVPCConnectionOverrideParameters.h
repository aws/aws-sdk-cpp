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


    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline const Aws::String& GetVPCConnectionId() const{ return m_vPCConnectionId; }

    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline bool VPCConnectionIdHasBeenSet() const { return m_vPCConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline void SetVPCConnectionId(const Aws::String& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = value; }

    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline void SetVPCConnectionId(Aws::String&& value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline void SetVPCConnectionId(const char* value) { m_vPCConnectionIdHasBeenSet = true; m_vPCConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithVPCConnectionId(const Aws::String& value) { SetVPCConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithVPCConnectionId(Aws::String&& value) { SetVPCConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC Connection to apply overrides to.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithVPCConnectionId(const char* value) { SetVPCConnectionId(value); return *this;}


    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A new name for the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of new subnet IDs for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A new security group ID for the VPC connection you are importing. This field
     * is required if you are importing the VPC connection from another Amazon Web
     * Services account or Region.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsResolvers() const{ return m_dnsResolvers; }

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline bool DnsResolversHasBeenSet() const { return m_dnsResolversHasBeenSet; }

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline void SetDnsResolvers(const Aws::Vector<Aws::String>& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = value; }

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline void SetDnsResolvers(Aws::Vector<Aws::String>&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers = std::move(value); }

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithDnsResolvers(const Aws::Vector<Aws::String>& value) { SetDnsResolvers(value); return *this;}

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithDnsResolvers(Aws::Vector<Aws::String>&& value) { SetDnsResolvers(std::move(value)); return *this;}

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddDnsResolvers(const Aws::String& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddDnsResolvers(Aws::String&& value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(std::move(value)); return *this; }

    /**
     * <p>An optional override of DNS resolvers to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& AddDnsResolvers(const char* value) { m_dnsResolversHasBeenSet = true; m_dnsResolvers.push_back(value); return *this; }


    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An optional override of the role ARN to be used by the VPC connection.</p>
     */
    inline AssetBundleImportJobVPCConnectionOverrideParameters& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

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
