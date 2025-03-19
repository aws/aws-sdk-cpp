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
   * <p>A set of parameters that allow you to filter out certain results from your
   * returned results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DetectionFilter">AWS
   * API Reference</a></p>
   */
  class DetectionFilter
  {
  public:
    AWS_REKOGNITION_API DetectionFilter() = default;
    AWS_REKOGNITION_API DetectionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DetectionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets the confidence of word detection. Words with detection confidence below
     * this will be excluded from the result. Values should be between 0 and 100. The
     * default MinConfidence is 80.</p>
     */
    inline double GetMinConfidence() const { return m_minConfidence; }
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }
    inline DetectionFilter& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the minimum height of the word bounding box. Words with bounding box
     * heights lesser than this value will be excluded from the result. Value is
     * relative to the video frame height.</p>
     */
    inline double GetMinBoundingBoxHeight() const { return m_minBoundingBoxHeight; }
    inline bool MinBoundingBoxHeightHasBeenSet() const { return m_minBoundingBoxHeightHasBeenSet; }
    inline void SetMinBoundingBoxHeight(double value) { m_minBoundingBoxHeightHasBeenSet = true; m_minBoundingBoxHeight = value; }
    inline DetectionFilter& WithMinBoundingBoxHeight(double value) { SetMinBoundingBoxHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the minimum width of the word bounding box. Words with bounding boxes
     * widths lesser than this value will be excluded from the result. Value is
     * relative to the video frame width.</p>
     */
    inline double GetMinBoundingBoxWidth() const { return m_minBoundingBoxWidth; }
    inline bool MinBoundingBoxWidthHasBeenSet() const { return m_minBoundingBoxWidthHasBeenSet; }
    inline void SetMinBoundingBoxWidth(double value) { m_minBoundingBoxWidthHasBeenSet = true; m_minBoundingBoxWidth = value; }
    inline DetectionFilter& WithMinBoundingBoxWidth(double value) { SetMinBoundingBoxWidth(value); return *this;}
    ///@}
  private:

    double m_minConfidence{0.0};
    bool m_minConfidenceHasBeenSet = false;

    double m_minBoundingBoxHeight{0.0};
    bool m_minBoundingBoxHeightHasBeenSet = false;

    double m_minBoundingBoxWidth{0.0};
    bool m_minBoundingBoxWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
