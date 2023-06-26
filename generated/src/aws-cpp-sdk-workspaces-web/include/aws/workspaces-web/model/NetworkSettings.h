/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>A network settings resource that can be associated with a web portal. Once
   * associated with a web portal, network settings define how streaming instances
   * will connect with your specified VPC. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/NetworkSettings">AWS
   * API Reference</a></p>
   */
  class NetworkSettings
  {
  public:
    AWS_WORKSPACESWEB_API NetworkSettings();
    AWS_WORKSPACESWEB_API NetworkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API NetworkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline NetworkSettings& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline NetworkSettings& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline NetworkSettings& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline NetworkSettings& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of web portal ARNs that this network settings is associated with.</p>
     */
    inline NetworkSettings& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }


    /**
     * <p>The ARN of the network settings.</p>
     */
    inline const Aws::String& GetNetworkSettingsArn() const{ return m_networkSettingsArn; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline bool NetworkSettingsArnHasBeenSet() const { return m_networkSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(const Aws::String& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = value; }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(Aws::String&& value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline void SetNetworkSettingsArn(const char* value) { m_networkSettingsArnHasBeenSet = true; m_networkSettingsArn.assign(value); }

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline NetworkSettings& WithNetworkSettingsArn(const Aws::String& value) { SetNetworkSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline NetworkSettings& WithNetworkSettingsArn(Aws::String&& value) { SetNetworkSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the network settings.</p>
     */
    inline NetworkSettings& WithNetworkSettingsArn(const char* value) { SetNetworkSettingsArn(value); return *this;}


    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline NetworkSettings& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline NetworkSettings& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline NetworkSettings& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline NetworkSettings& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more security groups used to control access from streaming instances
     * to your VPC. </p>
     */
    inline NetworkSettings& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline NetworkSettings& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline NetworkSettings& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline NetworkSettings& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline NetworkSettings& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets in which network interfaces are created to connect streaming
     * instances to your VPC. At least two of these subnets must be in different
     * availability zones.</p>
     */
    inline NetworkSettings& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline NetworkSettings& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline NetworkSettings& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC that streaming instances will connect to.</p>
     */
    inline NetworkSettings& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::String m_networkSettingsArn;
    bool m_networkSettingsArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
