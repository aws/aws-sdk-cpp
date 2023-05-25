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
    AWS_SECURITYHUB_API AwsCloudFormationStackDetails();
    AWS_SECURITYHUB_API AwsCloudFormationStackDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFormationStackDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline void SetCapabilities(const Aws::Vector<Aws::String>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline void SetCapabilities(Aws::Vector<Aws::String>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithCapabilities(const Aws::Vector<Aws::String>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithCapabilities(Aws::Vector<Aws::String>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline AwsCloudFormationStackDetails& AddCapabilities(const Aws::String& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline AwsCloudFormationStackDetails& AddCapabilities(Aws::String&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }

    /**
     * <p>The capabilities allowed in the stack. </p>
     */
    inline AwsCloudFormationStackDetails& AddCapabilities(const char* value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }


    /**
     * <p>The time at which the stack was created. </p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the stack was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the stack was created. </p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the stack was created. </p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the stack was created. </p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The time at which the stack was created. </p>
     */
    inline AwsCloudFormationStackDetails& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the stack was created. </p>
     */
    inline AwsCloudFormationStackDetails& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The time at which the stack was created. </p>
     */
    inline AwsCloudFormationStackDetails& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-defined description associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Boolean to enable or disable rollback on stack creation failures. </p>
     */
    inline bool GetDisableRollback() const{ return m_disableRollback; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures. </p>
     */
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures. </p>
     */
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures. </p>
     */
    inline AwsCloudFormationStackDetails& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}


    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * drifted, from its expected configuration, as defined in the stack template and
     * any values specified as template parameters. </p>
     */
    inline const AwsCloudFormationStackDriftInformationDetails& GetDriftInformation() const{ return m_driftInformation; }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * drifted, from its expected configuration, as defined in the stack template and
     * any values specified as template parameters. </p>
     */
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * drifted, from its expected configuration, as defined in the stack template and
     * any values specified as template parameters. </p>
     */
    inline void SetDriftInformation(const AwsCloudFormationStackDriftInformationDetails& value) { m_driftInformationHasBeenSet = true; m_driftInformation = value; }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * drifted, from its expected configuration, as defined in the stack template and
     * any values specified as template parameters. </p>
     */
    inline void SetDriftInformation(AwsCloudFormationStackDriftInformationDetails&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::move(value); }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * drifted, from its expected configuration, as defined in the stack template and
     * any values specified as template parameters. </p>
     */
    inline AwsCloudFormationStackDetails& WithDriftInformation(const AwsCloudFormationStackDriftInformationDetails& value) { SetDriftInformation(value); return *this;}

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * drifted, from its expected configuration, as defined in the stack template and
     * any values specified as template parameters. </p>
     */
    inline AwsCloudFormationStackDetails& WithDriftInformation(AwsCloudFormationStackDriftInformationDetails&& value) { SetDriftInformation(std::move(value)); return *this;}


    /**
     * <p>Whether termination protection is enabled for the stack. </p>
     */
    inline bool GetEnableTerminationProtection() const{ return m_enableTerminationProtection; }

    /**
     * <p>Whether termination protection is enabled for the stack. </p>
     */
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }

    /**
     * <p>Whether termination protection is enabled for the stack. </p>
     */
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }

    /**
     * <p>Whether termination protection is enabled for the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}


    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline AwsCloudFormationStackDetails& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline AwsCloudFormationStackDetails& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The time the nested stack was last updated. This field will only be returned
     * if the stack has been updated at least once.</p>
     */
    inline AwsCloudFormationStackDetails& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationArns() const{ return m_notificationArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline bool NotificationArnsHasBeenSet() const { return m_notificationArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline void SetNotificationArns(const Aws::Vector<Aws::String>& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline void SetNotificationArns(Aws::Vector<Aws::String>&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline AwsCloudFormationStackDetails& WithNotificationArns(const Aws::Vector<Aws::String>& value) { SetNotificationArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline AwsCloudFormationStackDetails& WithNotificationArns(Aws::Vector<Aws::String>&& value) { SetNotificationArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline AwsCloudFormationStackDetails& AddNotificationArns(const Aws::String& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline AwsCloudFormationStackDetails& AddNotificationArns(Aws::String&& value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Amazon SNS topic to which
     * stack-related events are published. </p>
     */
    inline AwsCloudFormationStackDetails& AddNotificationArns(const char* value) { m_notificationArnsHasBeenSet = true; m_notificationArns.push_back(value); return *this; }


    /**
     * <p>A list of output structures. </p>
     */
    inline const Aws::Vector<AwsCloudFormationStackOutputsDetails>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>A list of output structures. </p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>A list of output structures. </p>
     */
    inline void SetOutputs(const Aws::Vector<AwsCloudFormationStackOutputsDetails>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>A list of output structures. </p>
     */
    inline void SetOutputs(Aws::Vector<AwsCloudFormationStackOutputsDetails>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>A list of output structures. </p>
     */
    inline AwsCloudFormationStackDetails& WithOutputs(const Aws::Vector<AwsCloudFormationStackOutputsDetails>& value) { SetOutputs(value); return *this;}

    /**
     * <p>A list of output structures. </p>
     */
    inline AwsCloudFormationStackDetails& WithOutputs(Aws::Vector<AwsCloudFormationStackOutputsDetails>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>A list of output structures. </p>
     */
    inline AwsCloudFormationStackDetails& AddOutputs(const AwsCloudFormationStackOutputsDetails& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>A list of output structures. </p>
     */
    inline AwsCloudFormationStackDetails& AddOutputs(AwsCloudFormationStackOutputsDetails&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role that's associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The name associated with the stack. </p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name associated with the stack. </p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name associated with the stack. </p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack. </p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name associated with the stack. </p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name associated with the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>Current status of the stack. </p>
     */
    inline const Aws::String& GetStackStatus() const{ return m_stackStatus; }

    /**
     * <p>Current status of the stack. </p>
     */
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }

    /**
     * <p>Current status of the stack. </p>
     */
    inline void SetStackStatus(const Aws::String& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }

    /**
     * <p>Current status of the stack. </p>
     */
    inline void SetStackStatus(Aws::String&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = std::move(value); }

    /**
     * <p>Current status of the stack. </p>
     */
    inline void SetStackStatus(const char* value) { m_stackStatusHasBeenSet = true; m_stackStatus.assign(value); }

    /**
     * <p>Current status of the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackStatus(const Aws::String& value) { SetStackStatus(value); return *this;}

    /**
     * <p>Current status of the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackStatus(Aws::String&& value) { SetStackStatus(std::move(value)); return *this;}

    /**
     * <p>Current status of the stack. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackStatus(const char* value) { SetStackStatus(value); return *this;}


    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline const Aws::String& GetStackStatusReason() const{ return m_stackStatusReason; }

    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }

    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline void SetStackStatusReason(const Aws::String& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }

    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline void SetStackStatusReason(Aws::String&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::move(value); }

    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline void SetStackStatusReason(const char* value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason.assign(value); }

    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackStatusReason(const Aws::String& value) { SetStackStatusReason(value); return *this;}

    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackStatusReason(Aws::String&& value) { SetStackStatusReason(std::move(value)); return *this;}

    /**
     * <p>Success or failure message associated with the stack status. </p>
     */
    inline AwsCloudFormationStackDetails& WithStackStatusReason(const char* value) { SetStackStatusReason(value); return *this;}


    /**
     * <p>The length of time, in minutes, that CloudFormation waits for the nested
     * stack to reach the <code>CREATE_COMPLETE</code> state. </p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>The length of time, in minutes, that CloudFormation waits for the nested
     * stack to reach the <code>CREATE_COMPLETE</code> state. </p>
     */
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }

    /**
     * <p>The length of time, in minutes, that CloudFormation waits for the nested
     * stack to reach the <code>CREATE_COMPLETE</code> state. </p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>The length of time, in minutes, that CloudFormation waits for the nested
     * stack to reach the <code>CREATE_COMPLETE</code> state. </p>
     */
    inline AwsCloudFormationStackDetails& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_disableRollback;
    bool m_disableRollbackHasBeenSet = false;

    AwsCloudFormationStackDriftInformationDetails m_driftInformation;
    bool m_driftInformationHasBeenSet = false;

    bool m_enableTerminationProtection;
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

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
