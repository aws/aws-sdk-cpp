/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ArcThickness.h>
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
   * <p>The options that determine the arc thickness of a
   * <code>GaugeChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ArcOptions">AWS
   * API Reference</a></p>
   */
  class ArcOptions
  {
  public:
    AWS_QUICKSIGHT_API ArcOptions() = default;
    AWS_QUICKSIGHT_API ArcOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ArcOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The arc thickness of a <code>GaugeChartVisual</code>.</p>
     */
    inline ArcThickness GetArcThickness() const { return m_arcThickness; }
    inline bool ArcThicknessHasBeenSet() const { return m_arcThicknessHasBeenSet; }
    inline void SetArcThickness(ArcThickness value) { m_arcThicknessHasBeenSet = true; m_arcThickness = value; }
    inline ArcOptions& WithArcThickness(ArcThickness value) { SetArcThickness(value); return *this;}
    ///@}
  private:

    ArcThickness m_arcThickness{ArcThickness::NOT_SET};
    bool m_arcThicknessHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
