/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
   * <p>Information about a scheduled execution for a maintenance
   * window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ScheduledWindowExecution">AWS
   * API Reference</a></p>
   */
  class ScheduledWindowExecution
  {
  public:
    AWS_SSM_API ScheduledWindowExecution() = default;
    AWS_SSM_API ScheduledWindowExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ScheduledWindowExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    ScheduledWindowExecution& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScheduledWindowExecution& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline const Aws::String& GetExecutionTime() const { return m_executionTime; }
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
    template<typename ExecutionTimeT = Aws::String>
    void SetExecutionTime(ExecutionTimeT&& value) { m_executionTimeHasBeenSet = true; m_executionTime = std::forward<ExecutionTimeT>(value); }
    template<typename ExecutionTimeT = Aws::String>
    ScheduledWindowExecution& WithExecutionTime(ExecutionTimeT&& value) { SetExecutionTime(std::forward<ExecutionTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_executionTime;
    bool m_executionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
