/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceProperty::InstanceProperty() : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_pingStatus(PingStatus::NOT_SET),
    m_pingStatusHasBeenSet(false),
    m_lastPingDateTimeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_platformType(PlatformType::NOT_SET),
    m_platformTypeHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_activationIdHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_registrationDateHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_associationStatusHasBeenSet(false),
    m_lastAssociationExecutionDateHasBeenSet(false),
    m_lastSuccessfulAssociationExecutionDateHasBeenSet(false),
    m_associationOverviewHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
}

InstanceProperty::InstanceProperty(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_launchTimeHasBeenSet(false),
    m_pingStatus(PingStatus::NOT_SET),
    m_pingStatusHasBeenSet(false),
    m_lastPingDateTimeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_platformType(PlatformType::NOT_SET),
    m_platformTypeHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_activationIdHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_registrationDateHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_associationStatusHasBeenSet(false),
    m_lastAssociationExecutionDateHasBeenSet(false),
    m_lastSuccessfulAssociationExecutionDateHasBeenSet(false),
    m_associationOverviewHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceProperty& InstanceProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRole"))
  {
    m_instanceRole = jsonValue.GetString("InstanceRole");

    m_instanceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyName"))
  {
    m_keyName = jsonValue.GetString("KeyName");

    m_keyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceState"))
  {
    m_instanceState = jsonValue.GetString("InstanceState");

    m_instanceStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Architecture"))
  {
    m_architecture = jsonValue.GetString("Architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPAddress"))
  {
    m_iPAddress = jsonValue.GetString("IPAddress");

    m_iPAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTime"))
  {
    m_launchTime = jsonValue.GetDouble("LaunchTime");

    m_launchTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PingStatus"))
  {
    m_pingStatus = PingStatusMapper::GetPingStatusForName(jsonValue.GetString("PingStatus"));

    m_pingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastPingDateTime"))
  {
    m_lastPingDateTime = jsonValue.GetDouble("LastPingDateTime");

    m_lastPingDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformType"))
  {
    m_platformType = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("PlatformType"));

    m_platformTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformName"))
  {
    m_platformName = jsonValue.GetString("PlatformName");

    m_platformNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActivationId"))
  {
    m_activationId = jsonValue.GetString("ActivationId");

    m_activationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRole"))
  {
    m_iamRole = jsonValue.GetString("IamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationDate"))
  {
    m_registrationDate = jsonValue.GetDouble("RegistrationDate");

    m_registrationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputerName"))
  {
    m_computerName = jsonValue.GetString("ComputerName");

    m_computerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = jsonValue.GetString("AssociationStatus");

    m_associationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAssociationExecutionDate"))
  {
    m_lastAssociationExecutionDate = jsonValue.GetDouble("LastAssociationExecutionDate");

    m_lastAssociationExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulAssociationExecutionDate"))
  {
    m_lastSuccessfulAssociationExecutionDate = jsonValue.GetDouble("LastSuccessfulAssociationExecutionDate");

    m_lastSuccessfulAssociationExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationOverview"))
  {
    m_associationOverview = jsonValue.GetObject("AssociationOverview");

    m_associationOverviewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceId"))
  {
    m_sourceId = jsonValue.GetString("SourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceProperty::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_instanceRoleHasBeenSet)
  {
   payload.WithString("InstanceRole", m_instanceRole);

  }

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_instanceStateHasBeenSet)
  {
   payload.WithString("InstanceState", m_instanceState);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("Architecture", m_architecture);

  }

  if(m_iPAddressHasBeenSet)
  {
   payload.WithString("IPAddress", m_iPAddress);

  }

  if(m_launchTimeHasBeenSet)
  {
   payload.WithDouble("LaunchTime", m_launchTime.SecondsWithMSPrecision());
  }

  if(m_pingStatusHasBeenSet)
  {
   payload.WithString("PingStatus", PingStatusMapper::GetNameForPingStatus(m_pingStatus));
  }

  if(m_lastPingDateTimeHasBeenSet)
  {
   payload.WithDouble("LastPingDateTime", m_lastPingDateTime.SecondsWithMSPrecision());
  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  if(m_platformTypeHasBeenSet)
  {
   payload.WithString("PlatformType", PlatformTypeMapper::GetNameForPlatformType(m_platformType));
  }

  if(m_platformNameHasBeenSet)
  {
   payload.WithString("PlatformName", m_platformName);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_activationIdHasBeenSet)
  {
   payload.WithString("ActivationId", m_activationId);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("IamRole", m_iamRole);

  }

  if(m_registrationDateHasBeenSet)
  {
   payload.WithDouble("RegistrationDate", m_registrationDate.SecondsWithMSPrecision());
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_computerNameHasBeenSet)
  {
   payload.WithString("ComputerName", m_computerName);

  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("AssociationStatus", m_associationStatus);

  }

  if(m_lastAssociationExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastAssociationExecutionDate", m_lastAssociationExecutionDate.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulAssociationExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulAssociationExecutionDate", m_lastSuccessfulAssociationExecutionDate.SecondsWithMSPrecision());
  }

  if(m_associationOverviewHasBeenSet)
  {
   payload.WithObject("AssociationOverview", m_associationOverview.Jsonize());

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("SourceId", m_sourceId);

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
