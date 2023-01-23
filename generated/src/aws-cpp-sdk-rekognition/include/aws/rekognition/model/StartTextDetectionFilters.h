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
   * <p>Set of optional parameters that let you set the criteria text must meet to be
   * included in your response. <code>WordFilter</code> looks at a word's height,
   * width and minimum confidence. <code>RegionOfInterest</code> lets you set a
   * specific region of the screen to look for text in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartTextDetectionFilters">AWS
   * API Reference</a></p>
   */
  class StartTextDetectionFilters
  {
  public:
    AWS_REKOGNITION_API StartTextDetectionFilters();
    AWS_REKOGNITION_API StartTextDetectionFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StartTextDetectionFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters focusing on qualities of the text, such as confidence or size.</p>
     */
    inline const DetectionFilter& GetWordFilter() const{ return m_wordFilter; }

    /**
     * <p>Filters focusing on qualities of the text, such as confidence or size.</p>
     */
    inline bool WordFilterHasBeenSet() const { return m_wordFilterHasBeenSet; }

    /**
     * <p>Filters focusing on qualities of the text, such as confidence or size.</p>
     */
    inline void SetWordFilter(const DetectionFilter& value) { m_wordFilterHasBeenSet = true; m_wordFilter = value; }

    /**
     * <p>Filters focusing on qualities of the text, such as confidence or size.</p>
     */
    inline void SetWordFilter(DetectionFilter&& value) { m_wordFilterHasBeenSet = true; m_wordFilter = std::move(value); }

    /**
     * <p>Filters focusing on qualities of the text, such as confidence or size.</p>
     */
    inline StartTextDetectionFilters& WithWordFilter(const DetectionFilter& value) { SetWordFilter(value); return *this;}

    /**
     * <p>Filters focusing on qualities of the text, such as confidence or size.</p>
     */
    inline StartTextDetectionFilters& WithWordFilter(DetectionFilter&& value) { SetWordFilter(std::move(value)); return *this;}


    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterest() const{ return m_regionsOfInterest; }

    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline bool RegionsOfInterestHasBeenSet() const { return m_regionsOfInterestHasBeenSet; }

    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline void SetRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = value; }

    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline void SetRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = std::move(value); }

    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline StartTextDetectionFilters& WithRegionsOfInterest(const Aws::Vector<RegionOfInterest>& value) { SetRegionsOfInterest(value); return *this;}

    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline StartTextDetectionFilters& WithRegionsOfInterest(Aws::Vector<RegionOfInterest>&& value) { SetRegionsOfInterest(std::move(value)); return *this;}

    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline StartTextDetectionFilters& AddRegionsOfInterest(const RegionOfInterest& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.push_back(value); return *this; }

    /**
     * <p>Filter focusing on a certain area of the frame. Uses a
     * <code>BoundingBox</code> object to set the region of the screen.</p>
     */
    inline StartTextDetectionFilters& AddRegionsOfInterest(RegionOfInterest&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.push_back(std::move(value)); return *this; }

  private:

    DetectionFilter m_wordFilter;
    bool m_wordFilterHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterest;
    bool m_regionsOfInterestHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
