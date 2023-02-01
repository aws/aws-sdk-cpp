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
    AWS_QUICKSIGHT_API HistogramBinOptions();
    AWS_QUICKSIGHT_API HistogramBinOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramBinOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options that determine the selected bin type.</p>
     */
    inline const HistogramBinType& GetSelectedBinType() const{ return m_selectedBinType; }

    /**
     * <p>The options that determine the selected bin type.</p>
     */
    inline bool SelectedBinTypeHasBeenSet() const { return m_selectedBinTypeHasBeenSet; }

    /**
     * <p>The options that determine the selected bin type.</p>
     */
    inline void SetSelectedBinType(const HistogramBinType& value) { m_selectedBinTypeHasBeenSet = true; m_selectedBinType = value; }

    /**
     * <p>The options that determine the selected bin type.</p>
     */
    inline void SetSelectedBinType(HistogramBinType&& value) { m_selectedBinTypeHasBeenSet = true; m_selectedBinType = std::move(value); }

    /**
     * <p>The options that determine the selected bin type.</p>
     */
    inline HistogramBinOptions& WithSelectedBinType(const HistogramBinType& value) { SetSelectedBinType(value); return *this;}

    /**
     * <p>The options that determine the selected bin type.</p>
     */
    inline HistogramBinOptions& WithSelectedBinType(HistogramBinType&& value) { SetSelectedBinType(std::move(value)); return *this;}


    /**
     * <p>The options that determine the bin count of a histogram.</p>
     */
    inline const BinCountOptions& GetBinCount() const{ return m_binCount; }

    /**
     * <p>The options that determine the bin count of a histogram.</p>
     */
    inline bool BinCountHasBeenSet() const { return m_binCountHasBeenSet; }

    /**
     * <p>The options that determine the bin count of a histogram.</p>
     */
    inline void SetBinCount(const BinCountOptions& value) { m_binCountHasBeenSet = true; m_binCount = value; }

    /**
     * <p>The options that determine the bin count of a histogram.</p>
     */
    inline void SetBinCount(BinCountOptions&& value) { m_binCountHasBeenSet = true; m_binCount = std::move(value); }

    /**
     * <p>The options that determine the bin count of a histogram.</p>
     */
    inline HistogramBinOptions& WithBinCount(const BinCountOptions& value) { SetBinCount(value); return *this;}

    /**
     * <p>The options that determine the bin count of a histogram.</p>
     */
    inline HistogramBinOptions& WithBinCount(BinCountOptions&& value) { SetBinCount(std::move(value)); return *this;}


    /**
     * <p>The options that determine the bin width of a histogram.</p>
     */
    inline const BinWidthOptions& GetBinWidth() const{ return m_binWidth; }

    /**
     * <p>The options that determine the bin width of a histogram.</p>
     */
    inline bool BinWidthHasBeenSet() const { return m_binWidthHasBeenSet; }

    /**
     * <p>The options that determine the bin width of a histogram.</p>
     */
    inline void SetBinWidth(const BinWidthOptions& value) { m_binWidthHasBeenSet = true; m_binWidth = value; }

    /**
     * <p>The options that determine the bin width of a histogram.</p>
     */
    inline void SetBinWidth(BinWidthOptions&& value) { m_binWidthHasBeenSet = true; m_binWidth = std::move(value); }

    /**
     * <p>The options that determine the bin width of a histogram.</p>
     */
    inline HistogramBinOptions& WithBinWidth(const BinWidthOptions& value) { SetBinWidth(value); return *this;}

    /**
     * <p>The options that determine the bin width of a histogram.</p>
     */
    inline HistogramBinOptions& WithBinWidth(BinWidthOptions&& value) { SetBinWidth(std::move(value)); return *this;}


    /**
     * <p>The options that determine the bin start value.</p>
     */
    inline double GetStartValue() const{ return m_startValue; }

    /**
     * <p>The options that determine the bin start value.</p>
     */
    inline bool StartValueHasBeenSet() const { return m_startValueHasBeenSet; }

    /**
     * <p>The options that determine the bin start value.</p>
     */
    inline void SetStartValue(double value) { m_startValueHasBeenSet = true; m_startValue = value; }

    /**
     * <p>The options that determine the bin start value.</p>
     */
    inline HistogramBinOptions& WithStartValue(double value) { SetStartValue(value); return *this;}

  private:

    HistogramBinType m_selectedBinType;
    bool m_selectedBinTypeHasBeenSet = false;

    BinCountOptions m_binCount;
    bool m_binCountHasBeenSet = false;

    BinWidthOptions m_binWidth;
    bool m_binWidthHasBeenSet = false;

    double m_startValue;
    bool m_startValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
