/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TemporalFilterPostFilterSharpening.h>
#include <aws/medialive/model/TemporalFilterStrength.h>
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
   * Temporal Filter Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TemporalFilterSettings">AWS
   * API Reference</a></p>
   */
  class TemporalFilterSettings
  {
  public:
    AWS_MEDIALIVE_API TemporalFilterSettings() = default;
    AWS_MEDIALIVE_API TemporalFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TemporalFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you enable this filter, the results are the following:
- If the source
     * content is noisy (it contains excessive digital artifacts), the filter cleans up
     * the source.
- If the source content is already clean, the filter tends to
     * decrease the bitrate, especially when the rate control mode is QVBR.
     */
    inline TemporalFilterPostFilterSharpening GetPostFilterSharpening() const { return m_postFilterSharpening; }
    inline bool PostFilterSharpeningHasBeenSet() const { return m_postFilterSharpeningHasBeenSet; }
    inline void SetPostFilterSharpening(TemporalFilterPostFilterSharpening value) { m_postFilterSharpeningHasBeenSet = true; m_postFilterSharpening = value; }
    inline TemporalFilterSettings& WithPostFilterSharpening(TemporalFilterPostFilterSharpening value) { SetPostFilterSharpening(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose a filter strength. We recommend a strength of 1 or 2. A higher strength
     * might take out good information, resulting in an image that is overly soft.
     */
    inline TemporalFilterStrength GetStrength() const { return m_strength; }
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }
    inline void SetStrength(TemporalFilterStrength value) { m_strengthHasBeenSet = true; m_strength = value; }
    inline TemporalFilterSettings& WithStrength(TemporalFilterStrength value) { SetStrength(value); return *this;}
    ///@}
  private:

    TemporalFilterPostFilterSharpening m_postFilterSharpening{TemporalFilterPostFilterSharpening::NOT_SET};
    bool m_postFilterSharpeningHasBeenSet = false;

    TemporalFilterStrength m_strength{TemporalFilterStrength::NOT_SET};
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
