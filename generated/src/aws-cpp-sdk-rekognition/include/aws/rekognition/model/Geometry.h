/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Point.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Information about where an object (<a>DetectCustomLabels</a>) or text
   * (<a>DetectText</a>) is located on an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Geometry">AWS
   * API Reference</a></p>
   */
  class Geometry
  {
  public:
    AWS_REKOGNITION_API Geometry();
    AWS_REKOGNITION_API Geometry(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Geometry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An axis-aligned coarse representation of the detected item's location on the
     * image.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>An axis-aligned coarse representation of the detected item's location on the
     * image.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>An axis-aligned coarse representation of the detected item's location on the
     * image.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>An axis-aligned coarse representation of the detected item's location on the
     * image.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>An axis-aligned coarse representation of the detected item's location on the
     * image.</p>
     */
    inline Geometry& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>An axis-aligned coarse representation of the detected item's location on the
     * image.</p>
     */
    inline Geometry& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline const Aws::Vector<Point>& GetPolygon() const{ return m_polygon; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline void SetPolygon(const Aws::Vector<Point>& value) { m_polygonHasBeenSet = true; m_polygon = value; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline void SetPolygon(Aws::Vector<Point>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline Geometry& WithPolygon(const Aws::Vector<Point>& value) { SetPolygon(value); return *this;}

    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline Geometry& WithPolygon(Aws::Vector<Point>&& value) { SetPolygon(std::move(value)); return *this;}

    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline Geometry& AddPolygon(const Point& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }

    /**
     * <p>Within the bounding box, a fine-grained polygon around the detected item.</p>
     */
    inline Geometry& AddPolygon(Point&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::Vector<Point> m_polygon;
    bool m_polygonHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
