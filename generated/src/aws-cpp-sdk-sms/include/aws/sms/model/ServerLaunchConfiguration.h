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
    AWS_SMS_API ServerLaunchConfiguration();
    AWS_SMS_API ServerLaunchConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerLaunchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the server with which the launch configuration is associated.</p>
     */
    inline const Server& GetServer() const{ return m_server; }

    /**
     * <p>The ID of the server with which the launch configuration is associated.</p>
     */
    inline bool ServerHasBeenSet() const { return m_serverHasBeenSet; }

    /**
     * <p>The ID of the server with which the launch configuration is associated.</p>
     */
    inline void SetServer(const Server& value) { m_serverHasBeenSet = true; m_server = value; }

    /**
     * <p>The ID of the server with which the launch configuration is associated.</p>
     */
    inline void SetServer(Server&& value) { m_serverHasBeenSet = true; m_server = std::move(value); }

    /**
     * <p>The ID of the server with which the launch configuration is associated.</p>
     */
    inline ServerLaunchConfiguration& WithServer(const Server& value) { SetServer(value); return *this;}

    /**
     * <p>The ID of the server with which the launch configuration is associated.</p>
     */
    inline ServerLaunchConfiguration& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}


    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline const Aws::String& GetLogicalId() const{ return m_logicalId; }

    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline bool LogicalIdHasBeenSet() const { return m_logicalIdHasBeenSet; }

    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline void SetLogicalId(const Aws::String& value) { m_logicalIdHasBeenSet = true; m_logicalId = value; }

    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline void SetLogicalId(Aws::String&& value) { m_logicalIdHasBeenSet = true; m_logicalId = std::move(value); }

    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline void SetLogicalId(const char* value) { m_logicalIdHasBeenSet = true; m_logicalId.assign(value); }

    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline ServerLaunchConfiguration& WithLogicalId(const Aws::String& value) { SetLogicalId(value); return *this;}

    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline ServerLaunchConfiguration& WithLogicalId(Aws::String&& value) { SetLogicalId(std::move(value)); return *this;}

    /**
     * <p>The logical ID of the server in the CloudFormation template.</p>
     */
    inline ServerLaunchConfiguration& WithLogicalId(const char* value) { SetLogicalId(value); return *this;}


    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline const Aws::String& GetVpc() const{ return m_vpc; }

    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }

    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline void SetVpc(const Aws::String& value) { m_vpcHasBeenSet = true; m_vpc = value; }

    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline void SetVpc(Aws::String&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }

    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline void SetVpc(const char* value) { m_vpcHasBeenSet = true; m_vpc.assign(value); }

    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline ServerLaunchConfiguration& WithVpc(const Aws::String& value) { SetVpc(value); return *this;}

    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline ServerLaunchConfiguration& WithVpc(Aws::String&& value) { SetVpc(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC into which the server should be launched.</p>
     */
    inline ServerLaunchConfiguration& WithVpc(const char* value) { SetVpc(value); return *this;}


    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline const Aws::String& GetSubnet() const{ return m_subnet; }

    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline bool SubnetHasBeenSet() const { return m_subnetHasBeenSet; }

    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline void SetSubnet(const Aws::String& value) { m_subnetHasBeenSet = true; m_subnet = value; }

    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline void SetSubnet(Aws::String&& value) { m_subnetHasBeenSet = true; m_subnet = std::move(value); }

    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline void SetSubnet(const char* value) { m_subnetHasBeenSet = true; m_subnet.assign(value); }

    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithSubnet(const Aws::String& value) { SetSubnet(value); return *this;}

    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithSubnet(Aws::String&& value) { SetSubnet(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet the server should be launched into.</p>
     */
    inline ServerLaunchConfiguration& WithSubnet(const char* value) { SetSubnet(value); return *this;}


    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline const Aws::String& GetSecurityGroup() const{ return m_securityGroup; }

    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline bool SecurityGroupHasBeenSet() const { return m_securityGroupHasBeenSet; }

    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline void SetSecurityGroup(const Aws::String& value) { m_securityGroupHasBeenSet = true; m_securityGroup = value; }

    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline void SetSecurityGroup(Aws::String&& value) { m_securityGroupHasBeenSet = true; m_securityGroup = std::move(value); }

    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline void SetSecurityGroup(const char* value) { m_securityGroupHasBeenSet = true; m_securityGroup.assign(value); }

    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithSecurityGroup(const Aws::String& value) { SetSecurityGroup(value); return *this;}

    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithSecurityGroup(Aws::String&& value) { SetSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group that applies to the launched server.</p>
     */
    inline ServerLaunchConfiguration& WithSecurityGroup(const char* value) { SetSecurityGroup(value); return *this;}


    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }

    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }

    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::move(value); }

    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }

    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}

    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EC2 SSH key to be used for connecting to the launched
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}


    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline const UserData& GetUserData() const{ return m_userData; }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline void SetUserData(const UserData& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline void SetUserData(UserData&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithUserData(const UserData& value) { SetUserData(value); return *this;}

    /**
     * <p>Location of the user-data script to be executed when launching the
     * server.</p>
     */
    inline ServerLaunchConfiguration& WithUserData(UserData&& value) { SetUserData(std::move(value)); return *this;}


    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline ServerLaunchConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline ServerLaunchConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use when launching the server.</p>
     */
    inline ServerLaunchConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>Indicates whether a publicly accessible IP address is created when launching
     * the server.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }

    /**
     * <p>Indicates whether a publicly accessible IP address is created when launching
     * the server.</p>
     */
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }

    /**
     * <p>Indicates whether a publicly accessible IP address is created when launching
     * the server.</p>
     */
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }

    /**
     * <p>Indicates whether a publicly accessible IP address is created when launching
     * the server.</p>
     */
    inline ServerLaunchConfiguration& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}


    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline const Aws::String& GetIamInstanceProfileName() const{ return m_iamInstanceProfileName; }

    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline bool IamInstanceProfileNameHasBeenSet() const { return m_iamInstanceProfileNameHasBeenSet; }

    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline void SetIamInstanceProfileName(const Aws::String& value) { m_iamInstanceProfileNameHasBeenSet = true; m_iamInstanceProfileName = value; }

    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline void SetIamInstanceProfileName(Aws::String&& value) { m_iamInstanceProfileNameHasBeenSet = true; m_iamInstanceProfileName = std::move(value); }

    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline void SetIamInstanceProfileName(const char* value) { m_iamInstanceProfileNameHasBeenSet = true; m_iamInstanceProfileName.assign(value); }

    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline ServerLaunchConfiguration& WithIamInstanceProfileName(const Aws::String& value) { SetIamInstanceProfileName(value); return *this;}

    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline ServerLaunchConfiguration& WithIamInstanceProfileName(Aws::String&& value) { SetIamInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM instance profile.</p>
     */
    inline ServerLaunchConfiguration& WithIamInstanceProfileName(const char* value) { SetIamInstanceProfileName(value); return *this;}


    
    inline const S3Location& GetConfigureScript() const{ return m_configureScript; }

    
    inline bool ConfigureScriptHasBeenSet() const { return m_configureScriptHasBeenSet; }

    
    inline void SetConfigureScript(const S3Location& value) { m_configureScriptHasBeenSet = true; m_configureScript = value; }

    
    inline void SetConfigureScript(S3Location&& value) { m_configureScriptHasBeenSet = true; m_configureScript = std::move(value); }

    
    inline ServerLaunchConfiguration& WithConfigureScript(const S3Location& value) { SetConfigureScript(value); return *this;}

    
    inline ServerLaunchConfiguration& WithConfigureScript(S3Location&& value) { SetConfigureScript(std::move(value)); return *this;}


    /**
     * <p>The type of configuration script.</p>
     */
    inline const ScriptType& GetConfigureScriptType() const{ return m_configureScriptType; }

    /**
     * <p>The type of configuration script.</p>
     */
    inline bool ConfigureScriptTypeHasBeenSet() const { return m_configureScriptTypeHasBeenSet; }

    /**
     * <p>The type of configuration script.</p>
     */
    inline void SetConfigureScriptType(const ScriptType& value) { m_configureScriptTypeHasBeenSet = true; m_configureScriptType = value; }

    /**
     * <p>The type of configuration script.</p>
     */
    inline void SetConfigureScriptType(ScriptType&& value) { m_configureScriptTypeHasBeenSet = true; m_configureScriptType = std::move(value); }

    /**
     * <p>The type of configuration script.</p>
     */
    inline ServerLaunchConfiguration& WithConfigureScriptType(const ScriptType& value) { SetConfigureScriptType(value); return *this;}

    /**
     * <p>The type of configuration script.</p>
     */
    inline ServerLaunchConfiguration& WithConfigureScriptType(ScriptType&& value) { SetConfigureScriptType(std::move(value)); return *this;}

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

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::String m_iamInstanceProfileName;
    bool m_iamInstanceProfileNameHasBeenSet = false;

    S3Location m_configureScript;
    bool m_configureScriptHasBeenSet = false;

    ScriptType m_configureScriptType;
    bool m_configureScriptTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
