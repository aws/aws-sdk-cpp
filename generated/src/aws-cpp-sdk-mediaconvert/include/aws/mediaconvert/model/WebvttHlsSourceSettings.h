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
   * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
   * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
   * identify the unique subtitle track among the alternative rendition groups
   * present in the HLS manifest. If no unique track is found, or multiple tracks
   * match the specified properties, the job fails. If there is only one subtitle
   * track in the rendition group, the settings can be left empty and the default
   * subtitle track will be chosen. If your caption source is a sidecar file, use
   * FileSourceSettings instead of WebvttHlsSourceSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/WebvttHlsSourceSettings">AWS
   * API Reference</a></p>
   */
  class WebvttHlsSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API WebvttHlsSourceSettings();
    AWS_MEDIACONVERT_API WebvttHlsSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API WebvttHlsSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional. Specify alternative group ID
     */
    inline const Aws::String& GetRenditionGroupId() const{ return m_renditionGroupId; }
    inline bool RenditionGroupIdHasBeenSet() const { return m_renditionGroupIdHasBeenSet; }
    inline void SetRenditionGroupId(const Aws::String& value) { m_renditionGroupIdHasBeenSet = true; m_renditionGroupId = value; }
    inline void SetRenditionGroupId(Aws::String&& value) { m_renditionGroupIdHasBeenSet = true; m_renditionGroupId = std::move(value); }
    inline void SetRenditionGroupId(const char* value) { m_renditionGroupIdHasBeenSet = true; m_renditionGroupId.assign(value); }
    inline WebvttHlsSourceSettings& WithRenditionGroupId(const Aws::String& value) { SetRenditionGroupId(value); return *this;}
    inline WebvttHlsSourceSettings& WithRenditionGroupId(Aws::String&& value) { SetRenditionGroupId(std::move(value)); return *this;}
    inline WebvttHlsSourceSettings& WithRenditionGroupId(const char* value) { SetRenditionGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline const LanguageCode& GetRenditionLanguageCode() const{ return m_renditionLanguageCode; }
    inline bool RenditionLanguageCodeHasBeenSet() const { return m_renditionLanguageCodeHasBeenSet; }
    inline void SetRenditionLanguageCode(const LanguageCode& value) { m_renditionLanguageCodeHasBeenSet = true; m_renditionLanguageCode = value; }
    inline void SetRenditionLanguageCode(LanguageCode&& value) { m_renditionLanguageCodeHasBeenSet = true; m_renditionLanguageCode = std::move(value); }
    inline WebvttHlsSourceSettings& WithRenditionLanguageCode(const LanguageCode& value) { SetRenditionLanguageCode(value); return *this;}
    inline WebvttHlsSourceSettings& WithRenditionLanguageCode(LanguageCode&& value) { SetRenditionLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify media name
     */
    inline const Aws::String& GetRenditionName() const{ return m_renditionName; }
    inline bool RenditionNameHasBeenSet() const { return m_renditionNameHasBeenSet; }
    inline void SetRenditionName(const Aws::String& value) { m_renditionNameHasBeenSet = true; m_renditionName = value; }
    inline void SetRenditionName(Aws::String&& value) { m_renditionNameHasBeenSet = true; m_renditionName = std::move(value); }
    inline void SetRenditionName(const char* value) { m_renditionNameHasBeenSet = true; m_renditionName.assign(value); }
    inline WebvttHlsSourceSettings& WithRenditionName(const Aws::String& value) { SetRenditionName(value); return *this;}
    inline WebvttHlsSourceSettings& WithRenditionName(Aws::String&& value) { SetRenditionName(std::move(value)); return *this;}
    inline WebvttHlsSourceSettings& WithRenditionName(const char* value) { SetRenditionName(value); return *this;}
    ///@}
  private:

    Aws::String m_renditionGroupId;
    bool m_renditionGroupIdHasBeenSet = false;

    LanguageCode m_renditionLanguageCode;
    bool m_renditionLanguageCodeHasBeenSet = false;

    Aws::String m_renditionName;
    bool m_renditionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
