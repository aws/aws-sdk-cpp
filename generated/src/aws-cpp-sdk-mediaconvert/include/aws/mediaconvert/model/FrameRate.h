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
   * the calculated frame rate of the asset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FrameRate">AWS
   * API Reference</a></p>
   */
  class FrameRate
  {
  public:
    AWS_MEDIACONVERT_API FrameRate();
    AWS_MEDIACONVERT_API FrameRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API FrameRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * the denominator of the frame rate of the asset.
     */
    inline int GetDenominator() const{ return m_denominator; }
    inline bool DenominatorHasBeenSet() const { return m_denominatorHasBeenSet; }
    inline void SetDenominator(int value) { m_denominatorHasBeenSet = true; m_denominator = value; }
    inline FrameRate& WithDenominator(int value) { SetDenominator(value); return *this;}
    ///@}

    ///@{
    /**
     * the numerator of the frame rate of the asset.
     */
    inline int GetNumerator() const{ return m_numerator; }
    inline bool NumeratorHasBeenSet() const { return m_numeratorHasBeenSet; }
    inline void SetNumerator(int value) { m_numeratorHasBeenSet = true; m_numerator = value; }
    inline FrameRate& WithNumerator(int value) { SetNumerator(value); return *this;}
    ///@}
  private:

    int m_denominator;
    bool m_denominatorHasBeenSet = false;

    int m_numerator;
    bool m_numeratorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
