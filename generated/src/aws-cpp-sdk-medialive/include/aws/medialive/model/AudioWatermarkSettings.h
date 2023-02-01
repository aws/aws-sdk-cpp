/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/NielsenWatermarksSettings.h>
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
   * Audio Watermark Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioWatermarkSettings">AWS
   * API Reference</a></p>
   */
  class AudioWatermarkSettings
  {
  public:
    AWS_MEDIALIVE_API AudioWatermarkSettings();
    AWS_MEDIALIVE_API AudioWatermarkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioWatermarkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Settings to configure Nielsen Watermarks in the audio encode
     */
    inline const NielsenWatermarksSettings& GetNielsenWatermarksSettings() const{ return m_nielsenWatermarksSettings; }

    /**
     * Settings to configure Nielsen Watermarks in the audio encode
     */
    inline bool NielsenWatermarksSettingsHasBeenSet() const { return m_nielsenWatermarksSettingsHasBeenSet; }

    /**
     * Settings to configure Nielsen Watermarks in the audio encode
     */
    inline void SetNielsenWatermarksSettings(const NielsenWatermarksSettings& value) { m_nielsenWatermarksSettingsHasBeenSet = true; m_nielsenWatermarksSettings = value; }

    /**
     * Settings to configure Nielsen Watermarks in the audio encode
     */
    inline void SetNielsenWatermarksSettings(NielsenWatermarksSettings&& value) { m_nielsenWatermarksSettingsHasBeenSet = true; m_nielsenWatermarksSettings = std::move(value); }

    /**
     * Settings to configure Nielsen Watermarks in the audio encode
     */
    inline AudioWatermarkSettings& WithNielsenWatermarksSettings(const NielsenWatermarksSettings& value) { SetNielsenWatermarksSettings(value); return *this;}

    /**
     * Settings to configure Nielsen Watermarks in the audio encode
     */
    inline AudioWatermarkSettings& WithNielsenWatermarksSettings(NielsenWatermarksSettings&& value) { SetNielsenWatermarksSettings(std::move(value)); return *this;}

  private:

    NielsenWatermarksSettings m_nielsenWatermarksSettings;
    bool m_nielsenWatermarksSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
