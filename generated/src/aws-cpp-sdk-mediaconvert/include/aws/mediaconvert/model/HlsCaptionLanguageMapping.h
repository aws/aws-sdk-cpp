﻿/**
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
    AWS_MEDIACONVERT_API HlsCaptionLanguageMapping();
    AWS_MEDIACONVERT_API HlsCaptionLanguageMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsCaptionLanguageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Caption channel.
     */
    inline int GetCaptionChannel() const{ return m_captionChannel; }
    inline bool CaptionChannelHasBeenSet() const { return m_captionChannelHasBeenSet; }
    inline void SetCaptionChannel(int value) { m_captionChannelHasBeenSet = true; m_captionChannel = value; }
    inline HlsCaptionLanguageMapping& WithCaptionChannel(int value) { SetCaptionChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language for this captions channel, using the ISO 639-2 or ISO 639-3
     * three-letter language code
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }
    inline HlsCaptionLanguageMapping& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}
    inline HlsCaptionLanguageMapping& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}
    inline HlsCaptionLanguageMapping& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language, using the ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php.
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline HlsCaptionLanguageMapping& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline HlsCaptionLanguageMapping& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Caption language description.
     */
    inline const Aws::String& GetLanguageDescription() const{ return m_languageDescription; }
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }
    inline void SetLanguageDescription(const Aws::String& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = value; }
    inline void SetLanguageDescription(Aws::String&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::move(value); }
    inline void SetLanguageDescription(const char* value) { m_languageDescriptionHasBeenSet = true; m_languageDescription.assign(value); }
    inline HlsCaptionLanguageMapping& WithLanguageDescription(const Aws::String& value) { SetLanguageDescription(value); return *this;}
    inline HlsCaptionLanguageMapping& WithLanguageDescription(Aws::String&& value) { SetLanguageDescription(std::move(value)); return *this;}
    inline HlsCaptionLanguageMapping& WithLanguageDescription(const char* value) { SetLanguageDescription(value); return *this;}
    ///@}
  private:

    int m_captionChannel;
    bool m_captionChannelHasBeenSet = false;

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
