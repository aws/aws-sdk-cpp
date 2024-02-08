/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The color configuration for individual groups within a waterfall
   * visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WaterfallChartGroupColorConfiguration">AWS
   * API Reference</a></p>
   */
  class WaterfallChartGroupColorConfiguration
  {
  public:
    AWS_QUICKSIGHT_API WaterfallChartGroupColorConfiguration();
    AWS_QUICKSIGHT_API WaterfallChartGroupColorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WaterfallChartGroupColorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline const Aws::String& GetPositiveBarColor() const{ return m_positiveBarColor; }

    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline bool PositiveBarColorHasBeenSet() const { return m_positiveBarColorHasBeenSet; }

    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline void SetPositiveBarColor(const Aws::String& value) { m_positiveBarColorHasBeenSet = true; m_positiveBarColor = value; }

    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline void SetPositiveBarColor(Aws::String&& value) { m_positiveBarColorHasBeenSet = true; m_positiveBarColor = std::move(value); }

    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline void SetPositiveBarColor(const char* value) { m_positiveBarColorHasBeenSet = true; m_positiveBarColor.assign(value); }

    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithPositiveBarColor(const Aws::String& value) { SetPositiveBarColor(value); return *this;}

    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithPositiveBarColor(Aws::String&& value) { SetPositiveBarColor(std::move(value)); return *this;}

    /**
     * <p>Defines the color for the positive bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithPositiveBarColor(const char* value) { SetPositiveBarColor(value); return *this;}


    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline const Aws::String& GetNegativeBarColor() const{ return m_negativeBarColor; }

    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline bool NegativeBarColorHasBeenSet() const { return m_negativeBarColorHasBeenSet; }

    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline void SetNegativeBarColor(const Aws::String& value) { m_negativeBarColorHasBeenSet = true; m_negativeBarColor = value; }

    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline void SetNegativeBarColor(Aws::String&& value) { m_negativeBarColorHasBeenSet = true; m_negativeBarColor = std::move(value); }

    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline void SetNegativeBarColor(const char* value) { m_negativeBarColorHasBeenSet = true; m_negativeBarColor.assign(value); }

    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithNegativeBarColor(const Aws::String& value) { SetNegativeBarColor(value); return *this;}

    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithNegativeBarColor(Aws::String&& value) { SetNegativeBarColor(std::move(value)); return *this;}

    /**
     * <p>Defines the color for the negative bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithNegativeBarColor(const char* value) { SetNegativeBarColor(value); return *this;}


    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline const Aws::String& GetTotalBarColor() const{ return m_totalBarColor; }

    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline bool TotalBarColorHasBeenSet() const { return m_totalBarColorHasBeenSet; }

    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline void SetTotalBarColor(const Aws::String& value) { m_totalBarColorHasBeenSet = true; m_totalBarColor = value; }

    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline void SetTotalBarColor(Aws::String&& value) { m_totalBarColorHasBeenSet = true; m_totalBarColor = std::move(value); }

    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline void SetTotalBarColor(const char* value) { m_totalBarColorHasBeenSet = true; m_totalBarColor.assign(value); }

    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithTotalBarColor(const Aws::String& value) { SetTotalBarColor(value); return *this;}

    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithTotalBarColor(Aws::String&& value) { SetTotalBarColor(std::move(value)); return *this;}

    /**
     * <p>Defines the color for the total bars of a waterfall chart.</p>
     */
    inline WaterfallChartGroupColorConfiguration& WithTotalBarColor(const char* value) { SetTotalBarColor(value); return *this;}

  private:

    Aws::String m_positiveBarColor;
    bool m_positiveBarColorHasBeenSet = false;

    Aws::String m_negativeBarColor;
    bool m_negativeBarColorHasBeenSet = false;

    Aws::String m_totalBarColor;
    bool m_totalBarColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
