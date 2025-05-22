/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>For use with DVB-DASH profiles only. The settings for font downloads that you
   * want Elemental MediaPackage to pass through to the manifest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashDvbFontDownload">AWS
   * API Reference</a></p>
   */
  class DashDvbFontDownload
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashDvbFontDownload() = default;
    AWS_MEDIAPACKAGEV2_API DashDvbFontDownload(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashDvbFontDownload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL for downloading fonts for subtitles.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    DashDvbFontDownload& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>mimeType</code> of the resource that's at the font download
     * URL.</p> <p>For information about font MIME types, see the <a
     * href="https://dvb.org/wp-content/uploads/2021/06/A168r4_MPEG-DASH-Profile-for-Transport-of-ISO-BMFF-Based-DVB-Services_Draft-ts_103-285-v140_November_2021.pdf">MPEG-DASH
     * Profile for Transport of ISO BMFF Based DVB Services over IP Based Networks</a>
     * document. </p>
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    DashDvbFontDownload& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>fontFamily</code> name for subtitles, as described in <a
     * href="https://tech.ebu.ch/publications/tech3380">EBU-TT-D Subtitling
     * Distribution Format</a>. </p>
     */
    inline const Aws::String& GetFontFamily() const { return m_fontFamily; }
    inline bool FontFamilyHasBeenSet() const { return m_fontFamilyHasBeenSet; }
    template<typename FontFamilyT = Aws::String>
    void SetFontFamily(FontFamilyT&& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = std::forward<FontFamilyT>(value); }
    template<typename FontFamilyT = Aws::String>
    DashDvbFontDownload& WithFontFamily(FontFamilyT&& value) { SetFontFamily(std::forward<FontFamilyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    Aws::String m_fontFamily;
    bool m_fontFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
