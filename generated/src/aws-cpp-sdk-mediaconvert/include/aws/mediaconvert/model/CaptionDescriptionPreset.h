/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/CaptionDestinationSettings.h>
#include <aws/mediaconvert/model/LanguageCode.h>
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
   * Caption Description for preset<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionDescriptionPreset">AWS
   * API Reference</a></p>
   */
  class CaptionDescriptionPreset
  {
  public:
    AWS_MEDIACONVERT_API CaptionDescriptionPreset() = default;
    AWS_MEDIACONVERT_API CaptionDescriptionPreset(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionDescriptionPreset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the language for this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information when automatically selecting the font script for
     * rendering the captions text. For all outputs, you can use an ISO 639-2 or ISO
     * 639-3 code. For streaming outputs, you can also use any other code in the full
     * RFC-5646 specification. Streaming outputs are those that are in one of the
     * following output groups: CMAF, DASH ISO, Apple HLS, or Microsoft Smooth
     * Streaming.
     */
    inline const Aws::String& GetCustomLanguageCode() const { return m_customLanguageCode; }
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }
    template<typename CustomLanguageCodeT = Aws::String>
    void SetCustomLanguageCode(CustomLanguageCodeT&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::forward<CustomLanguageCodeT>(value); }
    template<typename CustomLanguageCodeT = Aws::String>
    CaptionDescriptionPreset& WithCustomLanguageCode(CustomLanguageCodeT&& value) { SetCustomLanguageCode(std::forward<CustomLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to one captions tab on the MediaConvert console. Usually, one
     * captions tab corresponds to one output captions track. Depending on your output
     * captions format, one tab might correspond to a set of output captions tracks.
     * For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.
     */
    inline const CaptionDestinationSettings& GetDestinationSettings() const { return m_destinationSettings; }
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }
    template<typename DestinationSettingsT = CaptionDestinationSettings>
    void SetDestinationSettings(DestinationSettingsT&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::forward<DestinationSettingsT>(value); }
    template<typename DestinationSettingsT = CaptionDestinationSettings>
    CaptionDescriptionPreset& WithDestinationSettings(DestinationSettingsT&& value) { SetDestinationSettings(std::forward<DestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CaptionDescriptionPreset& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline const Aws::String& GetLanguageDescription() const { return m_languageDescription; }
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }
    template<typename LanguageDescriptionT = Aws::String>
    void SetLanguageDescription(LanguageDescriptionT&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::forward<LanguageDescriptionT>(value); }
    template<typename LanguageDescriptionT = Aws::String>
    CaptionDescriptionPreset& WithLanguageDescription(LanguageDescriptionT&& value) { SetLanguageDescription(std::forward<LanguageDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    CaptionDestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
