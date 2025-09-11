/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/CaptionLanguageMapping.h>
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
   * Media Package V2 Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageV2GroupSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageV2GroupSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageV2GroupSettings() = default;
    AWS_MEDIALIVE_API MediaPackageV2GroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageV2GroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Mapping of up to 4 caption channels to caption languages.
     */
    inline const Aws::Vector<CaptionLanguageMapping>& GetCaptionLanguageMappings() const { return m_captionLanguageMappings; }
    inline bool CaptionLanguageMappingsHasBeenSet() const { return m_captionLanguageMappingsHasBeenSet; }
    template<typename CaptionLanguageMappingsT = Aws::Vector<CaptionLanguageMapping>>
    void SetCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = std::forward<CaptionLanguageMappingsT>(value); }
    template<typename CaptionLanguageMappingsT = Aws::Vector<CaptionLanguageMapping>>
    MediaPackageV2GroupSettings& WithCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { SetCaptionLanguageMappings(std::forward<CaptionLanguageMappingsT>(value)); return *this;}
    template<typename CaptionLanguageMappingsT = CaptionLanguageMapping>
    MediaPackageV2GroupSettings& AddCaptionLanguageMappings(CaptionLanguageMappingsT&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.emplace_back(std::forward<CaptionLanguageMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CaptionLanguageMapping> m_captionLanguageMappings;
    bool m_captionLanguageMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
