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
    AWS_SSM_API InstanceProperty() = default;
    AWS_SSM_API InstanceProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the EC2 <code>Name</code> tag associated with the node. If a
     * <code>Name</code> tag hasn't been applied to the node, this value is blank.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceProperty& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed node.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceProperty& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the managed node. For example, t3.large.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceProperty& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile attached to the node. If an instance profile isn't
     * attached to the node, this value is blank.</p>
     */
    inline const Aws::String& GetInstanceRole() const { return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    template<typename InstanceRoleT = Aws::String>
    void SetInstanceRole(InstanceRoleT&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::forward<InstanceRoleT>(value); }
    template<typename InstanceRoleT = Aws::String>
    InstanceProperty& WithInstanceRole(InstanceRoleT&& value) { SetInstanceRole(std::forward<InstanceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair associated with the node. If a key pair isnt't
     * associated with the node, this value is blank.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    InstanceProperty& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the node.</p>
     */
    inline const Aws::String& GetInstanceState() const { return m_instanceState; }
    inline bool InstanceStateHasBeenSet() const { return m_instanceStateHasBeenSet; }
    template<typename InstanceStateT = Aws::String>
    void SetInstanceState(InstanceStateT&& value) { m_instanceStateHasBeenSet = true; m_instanceState = std::forward<InstanceStateT>(value); }
    template<typename InstanceStateT = Aws::String>
    InstanceProperty& WithInstanceState(InstanceStateT&& value) { SetInstanceState(std::forward<InstanceStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU architecture of the node. For example, <code>x86_64</code>.</p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    InstanceProperty& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public IPv4 address assigned to the node. If a public IPv4 address isn't
     * assigned to the node, this value is blank.</p>
     */
    inline const Aws::String& GetIPAddress() const { return m_iPAddress; }
    inline bool IPAddressHasBeenSet() const { return m_iPAddressHasBeenSet; }
    template<typename IPAddressT = Aws::String>
    void SetIPAddress(IPAddressT&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::forward<IPAddressT>(value); }
    template<typename IPAddressT = Aws::String>
    InstanceProperty& WithIPAddress(IPAddressT&& value) { SetIPAddress(std::forward<IPAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the node was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    void SetLaunchTime(LaunchTimeT&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::forward<LaunchTimeT>(value); }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    InstanceProperty& WithLaunchTime(LaunchTimeT&& value) { SetLaunchTime(std::forward<LaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection status of the SSM Agent on the managed node.</p>
     */
    inline PingStatus GetPingStatus() const { return m_pingStatus; }
    inline bool PingStatusHasBeenSet() const { return m_pingStatusHasBeenSet; }
    inline void SetPingStatus(PingStatus value) { m_pingStatusHasBeenSet = true; m_pingStatus = value; }
    inline InstanceProperty& WithPingStatus(PingStatus value) { SetPingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the SSM Agent last pinged the Systems Manager
     * service.</p>
     */
    inline const Aws::Utils::DateTime& GetLastPingDateTime() const { return m_lastPingDateTime; }
    inline bool LastPingDateTimeHasBeenSet() const { return m_lastPingDateTimeHasBeenSet; }
    template<typename LastPingDateTimeT = Aws::Utils::DateTime>
    void SetLastPingDateTime(LastPingDateTimeT&& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = std::forward<LastPingDateTimeT>(value); }
    template<typename LastPingDateTimeT = Aws::Utils::DateTime>
    InstanceProperty& WithLastPingDateTime(LastPingDateTimeT&& value) { SetLastPingDateTime(std::forward<LastPingDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of SSM Agent running on your managed node.</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    InstanceProperty& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform type of the managed node. For example, Windows
     * Server or Amazon Linux 2.</p>
     */
    inline PlatformType GetPlatformType() const { return m_platformType; }
    inline bool PlatformTypeHasBeenSet() const { return m_platformTypeHasBeenSet; }
    inline void SetPlatformType(PlatformType value) { m_platformTypeHasBeenSet = true; m_platformType = value; }
    inline InstanceProperty& WithPlatformType(PlatformType value) { SetPlatformType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operating system platform running on your managed node.</p>
     */
    inline const Aws::String& GetPlatformName() const { return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    template<typename PlatformNameT = Aws::String>
    void SetPlatformName(PlatformNameT&& value) { m_platformNameHasBeenSet = true; m_platformName = std::forward<PlatformNameT>(value); }
    template<typename PlatformNameT = Aws::String>
    InstanceProperty& WithPlatformName(PlatformNameT&& value) { SetPlatformName(std::forward<PlatformNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the OS platform running on your managed node.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    InstanceProperty& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation ID created by Systems Manager when the server or virtual
     * machine (VM) was registered</p>
     */
    inline const Aws::String& GetActivationId() const { return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    template<typename ActivationIdT = Aws::String>
    void SetActivationId(ActivationIdT&& value) { m_activationIdHasBeenSet = true; m_activationId = std::forward<ActivationIdT>(value); }
    template<typename ActivationIdT = Aws::String>
    InstanceProperty& WithActivationId(ActivationIdT&& value) { SetActivationId(std::forward<ActivationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used in the hybrid activation to register the node with Systems
     * Manager.</p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    InstanceProperty& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the node was registered with Systems Manager.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationDate() const { return m_registrationDate; }
    inline bool RegistrationDateHasBeenSet() const { return m_registrationDateHasBeenSet; }
    template<typename RegistrationDateT = Aws::Utils::DateTime>
    void SetRegistrationDate(RegistrationDateT&& value) { m_registrationDateHasBeenSet = true; m_registrationDate = std::forward<RegistrationDateT>(value); }
    template<typename RegistrationDateT = Aws::Utils::DateTime>
    InstanceProperty& WithRegistrationDate(RegistrationDateT&& value) { SetRegistrationDate(std::forward<RegistrationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of managed node.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    InstanceProperty& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified host name of the managed node.</p>
     */
    inline const Aws::String& GetComputerName() const { return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    template<typename ComputerNameT = Aws::String>
    void SetComputerName(ComputerNameT&& value) { m_computerNameHasBeenSet = true; m_computerName = std::forward<ComputerNameT>(value); }
    template<typename ComputerNameT = Aws::String>
    InstanceProperty& WithComputerName(ComputerNameT&& value) { SetComputerName(std::forward<ComputerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the State Manager association applied to the managed node.</p>
     */
    inline const Aws::String& GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    template<typename AssociationStatusT = Aws::String>
    void SetAssociationStatus(AssociationStatusT&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::forward<AssociationStatusT>(value); }
    template<typename AssociationStatusT = Aws::String>
    InstanceProperty& WithAssociationStatus(AssociationStatusT&& value) { SetAssociationStatus(std::forward<AssociationStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAssociationExecutionDate() const { return m_lastAssociationExecutionDate; }
    inline bool LastAssociationExecutionDateHasBeenSet() const { return m_lastAssociationExecutionDateHasBeenSet; }
    template<typename LastAssociationExecutionDateT = Aws::Utils::DateTime>
    void SetLastAssociationExecutionDate(LastAssociationExecutionDateT&& value) { m_lastAssociationExecutionDateHasBeenSet = true; m_lastAssociationExecutionDate = std::forward<LastAssociationExecutionDateT>(value); }
    template<typename LastAssociationExecutionDateT = Aws::Utils::DateTime>
    InstanceProperty& WithLastAssociationExecutionDate(LastAssociationExecutionDateT&& value) { SetLastAssociationExecutionDate(std::forward<LastAssociationExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulAssociationExecutionDate() const { return m_lastSuccessfulAssociationExecutionDate; }
    inline bool LastSuccessfulAssociationExecutionDateHasBeenSet() const { return m_lastSuccessfulAssociationExecutionDateHasBeenSet; }
    template<typename LastSuccessfulAssociationExecutionDateT = Aws::Utils::DateTime>
    void SetLastSuccessfulAssociationExecutionDate(LastSuccessfulAssociationExecutionDateT&& value) { m_lastSuccessfulAssociationExecutionDateHasBeenSet = true; m_lastSuccessfulAssociationExecutionDate = std::forward<LastSuccessfulAssociationExecutionDateT>(value); }
    template<typename LastSuccessfulAssociationExecutionDateT = Aws::Utils::DateTime>
    InstanceProperty& WithLastSuccessfulAssociationExecutionDate(LastSuccessfulAssociationExecutionDateT&& value) { SetLastSuccessfulAssociationExecutionDate(std::forward<LastSuccessfulAssociationExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const InstanceAggregatedAssociationOverview& GetAssociationOverview() const { return m_associationOverview; }
    inline bool AssociationOverviewHasBeenSet() const { return m_associationOverviewHasBeenSet; }
    template<typename AssociationOverviewT = InstanceAggregatedAssociationOverview>
    void SetAssociationOverview(AssociationOverviewT&& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = std::forward<AssociationOverviewT>(value); }
    template<typename AssociationOverviewT = InstanceAggregatedAssociationOverview>
    InstanceProperty& WithAssociationOverview(AssociationOverviewT&& value) { SetAssociationOverview(std::forward<AssociationOverviewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source resource.</p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    InstanceProperty& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source resource.</p>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline InstanceProperty& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
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

    Aws::Utils::DateTime m_launchTime{};
    bool m_launchTimeHasBeenSet = false;

    PingStatus m_pingStatus{PingStatus::NOT_SET};
    bool m_pingStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastPingDateTime{};
    bool m_lastPingDateTimeHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    PlatformType m_platformType{PlatformType::NOT_SET};
    bool m_platformTypeHasBeenSet = false;

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet = false;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet = false;

    Aws::Utils::DateTime m_registrationDate{};
    bool m_registrationDateHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet = false;

    Aws::String m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastAssociationExecutionDate{};
    bool m_lastAssociationExecutionDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulAssociationExecutionDate{};
    bool m_lastSuccessfulAssociationExecutionDateHasBeenSet = false;

    InstanceAggregatedAssociationOverview m_associationOverview;
    bool m_associationOverviewHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    SourceType m_sourceType{SourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
