/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
   * Maps a caption channel to an ISO 693-2 language code
   * (http://www.loc.gov/standards/iso639-2), with an optional description.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CaptionLanguageMapping">AWS
   * API Reference</a></p>
   */
  class CaptionLanguageMapping
  {
  public:
    AWS_MEDIALIVE_API CaptionLanguageMapping() = default;
    AWS_MEDIALIVE_API CaptionLanguageMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CaptionLanguageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The closed caption channel being described by this CaptionLanguageMapping.  Each
     * channel mapping must have a unique channel number (maximum of 4)
     */
    inline int GetCaptionChannel() const { return m_captionChannel; }
    inline bool CaptionChannelHasBeenSet() const { return m_captionChannelHasBeenSet; }
    inline void SetCaptionChannel(int value) { m_captionChannelHasBeenSet = true; m_captionChannel = value; }
    inline CaptionLanguageMapping& WithCaptionChannel(int value) { SetCaptionChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * Three character ISO 639-2 language code (see
     * http://www.loc.gov/standards/iso639-2)
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    CaptionLanguageMapping& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Textual description of language
     */
    inline const Aws::String& GetLanguageDescription() const { return m_languageDescription; }
    inline bool LanguageDescriptionHasBeenSet() const { return m_languageDescriptionHasBeenSet; }
    template<typename LanguageDescriptionT = Aws::String>
    void SetLanguageDescription(LanguageDescriptionT&& value) { m_languageDescriptionHasBeenSet = true; m_languageDescription = std::forward<LanguageDescriptionT>(value); }
    template<typename LanguageDescriptionT = Aws::String>
    CaptionLanguageMapping& WithLanguageDescription(LanguageDescriptionT&& value) { SetLanguageDescription(std::forward<LanguageDescriptionT>(value)); return *this;}
    ///@}
  private:

    int m_captionChannel{0};
    bool m_captionChannelHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_languageDescription;
    bool m_languageDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
