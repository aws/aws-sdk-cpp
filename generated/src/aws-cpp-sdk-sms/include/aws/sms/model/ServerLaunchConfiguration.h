/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/Server.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/UserData.h>
#include <aws/sms/model/S3Location.h>
#include <aws/sms/model/ScriptType.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Launch configuration for a server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerLaunchConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerLaunchConfiguration
  {
  public:
    AWS_SMS_API ServerLaunchConfiguration() = default;
    AWS_SMS_API ServerLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server with which the launch configuration is associated.</p>
     */
    inline const Server& GetServer() const { return m_server; }
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }
    template<typename ServerT = Server>
    void SetServer(ServerT&& value) { m_serverHasBeenSet = true; m_server = std::forward<ServerT>(value); }
    template<typename ServerT = Server>
    ServerLaunchConfiguration& WithServer(ServerT&& value) { SetServer(std::forward<ServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline const Aws::String& GetLogicalId() const { return m_logicalId; }
    inline bool LogicalIdHasBeenSet() const { return m_logicalIdHasBeenSet; }
    template<typename LogicalIdT = Aws::String>
    void SetLogicalId(LogicalIdT&& value) { m_logicalIdHasBeenSet = true; m_logicalId = std::forward<LogicalIdT>(value); }
    template<typename LogicalIdT = Aws::String>
    ServerLaunchConfiguration& WithLogicalId(LogicalIdT&& value) { SetLogicalId(std::forward<LogicalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline const Aws::String& GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    template<typename VpcT = Aws::String>
    void SetVpc(VpcT&& value) { m_vpcHasBeenSet = true; m_vpc = std::forward<VpcT>(value); }
    template<typename VpcT = Aws::String>
    ServerLaunchConfiguration& WithVpc(VpcT&& value) { SetVpc(std::forward<VpcT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline const Aws::String& GetSubnet() const { return m_subnet; }
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }
    template<typename SubnetT = Aws::String>
    void SetSubnet(SubnetT&& value) { m_subnetHasBeenSet = true; m_subnet = std::forward<SubnetT>(value); }
    template<typename SubnetT = Aws::String>
    ServerLaunchConfiguration& WithSubnet(SubnetT&& value) { SetSubnet(std::forward<SubnetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline const Aws::String& GetSecurityGroup() const { return m_securityGroup; }
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }
    template<typename SecurityGroupT = Aws::String>
    void SetSecurityGroup(SecurityGroupT&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::forward<SecurityGroupT>(value); }
    template<typename SecurityGroupT = Aws::String>
    ServerLaunchConfiguration& WithSecurityGroup(SecurityGroupT&& value) { SetSecurityGroup(std::forward<SecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline const Aws::String& GetEc2KeyName() const { return m_ec2KeyName; }
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }
    template<typename Ec2KeyNameT = Aws::String>
    void SetEc2KeyName(Ec2KeyNameT&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::forward<Ec2KeyNameT>(value); }
    template<typename Ec2KeyNameT = Aws::String>
    ServerLaunchConfiguration& WithEc2KeyName(Ec2KeyNameT&& value) { SetEc2KeyName(std::forward<Ec2KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline const UserData& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = UserData>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = UserData>
    ServerLaunchConfiguration& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ServerLaunchConfiguration& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a publicly accessible IP address is created when launching
     * the server.</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline ServerLaunchConfiguration& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline const Aws::String& GetIamInstanceProfileName() const { return m_iamInstanceProfileName; }
    inline bool IamInstanceProfileNameHasBeenSet() const { return m_iamInstanceProfileNameHasBeenSet; }
    template<typename IamInstanceProfileNameT = Aws::String>
    void SetIamInstanceProfileName(IamInstanceProfileNameT&& value) { m_iamInstanceProfileNameHasBeenSet = true; m_iamInstanceProfileName = std::forward<IamInstanceProfileNameT>(value); }
    template<typename IamInstanceProfileNameT = Aws::String>
    ServerLaunchConfiguration& WithIamInstanceProfileName(IamInstanceProfileNameT&& value) { SetIamInstanceProfileName(std::forward<IamInstanceProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Location& GetConfigureScript() const { return m_configureScript; }
    inline bool ConfigureScriptHasBeenSet() const { return m_configureScriptHasBeenSet; }
    template<typename ConfigureScriptT = S3Location>
    void SetConfigureScript(ConfigureScriptT&& value) { m_configureScriptHasBeenSet = true; m_configureScript = std::forward<ConfigureScriptT>(value); }
    template<typename ConfigureScriptT = S3Location>
    ServerLaunchConfiguration& WithConfigureScript(ConfigureScriptT&& value) { SetConfigureScript(std::forward<ConfigureScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of configuration script.</p>
     */
    inline ScriptType GetConfigureScriptType() const { return m_configureScriptType; }
    inline bool ConfigureScriptTypeHasBeenSet() const { return m_configureScriptTypeHasBeenSet; }
    inline void SetConfigureScriptType(ScriptType value) { m_configureScriptTypeHasBeenSet = true; m_configureScriptType = value; }
    inline ServerLaunchConfiguration& WithConfigureScriptType(ScriptType value) { SetConfigureScriptType(value); return *this;}
    ///@}
  private:

    Server m_server;
    bool m_serverHasBeenSet = false;

    Aws::String m_logicalId;
    bool m_logicalIdHasBeenSet = false;

    Aws::String m_vpc;
    bool m_vpcHasBeenSet = false;

    Aws::String m_subnet;
    bool m_subnetHasBeenSet = false;

    Aws::String m_securityGroup;
    bool m_securityGroupHasBeenSet = false;

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet = false;

    UserData m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::String m_iamInstanceProfileName;
    bool m_iamInstanceProfileNameHasBeenSet = false;

    S3Location m_configureScript;
    bool m_configureScriptHasBeenSet = false;

    ScriptType m_configureScriptType{ScriptType::NOT_SET};
    bool m_configureScriptTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
