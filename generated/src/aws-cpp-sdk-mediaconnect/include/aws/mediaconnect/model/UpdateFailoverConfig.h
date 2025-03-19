/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FailoverMode.h>
#include <aws/mediaconnect/model/SourcePriority.h>
#include <aws/mediaconnect/model/State.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The settings for source failover.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFailoverConfig">AWS
   * API Reference</a></p>
   */
  class UpdateFailoverConfig
  {
  public:
    AWS_MEDIACONNECT_API UpdateFailoverConfig() = default;
    AWS_MEDIACONNECT_API UpdateFailoverConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API UpdateFailoverConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of failover you choose for this flow. MERGE combines the source
     * streams into a single stream, allowing graceful recovery from any single-source
     * loss. FAILOVER allows switching between different streams.</p>
     */
    inline FailoverMode GetFailoverMode() const { return m_failoverMode; }
    inline bool FailoverModeHasBeenSet() const { return m_failoverModeHasBeenSet; }
    inline void SetFailoverMode(FailoverMode value) { m_failoverModeHasBeenSet = true; m_failoverMode = value; }
    inline UpdateFailoverConfig& WithFailoverMode(FailoverMode value) { SetFailoverMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Recovery window time to look for dash-7 packets.</p>
     */
    inline int GetRecoveryWindow() const { return m_recoveryWindow; }
    inline bool RecoveryWindowHasBeenSet() const { return m_recoveryWindowHasBeenSet; }
    inline void SetRecoveryWindow(int value) { m_recoveryWindowHasBeenSet = true; m_recoveryWindow = value; }
    inline UpdateFailoverConfig& WithRecoveryWindow(int value) { SetRecoveryWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The priority you want to assign to a source. You can have a primary stream
     * and a backup stream or two equally prioritized streams.</p>
     */
    inline const SourcePriority& GetSourcePriority() const { return m_sourcePriority; }
    inline bool SourcePriorityHasBeenSet() const { return m_sourcePriorityHasBeenSet; }
    template<typename SourcePriorityT = SourcePriority>
    void SetSourcePriority(SourcePriorityT&& value) { m_sourcePriorityHasBeenSet = true; m_sourcePriority = std::forward<SourcePriorityT>(value); }
    template<typename SourcePriorityT = SourcePriority>
    UpdateFailoverConfig& WithSourcePriority(SourcePriorityT&& value) { SetSourcePriority(std::forward<SourcePriorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of source failover on the flow. If the state is inactive, the flow
     * can have only one source. If the state is active, the flow can have one or two
     * sources. </p>
     */
    inline State GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(State value) { m_stateHasBeenSet = true; m_state = value; }
    inline UpdateFailoverConfig& WithState(State value) { SetState(value); return *this;}
    ///@}
  private:

    FailoverMode m_failoverMode{FailoverMode::NOT_SET};
    bool m_failoverModeHasBeenSet = false;

    int m_recoveryWindow{0};
    bool m_recoveryWindowHasBeenSet = false;

    SourcePriority m_sourcePriority;
    bool m_sourcePriorityHasBeenSet = false;

    State m_state{State::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
