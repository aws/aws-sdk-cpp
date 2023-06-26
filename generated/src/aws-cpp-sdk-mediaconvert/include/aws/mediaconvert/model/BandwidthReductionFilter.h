/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/BandwidthReductionFilterSharpening.h>
#include <aws/mediaconvert/model/BandwidthReductionFilterStrength.h>
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
   * The Bandwidth reduction filter increases the video quality of your output
   * relative to its bitrate. Use to lower the bitrate of your constant quality QVBR
   * output, with little or no perceptual decrease in quality. Or, use to increase
   * the video quality of outputs with other rate control modes relative to the
   * bitrate that you specify. Bandwidth reduction increases further when your input
   * is low quality or noisy. Outputs that use this feature incur pro-tier pricing.
   * When you include Bandwidth reduction filter, you cannot include the Noise
   * reducer preprocessor.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/BandwidthReductionFilter">AWS
   * API Reference</a></p>
   */
  class BandwidthReductionFilter
  {
  public:
    AWS_MEDIACONVERT_API BandwidthReductionFilter();
    AWS_MEDIACONVERT_API BandwidthReductionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API BandwidthReductionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optionally specify the level of sharpening to apply when you use the Bandwidth
     * reduction filter. Sharpening adds contrast to the edges of your video content
     * and can reduce softness. Keep the default value Off to apply no sharpening. Set
     * Sharpening strength to Low to apply a minimal amount of sharpening, or High to
     * apply a maximum amount of sharpening.
     */
    inline const BandwidthReductionFilterSharpening& GetSharpening() const{ return m_sharpening; }

    /**
     * Optionally specify the level of sharpening to apply when you use the Bandwidth
     * reduction filter. Sharpening adds contrast to the edges of your video content
     * and can reduce softness. Keep the default value Off to apply no sharpening. Set
     * Sharpening strength to Low to apply a minimal amount of sharpening, or High to
     * apply a maximum amount of sharpening.
     */
    inline bool SharpeningHasBeenSet() const { return m_sharpeningHasBeenSet; }

    /**
     * Optionally specify the level of sharpening to apply when you use the Bandwidth
     * reduction filter. Sharpening adds contrast to the edges of your video content
     * and can reduce softness. Keep the default value Off to apply no sharpening. Set
     * Sharpening strength to Low to apply a minimal amount of sharpening, or High to
     * apply a maximum amount of sharpening.
     */
    inline void SetSharpening(const BandwidthReductionFilterSharpening& value) { m_sharpeningHasBeenSet = true; m_sharpening = value; }

    /**
     * Optionally specify the level of sharpening to apply when you use the Bandwidth
     * reduction filter. Sharpening adds contrast to the edges of your video content
     * and can reduce softness. Keep the default value Off to apply no sharpening. Set
     * Sharpening strength to Low to apply a minimal amount of sharpening, or High to
     * apply a maximum amount of sharpening.
     */
    inline void SetSharpening(BandwidthReductionFilterSharpening&& value) { m_sharpeningHasBeenSet = true; m_sharpening = std::move(value); }

    /**
     * Optionally specify the level of sharpening to apply when you use the Bandwidth
     * reduction filter. Sharpening adds contrast to the edges of your video content
     * and can reduce softness. Keep the default value Off to apply no sharpening. Set
     * Sharpening strength to Low to apply a minimal amount of sharpening, or High to
     * apply a maximum amount of sharpening.
     */
    inline BandwidthReductionFilter& WithSharpening(const BandwidthReductionFilterSharpening& value) { SetSharpening(value); return *this;}

    /**
     * Optionally specify the level of sharpening to apply when you use the Bandwidth
     * reduction filter. Sharpening adds contrast to the edges of your video content
     * and can reduce softness. Keep the default value Off to apply no sharpening. Set
     * Sharpening strength to Low to apply a minimal amount of sharpening, or High to
     * apply a maximum amount of sharpening.
     */
    inline BandwidthReductionFilter& WithSharpening(BandwidthReductionFilterSharpening&& value) { SetSharpening(std::move(value)); return *this;}


    /**
     * Specify the strength of the Bandwidth reduction filter. For most workflows, we
     * recommend that you choose Auto to reduce the bandwidth of your output with
     * little to no perceptual decrease in video quality. For high quality and high
     * bitrate outputs, choose Low. For the most bandwidth reduction, choose High. We
     * recommend that you choose High for low bitrate outputs. Note that High may incur
     * a slight increase in the softness of your output.
     */
    inline const BandwidthReductionFilterStrength& GetStrength() const{ return m_strength; }

    /**
     * Specify the strength of the Bandwidth reduction filter. For most workflows, we
     * recommend that you choose Auto to reduce the bandwidth of your output with
     * little to no perceptual decrease in video quality. For high quality and high
     * bitrate outputs, choose Low. For the most bandwidth reduction, choose High. We
     * recommend that you choose High for low bitrate outputs. Note that High may incur
     * a slight increase in the softness of your output.
     */
    inline bool StrengthHasBeenSet() const { return m_strengthHasBeenSet; }

    /**
     * Specify the strength of the Bandwidth reduction filter. For most workflows, we
     * recommend that you choose Auto to reduce the bandwidth of your output with
     * little to no perceptual decrease in video quality. For high quality and high
     * bitrate outputs, choose Low. For the most bandwidth reduction, choose High. We
     * recommend that you choose High for low bitrate outputs. Note that High may incur
     * a slight increase in the softness of your output.
     */
    inline void SetStrength(const BandwidthReductionFilterStrength& value) { m_strengthHasBeenSet = true; m_strength = value; }

    /**
     * Specify the strength of the Bandwidth reduction filter. For most workflows, we
     * recommend that you choose Auto to reduce the bandwidth of your output with
     * little to no perceptual decrease in video quality. For high quality and high
     * bitrate outputs, choose Low. For the most bandwidth reduction, choose High. We
     * recommend that you choose High for low bitrate outputs. Note that High may incur
     * a slight increase in the softness of your output.
     */
    inline void SetStrength(BandwidthReductionFilterStrength&& value) { m_strengthHasBeenSet = true; m_strength = std::move(value); }

    /**
     * Specify the strength of the Bandwidth reduction filter. For most workflows, we
     * recommend that you choose Auto to reduce the bandwidth of your output with
     * little to no perceptual decrease in video quality. For high quality and high
     * bitrate outputs, choose Low. For the most bandwidth reduction, choose High. We
     * recommend that you choose High for low bitrate outputs. Note that High may incur
     * a slight increase in the softness of your output.
     */
    inline BandwidthReductionFilter& WithStrength(const BandwidthReductionFilterStrength& value) { SetStrength(value); return *this;}

    /**
     * Specify the strength of the Bandwidth reduction filter. For most workflows, we
     * recommend that you choose Auto to reduce the bandwidth of your output with
     * little to no perceptual decrease in video quality. For high quality and high
     * bitrate outputs, choose Low. For the most bandwidth reduction, choose High. We
     * recommend that you choose High for low bitrate outputs. Note that High may incur
     * a slight increase in the softness of your output.
     */
    inline BandwidthReductionFilter& WithStrength(BandwidthReductionFilterStrength&& value) { SetStrength(std::move(value)); return *this;}

  private:

    BandwidthReductionFilterSharpening m_sharpening;
    bool m_sharpeningHasBeenSet = false;

    BandwidthReductionFilterStrength m_strength;
    bool m_strengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
