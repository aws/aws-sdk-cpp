/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FrameCaptureS3Settings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Frame Capture Cdn Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureCdnSettings">AWS
   * API Reference</a></p>
   */
  class FrameCaptureCdnSettings
  {
  public:
    AWS_MEDIALIVE_API FrameCaptureCdnSettings() = default;
    AWS_MEDIALIVE_API FrameCaptureCdnSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FrameCaptureCdnSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FrameCaptureS3Settings& GetFrameCaptureS3Settings() const { return m_frameCaptureS3Settings; }
    inline bool FrameCaptureS3SettingsHasBeenSet() const { return m_frameCaptureS3SettingsHasBeenSet; }
    template<typename FrameCaptureS3SettingsT = FrameCaptureS3Settings>
    void SetFrameCaptureS3Settings(FrameCaptureS3SettingsT&& value) { m_frameCaptureS3SettingsHasBeenSet = true; m_frameCaptureS3Settings = std::forward<FrameCaptureS3SettingsT>(value); }
    template<typename FrameCaptureS3SettingsT = FrameCaptureS3Settings>
    FrameCaptureCdnSettings& WithFrameCaptureS3Settings(FrameCaptureS3SettingsT&& value) { SetFrameCaptureS3Settings(std::forward<FrameCaptureS3SettingsT>(value)); return *this;}
    ///@}
  private:

    FrameCaptureS3Settings m_frameCaptureS3Settings;
    bool m_frameCaptureS3SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
