/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>

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
namespace Textract
{
namespace Model
{

  /**
   * <p>The bounding box around the detected page, text, key-value pair, table, table
   * cell, or selection element on a document page. The <code>left</code>
   * (x-coordinate) and <code>top</code> (y-coordinate) are coordinates that
   * represent the top and left sides of the bounding box. Note that the upper-left
   * corner of the image is the origin (0,0). </p> <p>The <code>top</code> and
   * <code>left</code> values returned are ratios of the overall document page size.
   * For example, if the input image is 700 x 200 pixels, and the top-left coordinate
   * of the bounding box is 350 x 50 pixels, the API returns a <code>left</code>
   * value of 0.5 (350/700) and a <code>top</code> value of 0.25 (50/200).</p> <p>The
   * <code>width</code> and <code>height</code> values represent the dimensions of
   * the bounding box as a ratio of the overall document page dimension. For example,
   * if the document page size is 700 x 200 pixels, and the bounding box width is 70
   * pixels, the width returned is 0.1. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/BoundingBox">AWS
   * API Reference</a></p>
   */
  class BoundingBox
  {
  public:
    AWS_TEXTRACT_API BoundingBox() = default;
    AWS_TEXTRACT_API BoundingBox(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API BoundingBox& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The width of the bounding box as a ratio of the overall document page
     * width.</p>
     */
    inline double GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(double value) { m_widthHasBeenSet = true; m_width = value; }
    inline BoundingBox& WithWidth(double value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of the bounding box as a ratio of the overall document page
     * height.</p>
     */
    inline double GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(double value) { m_heightHasBeenSet = true; m_height = value; }
    inline BoundingBox& WithHeight(double value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The left coordinate of the bounding box as a ratio of overall document page
     * width.</p>
     */
    inline double GetLeft() const { return m_left; }
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
    inline void SetLeft(double value) { m_leftHasBeenSet = true; m_left = value; }
    inline BoundingBox& WithLeft(double value) { SetLeft(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The top coordinate of the bounding box as a ratio of overall document page
     * height.</p>
     */
    inline double GetTop() const { return m_top; }
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }
    inline void SetTop(double value) { m_topHasBeenSet = true; m_top = value; }
    inline BoundingBox& WithTop(double value) { SetTop(value); return *this;}
    ///@}
  private:

    double m_width{0.0};
    bool m_widthHasBeenSet = false;

    double m_height{0.0};
    bool m_heightHasBeenSet = false;

    double m_left{0.0};
    bool m_leftHasBeenSet = false;

    double m_top{0.0};
    bool m_topHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
