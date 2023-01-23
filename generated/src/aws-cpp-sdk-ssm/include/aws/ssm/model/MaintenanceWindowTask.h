/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/MaintenanceWindowTaskCutoffBehavior.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
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
   * <p>Information about a task defined for a maintenance window.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowTask">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowTask
  {
  public:
    AWS_SSM_API MaintenanceWindowTask();
    AWS_SSM_API MaintenanceWindowTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline MaintenanceWindowTask& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline MaintenanceWindowTask& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window where the task is registered.</p>
     */
    inline MaintenanceWindowTask& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The task ID.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The task ID.</p>
     */
    inline bool WindowTaskIdHasBeenSet() const { return m_windowTaskIdHasBeenSet; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = value; }

    /**
     * <p>The task ID.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId = std::move(value); }

    /**
     * <p>The task ID.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskIdHasBeenSet = true; m_windowTaskId.assign(value); }

    /**
     * <p>The task ID.</p>
     */
    inline MaintenanceWindowTask& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline MaintenanceWindowTask& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The task ID.</p>
     */
    inline MaintenanceWindowTask& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}


    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline MaintenanceWindowTask& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline MaintenanceWindowTask& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The resource that the task uses during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types,
     * <code>TaskArn</code> is the Amazon Web Services Systems Manager (SSM document)
     * name or ARN. For <code>LAMBDA</code> tasks, it's the function name or ARN. For
     * <code>STEP_FUNCTIONS</code> tasks, it's the state machine ARN.</p>
     */
    inline MaintenanceWindowTask& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The type of task.</p>
     */
    inline const MaintenanceWindowTaskType& GetType() const{ return m_type; }

    /**
     * <p>The type of task.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of task.</p>
     */
    inline void SetType(const MaintenanceWindowTaskType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of task.</p>
     */
    inline void SetType(MaintenanceWindowTaskType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of task.</p>
     */
    inline MaintenanceWindowTask& WithType(const MaintenanceWindowTaskType& value) { SetType(value); return *this;}

    /**
     * <p>The type of task.</p>
     */
    inline MaintenanceWindowTask& WithType(MaintenanceWindowTaskType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline MaintenanceWindowTask& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline MaintenanceWindowTask& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline MaintenanceWindowTask& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The targets (either managed nodes or tags). Managed nodes are specified using
     * <code>Key=instanceids,Values=&lt;instanceid1&gt;,&lt;instanceid2&gt;</code>.
     * Tags are specified using <code>Key=&lt;tag name&gt;,Values=&lt;tag
     * value&gt;</code>.</p>
     */
    inline MaintenanceWindowTask& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline bool TaskParametersHasBeenSet() const { return m_taskParametersHasBeenSet; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParametersHasBeenSet = true; m_taskParameters = value; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParametersHasBeenSet = true; m_taskParameters = std::move(value); }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that should be passed to the task when it is run.</p> 
     * <p> <code>TaskParameters</code> has been deprecated. To specify parameters to
     * pass to a task when it runs, instead use the <code>Parameters</code> option in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParametersHasBeenSet = true; m_taskParameters.emplace(key, value); return *this; }


    /**
     * <p>The priority of the task in the maintenance window. The lower the number, the
     * higher the priority. Tasks that have the same priority are scheduled in
     * parallel.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the task in the maintenance window. The lower the number, the
     * higher the priority. Tasks that have the same priority are scheduled in
     * parallel.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the task in the maintenance window. The lower the number, the
     * higher the priority. Tasks that have the same priority are scheduled in
     * parallel.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the task in the maintenance window. The lower the number, the
     * higher the priority. Tasks that have the same priority are scheduled in
     * parallel.</p>
     */
    inline MaintenanceWindowTask& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>Information about an S3 bucket to write task-level logs to.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * <p>Information about an S3 bucket to write task-level logs to.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline bool LoggingInfoHasBeenSet() const { return m_loggingInfoHasBeenSet; }

    /**
     * <p>Information about an S3 bucket to write task-level logs to.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = value; }

    /**
     * <p>Information about an S3 bucket to write task-level logs to.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfoHasBeenSet = true; m_loggingInfo = std::move(value); }

    /**
     * <p>Information about an S3 bucket to write task-level logs to.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * <p>Information about an S3 bucket to write task-level logs to.</p>  <p>
     * <code>LoggingInfo</code> has been deprecated. To specify an Amazon Simple
     * Storage Service (Amazon S3) bucket to contain logs, instead use the
     * <code>OutputS3BucketName</code> and <code>OutputS3KeyPrefix</code> options in
     * the <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline MaintenanceWindowTask& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline bool ServiceRoleArnHasBeenSet() const { return m_serviceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArnHasBeenSet = true; m_serviceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline MaintenanceWindowTask& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline MaintenanceWindowTask& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline MaintenanceWindowTask& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }

    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }

    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }

    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }

    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline MaintenanceWindowTask& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline MaintenanceWindowTask& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The maximum number of targets this task can be run for, in parallel.</p>
     *  <p>Although this element is listed as "Required: No", a value can be
     * omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline MaintenanceWindowTask& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline MaintenanceWindowTask& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline MaintenanceWindowTask& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The maximum number of errors allowed before this task stops being
     * scheduled.</p>  <p>Although this element is listed as "Required: No", a
     * value can be omitted only when you are registering or updating a <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/maintenance-windows-targetless-tasks.html">targetless
     * task</a> You must provide a value in all other cases.</p> <p>For maintenance
     * window tasks without a target specified, you can't supply a value for this
     * option. Instead, the system inserts a placeholder value of <code>1</code>. This
     * value doesn't affect the running of your task.</p> 
     */
    inline MaintenanceWindowTask& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The task name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The task name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The task name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The task name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The task name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The task name.</p>
     */
    inline MaintenanceWindowTask& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The task name.</p>
     */
    inline MaintenanceWindowTask& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The task name.</p>
     */
    inline MaintenanceWindowTask& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the task.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the task.</p>
     */
    inline MaintenanceWindowTask& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the task.</p>
     */
    inline MaintenanceWindowTask& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the task.</p>
     */
    inline MaintenanceWindowTask& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The specification for whether tasks should continue to run after the cutoff
     * time specified in the maintenance windows is reached. </p>
     */
    inline const MaintenanceWindowTaskCutoffBehavior& GetCutoffBehavior() const{ return m_cutoffBehavior; }

    /**
     * <p>The specification for whether tasks should continue to run after the cutoff
     * time specified in the maintenance windows is reached. </p>
     */
    inline bool CutoffBehaviorHasBeenSet() const { return m_cutoffBehaviorHasBeenSet; }

    /**
     * <p>The specification for whether tasks should continue to run after the cutoff
     * time specified in the maintenance windows is reached. </p>
     */
    inline void SetCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { m_cutoffBehaviorHasBeenSet = true; m_cutoffBehavior = value; }

    /**
     * <p>The specification for whether tasks should continue to run after the cutoff
     * time specified in the maintenance windows is reached. </p>
     */
    inline void SetCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { m_cutoffBehaviorHasBeenSet = true; m_cutoffBehavior = std::move(value); }

    /**
     * <p>The specification for whether tasks should continue to run after the cutoff
     * time specified in the maintenance windows is reached. </p>
     */
    inline MaintenanceWindowTask& WithCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { SetCutoffBehavior(value); return *this;}

    /**
     * <p>The specification for whether tasks should continue to run after the cutoff
     * time specified in the maintenance windows is reached. </p>
     */
    inline MaintenanceWindowTask& WithCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { SetCutoffBehavior(std::move(value)); return *this;}


    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline MaintenanceWindowTask& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>The details for the CloudWatch alarm applied to your maintenance window
     * task.</p>
     */
    inline MaintenanceWindowTask& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTaskId;
    bool m_windowTaskIdHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    MaintenanceWindowTaskType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;
    bool m_taskParametersHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    LoggingInfo m_loggingInfo;
    bool m_loggingInfoHasBeenSet = false;

    Aws::String m_serviceRoleArn;
    bool m_serviceRoleArnHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MaintenanceWindowTaskCutoffBehavior m_cutoffBehavior;
    bool m_cutoffBehaviorHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
