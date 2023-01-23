/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerLaunchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ServerLaunchConfiguration::ServerLaunchConfiguration() : 
    m_serverHasBeenSet(false),
    m_logicalIdHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_ec2KeyNameHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_iamInstanceProfileNameHasBeenSet(false),
    m_configureScriptHasBeenSet(false),
    m_configureScriptType(ScriptType::NOT_SET),
    m_configureScriptTypeHasBeenSet(false)
{
}

ServerLaunchConfiguration::ServerLaunchConfiguration(JsonView jsonValue) : 
    m_serverHasBeenSet(false),
    m_logicalIdHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_ec2KeyNameHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_iamInstanceProfileNameHasBeenSet(false),
    m_configureScriptHasBeenSet(false),
    m_configureScriptType(ScriptType::NOT_SET),
    m_configureScriptTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ServerLaunchConfiguration& ServerLaunchConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("server"))
  {
    m_server = jsonValue.GetObject("server");

    m_serverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logicalId"))
  {
    m_logicalId = jsonValue.GetString("logicalId");

    m_logicalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpc"))
  {
    m_vpc = jsonValue.GetString("vpc");

    m_vpcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnet"))
  {
    m_subnet = jsonValue.GetString("subnet");

    m_subnetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroup"))
  {
    m_securityGroup = jsonValue.GetString("securityGroup");

    m_securityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2KeyName"))
  {
    m_ec2KeyName = jsonValue.GetString("ec2KeyName");

    m_ec2KeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userData"))
  {
    m_userData = jsonValue.GetObject("userData");

    m_userDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatePublicIpAddress"))
  {
    m_associatePublicIpAddress = jsonValue.GetBool("associatePublicIpAddress");

    m_associatePublicIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamInstanceProfileName"))
  {
    m_iamInstanceProfileName = jsonValue.GetString("iamInstanceProfileName");

    m_iamInstanceProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configureScript"))
  {
    m_configureScript = jsonValue.GetObject("configureScript");

    m_configureScriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configureScriptType"))
  {
    m_configureScriptType = ScriptTypeMapper::GetScriptTypeForName(jsonValue.GetString("configureScriptType"));

    m_configureScriptTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerLaunchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverHasBeenSet)
  {
   payload.WithObject("server", m_server.Jsonize());

  }

  if(m_logicalIdHasBeenSet)
  {
   payload.WithString("logicalId", m_logicalId);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithString("vpc", m_vpc);

  }

  if(m_subnetHasBeenSet)
  {
   payload.WithString("subnet", m_subnet);

  }

  if(m_securityGroupHasBeenSet)
  {
   payload.WithString("securityGroup", m_securityGroup);

  }

  if(m_ec2KeyNameHasBeenSet)
  {
   payload.WithString("ec2KeyName", m_ec2KeyName);

  }

  if(m_userDataHasBeenSet)
  {
   payload.WithObject("userData", m_userData.Jsonize());

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_associatePublicIpAddressHasBeenSet)
  {
   payload.WithBool("associatePublicIpAddress", m_associatePublicIpAddress);

  }

  if(m_iamInstanceProfileNameHasBeenSet)
  {
   payload.WithString("iamInstanceProfileName", m_iamInstanceProfileName);

  }

  if(m_configureScriptHasBeenSet)
  {
   payload.WithObject("configureScript", m_configureScript.Jsonize());

  }

  if(m_configureScriptTypeHasBeenSet)
  {
   payload.WithString("configureScriptType", ScriptTypeMapper::GetNameForScriptType(m_configureScriptType));
  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
