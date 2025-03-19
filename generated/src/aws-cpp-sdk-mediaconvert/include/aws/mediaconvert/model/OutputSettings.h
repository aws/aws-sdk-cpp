/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/HlsSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Specific settings for this type of output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputSettings">AWS
   * API Reference</a></p>
   */
  class OutputSettings
  {
  public:
    AWS_MEDIACONVERT_API OutputSettings() = default;
    AWS_MEDIACONVERT_API OutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Settings for HLS output groups
     */
    inline const HlsSettings& GetHlsSettings() const { return m_hlsSettings; }
    inline bool HlsSettingsHasBeenSet() const { return m_hlsSettingsHasBeenSet; }
    template<typename HlsSettingsT = HlsSettings>
    void SetHlsSettings(HlsSettingsT&& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = std::forward<HlsSettingsT>(value); }
    template<typename HlsSettingsT = HlsSettings>
    OutputSettings& WithHlsSettings(HlsSettingsT&& value) { SetHlsSettings(std::forward<HlsSettingsT>(value)); return *this;}
    ///@}
  private:

    HlsSettings m_hlsSettings;
    bool m_hlsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
