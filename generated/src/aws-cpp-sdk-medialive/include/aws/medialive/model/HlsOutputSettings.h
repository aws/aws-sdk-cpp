/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsH265PackagingType.h>
#include <aws/medialive/model/HlsSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Hls Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsOutputSettings">AWS
   * API Reference</a></p>
   */
  class HlsOutputSettings
  {
  public:
    AWS_MEDIALIVE_API HlsOutputSettings() = default;
    AWS_MEDIALIVE_API HlsOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline HlsH265PackagingType GetH265PackagingType() const { return m_h265PackagingType; }
    inline bool H265PackagingTypeHasBeenSet() const { return m_h265PackagingTypeHasBeenSet; }
    inline void SetH265PackagingType(HlsH265PackagingType value) { m_h265PackagingTypeHasBeenSet = true; m_h265PackagingType = value; }
    inline HlsOutputSettings& WithH265PackagingType(HlsH265PackagingType value) { SetH265PackagingType(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings regarding the underlying stream. These settings are different for
     * audio-only outputs.
     */
    inline const HlsSettings& GetHlsSettings() const { return m_hlsSettings; }
    inline bool HlsSettingsHasBeenSet() const { return m_hlsSettingsHasBeenSet; }
    template<typename HlsSettingsT = HlsSettings>
    void SetHlsSettings(HlsSettingsT&& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = std::forward<HlsSettingsT>(value); }
    template<typename HlsSettingsT = HlsSettings>
    HlsOutputSettings& WithHlsSettings(HlsSettingsT&& value) { SetHlsSettings(std::forward<HlsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline const Aws::String& GetNameModifier() const { return m_nameModifier; }
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }
    template<typename NameModifierT = Aws::String>
    void SetNameModifier(NameModifierT&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::forward<NameModifierT>(value); }
    template<typename NameModifierT = Aws::String>
    HlsOutputSettings& WithNameModifier(NameModifierT&& value) { SetNameModifier(std::forward<NameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * String concatenated to end of segment filenames.
     */
    inline const Aws::String& GetSegmentModifier() const { return m_segmentModifier; }
    inline bool SegmentModifierHasBeenSet() const { return m_segmentModifierHasBeenSet; }
    template<typename SegmentModifierT = Aws::String>
    void SetSegmentModifier(SegmentModifierT&& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = std::forward<SegmentModifierT>(value); }
    template<typename SegmentModifierT = Aws::String>
    HlsOutputSettings& WithSegmentModifier(SegmentModifierT&& value) { SetSegmentModifier(std::forward<SegmentModifierT>(value)); return *this;}
    ///@}
  private:

    HlsH265PackagingType m_h265PackagingType{HlsH265PackagingType::NOT_SET};
    bool m_h265PackagingTypeHasBeenSet = false;

    HlsSettings m_hlsSettings;
    bool m_hlsSettingsHasBeenSet = false;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;

    Aws::String m_segmentModifier;
    bool m_segmentModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
