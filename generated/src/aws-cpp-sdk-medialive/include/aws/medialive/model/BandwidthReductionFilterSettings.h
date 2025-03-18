/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/BandwidthReductionPostFilterSharpening.h>
#include <aws/medialive/model/BandwidthReductionFilterStrength.h>
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
   * Bandwidth Reduction Filter Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BandwidthReductionFilterSettings">AWS
   * API Reference</a></p>
   */
  class BandwidthReductionFilterSettings
  {
  public:
    AWS_MEDIALIVE_API BandwidthReductionFilterSettings() = default;
    AWS_MEDIALIVE_API BandwidthReductionFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BandwidthReductionFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Configures the sharpening control, which is available when the bandwidth
     * reduction filter is enabled. This
control sharpens edges and contours, which
     * produces a specific artistic effect that you might want.

We recommend that you
     * test each of the values (including DISABLED) to observe the sharpening effect on
     * the
content.
     */
    inline BandwidthReductionPostFilterSharpening GetPostFilterSharpening() const { return m_postFilterSharpening; }
    inline bool PostFilterSharpeningHasBeenSet() const { return m_postFilterSharpeningHasBeenSet; }
    inline void SetPostFilterSharpening(BandwidthReductionPostFilterSharpening value) { m_postFilterSharpeningHasBeenSet = true; m_postFilterSharpening = value; }
    inline BandwidthReductionFilterSettings& WithPostFilterSharpening(BandwidthReductionPostFilterSharpening value) { SetPostFilterSharpening(value); return *this;}
    ///@}

    ///@{
    /**
     * Enables the bandwidth reduction filter. The filter strengths range from 1 to 4.
     * We recommend that you always
enable this filter and use AUTO, to let MediaLive
     * apply the optimum filtering for the context.
     */
    inline BandwidthReductionFilterStrength GetStrength() const { return m_strength; }
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }
    inline void SetStrength(BandwidthReductionFilterStrength value) { m_strengthHasBeenSet = true; m_strength = value; }
    inline BandwidthReductionFilterSettings& WithStrength(BandwidthReductionFilterStrength value) { SetStrength(value); return *this;}
    ///@}
  private:

    BandwidthReductionPostFilterSharpening m_postFilterSharpening{BandwidthReductionPostFilterSharpening::NOT_SET};
    bool m_postFilterSharpeningHasBeenSet = false;

    BandwidthReductionFilterStrength m_strength{BandwidthReductionFilterStrength::NOT_SET};
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
