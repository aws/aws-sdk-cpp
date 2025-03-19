/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PingStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/PlatformType.h>
#include <aws/ssm/model/ResourceType.h>
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
   * <p>Describes a filter for a specific list of managed nodes. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceInformation">AWS
   * API Reference</a></p>
   */
  class InstanceInformation
  {
  public:
    AWS_SSM_API InstanceInformation() = default;
    AWS_SSM_API InstanceInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The managed node ID. </p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceInformation& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection status of SSM Agent. </p>  <p>The status
     * <code>Inactive</code> has been deprecated and is no longer in use.</p> 
     */
    inline PingStatus GetPingStatus() const { return m_pingStatus; }
    inline bool PingStatusHasBeenSet() const { return m_pingStatusHasBeenSet; }
    inline void SetPingStatus(PingStatus value) { m_pingStatusHasBeenSet = true; m_pingStatus = value; }
    inline InstanceInformation& WithPingStatus(PingStatus value) { SetPingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agent last pinged the Systems Manager service.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastPingDateTime() const { return m_lastPingDateTime; }
    inline bool LastPingDateTimeHasBeenSet() const { return m_lastPingDateTimeHasBeenSet; }
    template<typename LastPingDateTimeT = Aws::Utils::DateTime>
    void SetLastPingDateTime(LastPingDateTimeT&& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = std::forward<LastPingDateTimeT>(value); }
    template<typename LastPingDateTimeT = Aws::Utils::DateTime>
    InstanceInformation& WithLastPingDateTime(LastPingDateTimeT&& value) { SetLastPingDateTime(std::forward<LastPingDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of SSM Agent running on your Linux managed node. </p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    InstanceInformation& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the latest version of SSM Agent is running on your Linux
     * managed node. This field doesn't indicate whether or not the latest version is
     * installed on Windows managed nodes, because some older versions of Windows
     * Server use the EC2Config service to process Systems Manager requests.</p>
     */
    inline bool GetIsLatestVersion() const { return m_isLatestVersion; }
    inline bool IsLatestVersionHasBeenSet() const { return m_isLatestVersionHasBeenSet; }
    inline void SetIsLatestVersion(bool value) { m_isLatestVersionHasBeenSet = true; m_isLatestVersion = value; }
    inline InstanceInformation& WithIsLatestVersion(bool value) { SetIsLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform type.</p>
     */
    inline PlatformType GetPlatformType() const { return m_platformType; }
    inline bool PlatformTypeHasBeenSet() const { return m_platformTypeHasBeenSet; }
    inline void SetPlatformType(PlatformType value) { m_platformTypeHasBeenSet = true; m_platformType = value; }
    inline InstanceInformation& WithPlatformType(PlatformType value) { SetPlatformType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operating system platform running on your managed node. </p>
     */
    inline const Aws::String& GetPlatformName() const { return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    template<typename PlatformNameT = Aws::String>
    void SetPlatformName(PlatformNameT&& value) { m_platformNameHasBeenSet = true; m_platformName = std::forward<PlatformNameT>(value); }
    template<typename PlatformNameT = Aws::String>
    InstanceInformation& WithPlatformName(PlatformNameT&& value) { SetPlatformName(std::forward<PlatformNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the OS platform running on your managed node. </p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    InstanceInformation& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation ID created by Amazon Web Services Systems Manager when the
     * server or virtual machine (VM) was registered.</p>
     */
    inline const Aws::String& GetActivationId() const { return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    template<typename ActivationIdT = Aws::String>
    void SetActivationId(ActivationIdT&& value) { m_activationIdHasBeenSet = true; m_activationId = std::forward<ActivationIdT>(value); }
    template<typename ActivationIdT = Aws::String>
    InstanceInformation& WithActivationId(ActivationIdT&& value) { SetActivationId(std::forward<ActivationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role assigned to an Amazon EC2 instance configured with a Systems Manager
     * Quick Setup host management configuration or the role assigned to an on-premises
     * managed node.</p> <p> This call doesn't return the IAM role for <i>unmanaged</i>
     * Amazon EC2 instances (instances not configured for Systems Manager). To retrieve
     * the role for an unmanaged instance, use the Amazon EC2
     * <code>DescribeInstances</code> operation. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * in the <i>Amazon EC2 API Reference</i> or <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-instances.html">describe-instances</a>
     * in the <i>Amazon Web Services CLI Command Reference</i>.</p>
     */
    inline const Aws::String& GetIamRole() const { return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    template<typename IamRoleT = Aws::String>
    void SetIamRole(IamRoleT&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::forward<IamRoleT>(value); }
    template<typename IamRoleT = Aws::String>
    InstanceInformation& WithIamRole(IamRoleT&& value) { SetIamRole(std::forward<IamRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the server or VM was registered with Amazon Web Services as a
     * managed node.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationDate() const { return m_registrationDate; }
    inline bool RegistrationDateHasBeenSet() const { return m_registrationDateHasBeenSet; }
    template<typename RegistrationDateT = Aws::Utils::DateTime>
    void SetRegistrationDate(RegistrationDateT&& value) { m_registrationDateHasBeenSet = true; m_registrationDate = std::forward<RegistrationDateT>(value); }
    template<typename RegistrationDateT = Aws::Utils::DateTime>
    InstanceInformation& WithRegistrationDate(RegistrationDateT&& value) { SetRegistrationDate(std::forward<RegistrationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance. Instances are either EC2 instances or managed
     * instances. </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline InstanceInformation& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name assigned to an on-premises server, edge device, or virtual machine
     * (VM) when it is activated as a Systems Manager managed node. The name is
     * specified as the <code>DefaultInstanceName</code> property using the
     * <a>CreateActivation</a> command. It is applied to the managed node by specifying
     * the Activation Code and Activation ID when you install SSM Agent on the node, as
     * explained in <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/hybrid-multicloud-ssm-agent-install-linux.html">How
     * to install SSM Agent on hybrid Linux nodes</a> and <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/hybrid-multicloud-ssm-agent-install-windows.html">How
     * to install SSM Agent on hybrid Windows Server nodes</a>. To retrieve the
     * <code>Name</code> tag of an EC2 instance, use the Amazon EC2
     * <code>DescribeInstances</code> operation. For information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeInstances.html">DescribeInstances</a>
     * in the <i>Amazon EC2 API Reference</i> or <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/describe-instances.html">describe-instances</a>
     * in the <i>Amazon Web Services CLI Command Reference</i>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InstanceInformation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the managed node.</p>
     */
    inline const Aws::String& GetIPAddress() const { return m_iPAddress; }
    inline bool IPAddressHasBeenSet() const { return m_iPAddressHasBeenSet; }
    template<typename IPAddressT = Aws::String>
    void SetIPAddress(IPAddressT&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::forward<IPAddressT>(value); }
    template<typename IPAddressT = Aws::String>
    InstanceInformation& WithIPAddress(IPAddressT&& value) { SetIPAddress(std::forward<IPAddressT>(value)); return *this;}
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
    InstanceInformation& WithComputerName(ComputerNameT&& value) { SetComputerName(std::forward<ComputerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the association.</p>
     */
    inline const Aws::String& GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    template<typename AssociationStatusT = Aws::String>
    void SetAssociationStatus(AssociationStatusT&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::forward<AssociationStatusT>(value); }
    template<typename AssociationStatusT = Aws::String>
    InstanceInformation& WithAssociationStatus(AssociationStatusT&& value) { SetAssociationStatus(std::forward<AssociationStatusT>(value)); return *this;}
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
    InstanceInformation& WithLastAssociationExecutionDate(LastAssociationExecutionDateT&& value) { SetLastAssociationExecutionDate(std::forward<LastAssociationExecutionDateT>(value)); return *this;}
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
    InstanceInformation& WithLastSuccessfulAssociationExecutionDate(LastSuccessfulAssociationExecutionDateT&& value) { SetLastSuccessfulAssociationExecutionDate(std::forward<LastSuccessfulAssociationExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const InstanceAggregatedAssociationOverview& GetAssociationOverview() const { return m_associationOverview; }
    inline bool AssociationOverviewHasBeenSet() const { return m_associationOverviewHasBeenSet; }
    template<typename AssociationOverviewT = InstanceAggregatedAssociationOverview>
    void SetAssociationOverview(AssociationOverviewT&& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = std::forward<AssociationOverviewT>(value); }
    template<typename AssociationOverviewT = InstanceAggregatedAssociationOverview>
    InstanceInformation& WithAssociationOverview(AssociationOverviewT&& value) { SetAssociationOverview(std::forward<AssociationOverviewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source resource. For IoT Greengrass devices,
     * <code>SourceId</code> is the Thing name. </p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    InstanceInformation& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source resource. For IoT Greengrass devices,
     * <code>SourceType</code> is <code>AWS::IoT::Thing</code>. </p>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline InstanceInformation& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    PingStatus m_pingStatus{PingStatus::NOT_SET};
    bool m_pingStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastPingDateTime{};
    bool m_lastPingDateTimeHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    bool m_isLatestVersion{false};
    bool m_isLatestVersionHasBeenSet = false;

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

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet = false;

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
