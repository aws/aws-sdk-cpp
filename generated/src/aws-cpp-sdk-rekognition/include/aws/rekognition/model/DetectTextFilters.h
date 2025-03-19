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
    AWS_REKOGNITION_API DetectTextFilters() = default;
    AWS_REKOGNITION_API DetectTextFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectTextFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DetectionFilter& GetWordFilter() const { return m_wordFilter; }
    inline bool WordFilterHasBeenSet() const { return m_wordFilterHasBeenSet; }
    template<typename WordFilterT = DetectionFilter>
    void SetWordFilter(WordFilterT&& value) { m_wordFilterHasBeenSet = true; m_wordFilter = std::forward<WordFilterT>(value); }
    template<typename WordFilterT = DetectionFilter>
    DetectTextFilters& WithWordFilter(WordFilterT&& value) { SetWordFilter(std::forward<WordFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A Filter focusing on a certain area of the image. Uses a
     * <code>BoundingBox</code> object to set the region of the image.</p>
     */
    inline const Aws::Vector<RegionOfInterest>& GetRegionsOfInterest() const { return m_regionsOfInterest; }
    inline bool RegionsOfInterestHasBeenSet() const { return m_regionsOfInterestHasBeenSet; }
    template<typename RegionsOfInterestT = Aws::Vector<RegionOfInterest>>
    void SetRegionsOfInterest(RegionsOfInterestT&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest = std::forward<RegionsOfInterestT>(value); }
    template<typename RegionsOfInterestT = Aws::Vector<RegionOfInterest>>
    DetectTextFilters& WithRegionsOfInterest(RegionsOfInterestT&& value) { SetRegionsOfInterest(std::forward<RegionsOfInterestT>(value)); return *this;}
    template<typename RegionsOfInterestT = RegionOfInterest>
    DetectTextFilters& AddRegionsOfInterest(RegionsOfInterestT&& value) { m_regionsOfInterestHasBeenSet = true; m_regionsOfInterest.emplace_back(std::forward<RegionsOfInterestT>(value)); return *this; }
    ///@}
  private:

    DetectionFilter m_wordFilter;
    bool m_wordFilterHasBeenSet = false;

    Aws::Vector<RegionOfInterest> m_regionsOfInterest;
    bool m_regionsOfInterestHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
