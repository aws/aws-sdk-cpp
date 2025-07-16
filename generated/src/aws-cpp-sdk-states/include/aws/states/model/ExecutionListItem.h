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
    AWS_SFN_API ExecutionListItem() = default;
    AWS_SFN_API ExecutionListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ExecutionListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    ExecutionListItem& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine that ran the
     * execution.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    ExecutionListItem& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>,
     * <code>U+FFFE-FFFF</code>)</p> </li> <li> <p>surrogates
     * (<code>U+D800-DFFF</code>)</p> </li> <li> <p>invalid characters (<code>
     * U+10FFFF</code>)</p> </li> </ul> <p>To enable logging with CloudWatch Logs, the
     * name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ExecutionListItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution.</p>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ExecutionListItem& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    ExecutionListItem& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the execution already ended, the date the execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const { return m_stopDate; }
    inline bool StopDateHasBeenSet() const { return m_stopDateHasBeenSet; }
    template<typename StopDateT = Aws::Utils::DateTime>
    void SetStopDate(StopDateT&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::forward<StopDateT>(value); }
    template<typename StopDateT = Aws::Utils::DateTime>
    ExecutionListItem& WithStopDate(StopDateT&& value) { SetStopDate(std::forward<StopDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Map Run. This field is returned only if
     * <code>mapRunArn</code> was specified in the <code>ListExecutions</code> API
     * action. If <code>stateMachineArn</code> was specified in
     * <code>ListExecutions</code>, the <code>mapRunArn</code> isn't returned.</p>
     */
    inline const Aws::String& GetMapRunArn() const { return m_mapRunArn; }
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }
    template<typename MapRunArnT = Aws::String>
    void SetMapRunArn(MapRunArnT&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::forward<MapRunArnT>(value); }
    template<typename MapRunArnT = Aws::String>
    ExecutionListItem& WithMapRunArn(MapRunArnT&& value) { SetMapRunArn(std::forward<MapRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of items processed in a child workflow execution. This field
     * is returned only if <code>mapRunArn</code> was specified in the
     * <code>ListExecutions</code> API action. If <code>stateMachineArn</code> was
     * specified in <code>ListExecutions</code>, the <code>itemCount</code> field isn't
     * returned.</p>
     */
    inline int GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(int value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline ExecutionListItem& WithItemCount(int value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution.</p> <p>If the state machine execution was started with an
     * unqualified ARN, it returns null.</p> <p>If the execution was started using a
     * <code>stateMachineAliasArn</code>, both the <code>stateMachineAliasArn</code>
     * and <code>stateMachineVersionArn</code> parameters contain the respective
     * values.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const { return m_stateMachineVersionArn; }
    inline bool StateMachineVersionArnHasBeenSet() const { return m_stateMachineVersionArnHasBeenSet; }
    template<typename StateMachineVersionArnT = Aws::String>
    void SetStateMachineVersionArn(StateMachineVersionArnT&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::forward<StateMachineVersionArnT>(value); }
    template<typename StateMachineVersionArnT = Aws::String>
    ExecutionListItem& WithStateMachineVersionArn(StateMachineVersionArnT&& value) { SetStateMachineVersionArn(std::forward<StateMachineVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias used to start an
     * execution.</p> <p>If the state machine execution was started with an unqualified
     * ARN or a version ARN, it returns null.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const { return m_stateMachineAliasArn; }
    inline bool StateMachineAliasArnHasBeenSet() const { return m_stateMachineAliasArnHasBeenSet; }
    template<typename StateMachineAliasArnT = Aws::String>
    void SetStateMachineAliasArn(StateMachineAliasArnT&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::forward<StateMachineAliasArnT>(value); }
    template<typename StateMachineAliasArnT = Aws::String>
    ExecutionListItem& WithStateMachineAliasArn(StateMachineAliasArnT&& value) { SetStateMachineAliasArn(std::forward<StateMachineAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is only
     * updated when you successfully redrive an execution.</p>
     */
    inline int GetRedriveCount() const { return m_redriveCount; }
    inline bool RedriveCountHasBeenSet() const { return m_redriveCountHasBeenSet; }
    inline void SetRedriveCount(int value) { m_redriveCountHasBeenSet = true; m_redriveCount = value; }
    inline ExecutionListItem& WithRedriveCount(int value) { SetRedriveCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution was last redriven.</p>
     */
    inline const Aws::Utils::DateTime& GetRedriveDate() const { return m_redriveDate; }
    inline bool RedriveDateHasBeenSet() const { return m_redriveDateHasBeenSet; }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    void SetRedriveDate(RedriveDateT&& value) { m_redriveDateHasBeenSet = true; m_redriveDate = std::forward<RedriveDateT>(value); }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    ExecutionListItem& WithRedriveDate(RedriveDateT&& value) { SetRedriveDate(std::forward<RedriveDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate{};
    bool m_stopDateHasBeenSet = false;

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    int m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;

    int m_redriveCount{0};
    bool m_redriveCountHasBeenSet = false;

    Aws::Utils::DateTime m_redriveDate{};
    bool m_redriveDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
