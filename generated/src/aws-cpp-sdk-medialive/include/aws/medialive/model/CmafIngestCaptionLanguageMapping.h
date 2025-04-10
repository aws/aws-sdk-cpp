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
   * Add an array item for each language. Follow the order of the caption
   * descriptions. For example, if the first caption description is for German, then
   * the first array item must be for German, and its caption channel must be set to
   * 1. The second array item must be 2, and so on.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CmafIngestCaptionLanguageMapping">AWS
   * API Reference</a></p>
   */
  class CmafIngestCaptionLanguageMapping
  {
  public:
    AWS_MEDIALIVE_API CmafIngestCaptionLanguageMapping() = default;
    AWS_MEDIALIVE_API CmafIngestCaptionLanguageMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API CmafIngestCaptionLanguageMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A number for the channel for this caption, 1 to 4.
     */
    inline int GetCaptionChannel() const { return m_captionChannel; }
    inline bool CaptionChannelHasBeenSet() const { return m_captionChannelHasBeenSet; }
    inline void SetCaptionChannel(int value) { m_captionChannelHasBeenSet = true; m_captionChannel = value; }
    inline CmafIngestCaptionLanguageMapping& WithCaptionChannel(int value) { SetCaptionChannel(value); return *this;}
    ///@}

    ///@{
    /**
     * Language code for the language of the caption in this channel.  For example,
     * ger/deu. See http://www.loc.gov/standards/iso639-2
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    CmafIngestCaptionLanguageMapping& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}
  private:

    int m_captionChannel{0};
    bool m_captionChannelHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
