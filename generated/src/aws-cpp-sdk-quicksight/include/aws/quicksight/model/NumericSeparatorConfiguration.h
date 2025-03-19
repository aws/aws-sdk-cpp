/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericSeparatorSymbol.h>
#include <aws/quicksight/model/ThousandSeparatorOptions.h>
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
   * <p>The options that determine the numeric separator configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericSeparatorConfiguration">AWS
   * API Reference</a></p>
   */
  class NumericSeparatorConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NumericSeparatorConfiguration() = default;
    AWS_QUICKSIGHT_API NumericSeparatorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericSeparatorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the decimal separator.</p>
     */
    inline NumericSeparatorSymbol GetDecimalSeparator() const { return m_decimalSeparator; }
    inline bool DecimalSeparatorHasBeenSet() const { return m_decimalSeparatorHasBeenSet; }
    inline void SetDecimalSeparator(NumericSeparatorSymbol value) { m_decimalSeparatorHasBeenSet = true; m_decimalSeparator = value; }
    inline NumericSeparatorConfiguration& WithDecimalSeparator(NumericSeparatorSymbol value) { SetDecimalSeparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the thousands separator configuration.</p>
     */
    inline const ThousandSeparatorOptions& GetThousandsSeparator() const { return m_thousandsSeparator; }
    inline bool ThousandsSeparatorHasBeenSet() const { return m_thousandsSeparatorHasBeenSet; }
    template<typename ThousandsSeparatorT = ThousandSeparatorOptions>
    void SetThousandsSeparator(ThousandsSeparatorT&& value) { m_thousandsSeparatorHasBeenSet = true; m_thousandsSeparator = std::forward<ThousandsSeparatorT>(value); }
    template<typename ThousandsSeparatorT = ThousandSeparatorOptions>
    NumericSeparatorConfiguration& WithThousandsSeparator(ThousandsSeparatorT&& value) { SetThousandsSeparator(std::forward<ThousandsSeparatorT>(value)); return *this;}
    ///@}
  private:

    NumericSeparatorSymbol m_decimalSeparator{NumericSeparatorSymbol::NOT_SET};
    bool m_decimalSeparatorHasBeenSet = false;

    ThousandSeparatorOptions m_thousandsSeparator;
    bool m_thousandsSeparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
