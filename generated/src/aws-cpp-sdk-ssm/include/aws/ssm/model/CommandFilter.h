/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CommandFilterKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a command filter.</p>  <p>A managed node ID can't be
   * specified when a command status is <code>Pending</code> because the command
   * hasn't run on the node yet.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CommandFilter">AWS
   * API Reference</a></p>
   */
  class CommandFilter
  {
  public:
    AWS_SSM_API CommandFilter();
    AWS_SSM_API CommandFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API CommandFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>  <p>The <code>ExecutionStage</code> filter
     * can't be used with the <code>ListCommandInvocations</code> operation, only with
     * <code>ListCommands</code>.</p> 
     */
    inline const CommandFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p>  <p>The <code>ExecutionStage</code> filter
     * can't be used with the <code>ListCommandInvocations</code> operation, only with
     * <code>ListCommands</code>.</p> 
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>  <p>The <code>ExecutionStage</code> filter
     * can't be used with the <code>ListCommandInvocations</code> operation, only with
     * <code>ListCommands</code>.</p> 
     */
    inline void SetKey(const CommandFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p>  <p>The <code>ExecutionStage</code> filter
     * can't be used with the <code>ListCommandInvocations</code> operation, only with
     * <code>ListCommands</code>.</p> 
     */
    inline void SetKey(CommandFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p>  <p>The <code>ExecutionStage</code> filter
     * can't be used with the <code>ListCommandInvocations</code> operation, only with
     * <code>ListCommands</code>.</p> 
     */
    inline CommandFilter& WithKey(const CommandFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>  <p>The <code>ExecutionStage</code> filter
     * can't be used with the <code>ListCommandInvocations</code> operation, only with
     * <code>ListCommands</code>.</p> 
     */
    inline CommandFilter& WithKey(CommandFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline CommandFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline CommandFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2021-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2021, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2021-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2021.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. The
     * status choices depend on the API you call.</p> <p>The status values you can
     * specify for <code>ListCommands</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Success</code> </p> </li> <li> <p> <code>Cancelled</code> </p> </li>
     * <li> <p> <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> (this
     * includes both Delivery and Execution time outs) </p> </li> <li> <p>
     * <code>AccessDenied</code> </p> </li> <li> <p> <code>DeliveryTimedOut</code> </p>
     * </li> <li> <p> <code>ExecutionTimedOut</code> </p> </li> <li> <p>
     * <code>Incomplete</code> </p> </li> <li> <p> <code>NoInstancesInTag</code> </p>
     * </li> <li> <p> <code>LimitExceeded</code> </p> </li> </ul> <p>The status values
     * you can specify for <code>ListCommandInvocations</code> are:</p> <ul> <li> <p>
     * <code>Pending</code> </p> </li> <li> <p> <code>InProgress</code> </p> </li> <li>
     * <p> <code>Delayed</code> </p> </li> <li> <p> <code>Success</code> </p> </li>
     * <li> <p> <code>Cancelled</code> </p> </li> <li> <p> <code>Failed</code> </p>
     * </li> <li> <p> <code>TimedOut</code> (this includes both Delivery and Execution
     * time outs) </p> </li> <li> <p> <code>AccessDenied</code> </p> </li> <li> <p>
     * <code>DeliveryTimedOut</code> </p> </li> <li> <p> <code>ExecutionTimedOut</code>
     * </p> </li> <li> <p> <code>Undeliverable</code> </p> </li> <li> <p>
     * <code>InvalidPlatform</code> </p> </li> <li> <p> <code>Terminated</code> </p>
     * </li> </ul> </li> <li> <p> <b>DocumentName</b>: Specify name of the Amazon Web
     * Services Systems Manager document (SSM document) for which you want to see
     * command execution results. For example, specify
     * <code>AWS-RunPatchBaseline</code> to see command executions that used this SSM
     * document to perform security patching operations on managed nodes. </p> </li>
     * <li> <p> <b>ExecutionStage</b>: Specify one of the following values
     * (<code>ListCommands</code> operations only):</p> <ul> <li> <p>
     * <code>Executing</code>: Returns a list of command executions that are currently
     * still running.</p> </li> <li> <p> <code>Complete</code>: Returns a list of
     * command executions that have already completed. </p> </li> </ul> </li> </ul>
     */
    inline CommandFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    CommandFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
