/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCloudFormationStackDriftInformationDetails.h>
#include <aws/securityhub/model/AwsCloudFormationStackOutputsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Nests a stack as a resource in a top-level template. Nested stacks are stacks
   * created as resources for another stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFormationStackDetails">AWS
   * API Reference</a></p>
   */
  class AwsCloudFormationStackDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFormationStackDetails() = default;
    AWS_SECURITYHUB_API AwsCloudFormationStackDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFormationStackDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    AwsCloudFormationStackDetails& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = Aws::String>
    AwsCloudFormationStackDetails& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the stack was created. </p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    AwsCloudFormationStackDetails& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsCloudFormationStackDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean to enable or disable rollback on stack creation failures. </p>
     */
    inline bool GetDisableRollback() const { return m_disableRollback; }
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }
    inline AwsCloudFormationStackDetails& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * drifted, from its expected configuration, as defined in the stack template and
     * any values specified as template parameters. </p>
     */
    inline const AwsCloudFormationStackDriftInformationDetails& GetDriftInformation() const { return m_driftInformation; }
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }
    template<typename DriftInformationT = AwsCloudFormationStackDriftInformationDetails>
    void SetDriftInformation(DriftInformationT&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::forward<DriftInformationT>(value); }
    template<typename DriftInformationT = AwsCloudFormationStackDriftInformationDetails>
    AwsCloudFormationStackDetails& WithDriftInformation(DriftInformationT&& value) { SetDriftInformation(std::forward<DriftInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether termination protection is enabled for the stack. </p>
     */
    inline bool GetEnableTerminationProtection() const { return m_enableTerminationProtection; }
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }
    inline AwsCloudFormationStackDetails& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    AwsCloudFormationStackDetails& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const { return m_notificationArns; }
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    void SetNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::forward<NotificationArnsT>(value); }
    template<typename NotificationArnsT = Aws::Vector<Aws::String>>
    AwsCloudFormationStackDetails& WithNotificationArns(NotificationArnsT&& value) { SetNotificationArns(std::forward<NotificationArnsT>(value)); return *this;}
    template<typename NotificationArnsT = Aws::String>
    AwsCloudFormationStackDetails& AddNotificationArns(NotificationArnsT&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.emplace_back(std::forward<NotificationArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of output structures. </p>
     */
    inline const Aws::Vector<AwsCloudFormationStackOutputsDetails>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<AwsCloudFormationStackOutputsDetails>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<AwsCloudFormationStackOutputsDetails>>
    AwsCloudFormationStackDetails& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = AwsCloudFormationStackOutputsDetails>
    AwsCloudFormationStackDetails& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AwsCloudFormationStackDetails& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    AwsCloudFormationStackDetails& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name associated with the stack. </p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    AwsCloudFormationStackDetails& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the stack. </p>
     */
    inline const Aws::String& GetStackStatus() const { return m_stackStatus; }
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }
    template<typename StackStatusT = Aws::String>
    void SetStackStatus(StackStatusT&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = std::forward<StackStatusT>(value); }
    template<typename StackStatusT = Aws::String>
    AwsCloudFormationStackDetails& WithStackStatus(StackStatusT&& value) { SetStackStatus(std::forward<StackStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline const Aws::String& GetStackStatusReason() const { return m_stackStatusReason; }
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }
    template<typename StackStatusReasonT = Aws::String>
    void SetStackStatusReason(StackStatusReasonT&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::forward<StackStatusReasonT>(value); }
    template<typename StackStatusReasonT = Aws::String>
    AwsCloudFormationStackDetails& WithStackStatusReason(StackStatusReasonT&& value) { SetStackStatusReason(std::forward<StackStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time, in minutes, that CloudFormation waits for the nested
     * stack to reach the <code>CREATE_COMPLETE</code> state. </p>
     */
    inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline AwsCloudFormationStackDetails& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_disableRollback{false};
    bool m_disableRollbackHasBeenSet = false;

    AwsCloudFormationStackDriftInformationDetails m_driftInformation;
    bool m_driftInformationHasBeenSet = false;

    bool m_enableTerminationProtection{false};
    bool m_enableTerminationProtectionHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationArns;
    bool m_notificationArnsHasBeenSet = false;

    Aws::Vector<AwsCloudFormationStackOutputsDetails> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_stackStatus;
    bool m_stackStatusHasBeenSet = false;

    Aws::String m_stackStatusReason;
    bool m_stackStatusReasonHasBeenSet = false;

    int m_timeoutInMinutes{0};
    bool m_timeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
