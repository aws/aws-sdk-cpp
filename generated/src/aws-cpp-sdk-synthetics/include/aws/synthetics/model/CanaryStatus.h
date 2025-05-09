/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/CanaryState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryStateReasonCode.h>
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
   * <p>A structure that contains the current state of the canary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryStatus">AWS
   * API Reference</a></p>
   */
  class CanaryStatus
  {
  public:
    AWS_SYNTHETICS_API CanaryStatus() = default;
    AWS_SYNTHETICS_API CanaryStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the canary.</p>
     */
    inline CanaryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CanaryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CanaryStatus& WithState(CanaryState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the canary creation or update failed, this field provides details on the
     * failure.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    CanaryStatus& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the canary creation or update failed, this field displays the reason
     * code.</p>
     */
    inline CanaryStateReasonCode GetStateReasonCode() const { return m_stateReasonCode; }
    inline bool StateReasonCodeHasBeenSet() const { return m_stateReasonCodeHasBeenSet; }
    inline void SetStateReasonCode(CanaryStateReasonCode value) { m_stateReasonCodeHasBeenSet = true; m_stateReasonCode = value; }
    inline CanaryStatus& WithStateReasonCode(CanaryStateReasonCode value) { SetStateReasonCode(value); return *this;}
    ///@}
  private:

    CanaryState m_state{CanaryState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    CanaryStateReasonCode m_stateReasonCode{CanaryStateReasonCode::NOT_SET};
    bool m_stateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
