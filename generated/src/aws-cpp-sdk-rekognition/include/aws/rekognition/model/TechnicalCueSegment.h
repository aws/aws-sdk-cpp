/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/TechnicalCueType.h>
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
   * <p>Information about a technical cue segment. For more information, see
   * <a>SegmentDetection</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TechnicalCueSegment">AWS
   * API Reference</a></p>
   */
  class TechnicalCueSegment
  {
  public:
    AWS_REKOGNITION_API TechnicalCueSegment() = default;
    AWS_REKOGNITION_API TechnicalCueSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TechnicalCueSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the technical cue.</p>
     */
    inline TechnicalCueType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TechnicalCueType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TechnicalCueSegment& WithType(TechnicalCueType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Rekognition Video has in the accuracy of the
     * detected segment.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline TechnicalCueSegment& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    TechnicalCueType m_type{TechnicalCueType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
