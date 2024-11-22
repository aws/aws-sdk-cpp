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
    AWS_QUICKSIGHT_API StaticFile();
    AWS_QUICKSIGHT_API StaticFile(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StaticFile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image static file.</p>
     */
    inline const ImageStaticFile& GetImageStaticFile() const{ return m_imageStaticFile; }
    inline bool ImageStaticFileHasBeenSet() const { return m_imageStaticFileHasBeenSet; }
    inline void SetImageStaticFile(const ImageStaticFile& value) { m_imageStaticFileHasBeenSet = true; m_imageStaticFile = value; }
    inline void SetImageStaticFile(ImageStaticFile&& value) { m_imageStaticFileHasBeenSet = true; m_imageStaticFile = std::move(value); }
    inline StaticFile& WithImageStaticFile(const ImageStaticFile& value) { SetImageStaticFile(value); return *this;}
    inline StaticFile& WithImageStaticFile(ImageStaticFile&& value) { SetImageStaticFile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spacial static file.</p>
     */
    inline const SpatialStaticFile& GetSpatialStaticFile() const{ return m_spatialStaticFile; }
    inline bool SpatialStaticFileHasBeenSet() const { return m_spatialStaticFileHasBeenSet; }
    inline void SetSpatialStaticFile(const SpatialStaticFile& value) { m_spatialStaticFileHasBeenSet = true; m_spatialStaticFile = value; }
    inline void SetSpatialStaticFile(SpatialStaticFile&& value) { m_spatialStaticFileHasBeenSet = true; m_spatialStaticFile = std::move(value); }
    inline StaticFile& WithSpatialStaticFile(const SpatialStaticFile& value) { SetSpatialStaticFile(value); return *this;}
    inline StaticFile& WithSpatialStaticFile(SpatialStaticFile&& value) { SetSpatialStaticFile(std::move(value)); return *this;}
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
