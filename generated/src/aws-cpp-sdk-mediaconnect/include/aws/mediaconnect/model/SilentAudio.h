/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
   * Configures settings for the SilentAudio metric.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SilentAudio">AWS
   * API Reference</a></p>
   */
  class SilentAudio
  {
  public:
    AWS_MEDIACONNECT_API SilentAudio();
    AWS_MEDIACONNECT_API SilentAudio(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API SilentAudio& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Indicates whether the SilentAudio metric is enabled or disabled.
     */
    inline const State& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline SilentAudio& WithState(const State& value) { SetState(value); return *this;}
    inline SilentAudio& WithState(State&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the number of consecutive seconds of silence that triggers an event or
     * alert.
     */
    inline int GetThresholdSeconds() const{ return m_thresholdSeconds; }
    inline bool ThresholdSecondsHasBeenSet() const { return m_thresholdSecondsHasBeenSet; }
    inline void SetThresholdSeconds(int value) { m_thresholdSecondsHasBeenSet = true; m_thresholdSeconds = value; }
    inline SilentAudio& WithThresholdSeconds(int value) { SetThresholdSeconds(value); return *this;}
    ///@}
  private:

    State m_state;
    bool m_stateHasBeenSet = false;

    int m_thresholdSeconds;
    bool m_thresholdSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
