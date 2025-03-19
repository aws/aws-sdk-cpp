/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InsertableImage.h>
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
   * Use the image inserter feature to include a graphic overlay on your video.
   * Enable or disable this feature for each input or output individually. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/graphic-overlay.html. This
   * setting is disabled by default.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ImageInserter">AWS
   * API Reference</a></p>
   */
  class ImageInserter
  {
  public:
    AWS_MEDIACONVERT_API ImageInserter() = default;
    AWS_MEDIACONVERT_API ImageInserter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ImageInserter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the images that you want to overlay on your video. The images must be
     * PNG or TGA files.
     */
    inline const Aws::Vector<InsertableImage>& GetInsertableImages() const { return m_insertableImages; }
    inline bool InsertableImagesHasBeenSet() const { return m_insertableImagesHasBeenSet; }
    template<typename InsertableImagesT = Aws::Vector<InsertableImage>>
    void SetInsertableImages(InsertableImagesT&& value) { m_insertableImagesHasBeenSet = true; m_insertableImages = std::forward<InsertableImagesT>(value); }
    template<typename InsertableImagesT = Aws::Vector<InsertableImage>>
    ImageInserter& WithInsertableImages(InsertableImagesT&& value) { SetInsertableImages(std::forward<InsertableImagesT>(value)); return *this;}
    template<typename InsertableImagesT = InsertableImage>
    ImageInserter& AddInsertableImages(InsertableImagesT&& value) { m_insertableImagesHasBeenSet = true; m_insertableImages.emplace_back(std::forward<InsertableImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specify the reference white level, in nits, for all of your image inserter
     * images. Use to correct brightness levels within HDR10 outputs. For 1,000 nit
     * peak brightness displays, we recommend that you set SDR reference white level to
     * 203 (according to ITU-R BT.2408). Leave blank to use the default value of 100,
     * or specify an integer from 100 to 1000.
     */
    inline int GetSdrReferenceWhiteLevel() const { return m_sdrReferenceWhiteLevel; }
    inline bool SdrReferenceWhiteLevelHasBeenSet() const { return m_sdrReferenceWhiteLevelHasBeenSet; }
    inline void SetSdrReferenceWhiteLevel(int value) { m_sdrReferenceWhiteLevelHasBeenSet = true; m_sdrReferenceWhiteLevel = value; }
    inline ImageInserter& WithSdrReferenceWhiteLevel(int value) { SetSdrReferenceWhiteLevel(value); return *this;}
    ///@}
  private:

    Aws::Vector<InsertableImage> m_insertableImages;
    bool m_insertableImagesHasBeenSet = false;

    int m_sdrReferenceWhiteLevel{0};
    bool m_sdrReferenceWhiteLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
