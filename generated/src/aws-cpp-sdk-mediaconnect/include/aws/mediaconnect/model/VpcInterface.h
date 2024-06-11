﻿/**
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
   * The settings for a VPC Source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/VpcInterface">AWS
   * API Reference</a></p>
   */
  class VpcInterface
  {
  public:
    AWS_MEDIACONNECT_API VpcInterface();
    AWS_MEDIACONNECT_API VpcInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API VpcInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Immutable and has to be a unique against other VpcInterfaces in this Flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VpcInterface& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VpcInterface& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VpcInterface& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * IDs of the network interfaces created in customer's account by MediaConnect.
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const{ return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    inline void SetNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = value; }
    inline void SetNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::move(value); }
    inline VpcInterface& WithNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetNetworkInterfaceIds(value); return *this;}
    inline VpcInterface& WithNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetNetworkInterfaceIds(std::move(value)); return *this;}
    inline VpcInterface& AddNetworkInterfaceIds(const Aws::String& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    inline VpcInterface& AddNetworkInterfaceIds(Aws::String&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(std::move(value)); return *this; }
    inline VpcInterface& AddNetworkInterfaceIds(const char* value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The type of network interface.
     */
    inline const NetworkInterfaceType& GetNetworkInterfaceType() const{ return m_networkInterfaceType; }
    inline bool NetworkInterfaceTypeHasBeenSet() const { return m_networkInterfaceTypeHasBeenSet; }
    inline void SetNetworkInterfaceType(const NetworkInterfaceType& value) { m_networkInterfaceTypeHasBeenSet = true; m_networkInterfaceType = value; }
    inline void SetNetworkInterfaceType(NetworkInterfaceType&& value) { m_networkInterfaceTypeHasBeenSet = true; m_networkInterfaceType = std::move(value); }
    inline VpcInterface& WithNetworkInterfaceType(const NetworkInterfaceType& value) { SetNetworkInterfaceType(value); return *this;}
    inline VpcInterface& WithNetworkInterfaceType(NetworkInterfaceType&& value) { SetNetworkInterfaceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Role Arn MediaConnect can assumes to create ENIs in customer's account
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline VpcInterface& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline VpcInterface& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline VpcInterface& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Security Group IDs to be used on ENI.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline VpcInterface& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline VpcInterface& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline VpcInterface& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline VpcInterface& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline VpcInterface& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Subnet must be in the AZ of the Flow
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline VpcInterface& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline VpcInterface& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline VpcInterface& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    NetworkInterfaceType m_networkInterfaceType;
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
