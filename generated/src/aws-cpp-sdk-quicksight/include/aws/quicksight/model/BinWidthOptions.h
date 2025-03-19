/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The options that determine the bin width of a histogram.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BinWidthOptions">AWS
   * API Reference</a></p>
   */
  class BinWidthOptions
  {
  public:
    AWS_QUICKSIGHT_API BinWidthOptions() = default;
    AWS_QUICKSIGHT_API BinWidthOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BinWidthOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options that determine the bin width value.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline BinWidthOptions& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the bin count limit.</p>
     */
    inline long long GetBinCountLimit() const { return m_binCountLimit; }
    inline bool BinCountLimitHasBeenSet() const { return m_binCountLimitHasBeenSet; }
    inline void SetBinCountLimit(long long value) { m_binCountLimitHasBeenSet = true; m_binCountLimit = value; }
    inline BinWidthOptions& WithBinCountLimit(long long value) { SetBinCountLimit(value); return *this;}
    ///@}
  private:

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    long long m_binCountLimit{0};
    bool m_binCountLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
