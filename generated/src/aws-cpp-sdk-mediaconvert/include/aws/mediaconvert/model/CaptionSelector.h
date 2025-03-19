/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/mediaconvert/model/CaptionSourceSettings.h>
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
   * Use captions selectors to specify the captions data from your input that you use
   * in your outputs. You can use up to 100 captions selectors per input.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSelector">AWS
   * API Reference</a></p>
   */
  class CaptionSelector
  {
  public:
    AWS_MEDIACONVERT_API CaptionSelector() = default;
    AWS_MEDIACONVERT_API CaptionSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in, complete this field and/or PID to select the caption language to
     * extract. If input is DVB-Sub that is being passed through, omit this field (and
     * PID field); there is no way to extract a specific language with pass-through
     * captions.
     */
    inline const Aws::String& GetCustomLanguageCode() const { return m_customLanguageCode; }
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }
    template<typename CustomLanguageCodeT = Aws::String>
    void SetCustomLanguageCode(CustomLanguageCodeT&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::forward<CustomLanguageCodeT>(value); }
    template<typename CustomLanguageCodeT = Aws::String>
    CaptionSelector& WithCustomLanguageCode(CustomLanguageCodeT&& value) { SetCustomLanguageCode(std::forward<CustomLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline CaptionSelector& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
     * specify the URI of the input captions source file. If your input captions are
     * IMSC in an IMF package, use TrackSourceSettings instead of FileSoureSettings.
     */
    inline const CaptionSourceSettings& GetSourceSettings() const { return m_sourceSettings; }
    inline bool SourceSettingsHasBeenSet() const { return m_sourceSettingsHasBeenSet; }
    template<typename SourceSettingsT = CaptionSourceSettings>
    void SetSourceSettings(SourceSettingsT&& value) { m_sourceSettingsHasBeenSet = true; m_sourceSettings = std::forward<SourceSettingsT>(value); }
    template<typename SourceSettingsT = CaptionSourceSettings>
    CaptionSelector& WithSourceSettings(SourceSettingsT&& value) { SetSourceSettings(std::forward<SourceSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    CaptionSourceSettings m_sourceSettings;
    bool m_sourceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
