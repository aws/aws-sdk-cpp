/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/ExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ExecutionListItem">AWS
   * API Reference</a></p>
   */
  class ExecutionListItem
  {
  public:
    AWS_SFN_API ExecutionListItem();
    AWS_SFN_API ExecutionListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ExecutionListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline void SetExecutionArn(const Aws::String& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline void SetExecutionArn(Aws::String&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline void SetExecutionArn(const char* value) { m_executionArnHasBeenSet = true; m_executionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline ExecutionListItem& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline ExecutionListItem& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline ExecutionListItem& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline ExecutionListItem& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline ExecutionListItem& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline ExecutionListItem& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline ExecutionListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline ExecutionListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline ExecutionListItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the execution.</p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the execution.</p>
     */
    inline ExecutionListItem& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the execution.</p>
     */
    inline ExecutionListItem& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date the execution started.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The date the execution started.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The date the execution started.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The date the execution started.</p>
     */
    inline ExecutionListItem& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date the execution started.</p>
     */
    inline ExecutionListItem& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>If the execution already ended, the date the execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }

    /**
     * <p>If the execution already ended, the date the execution stopped.</p>
     */
    inline bool StopDateHasBeenSet() const { return m_stopDateHasBeenSet; }

    /**
     * <p>If the execution already ended, the date the execution stopped.</p>
     */
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDateHasBeenSet = true; m_stopDate = value; }

    /**
     * <p>If the execution already ended, the date the execution stopped.</p>
     */
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::move(value); }

    /**
     * <p>If the execution already ended, the date the execution stopped.</p>
     */
    inline ExecutionListItem& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}

    /**
     * <p>If the execution already ended, the date the execution stopped.</p>
     */
    inline ExecutionListItem& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline const Aws::String& GetMapRunArn() const{ return m_mapRunArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline void SetMapRunArn(const Aws::String& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline void SetMapRunArn(Aws::String&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline void SetMapRunArn(const char* value) { m_mapRunArnHasBeenSet = true; m_mapRunArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline ExecutionListItem& WithMapRunArn(const Aws::String& value) { SetMapRunArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline ExecutionListItem& WithMapRunArn(Aws::String&& value) { SetMapRunArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline ExecutionListItem& WithMapRunArn(const char* value) { SetMapRunArn(value); return *this;}


    /**
     * <p>The total number of items processed in a child workflow execution. This field
     * is returned only if <code>mapRunArn</code> was specified in the
     * <code>ListExecutions</code> API action. If <code>stateMachineArn</code> was
     * specified in <code>ListExecutions</code>, the <code>itemCount</code> field isn't
     * returned.</p>
     */
    inline int GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The total number of items processed in a child workflow execution. This field
     * is returned only if <code>mapRunArn</code> was specified in the
     * <code>ListExecutions</code> API action. If <code>stateMachineArn</code> was
     * specified in <code>ListExecutions</code>, the <code>itemCount</code> field isn't
     * returned.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>The total number of items processed in a child workflow execution. This field
     * is returned only if <code>mapRunArn</code> was specified in the
     * <code>ListExecutions</code> API action. If <code>stateMachineArn</code> was
     * specified in <code>ListExecutions</code>, the <code>itemCount</code> field isn't
     * returned.</p>
     */
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>The total number of items processed in a child workflow execution. This field
     * is returned only if <code>mapRunArn</code> was specified in the
     * <code>ListExecutions</code> API action. If <code>stateMachineArn</code> was
     * specified in <code>ListExecutions</code>, the <code>itemCount</code> field isn't
     * returned.</p>
     */
    inline ExecutionListItem& WithItemCount(int value) { SetItemCount(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const{ return m_stateMachineVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline bool StateMachineVersionArnHasBeenSet() const { return m_stateMachineVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline void SetStateMachineVersionArn(const Aws::String& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline void SetStateMachineVersionArn(Aws::String&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline void SetStateMachineVersionArn(const char* value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline ExecutionListItem& WithStateMachineVersionArn(const Aws::String& value) { SetStateMachineVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline ExecutionListItem& WithStateMachineVersionArn(Aws::String&& value) { SetStateMachineVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline ExecutionListItem& WithStateMachineVersionArn(const char* value) { SetStateMachineVersionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const{ return m_stateMachineAliasArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline bool StateMachineAliasArnHasBeenSet() const { return m_stateMachineAliasArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline void SetStateMachineAliasArn(const Aws::String& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline void SetStateMachineAliasArn(Aws::String&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline void SetStateMachineAliasArn(const char* value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline ExecutionListItem& WithStateMachineAliasArn(const Aws::String& value) { SetStateMachineAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline ExecutionListItem& WithStateMachineAliasArn(Aws::String&& value) { SetStateMachineAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline ExecutionListItem& WithStateMachineAliasArn(const char* value) { SetStateMachineAliasArn(value); return *this;}


    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is only
     * updated when you successfully redrive an execution.</p>
     */
    inline int GetRedriveCount() const{ return m_redriveCount; }

    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is only
     * updated when you successfully redrive an execution.</p>
     */
    inline bool RedriveCountHasBeenSet() const { return m_redriveCountHasBeenSet; }

    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is only
     * updated when you successfully redrive an execution.</p>
     */
    inline void SetRedriveCount(int value) { m_redriveCountHasBeenSet = true; m_redriveCount = value; }

    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is only
     * updated when you successfully redrive an execution.</p>
     */
    inline ExecutionListItem& WithRedriveCount(int value) { SetRedriveCount(value); return *this;}


    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline const Aws::Utils::DateTime& GetRedriveDate() const{ return m_redriveDate; }

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline bool RedriveDateHasBeenSet() const { return m_redriveDateHasBeenSet; }

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline void SetRedriveDate(const Aws::Utils::DateTime& value) { m_redriveDateHasBeenSet = true; m_redriveDate = value; }

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline void SetRedriveDate(Aws::Utils::DateTime&& value) { m_redriveDateHasBeenSet = true; m_redriveDate = std::move(value); }

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline ExecutionListItem& WithRedriveDate(const Aws::Utils::DateTime& value) { SetRedriveDate(value); return *this;}

    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline ExecutionListItem& WithRedriveDate(Aws::Utils::DateTime&& value) { SetRedriveDate(std::move(value)); return *this;}

  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate;
    bool m_stopDateHasBeenSet = false;

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    int m_itemCount;
    bool m_itemCountHasBeenSet = false;

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;

    int m_redriveCount;
    bool m_redriveCountHasBeenSet = false;

    Aws::Utils::DateTime m_redriveDate;
    bool m_redriveDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
