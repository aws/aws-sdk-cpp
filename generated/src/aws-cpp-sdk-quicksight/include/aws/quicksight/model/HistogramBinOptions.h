/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/HistogramBinType.h>
#include <aws/quicksight/model/BinCountOptions.h>
#include <aws/quicksight/model/BinWidthOptions.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The options that determine the presentation of histogram bins.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HistogramBinOptions">AWS
   * API Reference</a></p>
   */
  class HistogramBinOptions
  {
  public:
    AWS_QUICKSIGHT_API HistogramBinOptions() = default;
    AWS_QUICKSIGHT_API HistogramBinOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramBinOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options that determine the selected bin type.</p>
     */
    inline HistogramBinType GetSelectedBinType() const { return m_selectedBinType; }
    inline bool SelectedBinTypeHasBeenSet() const { return m_selectedBinTypeHasBeenSet; }
    inline void SetSelectedBinType(HistogramBinType value) { m_selectedBinTypeHasBeenSet = true; m_selectedBinType = value; }
    inline HistogramBinOptions& WithSelectedBinType(HistogramBinType value) { SetSelectedBinType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the bin count of a histogram.</p>
     */
    inline const BinCountOptions& GetBinCount() const { return m_binCount; }
    inline bool BinCountHasBeenSet() const { return m_binCountHasBeenSet; }
    template<typename BinCountT = BinCountOptions>
    void SetBinCount(BinCountT&& value) { m_binCountHasBeenSet = true; m_binCount = std::forward<BinCountT>(value); }
    template<typename BinCountT = BinCountOptions>
    HistogramBinOptions& WithBinCount(BinCountT&& value) { SetBinCount(std::forward<BinCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the bin width of a histogram.</p>
     */
    inline const BinWidthOptions& GetBinWidth() const { return m_binWidth; }
    inline bool BinWidthHasBeenSet() const { return m_binWidthHasBeenSet; }
    template<typename BinWidthT = BinWidthOptions>
    void SetBinWidth(BinWidthT&& value) { m_binWidthHasBeenSet = true; m_binWidth = std::forward<BinWidthT>(value); }
    template<typename BinWidthT = BinWidthOptions>
    HistogramBinOptions& WithBinWidth(BinWidthT&& value) { SetBinWidth(std::forward<BinWidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the bin start value.</p>
     */
    inline double GetStartValue() const { return m_startValue; }
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }
    inline void SetStartValue(double value) { m_startValueHasBeenSet = true; m_startValue = value; }
    inline HistogramBinOptions& WithStartValue(double value) { SetStartValue(value); return *this;}
    ///@}
  private:

    HistogramBinType m_selectedBinType{HistogramBinType::NOT_SET};
    bool m_selectedBinTypeHasBeenSet = false;

    BinCountOptions m_binCount;
    bool m_binCountHasBeenSet = false;

    BinWidthOptions m_binWidth;
    bool m_binWidthHasBeenSet = false;

    double m_startValue{0.0};
    bool m_startValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
