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
   * Settings specific to audio sources in an HLS alternate rendition group. Specify
   * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
   * identify the unique audio track among the alternative rendition groups present
   * in the HLS manifest. If no unique track is found, or multiple tracks match the
   * properties provided, the job fails. If no properties in
   * hlsRenditionGroupSettings are specified, the default audio track within the
   * video segment is chosen. If there is no audio within video segment, the
   * alternative audio with DEFAULT=YES is chosen instead.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsRenditionGroupSettings">AWS
   * API Reference</a></p>
   */
  class HlsRenditionGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API HlsRenditionGroupSettings();
    AWS_MEDIACONVERT_API HlsRenditionGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsRenditionGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. Specify alternative group ID
     */
    inline const Aws::String& GetRenditionGroupId() const{ return m_renditionGroupId; }

    /**
     * Optional. Specify alternative group ID
     */
    inline bool RenditionGroupIdHasBeenSet() const { return m_renditionGroupIdHasBeenSet; }

    /**
     * Optional. Specify alternative group ID
     */
    inline void SetRenditionGroupId(const Aws::String& value) { m_renditionGroupIdHasBeenSet = true; m_renditionGroupId = value; }

    /**
     * Optional. Specify alternative group ID
     */
    inline void SetRenditionGroupId(Aws::String&& value) { m_renditionGroupIdHasBeenSet = true; m_renditionGroupId = std::move(value); }

    /**
     * Optional. Specify alternative group ID
     */
    inline void SetRenditionGroupId(const char* value) { m_renditionGroupIdHasBeenSet = true; m_renditionGroupId.assign(value); }

    /**
     * Optional. Specify alternative group ID
     */
    inline HlsRenditionGroupSettings& WithRenditionGroupId(const Aws::String& value) { SetRenditionGroupId(value); return *this;}

    /**
     * Optional. Specify alternative group ID
     */
    inline HlsRenditionGroupSettings& WithRenditionGroupId(Aws::String&& value) { SetRenditionGroupId(std::move(value)); return *this;}

    /**
     * Optional. Specify alternative group ID
     */
    inline HlsRenditionGroupSettings& WithRenditionGroupId(const char* value) { SetRenditionGroupId(value); return *this;}


    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline const LanguageCode& GetRenditionLanguageCode() const{ return m_renditionLanguageCode; }

    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline bool RenditionLanguageCodeHasBeenSet() const { return m_renditionLanguageCodeHasBeenSet; }

    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline void SetRenditionLanguageCode(const LanguageCode& value) { m_renditionLanguageCodeHasBeenSet = true; m_renditionLanguageCode = value; }

    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline void SetRenditionLanguageCode(LanguageCode&& value) { m_renditionLanguageCodeHasBeenSet = true; m_renditionLanguageCode = std::move(value); }

    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline HlsRenditionGroupSettings& WithRenditionLanguageCode(const LanguageCode& value) { SetRenditionLanguageCode(value); return *this;}

    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline HlsRenditionGroupSettings& WithRenditionLanguageCode(LanguageCode&& value) { SetRenditionLanguageCode(std::move(value)); return *this;}


    /**
     * Optional. Specify media name
     */
    inline const Aws::String& GetRenditionName() const{ return m_renditionName; }

    /**
     * Optional. Specify media name
     */
    inline bool RenditionNameHasBeenSet() const { return m_renditionNameHasBeenSet; }

    /**
     * Optional. Specify media name
     */
    inline void SetRenditionName(const Aws::String& value) { m_renditionNameHasBeenSet = true; m_renditionName = value; }

    /**
     * Optional. Specify media name
     */
    inline void SetRenditionName(Aws::String&& value) { m_renditionNameHasBeenSet = true; m_renditionName = std::move(value); }

    /**
     * Optional. Specify media name
     */
    inline void SetRenditionName(const char* value) { m_renditionNameHasBeenSet = true; m_renditionName.assign(value); }

    /**
     * Optional. Specify media name
     */
    inline HlsRenditionGroupSettings& WithRenditionName(const Aws::String& value) { SetRenditionName(value); return *this;}

    /**
     * Optional. Specify media name
     */
    inline HlsRenditionGroupSettings& WithRenditionName(Aws::String&& value) { SetRenditionName(std::move(value)); return *this;}

    /**
     * Optional. Specify media name
     */
    inline HlsRenditionGroupSettings& WithRenditionName(const char* value) { SetRenditionName(value); return *this;}

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
