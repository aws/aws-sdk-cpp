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
   * <p>Information about a shot detection segment detected in a video. For more
   * information, see <a>SegmentDetection</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ShotSegment">AWS
   * API Reference</a></p>
   */
  class ShotSegment
  {
  public:
    AWS_REKOGNITION_API ShotSegment() = default;
    AWS_REKOGNITION_API ShotSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ShotSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Identifier for a shot detection segment detected in a video. </p>
     */
    inline long long GetIndex() const { return m_index; }
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }
    inline void SetIndex(long long value) { m_indexHasBeenSet = true; m_index = value; }
    inline ShotSegment& WithIndex(long long value) { SetIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence that Amazon Rekognition Video has in the accuracy of the
     * detected segment.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline ShotSegment& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    long long m_index{0};
    bool m_indexHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
