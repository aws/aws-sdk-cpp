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
    AWS_SSM_API InstanceInformation();
    AWS_SSM_API InstanceInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The managed node ID. </p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceInformation& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceInformation& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceInformation& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection status of SSM Agent. </p>  <p>The status
     * <code>Inactive</code> has been deprecated and is no longer in use.</p> 
     */
    inline const PingStatus& GetPingStatus() const{ return m_pingStatus; }
    inline bool PingStatusHasBeenSet() const { return m_pingStatusHasBeenSet; }
    inline void SetPingStatus(const PingStatus& value) { m_pingStatusHasBeenSet = true; m_pingStatus = value; }
    inline void SetPingStatus(PingStatus&& value) { m_pingStatusHasBeenSet = true; m_pingStatus = std::move(value); }
    inline InstanceInformation& WithPingStatus(const PingStatus& value) { SetPingStatus(value); return *this;}
    inline InstanceInformation& WithPingStatus(PingStatus&& value) { SetPingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the agent last pinged the Systems Manager service.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastPingDateTime() const{ return m_lastPingDateTime; }
    inline bool LastPingDateTimeHasBeenSet() const { return m_lastPingDateTimeHasBeenSet; }
    inline void SetLastPingDateTime(const Aws::Utils::DateTime& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = value; }
    inline void SetLastPingDateTime(Aws::Utils::DateTime&& value) { m_lastPingDateTimeHasBeenSet = true; m_lastPingDateTime = std::move(value); }
    inline InstanceInformation& WithLastPingDateTime(const Aws::Utils::DateTime& value) { SetLastPingDateTime(value); return *this;}
    inline InstanceInformation& WithLastPingDateTime(Aws::Utils::DateTime&& value) { SetLastPingDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of SSM Agent running on your Linux managed node. </p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline InstanceInformation& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline InstanceInformation& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline InstanceInformation& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the latest version of SSM Agent is running on your Linux
     * managed node. This field doesn't indicate whether or not the latest version is
     * installed on Windows managed nodes, because some older versions of Windows
     * Server use the EC2Config service to process Systems Manager requests.</p>
     */
    inline bool GetIsLatestVersion() const{ return m_isLatestVersion; }
    inline bool IsLatestVersionHasBeenSet() const { return m_isLatestVersionHasBeenSet; }
    inline void SetIsLatestVersion(bool value) { m_isLatestVersionHasBeenSet = true; m_isLatestVersion = value; }
    inline InstanceInformation& WithIsLatestVersion(bool value) { SetIsLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system platform type. </p>
     */
    inline const PlatformType& GetPlatformType() const{ return m_platformType; }
    inline bool PlatformTypeHasBeenSet() const { return m_platformTypeHasBeenSet; }
    inline void SetPlatformType(const PlatformType& value) { m_platformTypeHasBeenSet = true; m_platformType = value; }
    inline void SetPlatformType(PlatformType&& value) { m_platformTypeHasBeenSet = true; m_platformType = std::move(value); }
    inline InstanceInformation& WithPlatformType(const PlatformType& value) { SetPlatformType(value); return *this;}
    inline InstanceInformation& WithPlatformType(PlatformType&& value) { SetPlatformType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the operating system platform running on your managed node. </p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }
    inline InstanceInformation& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}
    inline InstanceInformation& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}
    inline InstanceInformation& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the OS platform running on your managed node. </p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline InstanceInformation& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline InstanceInformation& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline InstanceInformation& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activation ID created by Amazon Web Services Systems Manager when the
     * server or virtual machine (VM) was registered.</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }
    inline void SetActivationId(const Aws::String& value) { m_activationIdHasBeenSet = true; m_activationId = value; }
    inline void SetActivationId(Aws::String&& value) { m_activationIdHasBeenSet = true; m_activationId = std::move(value); }
    inline void SetActivationId(const char* value) { m_activationIdHasBeenSet = true; m_activationId.assign(value); }
    inline InstanceInformation& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}
    inline InstanceInformation& WithActivationId(Aws::String&& value) { SetActivationId(std::move(value)); return *this;}
    inline InstanceInformation& WithActivationId(const char* value) { SetActivationId(value); return *this;}
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
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }
    inline InstanceInformation& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}
    inline InstanceInformation& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}
    inline InstanceInformation& WithIamRole(const char* value) { SetIamRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the server or VM was registered with Amazon Web Services as a
     * managed node.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationDate() const{ return m_registrationDate; }
    inline bool RegistrationDateHasBeenSet() const { return m_registrationDateHasBeenSet; }
    inline void SetRegistrationDate(const Aws::Utils::DateTime& value) { m_registrationDateHasBeenSet = true; m_registrationDate = value; }
    inline void SetRegistrationDate(Aws::Utils::DateTime&& value) { m_registrationDateHasBeenSet = true; m_registrationDate = std::move(value); }
    inline InstanceInformation& WithRegistrationDate(const Aws::Utils::DateTime& value) { SetRegistrationDate(value); return *this;}
    inline InstanceInformation& WithRegistrationDate(Aws::Utils::DateTime&& value) { SetRegistrationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance. Instances are either EC2 instances or managed
     * instances. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline InstanceInformation& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline InstanceInformation& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InstanceInformation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InstanceInformation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InstanceInformation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the managed node.</p>
     */
    inline const Aws::String& GetIPAddress() const{ return m_iPAddress; }
    inline bool IPAddressHasBeenSet() const { return m_iPAddressHasBeenSet; }
    inline void SetIPAddress(const Aws::String& value) { m_iPAddressHasBeenSet = true; m_iPAddress = value; }
    inline void SetIPAddress(Aws::String&& value) { m_iPAddressHasBeenSet = true; m_iPAddress = std::move(value); }
    inline void SetIPAddress(const char* value) { m_iPAddressHasBeenSet = true; m_iPAddress.assign(value); }
    inline InstanceInformation& WithIPAddress(const Aws::String& value) { SetIPAddress(value); return *this;}
    inline InstanceInformation& WithIPAddress(Aws::String&& value) { SetIPAddress(std::move(value)); return *this;}
    inline InstanceInformation& WithIPAddress(const char* value) { SetIPAddress(value); return *this;}
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
    inline InstanceInformation& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}
    inline InstanceInformation& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}
    inline InstanceInformation& WithComputerName(const char* value) { SetComputerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the association.</p>
     */
    inline const Aws::String& GetAssociationStatus() const{ return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(const Aws::String& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline void SetAssociationStatus(Aws::String&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }
    inline void SetAssociationStatus(const char* value) { m_associationStatusHasBeenSet = true; m_associationStatus.assign(value); }
    inline InstanceInformation& WithAssociationStatus(const Aws::String& value) { SetAssociationStatus(value); return *this;}
    inline InstanceInformation& WithAssociationStatus(Aws::String&& value) { SetAssociationStatus(std::move(value)); return *this;}
    inline InstanceInformation& WithAssociationStatus(const char* value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAssociationExecutionDate() const{ return m_lastAssociationExecutionDate; }
    inline bool LastAssociationExecutionDateHasBeenSet() const { return m_lastAssociationExecutionDateHasBeenSet; }
    inline void SetLastAssociationExecutionDate(const Aws::Utils::DateTime& value) { m_lastAssociationExecutionDateHasBeenSet = true; m_lastAssociationExecutionDate = value; }
    inline void SetLastAssociationExecutionDate(Aws::Utils::DateTime&& value) { m_lastAssociationExecutionDateHasBeenSet = true; m_lastAssociationExecutionDate = std::move(value); }
    inline InstanceInformation& WithLastAssociationExecutionDate(const Aws::Utils::DateTime& value) { SetLastAssociationExecutionDate(value); return *this;}
    inline InstanceInformation& WithLastAssociationExecutionDate(Aws::Utils::DateTime&& value) { SetLastAssociationExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date the association was successfully run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulAssociationExecutionDate() const{ return m_lastSuccessfulAssociationExecutionDate; }
    inline bool LastSuccessfulAssociationExecutionDateHasBeenSet() const { return m_lastSuccessfulAssociationExecutionDateHasBeenSet; }
    inline void SetLastSuccessfulAssociationExecutionDate(const Aws::Utils::DateTime& value) { m_lastSuccessfulAssociationExecutionDateHasBeenSet = true; m_lastSuccessfulAssociationExecutionDate = value; }
    inline void SetLastSuccessfulAssociationExecutionDate(Aws::Utils::DateTime&& value) { m_lastSuccessfulAssociationExecutionDateHasBeenSet = true; m_lastSuccessfulAssociationExecutionDate = std::move(value); }
    inline InstanceInformation& WithLastSuccessfulAssociationExecutionDate(const Aws::Utils::DateTime& value) { SetLastSuccessfulAssociationExecutionDate(value); return *this;}
    inline InstanceInformation& WithLastSuccessfulAssociationExecutionDate(Aws::Utils::DateTime&& value) { SetLastSuccessfulAssociationExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const InstanceAggregatedAssociationOverview& GetAssociationOverview() const{ return m_associationOverview; }
    inline bool AssociationOverviewHasBeenSet() const { return m_associationOverviewHasBeenSet; }
    inline void SetAssociationOverview(const InstanceAggregatedAssociationOverview& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = value; }
    inline void SetAssociationOverview(InstanceAggregatedAssociationOverview&& value) { m_associationOverviewHasBeenSet = true; m_associationOverview = std::move(value); }
    inline InstanceInformation& WithAssociationOverview(const InstanceAggregatedAssociationOverview& value) { SetAssociationOverview(value); return *this;}
    inline InstanceInformation& WithAssociationOverview(InstanceAggregatedAssociationOverview&& value) { SetAssociationOverview(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source resource. For IoT Greengrass devices,
     * <code>SourceId</code> is the Thing name. </p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline InstanceInformation& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline InstanceInformation& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline InstanceInformation& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source resource. For IoT Greengrass devices,
     * <code>SourceType</code> is <code>AWS::IoT::Thing</code>. </p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline InstanceInformation& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}
    inline InstanceInformation& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    PingStatus m_pingStatus;
    bool m_pingStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastPingDateTime;
    bool m_lastPingDateTimeHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    bool m_isLatestVersion;
    bool m_isLatestVersionHasBeenSet = false;

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

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_iPAddress;
    bool m_iPAddressHasBeenSet = false;

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
