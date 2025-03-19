/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use ad avail blanking settings to specify your output content during SCTE-35
   * triggered ad avails. You can blank your video or overlay it with an image.
   * MediaConvert also removes any audio and embedded captions during the ad avail.
   * For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/ad-avail-blanking.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AvailBlanking">AWS
   * API Reference</a></p>
   */
  class AvailBlanking
  {
  public:
    AWS_MEDIACONVERT_API AvailBlanking() = default;
    AWS_MEDIACONVERT_API AvailBlanking(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AvailBlanking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline const Aws::String& GetAvailBlankingImage() const { return m_availBlankingImage; }
    inline bool AvailBlankingImageHasBeenSet() const { return m_availBlankingImageHasBeenSet; }
    template<typename AvailBlankingImageT = Aws::String>
    void SetAvailBlankingImage(AvailBlankingImageT&& value) { m_availBlankingImageHasBeenSet = true; m_availBlankingImage = std::forward<AvailBlankingImageT>(value); }
    template<typename AvailBlankingImageT = Aws::String>
    AvailBlanking& WithAvailBlankingImage(AvailBlankingImageT&& value) { SetAvailBlankingImage(std::forward<AvailBlankingImageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availBlankingImage;
    bool m_availBlankingImageHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
