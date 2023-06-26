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
   * <p>Indicates whether or not the face has a beard, and the confidence level in
   * the determination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Beard">AWS
   * API Reference</a></p>
   */
  class Beard
  {
  public:
    AWS_REKOGNITION_API Beard();
    AWS_REKOGNITION_API Beard(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Beard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Boolean value that indicates whether the face has beard or not.</p>
     */
    inline bool GetValue() const{ return m_value; }

    /**
     * <p>Boolean value that indicates whether the face has beard or not.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Boolean value that indicates whether the face has beard or not.</p>
     */
    inline void SetValue(bool value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Boolean value that indicates whether the face has beard or not.</p>
     */
    inline Beard& WithValue(bool value) { SetValue(value); return *this;}


    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Level of confidence in the determination.</p>
     */
    inline Beard& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    bool m_value;
    bool m_valueHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
