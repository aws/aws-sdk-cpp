/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AdvancedInputFilterAddTexture.h>
#include <aws/mediaconvert/model/AdvancedInputFilterSharpen.h>
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
   * Optional settings for Advanced input filter when you set Advanced input filter
   * to Enabled.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AdvancedInputFilterSettings">AWS
   * API Reference</a></p>
   */
  class AdvancedInputFilterSettings
  {
  public:
    AWS_MEDIACONVERT_API AdvancedInputFilterSettings();
    AWS_MEDIACONVERT_API AdvancedInputFilterSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AdvancedInputFilterSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Add texture and detail to areas of your input video content that were lost after
     * applying the Advanced input filter. To adaptively add texture and reduce
     * softness: Choose Enabled. To not add any texture: Keep the default value,
     * Disabled. We recommend that you choose Disabled for input video content that
     * doesn't have texture, including screen recordings, computer graphics, or
     * cartoons.
     */
    inline const AdvancedInputFilterAddTexture& GetAddTexture() const{ return m_addTexture; }

    /**
     * Add texture and detail to areas of your input video content that were lost after
     * applying the Advanced input filter. To adaptively add texture and reduce
     * softness: Choose Enabled. To not add any texture: Keep the default value,
     * Disabled. We recommend that you choose Disabled for input video content that
     * doesn't have texture, including screen recordings, computer graphics, or
     * cartoons.
     */
    inline bool AddTextureHasBeenSet() const { return m_addTextureHasBeenSet; }

    /**
     * Add texture and detail to areas of your input video content that were lost after
     * applying the Advanced input filter. To adaptively add texture and reduce
     * softness: Choose Enabled. To not add any texture: Keep the default value,
     * Disabled. We recommend that you choose Disabled for input video content that
     * doesn't have texture, including screen recordings, computer graphics, or
     * cartoons.
     */
    inline void SetAddTexture(const AdvancedInputFilterAddTexture& value) { m_addTextureHasBeenSet = true; m_addTexture = value; }

    /**
     * Add texture and detail to areas of your input video content that were lost after
     * applying the Advanced input filter. To adaptively add texture and reduce
     * softness: Choose Enabled. To not add any texture: Keep the default value,
     * Disabled. We recommend that you choose Disabled for input video content that
     * doesn't have texture, including screen recordings, computer graphics, or
     * cartoons.
     */
    inline void SetAddTexture(AdvancedInputFilterAddTexture&& value) { m_addTextureHasBeenSet = true; m_addTexture = std::move(value); }

    /**
     * Add texture and detail to areas of your input video content that were lost after
     * applying the Advanced input filter. To adaptively add texture and reduce
     * softness: Choose Enabled. To not add any texture: Keep the default value,
     * Disabled. We recommend that you choose Disabled for input video content that
     * doesn't have texture, including screen recordings, computer graphics, or
     * cartoons.
     */
    inline AdvancedInputFilterSettings& WithAddTexture(const AdvancedInputFilterAddTexture& value) { SetAddTexture(value); return *this;}

    /**
     * Add texture and detail to areas of your input video content that were lost after
     * applying the Advanced input filter. To adaptively add texture and reduce
     * softness: Choose Enabled. To not add any texture: Keep the default value,
     * Disabled. We recommend that you choose Disabled for input video content that
     * doesn't have texture, including screen recordings, computer graphics, or
     * cartoons.
     */
    inline AdvancedInputFilterSettings& WithAddTexture(AdvancedInputFilterAddTexture&& value) { SetAddTexture(std::move(value)); return *this;}


    /**
     * Optionally specify the amount of sharpening to apply when you use the Advanced
     * input filter. Sharpening adds contrast to the edges of your video content and
     * can reduce softness. To apply no sharpening: Keep the default value, Off. To
     * apply a minimal amount of sharpening choose Low, or for the maximum choose High.
     */
    inline const AdvancedInputFilterSharpen& GetSharpening() const{ return m_sharpening; }

    /**
     * Optionally specify the amount of sharpening to apply when you use the Advanced
     * input filter. Sharpening adds contrast to the edges of your video content and
     * can reduce softness. To apply no sharpening: Keep the default value, Off. To
     * apply a minimal amount of sharpening choose Low, or for the maximum choose High.
     */
    inline bool SharpeningHasBeenSet() const { return m_sharpeningHasBeenSet; }

    /**
     * Optionally specify the amount of sharpening to apply when you use the Advanced
     * input filter. Sharpening adds contrast to the edges of your video content and
     * can reduce softness. To apply no sharpening: Keep the default value, Off. To
     * apply a minimal amount of sharpening choose Low, or for the maximum choose High.
     */
    inline void SetSharpening(const AdvancedInputFilterSharpen& value) { m_sharpeningHasBeenSet = true; m_sharpening = value; }

    /**
     * Optionally specify the amount of sharpening to apply when you use the Advanced
     * input filter. Sharpening adds contrast to the edges of your video content and
     * can reduce softness. To apply no sharpening: Keep the default value, Off. To
     * apply a minimal amount of sharpening choose Low, or for the maximum choose High.
     */
    inline void SetSharpening(AdvancedInputFilterSharpen&& value) { m_sharpeningHasBeenSet = true; m_sharpening = std::move(value); }

    /**
     * Optionally specify the amount of sharpening to apply when you use the Advanced
     * input filter. Sharpening adds contrast to the edges of your video content and
     * can reduce softness. To apply no sharpening: Keep the default value, Off. To
     * apply a minimal amount of sharpening choose Low, or for the maximum choose High.
     */
    inline AdvancedInputFilterSettings& WithSharpening(const AdvancedInputFilterSharpen& value) { SetSharpening(value); return *this;}

    /**
     * Optionally specify the amount of sharpening to apply when you use the Advanced
     * input filter. Sharpening adds contrast to the edges of your video content and
     * can reduce softness. To apply no sharpening: Keep the default value, Off. To
     * apply a minimal amount of sharpening choose Low, or for the maximum choose High.
     */
    inline AdvancedInputFilterSettings& WithSharpening(AdvancedInputFilterSharpen&& value) { SetSharpening(std::move(value)); return *this;}

  private:

    AdvancedInputFilterAddTexture m_addTexture;
    bool m_addTextureHasBeenSet = false;

    AdvancedInputFilterSharpen m_sharpening;
    bool m_sharpeningHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
