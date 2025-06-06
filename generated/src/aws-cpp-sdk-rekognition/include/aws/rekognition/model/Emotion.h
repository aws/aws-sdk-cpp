/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/EmotionName.h>
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
   * <p>The API returns a prediction of an emotion based on a person's facial
   * expressions, along with the confidence level for the predicted emotion. It is
   * not a determination of the person’s internal emotional state and should not be
   * used in such a way. For example, a person pretending to have a sad face might
   * not be sad emotionally. The API is not intended to be used, and you may not use
   * it, in a manner that violates the EU Artificial Intelligence Act or any other
   * applicable law.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Emotion">AWS
   * API Reference</a></p>
   */
  class Emotion
  {
  public:
    AWS_REKOGNITION_API Emotion() = default;
    AWS_REKOGNITION_API Emotion(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Emotion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of emotion detected.</p>
     */
    inline EmotionName GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EmotionName value) { m_typeHasBeenSet = true; m_type = value; }
    inline Emotion& WithType(EmotionName value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Emotion& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}
  private:

    EmotionName m_type{EmotionName::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
