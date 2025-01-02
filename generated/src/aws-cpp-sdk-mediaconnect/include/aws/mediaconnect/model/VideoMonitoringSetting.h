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
   * Specifies the configuration for video stream metrics monitoring.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/VideoMonitoringSetting">AWS
   * API Reference</a></p>
   */
  class VideoMonitoringSetting
  {
  public:
    AWS_MEDIACONNECT_API VideoMonitoringSetting();
    AWS_MEDIACONNECT_API VideoMonitoringSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API VideoMonitoringSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Detects video frames that are black.
     */
    inline const BlackFrames& GetBlackFrames() const{ return m_blackFrames; }
    inline bool BlackFramesHasBeenSet() const { return m_blackFramesHasBeenSet; }
    inline void SetBlackFrames(const BlackFrames& value) { m_blackFramesHasBeenSet = true; m_blackFrames = value; }
    inline void SetBlackFrames(BlackFrames&& value) { m_blackFramesHasBeenSet = true; m_blackFrames = std::move(value); }
    inline VideoMonitoringSetting& WithBlackFrames(const BlackFrames& value) { SetBlackFrames(value); return *this;}
    inline VideoMonitoringSetting& WithBlackFrames(BlackFrames&& value) { SetBlackFrames(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Detects video frames that have not changed.
     */
    inline const FrozenFrames& GetFrozenFrames() const{ return m_frozenFrames; }
    inline bool FrozenFramesHasBeenSet() const { return m_frozenFramesHasBeenSet; }
    inline void SetFrozenFrames(const FrozenFrames& value) { m_frozenFramesHasBeenSet = true; m_frozenFrames = value; }
    inline void SetFrozenFrames(FrozenFrames&& value) { m_frozenFramesHasBeenSet = true; m_frozenFrames = std::move(value); }
    inline VideoMonitoringSetting& WithFrozenFrames(const FrozenFrames& value) { SetFrozenFrames(value); return *this;}
    inline VideoMonitoringSetting& WithFrozenFrames(FrozenFrames&& value) { SetFrozenFrames(std::move(value)); return *this;}
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
