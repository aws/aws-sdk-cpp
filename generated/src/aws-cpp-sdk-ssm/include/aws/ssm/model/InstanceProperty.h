/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PingStatus.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/InstanceAggregatedAssociationOverview.h>
#include <aws/ssm/model/SourceType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An object containing various properties of a managed node.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceProperty">AWS
   * API Reference</a></p>
   */
  class InstanceProperty
  {
  public:
    AWS_SSM_API InstanceProperty();
    AWS_SSM_API InstanceProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the EC2 <code>Name</code> tag associated with the node. If a
     * <code>Name</code> tag hasn't been applied to the node, this value is blank.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceProperty& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceProperty& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed node.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceProperty& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceProperty& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceProperty& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the managed node. For example, t3.large.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline InstanceProperty& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline InstanceProperty& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline InstanceProperty& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile attached to the node. If an instance profile isn't
     * attached to the node, this value is blank.</p>
     */
    inline const Aws::String& GetInstanceRole() const{ return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    inline void SetInstanceRole(const Aws::String& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }
    inline void SetInstanceRole(Aws::String&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }
    inline void SetInstanceRole(const char* value) { m_instanceRoleHasBeenSet = true; m_instanceRole.assign(value); }
    inline InstanceProperty& WithInstanceRole(const Aws::String& value) { SetInstanceRole(value); return *this;}
    inline InstanceProperty& WithInstanceRole(Aws::String&& value) { SetInstanceRole(std::move(value)); return *this;}
    inline InstanceProperty& WithInstanceRole(const char* value) { SetInstanceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair associated with the node. If a key pair isnt't
     * associated with the node, this value is blank.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline InstanceProperty& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline InstanceProperty& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline InstanceProperty& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the node.</p>
     */
    inline const Aws::String& GetInstanceState() const{ return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    inline void SetInstanceState(const Aws::String& value) { m_instanceStateHasBeenSet = true; m_instanceState = value; }
    inline void SetInstanceState(Aws::String&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::move(value); }
    inline void SetInstanceState(const char* value) { m_instanceStateHasBeenSet = true; m_instanceState.assign(value); }
    inline InstanceProperty& WithInstanceState(const Aws::String& value) { SetInstanceState(value); return *this;}
    inline InstanceProperty& WithInstanceState(Aws::String&& value) { SetInstanceState(std::move(value)); return *this;}
    inline InstanceProperty& WithInstanceState(const char* value) { SetInstanceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture of the node. For example, <code>x86_64</code>.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline InstanceProperty& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline InstanceProperty& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline InstanceProperty& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IPv4 address assigned to the node. If a public IPv4 address isn't
     * assigned to the node, this value is blank.</p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }
    inline bool IPAddressHasBeenSet() const { return m_iPAddressHasBeenSet; }
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::move(value); }
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }
    inline InstanceProperty& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}
    inline InstanceProperty& WithIPAddress(Aws::String&& value) { SetIPAddress(std::move(value)); return *this;}
    inline InstanceProperty& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the node was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }
    inline InstanceProperty& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}
    inline InstanceProperty& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection status of the SSM Agent on the managed node.</p>
     */
    inline const PingStatus& GetPingStatus() const{ return m_pingStatus; }
    inline bool PingStatusHasBeenSet() const { return m_pingStatusHasBeenSet; }
    inline void SetPingStatus(const PingStatus& value) { m_pingStatusHasBeenSet = true; m_pingStatus = value; }
    inline void SetPingStatus(PingStatus&& value) { m_pingStatusHasBeenSet = true; m_pingStatus = std::move(value); }
    inline InstanceProperty& WithPingStatus(const PingStatus& value) { SetPingStatus(value); return *this;}
    inline InstanceProperty& WithPingStatus(PingStatus&& value) { SetPingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the SSM Agent last pinged the Systems Manager
     * service.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPingDateTime() const{ return m_lastPingDateTime; }
    inline bool LastPingDateTimeHasBeenSet() const { return m_lastPingDateTimeHasBeenSet; }
    inline void SetLastPingDateTime(const Aws::Utils::DateTime& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = value; }
    inline void SetLastPingDateTime(Aws::Utils::DateTime&& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = std::move(value); }
    inline InstanceProperty& WithLastPingDateTime(const Aws::Utils::DateTime& value) { SetLastPingDateTime(value); return *this;}
    inline InstanceProperty& WithLastPingDateTime(Aws::Utils::DateTime&& value) { SetLastPingDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of SSM Agent running on your managed node.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline InstanceProperty& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline InstanceProperty& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline InstanceProperty& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform type of the managed node. For example,
     * Windows.</p>
     */
    inline const PlatformType& GetPlatformType() const{ return m_platformType; }
    inline bool PlatformTypeHasBeenSet() const { return m_platformTypeHasBeenSet; }
    inline void SetPlatformType(const PlatformType& value) { m_platformTypeHasBeenSet = true; m_platformType = value; }
    inline void SetPlatformType(PlatformType&& value) { m_platformTypeHasBeenSet = true; m_platformType = std::move(value); }
    inline InstanceProperty& WithPlatformType(const PlatformType& value) { SetPlatformType(value); return *this;}
    inline InstanceProperty& WithPlatformType(PlatformType&& value) { SetPlatformType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operating system platform running on your managed node.</p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }
    inline InstanceProperty& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}
    inline InstanceProperty& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}
    inline InstanceProperty& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the OS platform running on your managed node.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline InstanceProperty& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline InstanceProperty& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline InstanceProperty& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation ID created by Systems Manager when the server or virtual
     * machine (VM) was registered</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    inline void SetActivationId(const Aws::String& value) { m_activationIdHasBeenSet = true; m_activationId = value; }
    inline void SetActivationId(Aws::String&& value) { m_activationIdHasBeenSet = true; m_activationId = std::move(value); }
    inline void SetActivationId(const char* value) { m_activationIdHasBeenSet = true; m_activationId.assign(value); }
    inline InstanceProperty& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}
    inline InstanceProperty& WithActivationId(Aws::String&& value) { SetActivationId(std::move(value)); return *this;}
    inline InstanceProperty& WithActivationId(const char* value) { SetActivationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used in the hybrid activation to register the node with Systems
     * Manager.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }
    inline InstanceProperty& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}
    inline InstanceProperty& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}
    inline InstanceProperty& WithIamRole(const char* value) { SetIamRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the node was registered with Systems Manager.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationDate() const{ return m_registrationDate; }
    inline bool RegistrationDateHasBeenSet() const { return m_registrationDateHasBeenSet; }
    inline void SetRegistrationDate(const Aws::Utils::DateTime& value) { m_registrationDateHasBeenSet = true; m_registrationDate = value; }
    inline void SetRegistrationDate(Aws::Utils::DateTime&& value) { m_registrationDateHasBeenSet = true; m_registrationDate = std::move(value); }
    inline InstanceProperty& WithRegistrationDate(const Aws::Utils::DateTime& value) { SetRegistrationDate(value); return *this;}
    inline InstanceProperty& WithRegistrationDate(Aws::Utils::DateTime&& value) { SetRegistrationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of managed node.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline InstanceProperty& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline InstanceProperty& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline InstanceProperty& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified host name of the managed node.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }
    inline InstanceProperty& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}
    inline InstanceProperty& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}
    inline InstanceProperty& WithComputerName(const char* value) { SetComputerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the State Manager association applied to the managed node.</p>
     */
    inline const Aws::String& GetAssociationStatus() const{ return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(const Aws::String& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline void SetAssociationStatus(Aws::String&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }
    inline void SetAssociationStatus(const char* value) { m_associationStatusHasBeenSet = true; m_associationStatus.assign(value); }
    inline InstanceProperty& WithAssociationStatus(const Aws::String& value) { SetAssociationStatus(value); return *this;}
    inline InstanceProperty& WithAssociationStatus(Aws::String&& value) { SetAssociationStatus(std::move(value)); return *this;}
    inline InstanceProperty& WithAssociationStatus(const char* value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAssociationExecutionDate() const{ return m_lastAssociationExecutionDate; }
    inline bool LastAssociationExecutionDateHasBeenSet() const { return m_lastAssociationExecutionDateHasBeenSet; }
    inline void SetLastAssociationExecutionDate(const Aws::Utils::DateTime& value) { m_lastAssociationExecutionDateHasBeenSet = true; m_lastAssociationExecutionDate = value; }
    inline void SetLastAssociationExecutionDate(Aws::Utils::DateTime&& value) { m_lastAssociationExecutionDateHasBeenSet = true; m_lastAssociationExecutionDate = std::move(value); }
    inline InstanceProperty& WithLastAssociationExecutionDate(const Aws::Utils::DateTime& value) { SetLastAssociationExecutionDate(value); return *this;}
    inline InstanceProperty& WithLastAssociationExecutionDate(Aws::Utils::DateTime&& value) { SetLastAssociationExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulAssociationExecutionDate() const{ return m_lastSuccessfulAssociationExecutionDate; }
    inline bool LastSuccessfulAssociationExecutionDateHasBeenSet() const { return m_lastSuccessfulAssociationExecutionDateHasBeenSet; }
    inline void SetLastSuccessfulAssociationExecutionDate(const Aws::Utils::DateTime& value) { m_lastSuccessfulAssociationExecutionDateHasBeenSet = true; m_lastSuccessfulAssociationExecutionDate = value; }
    inline void SetLastSuccessfulAssociationExecutionDate(Aws::Utils::DateTime&& value) { m_lastSuccessfulAssociationExecutionDateHasBeenSet = true; m_lastSuccessfulAssociationExecutionDate = std::move(value); }
    inline InstanceProperty& WithLastSuccessfulAssociationExecutionDate(const Aws::Utils::DateTime& value) { SetLastSuccessfulAssociationExecutionDate(value); return *this;}
    inline InstanceProperty& WithLastSuccessfulAssociationExecutionDate(Aws::Utils::DateTime&& value) { SetLastSuccessfulAssociationExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const InstanceAggregatedAssociationOverview& GetAssociationOverview() const{ return m_associationOverview; }
    inline bool AssociationOverviewHasBeenSet() const { return m_associationOverviewHasBeenSet; }
    inline void SetAssociationOverview(const InstanceAggregatedAssociationOverview& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = value; }
    inline void SetAssociationOverview(InstanceAggregatedAssociationOverview&& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = std::move(value); }
    inline InstanceProperty& WithAssociationOverview(const InstanceAggregatedAssociationOverview& value) { SetAssociationOverview(value); return *this;}
    inline InstanceProperty& WithAssociationOverview(InstanceAggregatedAssociationOverview&& value) { SetAssociationOverview(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source resource.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline InstanceProperty& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline InstanceProperty& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline InstanceProperty& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source resource.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline InstanceProperty& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}
    inline InstanceProperty& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_instanceRole;
    bool m_instanceRoleHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_instanceState;
    bool m_instanceStateHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    PingStatus m_pingStatus;
    bool m_pingStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastPingDateTime;
    bool m_lastPingDateTimeHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    PlatformType m_platformType;
    bool m_platformTypeHasBeenSet = false;

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Utils::DateTime m_registrationDate;
    bool m_registrationDateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet = false;

    Aws::String m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastAssociationExecutionDate;
    bool m_lastAssociationExecutionDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulAssociationExecutionDate;
    bool m_lastSuccessfulAssociationExecutionDateHasBeenSet = false;

    InstanceAggregatedAssociationOverview m_associationOverview;
    bool m_associationOverviewHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
