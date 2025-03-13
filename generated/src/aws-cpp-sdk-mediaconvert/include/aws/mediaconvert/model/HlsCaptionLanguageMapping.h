/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Caption Language Mapping<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsCaptionLanguageMapping">AWS
   * API Reference</a></p>
   */
  class HlsCaptionLanguageMapping
  {
  public:
    AWS_MEDIACONVERT_API HlsCaptionLanguageMapping() = default;
    AWS_MEDIACONVERT_API HlsCaptionLanguageMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsCaptionLanguageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Caption channel.
     */
    inline int GetCaptionChannel() const { return m_captionChannel; }
    inline bool CaptionChannelHasBeenSet() const { return m_captionChannelHasBeenSet; }
    inline void SetCaptionChannel(int value) { m_captionChannelHasBeenSet = true; m_captionChannel = value; }
    inline HlsCaptionLanguageMapping& WithCaptionChannel(int value) { SetCaptionChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language for this captions channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline const Aws::String& GetCustomLanguageCode() const { return m_customLanguageCode; }
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }
    template<typename CustomLanguageCodeT = Aws::String>
    void SetCustomLanguageCode(CustomLanguageCodeT&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::forward<CustomLanguageCodeT>(value); }
    template<typename CustomLanguageCodeT = Aws::String>
    HlsCaptionLanguageMapping& WithCustomLanguageCode(CustomLanguageCodeT&& value) { SetCustomLanguageCode(std::forward<CustomLanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline HlsCaptionLanguageMapping& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Caption language description.
     */
    inline const Aws::String& GetLanguageDescription() const { return m_languageDescription; }
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }
    template<typename LanguageDescriptionT = Aws::String>
    void SetLanguageDescription(LanguageDescriptionT&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::forward<LanguageDescriptionT>(value); }
    template<typename LanguageDescriptionT = Aws::String>
    HlsCaptionLanguageMapping& WithLanguageDescription(LanguageDescriptionT&& value) { SetLanguageDescription(std::forward<LanguageDescriptionT>(value)); return *this;}
    ///@}
  private:

    int m_captionChannel{0};
    bool m_captionChannelHasBeenSet = false;

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
