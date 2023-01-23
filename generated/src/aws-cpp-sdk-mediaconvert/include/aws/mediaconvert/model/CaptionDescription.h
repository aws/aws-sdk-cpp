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
   * This object holds groups of settings related to captions for one output. For
   * each output that has captions, include one instance of
   * CaptionDescriptions.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionDescription">AWS
   * API Reference</a></p>
   */
  class CaptionDescription
  {
  public:
    AWS_MEDIACONVERT_API CaptionDescription();
    AWS_MEDIACONVERT_API CaptionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline const Aws::String& GetCaptionSelectorName() const{ return m_captionSelectorName; }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline bool CaptionSelectorNameHasBeenSet() const { return m_captionSelectorNameHasBeenSet; }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline void SetCaptionSelectorName(const Aws::String& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = value; }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline void SetCaptionSelectorName(Aws::String&& value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName = std::move(value); }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline void SetCaptionSelectorName(const char* value) { m_captionSelectorNameHasBeenSet = true; m_captionSelectorName.assign(value); }

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline CaptionDescription& WithCaptionSelectorName(const Aws::String& value) { SetCaptionSelectorName(value); return *this;}

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline CaptionDescription& WithCaptionSelectorName(Aws::String&& value) { SetCaptionSelectorName(std::move(value)); return *this;}

    /**
     * Specifies which "Caption Selector":#inputs-caption_selector to use from each
     * input when generating captions. The name should be of the format "Caption
     * Selector <N>", which denotes that the Nth Caption Selector will be used from
     * each input.
     */
    inline CaptionDescription& WithCaptionSelectorName(const char* value) { SetCaptionSelectorName(value); return *this;}


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
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }

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
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }

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
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }

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
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }

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
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }

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
    inline CaptionDescription& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}

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
    inline CaptionDescription& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}

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
    inline CaptionDescription& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}


    /**
     * Settings related to one captions tab on the MediaConvert console. In your job
     * JSON, an instance of captions DestinationSettings is equivalent to one captions
     * tab in the console. Usually, one captions tab corresponds to one output captions
     * track. Depending on your output captions format, one tab might correspond to a
     * set of output captions tracks. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.
     */
    inline const CaptionDestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }

    /**
     * Settings related to one captions tab on the MediaConvert console. In your job
     * JSON, an instance of captions DestinationSettings is equivalent to one captions
     * tab in the console. Usually, one captions tab corresponds to one output captions
     * track. Depending on your output captions format, one tab might correspond to a
     * set of output captions tracks. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.
     */
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }

    /**
     * Settings related to one captions tab on the MediaConvert console. In your job
     * JSON, an instance of captions DestinationSettings is equivalent to one captions
     * tab in the console. Usually, one captions tab corresponds to one output captions
     * track. Depending on your output captions format, one tab might correspond to a
     * set of output captions tracks. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.
     */
    inline void SetDestinationSettings(const CaptionDestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }

    /**
     * Settings related to one captions tab on the MediaConvert console. In your job
     * JSON, an instance of captions DestinationSettings is equivalent to one captions
     * tab in the console. Usually, one captions tab corresponds to one output captions
     * track. Depending on your output captions format, one tab might correspond to a
     * set of output captions tracks. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.
     */
    inline void SetDestinationSettings(CaptionDestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }

    /**
     * Settings related to one captions tab on the MediaConvert console. In your job
     * JSON, an instance of captions DestinationSettings is equivalent to one captions
     * tab in the console. Usually, one captions tab corresponds to one output captions
     * track. Depending on your output captions format, one tab might correspond to a
     * set of output captions tracks. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.
     */
    inline CaptionDescription& WithDestinationSettings(const CaptionDestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Settings related to one captions tab on the MediaConvert console. In your job
     * JSON, an instance of captions DestinationSettings is equivalent to one captions
     * tab in the console. Usually, one captions tab corresponds to one output captions
     * track. Depending on your output captions format, one tab might correspond to a
     * set of output captions tracks. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.
     */
    inline CaptionDescription& WithDestinationSettings(CaptionDestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline CaptionDescription& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * Specify the language of this captions output track. For most captions output
     * formats, the encoder puts this language information in the output captions
     * metadata. If your output captions format is DVB-Sub or Burn in, the encoder uses
     * this language information to choose the font language for rendering the captions
     * text.
     */
    inline CaptionDescription& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }

    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }

    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }

    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }

    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }

    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline CaptionDescription& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}

    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline CaptionDescription& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}

    /**
     * Specify a label for this set of output captions. For example, "English",
     * "Director commentary", or "track_2". For streaming outputs, MediaConvert passes
     * this information into destination manifests for display on the end-viewer's
     * player device. For outputs in other output groups, the service ignores this
     * setting.
     */
    inline CaptionDescription& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}

  private:

    Aws::String m_captionSelectorName;
    bool m_captionSelectorNameHasBeenSet = false;

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    CaptionDestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
