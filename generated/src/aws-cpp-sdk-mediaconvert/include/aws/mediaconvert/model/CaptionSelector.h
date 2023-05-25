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
   * in your outputs. You can use up to 20 captions selectors per input.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSelector">AWS
   * API Reference</a></p>
   */
  class CaptionSelector
  {
  public:
    AWS_MEDIACONVERT_API CaptionSelector();
    AWS_MEDIACONVERT_API CaptionSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }

    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }

    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }

    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }

    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }

    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline CaptionSelector& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}

    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline CaptionSelector& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}

    /**
     * The specific language to extract from source, using the ISO 639-2 or ISO 639-3
     * three-letter language code. If input is SCTE-27, complete this field and/or PID
     * to select the caption language to extract. If input is DVB-Sub and output is
     * Burn-in or SMPTE-TT, complete this field and/or PID to select the caption
     * language to extract. If input is DVB-Sub that is being passed through, omit this
     * field (and PID field); there is no way to extract a specific language with
     * pass-through captions.
     */
    inline CaptionSelector& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}


    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline CaptionSelector& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * The specific language to extract from source. If input is SCTE-27, complete this
     * field and/or PID to select the caption language to extract. If input is DVB-Sub
     * and output is Burn-in or SMPTE-TT, complete this field and/or PID to select the
     * caption language to extract. If input is DVB-Sub that is being passed through,
     * omit this field (and PID field); there is no way to extract a specific language
     * with pass-through captions.
     */
    inline CaptionSelector& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
     * specify the URI of the input captions source file. If your input captions are
     * IMSC in an IMF package, use TrackSourceSettings instead of FileSoureSettings.
     */
    inline const CaptionSourceSettings& GetSourceSettings() const{ return m_sourceSettings; }

    /**
     * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
     * specify the URI of the input captions source file. If your input captions are
     * IMSC in an IMF package, use TrackSourceSettings instead of FileSoureSettings.
     */
    inline bool SourceSettingsHasBeenSet() const { return m_sourceSettingsHasBeenSet; }

    /**
     * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
     * specify the URI of the input captions source file. If your input captions are
     * IMSC in an IMF package, use TrackSourceSettings instead of FileSoureSettings.
     */
    inline void SetSourceSettings(const CaptionSourceSettings& value) { m_sourceSettingsHasBeenSet = true; m_sourceSettings = value; }

    /**
     * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
     * specify the URI of the input captions source file. If your input captions are
     * IMSC in an IMF package, use TrackSourceSettings instead of FileSoureSettings.
     */
    inline void SetSourceSettings(CaptionSourceSettings&& value) { m_sourceSettingsHasBeenSet = true; m_sourceSettings = std::move(value); }

    /**
     * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
     * specify the URI of the input captions source file. If your input captions are
     * IMSC in an IMF package, use TrackSourceSettings instead of FileSoureSettings.
     */
    inline CaptionSelector& WithSourceSettings(const CaptionSourceSettings& value) { SetSourceSettings(value); return *this;}

    /**
     * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
     * specify the URI of the input captions source file. If your input captions are
     * IMSC in an IMF package, use TrackSourceSettings instead of FileSoureSettings.
     */
    inline CaptionSelector& WithSourceSettings(CaptionSourceSettings&& value) { SetSourceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    CaptionSourceSettings m_sourceSettings;
    bool m_sourceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
