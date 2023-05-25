/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowTaskType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MaintenanceWindowTaskInvocationParameters.h>
#include <aws/ssm/model/LoggingInfo.h>
#include <aws/ssm/model/MaintenanceWindowTaskCutoffBehavior.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/MaintenanceWindowTaskParameterValueExpression.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class GetMaintenanceWindowTaskResult
  {
  public:
    AWS_SSM_API GetMaintenanceWindowTaskResult();
    AWS_SSM_API GetMaintenanceWindowTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetMaintenanceWindowTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }

    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }

    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }

    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The retrieved maintenance window ID.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskId = value; }

    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskId = std::move(value); }

    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskId.assign(value); }

    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The retrieved maintenance window task ID.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}


    /**
     * <p>The targets where the task should run.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The targets where the task should run.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }

    /**
     * <p>The targets where the task should run.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = std::move(value); }

    /**
     * <p>The targets where the task should run.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The targets where the task should run.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The targets where the task should run.</p>
     */
    inline GetMaintenanceWindowTaskResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }

    /**
     * <p>The targets where the task should run.</p>
     */
    inline GetMaintenanceWindowTaskResult& AddTargets(Target&& value) { m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArn = value; }

    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArn = std::move(value); }

    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArn.assign(value); }

    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The resource that the task used during execution. For
     * <code>RUN_COMMAND</code> and <code>AUTOMATION</code> task types, the value of
     * <code>TaskArn</code> is the SSM document name/ARN. For <code>LAMBDA</code>
     * tasks, the value is the function name/ARN. For <code>STEP_FUNCTIONS</code>
     * tasks, the value is the state machine ARN.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


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
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(Aws::String&& value) { m_serviceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithServiceRoleArn(Aws::String&& value) { SetServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * service role to use to publish Amazon Simple Notification Service (Amazon SNS)
     * notifications for maintenance window Run Command tasks.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}


    /**
     * <p>The type of task to run.</p>
     */
    inline const MaintenanceWindowTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The type of task to run.</p>
     */
    inline void SetTaskType(const MaintenanceWindowTaskType& value) { m_taskType = value; }

    /**
     * <p>The type of task to run.</p>
     */
    inline void SetTaskType(MaintenanceWindowTaskType&& value) { m_taskType = std::move(value); }

    /**
     * <p>The type of task to run.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTaskType(const MaintenanceWindowTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The type of task to run.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTaskType(MaintenanceWindowTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& GetTaskParameters() const{ return m_taskParameters; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { m_taskParameters = value; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { m_taskParameters = std::move(value); }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithTaskParameters(const Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>& value) { SetTaskParameters(value); return *this;}

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithTaskParameters(Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression>&& value) { SetTaskParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& AddTaskParameters(const Aws::String& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& AddTaskParameters(Aws::String&& key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& AddTaskParameters(const Aws::String& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& AddTaskParameters(Aws::String&& key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& AddTaskParameters(const char* key, MaintenanceWindowTaskParameterValueExpression&& value) { m_taskParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>  <p>
     * <code>TaskParameters</code> has been deprecated. To specify parameters to pass
     * to a task when it runs, instead use the <code>Parameters</code> option in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Systems Manager handles these options for the supported maintenance window task
     * types, see <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& AddTaskParameters(const char* key, const MaintenanceWindowTaskParameterValueExpression& value) { m_taskParameters.emplace(key, value); return *this; }


    /**
     * <p>The parameters to pass to the task when it runs.</p>
     */
    inline const MaintenanceWindowTaskInvocationParameters& GetTaskInvocationParameters() const{ return m_taskInvocationParameters; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>
     */
    inline void SetTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { m_taskInvocationParameters = value; }

    /**
     * <p>The parameters to pass to the task when it runs.</p>
     */
    inline void SetTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { m_taskInvocationParameters = std::move(value); }

    /**
     * <p>The parameters to pass to the task when it runs.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTaskInvocationParameters(const MaintenanceWindowTaskInvocationParameters& value) { SetTaskInvocationParameters(value); return *this;}

    /**
     * <p>The parameters to pass to the task when it runs.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithTaskInvocationParameters(MaintenanceWindowTaskInvocationParameters&& value) { SetTaskInvocationParameters(std::move(value)); return *this;}


    /**
     * <p>The priority of the task when it runs. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the task when it runs. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline void SetPriority(int value) { m_priority = value; }

    /**
     * <p>The priority of the task when it runs. The lower the number, the higher the
     * priority. Tasks that have the same priority are scheduled in parallel.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrency = value; }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrency = std::move(value); }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrency.assign(value); }

    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}

    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}

    /**
     * <p>The maximum number of targets allowed to run this task in parallel.</p>
     *  <p>For maintenance window tasks without a target specified, you can't
     * supply a value for this option. Instead, the system inserts a placeholder value
     * of <code>1</code>, which may be reported in the response to this command. This
     * value doesn't affect the running of your task and can be ignored.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}


    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }

    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrors = value; }

    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrors = std::move(value); }

    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline void SetMaxErrors(const char* value) { m_maxErrors.assign(value); }

    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}

    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}

    /**
     * <p>The maximum number of errors allowed before the task stops being
     * scheduled.</p>  <p>For maintenance window tasks without a target
     * specified, you can't supply a value for this option. Instead, the system inserts
     * a placeholder value of <code>1</code>, which may be reported in the response to
     * this command. This value doesn't affect the running of your task and can be
     * ignored.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}


    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) where the task
     * results are logged.</p>  <p> <code>LoggingInfo</code> has been deprecated.
     * To specify an Amazon Simple Storage Service (Amazon S3) bucket to contain logs,
     * instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline const LoggingInfo& GetLoggingInfo() const{ return m_loggingInfo; }

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) where the task
     * results are logged.</p>  <p> <code>LoggingInfo</code> has been deprecated.
     * To specify an Amazon Simple Storage Service (Amazon S3) bucket to contain logs,
     * instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetLoggingInfo(const LoggingInfo& value) { m_loggingInfo = value; }

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) where the task
     * results are logged.</p>  <p> <code>LoggingInfo</code> has been deprecated.
     * To specify an Amazon Simple Storage Service (Amazon S3) bucket to contain logs,
     * instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline void SetLoggingInfo(LoggingInfo&& value) { m_loggingInfo = std::move(value); }

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) where the task
     * results are logged.</p>  <p> <code>LoggingInfo</code> has been deprecated.
     * To specify an Amazon Simple Storage Service (Amazon S3) bucket to contain logs,
     * instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithLoggingInfo(const LoggingInfo& value) { SetLoggingInfo(value); return *this;}

    /**
     * <p>The location in Amazon Simple Storage Service (Amazon S3) where the task
     * results are logged.</p>  <p> <code>LoggingInfo</code> has been deprecated.
     * To specify an Amazon Simple Storage Service (Amazon S3) bucket to contain logs,
     * instead use the <code>OutputS3BucketName</code> and
     * <code>OutputS3KeyPrefix</code> options in the
     * <code>TaskInvocationParameters</code> structure. For information about how
     * Amazon Web Services Systems Manager handles these options for the supported
     * maintenance window task types, see
     * <a>MaintenanceWindowTaskInvocationParameters</a>.</p> 
     */
    inline GetMaintenanceWindowTaskResult& WithLoggingInfo(LoggingInfo&& value) { SetLoggingInfo(std::move(value)); return *this;}


    /**
     * <p>The retrieved task name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The retrieved task name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The retrieved task name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The retrieved task name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The retrieved task name.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The retrieved task name.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The retrieved task name.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The retrieved task description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The retrieved task description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The retrieved task description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The retrieved task description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The retrieved task description.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retrieved task description.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retrieved task description.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The action to take on tasks when the maintenance window cutoff time is
     * reached. <code>CONTINUE_TASK</code> means that tasks continue to run. For
     * Automation, Lambda, Step Functions tasks, <code>CANCEL_TASK</code> means that
     * currently running task invocations continue, but no new task invocations are
     * started. For Run Command tasks, <code>CANCEL_TASK</code> means the system
     * attempts to stop the task by sending a <code>CancelCommand</code> operation.</p>
     */
    inline const MaintenanceWindowTaskCutoffBehavior& GetCutoffBehavior() const{ return m_cutoffBehavior; }

    /**
     * <p>The action to take on tasks when the maintenance window cutoff time is
     * reached. <code>CONTINUE_TASK</code> means that tasks continue to run. For
     * Automation, Lambda, Step Functions tasks, <code>CANCEL_TASK</code> means that
     * currently running task invocations continue, but no new task invocations are
     * started. For Run Command tasks, <code>CANCEL_TASK</code> means the system
     * attempts to stop the task by sending a <code>CancelCommand</code> operation.</p>
     */
    inline void SetCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { m_cutoffBehavior = value; }

    /**
     * <p>The action to take on tasks when the maintenance window cutoff time is
     * reached. <code>CONTINUE_TASK</code> means that tasks continue to run. For
     * Automation, Lambda, Step Functions tasks, <code>CANCEL_TASK</code> means that
     * currently running task invocations continue, but no new task invocations are
     * started. For Run Command tasks, <code>CANCEL_TASK</code> means the system
     * attempts to stop the task by sending a <code>CancelCommand</code> operation.</p>
     */
    inline void SetCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { m_cutoffBehavior = std::move(value); }

    /**
     * <p>The action to take on tasks when the maintenance window cutoff time is
     * reached. <code>CONTINUE_TASK</code> means that tasks continue to run. For
     * Automation, Lambda, Step Functions tasks, <code>CANCEL_TASK</code> means that
     * currently running task invocations continue, but no new task invocations are
     * started. For Run Command tasks, <code>CANCEL_TASK</code> means the system
     * attempts to stop the task by sending a <code>CancelCommand</code> operation.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithCutoffBehavior(const MaintenanceWindowTaskCutoffBehavior& value) { SetCutoffBehavior(value); return *this;}

    /**
     * <p>The action to take on tasks when the maintenance window cutoff time is
     * reached. <code>CONTINUE_TASK</code> means that tasks continue to run. For
     * Automation, Lambda, Step Functions tasks, <code>CANCEL_TASK</code> means that
     * currently running task invocations continue, but no new task invocations are
     * started. For Run Command tasks, <code>CANCEL_TASK</code> means the system
     * attempts to stop the task by sending a <code>CancelCommand</code> operation.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithCutoffBehavior(MaintenanceWindowTaskCutoffBehavior&& value) { SetCutoffBehavior(std::move(value)); return *this;}


    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }

    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfiguration = value; }

    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfiguration = std::move(value); }

    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}

    /**
     * <p>The details for the CloudWatch alarm you applied to your maintenance window
     * task.</p>
     */
    inline GetMaintenanceWindowTaskResult& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMaintenanceWindowTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMaintenanceWindowTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMaintenanceWindowTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_windowId;

    Aws::String m_windowTaskId;

    Aws::Vector<Target> m_targets;

    Aws::String m_taskArn;

    Aws::String m_serviceRoleArn;

    MaintenanceWindowTaskType m_taskType;

    Aws::Map<Aws::String, MaintenanceWindowTaskParameterValueExpression> m_taskParameters;

    MaintenanceWindowTaskInvocationParameters m_taskInvocationParameters;

    int m_priority;

    Aws::String m_maxConcurrency;

    Aws::String m_maxErrors;

    LoggingInfo m_loggingInfo;

    Aws::String m_name;

    Aws::String m_description;

    MaintenanceWindowTaskCutoffBehavior m_cutoffBehavior;

    AlarmConfiguration m_alarmConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
