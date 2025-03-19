/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The X and Y coordinates of a point on an image or video frame. The X and Y
   * values are ratios of the overall image size or video resolution. For example, if
   * an input image is 700x200 and the values are X=0.5 and Y=0.25, then the point is
   * at the (350,50) pixel coordinate on the image.</p> <p>An array of
   * <code>Point</code> objects makes up a <code>Polygon</code>. A
   * <code>Polygon</code> is returned by <a>DetectText</a> and by
   * <a>DetectCustomLabels</a> <code>Polygon</code> represents a fine-grained polygon
   * around a detected item. For more information, see Geometry in the Amazon
   * Rekognition Developer Guide. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Point">AWS
   * API Reference</a></p>
   */
  class Point
  {
  public:
    AWS_REKOGNITION_API Point() = default;
    AWS_REKOGNITION_API Point(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Point& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the X coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline double GetX() const { return m_x; }
    inline bool XHasBeenSet() const { return m_xHasBeenSet; }
    inline void SetX(double value) { m_xHasBeenSet = true; m_x = value; }
    inline Point& WithX(double value) { SetX(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the Y coordinate for a point on a <code>Polygon</code>.</p>
     */
    inline double GetY() const { return m_y; }
    inline bool YHasBeenSet() const { return m_yHasBeenSet; }
    inline void SetY(double value) { m_yHasBeenSet = true; m_y = value; }
    inline Point& WithY(double value) { SetY(value); return *this;}
    ///@}
  private:

    double m_x{0.0};
    bool m_xHasBeenSet = false;

    double m_y{0.0};
    bool m_yHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
