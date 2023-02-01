/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ArcOptions.h>
#include <aws/quicksight/model/DonutCenterOptions.h>
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
   * <p>The options for configuring a donut chart or pie chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DonutOptions">AWS
   * API Reference</a></p>
   */
  class DonutOptions
  {
  public:
    AWS_QUICKSIGHT_API DonutOptions();
    AWS_QUICKSIGHT_API DonutOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DonutOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The option for define the arc of the chart shape. Valid values are as
     * follows:</p> <ul> <li> <p> <code>WHOLE</code> - A pie chart</p> </li> <li> <p>
     * <code>SMALL</code>- A small-sized donut chart</p> </li> <li> <p>
     * <code>MEDIUM</code>- A medium-sized donut chart</p> </li> <li> <p>
     * <code>LARGE</code>- A large-sized donut chart</p> </li> </ul>
     */
    inline const ArcOptions& GetArcOptions() const{ return m_arcOptions; }

    /**
     * <p>The option for define the arc of the chart shape. Valid values are as
     * follows:</p> <ul> <li> <p> <code>WHOLE</code> - A pie chart</p> </li> <li> <p>
     * <code>SMALL</code>- A small-sized donut chart</p> </li> <li> <p>
     * <code>MEDIUM</code>- A medium-sized donut chart</p> </li> <li> <p>
     * <code>LARGE</code>- A large-sized donut chart</p> </li> </ul>
     */
    inline bool ArcOptionsHasBeenSet() const { return m_arcOptionsHasBeenSet; }

    /**
     * <p>The option for define the arc of the chart shape. Valid values are as
     * follows:</p> <ul> <li> <p> <code>WHOLE</code> - A pie chart</p> </li> <li> <p>
     * <code>SMALL</code>- A small-sized donut chart</p> </li> <li> <p>
     * <code>MEDIUM</code>- A medium-sized donut chart</p> </li> <li> <p>
     * <code>LARGE</code>- A large-sized donut chart</p> </li> </ul>
     */
    inline void SetArcOptions(const ArcOptions& value) { m_arcOptionsHasBeenSet = true; m_arcOptions = value; }

    /**
     * <p>The option for define the arc of the chart shape. Valid values are as
     * follows:</p> <ul> <li> <p> <code>WHOLE</code> - A pie chart</p> </li> <li> <p>
     * <code>SMALL</code>- A small-sized donut chart</p> </li> <li> <p>
     * <code>MEDIUM</code>- A medium-sized donut chart</p> </li> <li> <p>
     * <code>LARGE</code>- A large-sized donut chart</p> </li> </ul>
     */
    inline void SetArcOptions(ArcOptions&& value) { m_arcOptionsHasBeenSet = true; m_arcOptions = std::move(value); }

    /**
     * <p>The option for define the arc of the chart shape. Valid values are as
     * follows:</p> <ul> <li> <p> <code>WHOLE</code> - A pie chart</p> </li> <li> <p>
     * <code>SMALL</code>- A small-sized donut chart</p> </li> <li> <p>
     * <code>MEDIUM</code>- A medium-sized donut chart</p> </li> <li> <p>
     * <code>LARGE</code>- A large-sized donut chart</p> </li> </ul>
     */
    inline DonutOptions& WithArcOptions(const ArcOptions& value) { SetArcOptions(value); return *this;}

    /**
     * <p>The option for define the arc of the chart shape. Valid values are as
     * follows:</p> <ul> <li> <p> <code>WHOLE</code> - A pie chart</p> </li> <li> <p>
     * <code>SMALL</code>- A small-sized donut chart</p> </li> <li> <p>
     * <code>MEDIUM</code>- A medium-sized donut chart</p> </li> <li> <p>
     * <code>LARGE</code>- A large-sized donut chart</p> </li> </ul>
     */
    inline DonutOptions& WithArcOptions(ArcOptions&& value) { SetArcOptions(std::move(value)); return *this;}


    /**
     * <p>The label options of the label that is displayed in the center of a donut
     * chart. This option isn't available for pie charts.</p>
     */
    inline const DonutCenterOptions& GetDonutCenterOptions() const{ return m_donutCenterOptions; }

    /**
     * <p>The label options of the label that is displayed in the center of a donut
     * chart. This option isn't available for pie charts.</p>
     */
    inline bool DonutCenterOptionsHasBeenSet() const { return m_donutCenterOptionsHasBeenSet; }

    /**
     * <p>The label options of the label that is displayed in the center of a donut
     * chart. This option isn't available for pie charts.</p>
     */
    inline void SetDonutCenterOptions(const DonutCenterOptions& value) { m_donutCenterOptionsHasBeenSet = true; m_donutCenterOptions = value; }

    /**
     * <p>The label options of the label that is displayed in the center of a donut
     * chart. This option isn't available for pie charts.</p>
     */
    inline void SetDonutCenterOptions(DonutCenterOptions&& value) { m_donutCenterOptionsHasBeenSet = true; m_donutCenterOptions = std::move(value); }

    /**
     * <p>The label options of the label that is displayed in the center of a donut
     * chart. This option isn't available for pie charts.</p>
     */
    inline DonutOptions& WithDonutCenterOptions(const DonutCenterOptions& value) { SetDonutCenterOptions(value); return *this;}

    /**
     * <p>The label options of the label that is displayed in the center of a donut
     * chart. This option isn't available for pie charts.</p>
     */
    inline DonutOptions& WithDonutCenterOptions(DonutCenterOptions&& value) { SetDonutCenterOptions(std::move(value)); return *this;}

  private:

    ArcOptions m_arcOptions;
    bool m_arcOptionsHasBeenSet = false;

    DonutCenterOptions m_donutCenterOptions;
    bool m_donutCenterOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
