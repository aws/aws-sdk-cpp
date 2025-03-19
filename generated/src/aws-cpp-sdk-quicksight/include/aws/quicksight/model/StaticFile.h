/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ImageStaticFile.h>
#include <aws/quicksight/model/SpatialStaticFile.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The static file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StaticFile">AWS
   * API Reference</a></p>
   */
  class StaticFile
  {
  public:
    AWS_QUICKSIGHT_API StaticFile() = default;
    AWS_QUICKSIGHT_API StaticFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StaticFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image static file.</p>
     */
    inline const ImageStaticFile& GetImageStaticFile() const { return m_imageStaticFile; }
    inline bool ImageStaticFileHasBeenSet() const { return m_imageStaticFileHasBeenSet; }
    template<typename ImageStaticFileT = ImageStaticFile>
    void SetImageStaticFile(ImageStaticFileT&& value) { m_imageStaticFileHasBeenSet = true; m_imageStaticFile = std::forward<ImageStaticFileT>(value); }
    template<typename ImageStaticFileT = ImageStaticFile>
    StaticFile& WithImageStaticFile(ImageStaticFileT&& value) { SetImageStaticFile(std::forward<ImageStaticFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spacial static file.</p>
     */
    inline const SpatialStaticFile& GetSpatialStaticFile() const { return m_spatialStaticFile; }
    inline bool SpatialStaticFileHasBeenSet() const { return m_spatialStaticFileHasBeenSet; }
    template<typename SpatialStaticFileT = SpatialStaticFile>
    void SetSpatialStaticFile(SpatialStaticFileT&& value) { m_spatialStaticFileHasBeenSet = true; m_spatialStaticFile = std::forward<SpatialStaticFileT>(value); }
    template<typename SpatialStaticFileT = SpatialStaticFile>
    StaticFile& WithSpatialStaticFile(SpatialStaticFileT&& value) { SetSpatialStaticFile(std::forward<SpatialStaticFileT>(value)); return *this;}
    ///@}
  private:

    ImageStaticFile m_imageStaticFile;
    bool m_imageStaticFileHasBeenSet = false;

    SpatialStaticFile m_spatialStaticFile;
    bool m_spatialStaticFileHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
