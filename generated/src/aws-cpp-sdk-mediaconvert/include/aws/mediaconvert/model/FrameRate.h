/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
namespace MediaConvert
{
namespace Model
{

  /**
   * The frame rate of the video or audio track.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FrameRate">AWS
   * API Reference</a></p>
   */
  class FrameRate
  {
  public:
    AWS_MEDIACONVERT_API FrameRate() = default;
    AWS_MEDIACONVERT_API FrameRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API FrameRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The denominator, or bottom number, in the fractional frame rate. For example, if
     * your frame rate is 24000 / 1001 (23.976 frames per second), then the denominator
     * would be 1001.
     */
    inline int GetDenominator() const { return m_denominator; }
    inline bool DenominatorHasBeenSet() const { return m_denominatorHasBeenSet; }
    inline void SetDenominator(int value) { m_denominatorHasBeenSet = true; m_denominator = value; }
    inline FrameRate& WithDenominator(int value) { SetDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * The numerator, or top number, in the fractional frame rate. For example, if your
     * frame rate is 24000 / 1001 (23.976 frames per second), then the numerator would
     * be 24000.
     */
    inline int GetNumerator() const { return m_numerator; }
    inline bool NumeratorHasBeenSet() const { return m_numeratorHasBeenSet; }
    inline void SetNumerator(int value) { m_numeratorHasBeenSet = true; m_numerator = value; }
    inline FrameRate& WithNumerator(int value) { SetNumerator(value); return *this;}
    ///@}
  private:

    int m_denominator{0};
    bool m_denominatorHasBeenSet = false;

    int m_numerator{0};
    bool m_numeratorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
