﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>

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
   * <p>An aggregate of step execution statuses displayed in the Amazon Web Services
   * Systems Manager console for a multi-Region and multi-account Automation
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ProgressCounters">AWS
   * API Reference</a></p>
   */
  class ProgressCounters
  {
  public:
    AWS_SSM_API ProgressCounters() = default;
    AWS_SSM_API ProgressCounters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ProgressCounters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of steps run in all specified Amazon Web Services Regions
     * and Amazon Web Services accounts for the current Automation execution.</p>
     */
    inline int GetTotalSteps() const { return m_totalSteps; }
    inline bool TotalStepsHasBeenSet() const { return m_totalStepsHasBeenSet; }
    inline void SetTotalSteps(int value) { m_totalStepsHasBeenSet = true; m_totalSteps = value; }
    inline ProgressCounters& WithTotalSteps(int value) { SetTotalSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of steps that successfully completed in all specified Amazon
     * Web Services Regions and Amazon Web Services accounts for the current Automation
     * execution.</p>
     */
    inline int GetSuccessSteps() const { return m_successSteps; }
    inline bool SuccessStepsHasBeenSet() const { return m_successStepsHasBeenSet; }
    inline void SetSuccessSteps(int value) { m_successStepsHasBeenSet = true; m_successSteps = value; }
    inline ProgressCounters& WithSuccessSteps(int value) { SetSuccessSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of steps that failed to run in all specified Amazon Web
     * Services Regions and Amazon Web Services accounts for the current Automation
     * execution.</p>
     */
    inline int GetFailedSteps() const { return m_failedSteps; }
    inline bool FailedStepsHasBeenSet() const { return m_failedStepsHasBeenSet; }
    inline void SetFailedSteps(int value) { m_failedStepsHasBeenSet = true; m_failedSteps = value; }
    inline ProgressCounters& WithFailedSteps(int value) { SetFailedSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of steps that the system cancelled in all specified Amazon
     * Web Services Regions and Amazon Web Services accounts for the current Automation
     * execution.</p>
     */
    inline int GetCancelledSteps() const { return m_cancelledSteps; }
    inline bool CancelledStepsHasBeenSet() const { return m_cancelledStepsHasBeenSet; }
    inline void SetCancelledSteps(int value) { m_cancelledStepsHasBeenSet = true; m_cancelledSteps = value; }
    inline ProgressCounters& WithCancelledSteps(int value) { SetCancelledSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of steps that timed out in all specified Amazon Web Services
     * Regions and Amazon Web Services accounts for the current Automation
     * execution.</p>
     */
    inline int GetTimedOutSteps() const { return m_timedOutSteps; }
    inline bool TimedOutStepsHasBeenSet() const { return m_timedOutStepsHasBeenSet; }
    inline void SetTimedOutSteps(int value) { m_timedOutStepsHasBeenSet = true; m_timedOutSteps = value; }
    inline ProgressCounters& WithTimedOutSteps(int value) { SetTimedOutSteps(value); return *this;}
    ///@}
  private:

    int m_totalSteps{0};
    bool m_totalStepsHasBeenSet = false;

    int m_successSteps{0};
    bool m_successStepsHasBeenSet = false;

    int m_failedSteps{0};
    bool m_failedStepsHasBeenSet = false;

    int m_cancelledSteps{0};
    bool m_cancelledStepsHasBeenSet = false;

    int m_timedOutSteps{0};
    bool m_timedOutStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
