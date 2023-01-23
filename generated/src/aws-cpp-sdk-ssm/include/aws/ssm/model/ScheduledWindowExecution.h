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
    AWS_SSM_API ScheduledWindowExecution();
    AWS_SSM_API ScheduledWindowExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ScheduledWindowExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline ScheduledWindowExecution& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline ScheduledWindowExecution& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window to be run.</p>
     */
    inline ScheduledWindowExecution& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline ScheduledWindowExecution& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline ScheduledWindowExecution& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance window to be run.</p>
     */
    inline ScheduledWindowExecution& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline const Aws::String& GetExecutionTime() const{ return m_executionTime; }

    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }

    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline void SetExecutionTime(const Aws::String& value) { m_executionTimeHasBeenSet = true; m_executionTime = value; }

    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline void SetExecutionTime(Aws::String&& value) { m_executionTimeHasBeenSet = true; m_executionTime = std::move(value); }

    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline void SetExecutionTime(const char* value) { m_executionTimeHasBeenSet = true; m_executionTime.assign(value); }

    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline ScheduledWindowExecution& WithExecutionTime(const Aws::String& value) { SetExecutionTime(value); return *this;}

    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline ScheduledWindowExecution& WithExecutionTime(Aws::String&& value) { SetExecutionTime(std::move(value)); return *this;}

    /**
     * <p>The time, in ISO-8601 Extended format, that the maintenance window is
     * scheduled to be run.</p>
     */
    inline ScheduledWindowExecution& WithExecutionTime(const char* value) { SetExecutionTime(value); return *this;}

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
