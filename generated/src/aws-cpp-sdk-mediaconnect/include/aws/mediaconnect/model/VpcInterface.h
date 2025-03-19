/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/NetworkInterfaceType.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The settings for a VPC source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/VpcInterface">AWS
   * API Reference</a></p>
   */
  class VpcInterface
  {
  public:
    AWS_MEDIACONNECT_API VpcInterface() = default;
    AWS_MEDIACONNECT_API VpcInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API VpcInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Immutable and has to be a unique against other VpcInterfaces in this
     * Flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    VpcInterface& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> IDs of the network interfaces created in customer's account by
     * MediaConnect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const { return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::forward<NetworkInterfaceIdsT>(value); }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    VpcInterface& WithNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { SetNetworkInterfaceIds(std::forward<NetworkInterfaceIdsT>(value)); return *this;}
    template<typename NetworkInterfaceIdsT = Aws::String>
    VpcInterface& AddNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.emplace_back(std::forward<NetworkInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of network interface.</p>
     */
    inline NetworkInterfaceType GetNetworkInterfaceType() const { return m_networkInterfaceType; }
    inline bool NetworkInterfaceTypeHasBeenSet() const { return m_networkInterfaceTypeHasBeenSet; }
    inline void SetNetworkInterfaceType(NetworkInterfaceType value) { m_networkInterfaceTypeHasBeenSet = true; m_networkInterfaceType = value; }
    inline VpcInterface& WithNetworkInterfaceType(NetworkInterfaceType value) { SetNetworkInterfaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A role Arn MediaConnect can assume to create ENIs in your account.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    VpcInterface& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Security Group IDs to be used on ENI.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VpcInterface& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VpcInterface& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Subnet must be in the AZ of the Flow. </p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    VpcInterface& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    NetworkInterfaceType m_networkInterfaceType{NetworkInterfaceType::NOT_SET};
    bool m_networkInterfaceTypeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
