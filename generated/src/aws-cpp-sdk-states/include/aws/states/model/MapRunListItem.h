/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details about a specific Map Run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/MapRunListItem">AWS
   * API Reference</a></p>
   */
  class MapRunListItem
  {
  public:
    AWS_SFN_API MapRunListItem() = default;
    AWS_SFN_API MapRunListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API MapRunListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>executionArn</code> of the execution from which the Map Run was
     * started.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    MapRunListItem& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Map Run.</p>
     */
    inline const Aws::String& GetMapRunArn() const { return m_mapRunArn; }
    inline bool MapRunArnHasBeenSet() const { return m_mapRunArnHasBeenSet; }
    template<typename MapRunArnT = Aws::String>
    void SetMapRunArn(MapRunArnT&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::forward<MapRunArnT>(value); }
    template<typename MapRunArnT = Aws::String>
    MapRunListItem& WithMapRunArn(MapRunArnT&& value) { SetMapRunArn(std::forward<MapRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the executed state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    MapRunListItem& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the Map Run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    MapRunListItem& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the Map Run stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const { return m_stopDate; }
    inline bool StopDateHasBeenSet() const { return m_stopDateHasBeenSet; }
    template<typename StopDateT = Aws::Utils::DateTime>
    void SetStopDate(StopDateT&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::forward<StopDateT>(value); }
    template<typename StopDateT = Aws::Utils::DateTime>
    MapRunListItem& WithStopDate(StopDateT&& value) { SetStopDate(std::forward<StopDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate{};
    bool m_stopDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
