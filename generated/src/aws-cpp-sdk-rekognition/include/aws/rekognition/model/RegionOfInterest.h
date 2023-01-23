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
   * <p>Specifies a location within the frame that Rekognition checks for objects of
   * interest such as text, labels, or faces. It uses a <code>BoundingBox</code> or
   * <code>Polygon</code> to set a region of the screen.</p> <p>A word, face, or
   * label is included in the region if it is more than half in that region. If there
   * is more than one region, the word, face, or label is compared with all regions
   * of the screen. Any object of interest that is more than half in a region is kept
   * in the results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/RegionOfInterest">AWS
   * API Reference</a></p>
   */
  class RegionOfInterest
  {
  public:
    AWS_REKOGNITION_API RegionOfInterest();
    AWS_REKOGNITION_API RegionOfInterest(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API RegionOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline RegionOfInterest& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>The box representing a region of interest on screen.</p>
     */
    inline RegionOfInterest& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline const Aws::Vector<Point>& GetPolygon() const{ return m_polygon; }

    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline bool PolygonHasBeenSet() const { return m_polygonHasBeenSet; }

    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline void SetPolygon(const Aws::Vector<Point>& value) { m_polygonHasBeenSet = true; m_polygon = value; }

    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline void SetPolygon(Aws::Vector<Point>&& value) { m_polygonHasBeenSet = true; m_polygon = std::move(value); }

    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline RegionOfInterest& WithPolygon(const Aws::Vector<Point>& value) { SetPolygon(value); return *this;}

    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline RegionOfInterest& WithPolygon(Aws::Vector<Point>&& value) { SetPolygon(std::move(value)); return *this;}

    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline RegionOfInterest& AddPolygon(const Point& value) { m_polygonHasBeenSet = true; m_polygon.push_back(value); return *this; }

    /**
     * <p> Specifies a shape made up of up to 10 <code>Point</code> objects to define a
     * region of interest. </p>
     */
    inline RegionOfInterest& AddPolygon(Point&& value) { m_polygonHasBeenSet = true; m_polygon.push_back(std::move(value)); return *this; }

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::Vector<Point> m_polygon;
    bool m_polygonHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
