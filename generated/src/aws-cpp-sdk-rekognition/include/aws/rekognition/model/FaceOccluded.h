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
   * <p> <code>FaceOccluded</code> should return "true" with a high confidence score
   * if a detected face’s eyes, nose, and mouth are partially captured or if they are
   * covered by masks, dark sunglasses, cell phones, hands, or other objects.
   * <code>FaceOccluded</code> should return "false" with a high confidence score if
   * common occurrences that do not impact face verification are detected, such as
   * eye glasses, lightly tinted sunglasses, strands of hair, and others. </p> <p>You
   * can use <code>FaceOccluded</code> to determine if an obstruction on a face
   * negatively impacts using the image for face matching.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceOccluded">AWS
   * API Reference</a></p>
   */
  class FaceOccluded
  {
  public:
    AWS_REKOGNITION_API FaceOccluded();
    AWS_REKOGNITION_API FaceOccluded(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceOccluded& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if a detected face’s eyes, nose, and mouth are partially captured or if
     * they are covered by masks, dark sunglasses, cell phones, hands, or other
     * objects. False if common occurrences that do not impact face verification are
     * detected, such as eye glasses, lightly tinted sunglasses, strands of hair, and
     * others.</p>
     */
    inline bool GetValue() const{ return m_value; }

    /**
     * <p>True if a detected face’s eyes, nose, and mouth are partially captured or if
     * they are covered by masks, dark sunglasses, cell phones, hands, or other
     * objects. False if common occurrences that do not impact face verification are
     * detected, such as eye glasses, lightly tinted sunglasses, strands of hair, and
     * others.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>True if a detected face’s eyes, nose, and mouth are partially captured or if
     * they are covered by masks, dark sunglasses, cell phones, hands, or other
     * objects. False if common occurrences that do not impact face verification are
     * detected, such as eye glasses, lightly tinted sunglasses, strands of hair, and
     * others.</p>
     */
    inline void SetValue(bool value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>True if a detected face’s eyes, nose, and mouth are partially captured or if
     * they are covered by masks, dark sunglasses, cell phones, hands, or other
     * objects. False if common occurrences that do not impact face verification are
     * detected, such as eye glasses, lightly tinted sunglasses, strands of hair, and
     * others.</p>
     */
    inline FaceOccluded& WithValue(bool value) { SetValue(value); return *this;}


    /**
     * <p>The confidence that the service has detected the presence of a face
     * occlusion.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that the service has detected the presence of a face
     * occlusion.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that the service has detected the presence of a face
     * occlusion.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that the service has detected the presence of a face
     * occlusion.</p>
     */
    inline FaceOccluded& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    bool m_value;
    bool m_valueHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
