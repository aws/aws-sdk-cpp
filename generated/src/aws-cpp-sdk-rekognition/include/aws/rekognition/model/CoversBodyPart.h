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
   * <p>Information about an item of Personal Protective Equipment covering a
   * corresponding body part. For more information, see
   * <a>DetectProtectiveEquipment</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CoversBodyPart">AWS
   * API Reference</a></p>
   */
  class CoversBodyPart
  {
  public:
    AWS_REKOGNITION_API CoversBodyPart() = default;
    AWS_REKOGNITION_API CoversBodyPart(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CoversBodyPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The confidence that Amazon Rekognition has in the value of
     * <code>Value</code>.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline CoversBodyPart& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if the PPE covers the corresponding body part, otherwise false.</p>
     */
    inline bool GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(bool value) { m_valueHasBeenSet = true; m_value = value; }
    inline CoversBodyPart& WithValue(bool value) { SetValue(value); return *this;}
    ///@}
  private:

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    bool m_value{false};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
