/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/GenderType.h>
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
   * <p>The predicted gender of a detected face. </p> <p>Amazon Rekognition makes
   * gender binary (male/female) predictions based on the physical appearance of a
   * face in a particular image. This kind of prediction is not designed to
   * categorize a person’s gender identity, and you shouldn't use Amazon Rekognition
   * to make such a determination. For example, a male actor wearing a long-haired
   * wig and earrings for a role might be predicted as female.</p> <p>Using Amazon
   * Rekognition to make gender binary predictions is best suited for use cases where
   * aggregate gender distribution statistics need to be analyzed without identifying
   * specific users. For example, the percentage of female users compared to male
   * users on a social media platform. </p> <p>We don't recommend using gender binary
   * predictions to make decisions that impact an individual's rights, privacy, or
   * access to services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Gender">AWS
   * API Reference</a></p>
   */
  class Gender
  {
  public:
    AWS_REKOGNITION_API Gender();
    AWS_REKOGNITION_API Gender(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Gender& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The predicted gender of the face.</p>
     */
    inline const GenderType& GetValue() const{ return m_value; }

    /**
     * <p>The predicted gender of the face.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The predicted gender of the face.</p>
     */
    inline void SetValue(const GenderType& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The predicted gender of the face.</p>
     */
    inline void SetValue(GenderType&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The predicted gender of the face.</p>
     */
    inline Gender& WithValue(const GenderType& value) { SetValue(value); return *this;}

    /**
     * <p>The predicted gender of the face.</p>
     */
    inline Gender& WithValue(GenderType&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>Level of confidence in the prediction.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Level of confidence in the prediction.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Level of confidence in the prediction.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Level of confidence in the prediction.</p>
     */
    inline Gender& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    GenderType m_value;
    bool m_valueHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
