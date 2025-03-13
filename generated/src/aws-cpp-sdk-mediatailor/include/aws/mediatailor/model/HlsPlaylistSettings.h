/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/AdMarkupType.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>HLS playlist configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HlsPlaylistSettings">AWS
   * API Reference</a></p>
   */
  class HlsPlaylistSettings
  {
  public:
    AWS_MEDIATAILOR_API HlsPlaylistSettings() = default;
    AWS_MEDIATAILOR_API HlsPlaylistSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API HlsPlaylistSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value:
     * <code>30</code> seconds. Maximum value: <code>3600</code> seconds.</p>
     */
    inline int GetManifestWindowSeconds() const { return m_manifestWindowSeconds; }
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }
    inline HlsPlaylistSettings& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the type of SCTE 35 tags to use in ad markup. Specify
     * <code>DATERANGE</code> to use <code>DATERANGE</code> tags (for live or VOD
     * content). Specify <code>SCTE35_ENHANCED</code> to use <code>EXT-X-CUE-OUT</code>
     * and <code>EXT-X-CUE-IN</code> tags (for VOD content only).</p>
     */
    inline const Aws::Vector<AdMarkupType>& GetAdMarkupType() const { return m_adMarkupType; }
    inline bool AdMarkupTypeHasBeenSet() const { return m_adMarkupTypeHasBeenSet; }
    template<typename AdMarkupTypeT = Aws::Vector<AdMarkupType>>
    void SetAdMarkupType(AdMarkupTypeT&& value) { m_adMarkupTypeHasBeenSet = true; m_adMarkupType = std::forward<AdMarkupTypeT>(value); }
    template<typename AdMarkupTypeT = Aws::Vector<AdMarkupType>>
    HlsPlaylistSettings& WithAdMarkupType(AdMarkupTypeT&& value) { SetAdMarkupType(std::forward<AdMarkupTypeT>(value)); return *this;}
    inline HlsPlaylistSettings& AddAdMarkupType(AdMarkupType value) { m_adMarkupTypeHasBeenSet = true; m_adMarkupType.push_back(value); return *this; }
    ///@}
  private:

    int m_manifestWindowSeconds{0};
    bool m_manifestWindowSecondsHasBeenSet = false;

    Aws::Vector<AdMarkupType> m_adMarkupType;
    bool m_adMarkupTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
