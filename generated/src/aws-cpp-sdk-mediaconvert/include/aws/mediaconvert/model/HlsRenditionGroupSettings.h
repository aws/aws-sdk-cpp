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
    AWS_MEDIACONVERT_API HlsRenditionGroupSettings() = default;
    AWS_MEDIACONVERT_API HlsRenditionGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsRenditionGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional. Specify alternative group ID
     */
    inline const Aws::String& GetRenditionGroupId() const { return m_renditionGroupId; }
    inline bool RenditionGroupIdHasBeenSet() const { return m_renditionGroupIdHasBeenSet; }
    template<typename RenditionGroupIdT = Aws::String>
    void SetRenditionGroupId(RenditionGroupIdT&& value) { m_renditionGroupIdHasBeenSet = true; m_renditionGroupId = std::forward<RenditionGroupIdT>(value); }
    template<typename RenditionGroupIdT = Aws::String>
    HlsRenditionGroupSettings& WithRenditionGroupId(RenditionGroupIdT&& value) { SetRenditionGroupId(std::forward<RenditionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify ISO 639-2 or ISO 639-3 code in the language property
     */
    inline LanguageCode GetRenditionLanguageCode() const { return m_renditionLanguageCode; }
    inline bool RenditionLanguageCodeHasBeenSet() const { return m_renditionLanguageCodeHasBeenSet; }
    inline void SetRenditionLanguageCode(LanguageCode value) { m_renditionLanguageCodeHasBeenSet = true; m_renditionLanguageCode = value; }
    inline HlsRenditionGroupSettings& WithRenditionLanguageCode(LanguageCode value) { SetRenditionLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify media name
     */
    inline const Aws::String& GetRenditionName() const { return m_renditionName; }
    inline bool RenditionNameHasBeenSet() const { return m_renditionNameHasBeenSet; }
    template<typename RenditionNameT = Aws::String>
    void SetRenditionName(RenditionNameT&& value) { m_renditionNameHasBeenSet = true; m_renditionName = std::forward<RenditionNameT>(value); }
    template<typename RenditionNameT = Aws::String>
    HlsRenditionGroupSettings& WithRenditionName(RenditionNameT&& value) { SetRenditionName(std::forward<RenditionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_renditionGroupId;
    bool m_renditionGroupIdHasBeenSet = false;

    LanguageCode m_renditionLanguageCode{LanguageCode::NOT_SET};
    bool m_renditionLanguageCodeHasBeenSet = false;

    Aws::String m_renditionName;
    bool m_renditionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
