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
   * <p>Structure containing the estimated age range, in years, for a face.</p>
   * <p>Amazon Rekognition estimates an age range for faces detected in the input
   * image. Estimated age ranges can overlap. A face of a 5-year-old might have an
   * estimated range of 4-6, while the face of a 6-year-old might have an estimated
   * range of 4-8.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/AgeRange">AWS
   * API Reference</a></p>
   */
  class AgeRange
  {
  public:
    AWS_REKOGNITION_API AgeRange() = default;
    AWS_REKOGNITION_API AgeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API AgeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lowest estimated age.</p>
     */
    inline int GetLow() const { return m_low; }
    inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }
    inline void SetLow(int value) { m_lowHasBeenSet = true; m_low = value; }
    inline AgeRange& WithLow(int value) { SetLow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The highest estimated age.</p>
     */
    inline int GetHigh() const { return m_high; }
    inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
    inline void SetHigh(int value) { m_highHasBeenSet = true; m_high = value; }
    inline AgeRange& WithHigh(int value) { SetHigh(value); return *this;}
    ///@}
  private:

    int m_low{0};
    bool m_lowHasBeenSet = false;

    int m_high{0};
    bool m_highHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
