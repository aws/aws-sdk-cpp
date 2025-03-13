/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/CanaryRunState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryRunStateReasonCode.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains the status information about a canary
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunStatus">AWS
   * API Reference</a></p>
   */
  class CanaryRunStatus
  {
  public:
    AWS_SYNTHETICS_API CanaryRunStatus() = default;
    AWS_SYNTHETICS_API CanaryRunStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the run.</p>
     */
    inline CanaryRunState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CanaryRunState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CanaryRunStatus& WithState(CanaryRunState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If run of the canary failed, this field contains the reason for the
     * error.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    CanaryRunStatus& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is <code>CANARY_FAILURE</code>, an exception occurred in the
     * canary code. If this value is <code>EXECUTION_FAILURE</code>, an exception
     * occurred in CloudWatch Synthetics.</p>
     */
    inline CanaryRunStateReasonCode GetStateReasonCode() const { return m_stateReasonCode; }
    inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }
    inline void SetStateReasonCode(CanaryRunStateReasonCode value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = value; }
    inline CanaryRunStatus& WithStateReasonCode(CanaryRunStateReasonCode value) { SetStateReasonCode(value); return *this;}
    ///@}
  private:

    CanaryRunState m_state{CanaryRunState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    CanaryRunStateReasonCode m_stateReasonCode{CanaryRunStateReasonCode::NOT_SET};
    bool m_stateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
