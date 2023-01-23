/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/DetectionFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/RegionOfInterest.h>
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
   * <p>A set of optional parameters that you can use to set the criteria that the
   * text must meet to be included in your response. <code>WordFilter</code> looks at
   * a word’s height, width, and minimum confidence. <code>RegionOfInterest</code>
   * lets you set a specific region of the image to look for text in. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectTextFilters">AWS
   * API Reference</a></p>
   */
  class DetectTextFilters
  {
  public:
    AWS_REKOGNITION_API DetectTextFilters();
    AWS_REKOGNITION_API DetectTextFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectTextFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DetectionFilter& GetWordFilter() const{ return m_wordFilter; }

    
    inline bool WordFilterHasBeenSet() const { return m_wordFilterHasBeenSet; }

    
    inline void SetWordFilter(const DetectionFilter& value) { m_wordFilterHasBeenSet = true; m_wordFilter = value; }

    
    inline void SetWordFilter(DetectionFilter&& value) { m_wordFilterHasBeenSet = true; m_wordFilter = std::move(value); }

    
    inline DetectTextFilters& WithWordFilter(const DetectionFilter& value) { SetWordFilter(value); return *this;}

    
    inline DetectTextFilters& WithWordFilter(DetectionFilter&& value) { SetWordFilter(std::move(value)); return *this;}


    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterest() const{ return m_regionsOfInterest; }

    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline bool RegionsOfInterestHasBeenSet() const { return m_regionsOfInterestHasBeenSet; }

    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline void SetRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = value; }

    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline void SetRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = std::move(value); }

    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline DetectTextFilters& WithRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { SetRegionsOfInterest(value); return *this;}

    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline DetectTextFilters& WithRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { SetRegionsOfInterest(std::move(value)); return *this;}

    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline DetectTextFilters& AddRegionsOfInterest(const RegionOfInterest& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.push_back(value); return *this; }

    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline DetectTextFilters& AddRegionsOfInterest(RegionOfInterest&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.push_back(std::move(value)); return *this; }

  private:

    DetectionFilter m_wordFilter;
    bool m_wordFilterHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterest;
    bool m_regionsOfInterestHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
