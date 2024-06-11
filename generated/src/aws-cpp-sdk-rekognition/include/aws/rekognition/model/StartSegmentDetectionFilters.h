/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/StartTechnicalCueDetectionFilter.h>
#include <aws/rekognition/model/StartShotDetectionFilter.h>
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
   * <p>Filters applied to the technical cue or shot detection segments. For more
   * information, see <a>StartSegmentDetection</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/StartSegmentDetectionFilters">AWS
   * API Reference</a></p>
   */
  class StartSegmentDetectionFilters
  {
  public:
    AWS_REKOGNITION_API StartSegmentDetectionFilters();
    AWS_REKOGNITION_API StartSegmentDetectionFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API StartSegmentDetectionFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters that are specific to technical cues.</p>
     */
    inline const StartTechnicalCueDetectionFilter& GetTechnicalCueFilter() const{ return m_technicalCueFilter; }
    inline bool TechnicalCueFilterHasBeenSet() const { return m_technicalCueFilterHasBeenSet; }
    inline void SetTechnicalCueFilter(const StartTechnicalCueDetectionFilter& value) { m_technicalCueFilterHasBeenSet = true; m_technicalCueFilter = value; }
    inline void SetTechnicalCueFilter(StartTechnicalCueDetectionFilter&& value) { m_technicalCueFilterHasBeenSet = true; m_technicalCueFilter = std::move(value); }
    inline StartSegmentDetectionFilters& WithTechnicalCueFilter(const StartTechnicalCueDetectionFilter& value) { SetTechnicalCueFilter(value); return *this;}
    inline StartSegmentDetectionFilters& WithTechnicalCueFilter(StartTechnicalCueDetectionFilter&& value) { SetTechnicalCueFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters that are specific to shot detections.</p>
     */
    inline const StartShotDetectionFilter& GetShotFilter() const{ return m_shotFilter; }
    inline bool ShotFilterHasBeenSet() const { return m_shotFilterHasBeenSet; }
    inline void SetShotFilter(const StartShotDetectionFilter& value) { m_shotFilterHasBeenSet = true; m_shotFilter = value; }
    inline void SetShotFilter(StartShotDetectionFilter&& value) { m_shotFilterHasBeenSet = true; m_shotFilter = std::move(value); }
    inline StartSegmentDetectionFilters& WithShotFilter(const StartShotDetectionFilter& value) { SetShotFilter(value); return *this;}
    inline StartSegmentDetectionFilters& WithShotFilter(StartShotDetectionFilter&& value) { SetShotFilter(std::move(value)); return *this;}
    ///@}
  private:

    StartTechnicalCueDetectionFilter m_technicalCueFilter;
    bool m_technicalCueFilterHasBeenSet = false;

    StartShotDetectionFilter m_shotFilter;
    bool m_shotFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
