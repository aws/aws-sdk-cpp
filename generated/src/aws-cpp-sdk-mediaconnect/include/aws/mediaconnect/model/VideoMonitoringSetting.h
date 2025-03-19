/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BlackFrames.h>
#include <aws/mediaconnect/model/FrozenFrames.h>
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
   * <p>Specifies the configuration for video stream metrics
   * monitoring.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/VideoMonitoringSetting">AWS
   * API Reference</a></p>
   */
  class VideoMonitoringSetting
  {
  public:
    AWS_MEDIACONNECT_API VideoMonitoringSetting() = default;
    AWS_MEDIACONNECT_API VideoMonitoringSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API VideoMonitoringSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Detects video frames that are black. </p>
     */
    inline const BlackFrames& GetBlackFrames() const { return m_blackFrames; }
    inline bool BlackFramesHasBeenSet() const { return m_blackFramesHasBeenSet; }
    template<typename BlackFramesT = BlackFrames>
    void SetBlackFrames(BlackFramesT&& value) { m_blackFramesHasBeenSet = true; m_blackFrames = std::forward<BlackFramesT>(value); }
    template<typename BlackFramesT = BlackFrames>
    VideoMonitoringSetting& WithBlackFrames(BlackFramesT&& value) { SetBlackFrames(std::forward<BlackFramesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detects video frames that have not changed. </p>
     */
    inline const FrozenFrames& GetFrozenFrames() const { return m_frozenFrames; }
    inline bool FrozenFramesHasBeenSet() const { return m_frozenFramesHasBeenSet; }
    template<typename FrozenFramesT = FrozenFrames>
    void SetFrozenFrames(FrozenFramesT&& value) { m_frozenFramesHasBeenSet = true; m_frozenFrames = std::forward<FrozenFramesT>(value); }
    template<typename FrozenFramesT = FrozenFrames>
    VideoMonitoringSetting& WithFrozenFrames(FrozenFramesT&& value) { SetFrozenFrames(std::forward<FrozenFramesT>(value)); return *this;}
    ///@}
  private:

    BlackFrames m_blackFrames;
    bool m_blackFramesHasBeenSet = false;

    FrozenFrames m_frozenFrames;
    bool m_frozenFramesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
