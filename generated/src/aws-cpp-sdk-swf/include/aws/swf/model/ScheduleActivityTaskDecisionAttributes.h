﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/model/ActivityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/TaskList.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>ScheduleActivityTask</code> decision.</p>
   * <p> <b>Access Control</b> </p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
   * or deny permission to call this action.</p> </li> <li> <p>Constrain the
   * following parameters by using a <code>Condition</code> element with the
   * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code> – String
   * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
   * <code>activityType.version</code> – String constraint. The key is
   * <code>swf:activityType.version</code>.</p> </li> <li> <p> <code>taskList</code>
   * – String constraint. The key is <code>swf:taskList.name</code>.</p> </li> </ul>
   * </li> </ul> <p>If the caller doesn't have sufficient permissions to invoke the
   * action, or the parameter values fall outside the specified constraints, the
   * action fails. The associated event attribute's <code>cause</code> parameter is
   * set to <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM
   * policies, see <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ScheduleActivityTaskDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class ScheduleActivityTaskDecisionAttributes
  {
  public:
    AWS_SWF_API ScheduleActivityTaskDecisionAttributes();
    AWS_SWF_API ScheduleActivityTaskDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ScheduleActivityTaskDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of the activity task to schedule.</p>
     */
    inline const ActivityType& GetActivityType() const{ return m_activityType; }
    inline bool ActivityTypeHasBeenSet() const { return m_activityTypeHasBeenSet; }
    inline void SetActivityType(const ActivityType& value) { m_activityTypeHasBeenSet = true; m_activityType = value; }
    inline void SetActivityType(ActivityType&& value) { m_activityTypeHasBeenSet = true; m_activityType = std::move(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithActivityType(const ActivityType& value) { SetActivityType(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithActivityType(ActivityType&& value) { SetActivityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>activityId</code> of the activity task.</p> <p>The specified
     * string must not contain a <code>:</code> (colon), <code>/</code> (slash),
     * <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must
     * <i>not</i> be the literal string <code>arn</code>.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = std::move(value); }
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithActivityId(const char* value) { SetActivityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data attached to the event that can be used by the decider in subsequent
     * workflow tasks. This data isn't sent to the activity.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithControl(const char* value) { SetControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input provided to the activity task.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration for this activity task.</p> <p>The duration is specified
     * in seconds, an integer greater than or equal to <code>0</code>. You can use
     * <code>NONE</code> to specify unlimited duration.</p>  <p>A
     * schedule-to-close timeout for this activity task must be specified either as a
     * default for the activity type or through this field. If neither this field is
     * set nor a default schedule-to-close timeout was specified at registration time
     * then a fault is returned.</p> 
     */
    inline const Aws::String& GetScheduleToCloseTimeout() const{ return m_scheduleToCloseTimeout; }
    inline bool ScheduleToCloseTimeoutHasBeenSet() const { return m_scheduleToCloseTimeoutHasBeenSet; }
    inline void SetScheduleToCloseTimeout(const Aws::String& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = value; }
    inline void SetScheduleToCloseTimeout(Aws::String&& value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout = std::move(value); }
    inline void SetScheduleToCloseTimeout(const char* value) { m_scheduleToCloseTimeoutHasBeenSet = true; m_scheduleToCloseTimeout.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToCloseTimeout(const Aws::String& value) { SetScheduleToCloseTimeout(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToCloseTimeout(Aws::String&& value) { SetScheduleToCloseTimeout(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToCloseTimeout(const char* value) { SetScheduleToCloseTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the name of the task list in which to schedule the activity
     * task. If not specified, the <code>defaultTaskList</code> registered with the
     * activity type is used.</p>  <p>A task list for this activity task must be
     * specified either as a default for the activity type or through this field. If
     * neither this field is set nor a default task list was specified at registration
     * time then a fault is returned.</p>  <p>The specified string must not
     * contain a <code>:</code> (colon), <code>/</code> (slash), <code>|</code>
     * (vertical bar), or any control characters (<code>\u0000-\u001f</code> |
     * <code>\u007f-\u009f</code>). Also, it must <i>not</i> be the literal string
     * <code>arn</code>.</p>
     */
    inline const TaskList& GetTaskList() const{ return m_taskList; }
    inline bool TaskListHasBeenSet() const { return m_taskListHasBeenSet; }
    inline void SetTaskList(const TaskList& value) { m_taskListHasBeenSet = true; m_taskList = value; }
    inline void SetTaskList(TaskList&& value) { m_taskListHasBeenSet = true; m_taskList = std::move(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithTaskList(const TaskList& value) { SetTaskList(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithTaskList(TaskList&& value) { SetTaskList(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If set, specifies the priority with which the activity task is to be
     * assigned to a worker. This overrides the defaultTaskPriority specified when
     * registering the activity type using <a>RegisterActivityType</a>. Valid values
     * are integers that range from Java's <code>Integer.MIN_VALUE</code> (-2147483648)
     * to <code>Integer.MAX_VALUE</code> (2147483647). Higher numbers indicate higher
     * priority.</p> <p>For more information about setting task priority, see <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/programming-priority.html">Setting
     * Task Priority</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetTaskPriority() const{ return m_taskPriority; }
    inline bool TaskPriorityHasBeenSet() const { return m_taskPriorityHasBeenSet; }
    inline void SetTaskPriority(const Aws::String& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = value; }
    inline void SetTaskPriority(Aws::String&& value) { m_taskPriorityHasBeenSet = true; m_taskPriority = std::move(value); }
    inline void SetTaskPriority(const char* value) { m_taskPriorityHasBeenSet = true; m_taskPriority.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithTaskPriority(const Aws::String& value) { SetTaskPriority(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithTaskPriority(Aws::String&& value) { SetTaskPriority(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithTaskPriority(const char* value) { SetTaskPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If set, specifies the maximum duration the activity task can wait to be
     * assigned to a worker. This overrides the default schedule-to-start timeout
     * specified when registering the activity type using
     * <a>RegisterActivityType</a>.</p> <p>The duration is specified in seconds, an
     * integer greater than or equal to <code>0</code>. You can use <code>NONE</code>
     * to specify unlimited duration.</p>  <p>A schedule-to-start timeout for
     * this activity task must be specified either as a default for the activity type
     * or through this field. If neither this field is set nor a default
     * schedule-to-start timeout was specified at registration time then a fault is
     * returned.</p> 
     */
    inline const Aws::String& GetScheduleToStartTimeout() const{ return m_scheduleToStartTimeout; }
    inline bool ScheduleToStartTimeoutHasBeenSet() const { return m_scheduleToStartTimeoutHasBeenSet; }
    inline void SetScheduleToStartTimeout(const Aws::String& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = value; }
    inline void SetScheduleToStartTimeout(Aws::String&& value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout = std::move(value); }
    inline void SetScheduleToStartTimeout(const char* value) { m_scheduleToStartTimeoutHasBeenSet = true; m_scheduleToStartTimeout.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToStartTimeout(const Aws::String& value) { SetScheduleToStartTimeout(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToStartTimeout(Aws::String&& value) { SetScheduleToStartTimeout(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithScheduleToStartTimeout(const char* value) { SetScheduleToStartTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the maximum duration a worker may take to process this
     * activity task. This overrides the default start-to-close timeout specified when
     * registering the activity type using <a>RegisterActivityType</a>.</p> <p>The
     * duration is specified in seconds, an integer greater than or equal to
     * <code>0</code>. You can use <code>NONE</code> to specify unlimited duration.</p>
     *  <p>A start-to-close timeout for this activity task must be specified
     * either as a default for the activity type or through this field. If neither this
     * field is set nor a default start-to-close timeout was specified at registration
     * time then a fault is returned.</p> 
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::move(value); }
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set, specifies the maximum time before which a worker processing a task of
     * this type must report progress by calling <a>RecordActivityTaskHeartbeat</a>. If
     * the timeout is exceeded, the activity task is automatically timed out. If the
     * worker subsequently attempts to record a heartbeat or returns a result, it is
     * ignored. This overrides the default heartbeat timeout specified when registering
     * the activity type using <a>RegisterActivityType</a>.</p> <p>The duration is
     * specified in seconds, an integer greater than or equal to <code>0</code>. You
     * can use <code>NONE</code> to specify unlimited duration.</p>
     */
    inline const Aws::String& GetHeartbeatTimeout() const{ return m_heartbeatTimeout; }
    inline bool HeartbeatTimeoutHasBeenSet() const { return m_heartbeatTimeoutHasBeenSet; }
    inline void SetHeartbeatTimeout(const Aws::String& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = value; }
    inline void SetHeartbeatTimeout(Aws::String&& value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout = std::move(value); }
    inline void SetHeartbeatTimeout(const char* value) { m_heartbeatTimeoutHasBeenSet = true; m_heartbeatTimeout.assign(value); }
    inline ScheduleActivityTaskDecisionAttributes& WithHeartbeatTimeout(const Aws::String& value) { SetHeartbeatTimeout(value); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithHeartbeatTimeout(Aws::String&& value) { SetHeartbeatTimeout(std::move(value)); return *this;}
    inline ScheduleActivityTaskDecisionAttributes& WithHeartbeatTimeout(const char* value) { SetHeartbeatTimeout(value); return *this;}
    ///@}
  private:

    ActivityType m_activityType;
    bool m_activityTypeHasBeenSet = false;

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_scheduleToCloseTimeout;
    bool m_scheduleToCloseTimeoutHasBeenSet = false;

    TaskList m_taskList;
    bool m_taskListHasBeenSet = false;

    Aws::String m_taskPriority;
    bool m_taskPriorityHasBeenSet = false;

    Aws::String m_scheduleToStartTimeout;
    bool m_scheduleToStartTimeoutHasBeenSet = false;

    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet = false;

    Aws::String m_heartbeatTimeout;
    bool m_heartbeatTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
