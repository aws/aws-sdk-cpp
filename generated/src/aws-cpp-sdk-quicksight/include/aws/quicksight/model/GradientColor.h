/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/GradientStop.h>
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
   * <p>Determines the gradient color settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GradientColor">AWS
   * API Reference</a></p>
   */
  class GradientColor
  {
  public:
    AWS_QUICKSIGHT_API GradientColor() = default;
    AWS_QUICKSIGHT_API GradientColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GradientColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of gradient color stops.</p>
     */
    inline const Aws::Vector<GradientStop>& GetStops() const { return m_stops; }
    inline bool StopsHasBeenSet() const { return m_stopsHasBeenSet; }
    template<typename StopsT = Aws::Vector<GradientStop>>
    void SetStops(StopsT&& value) { m_stopsHasBeenSet = true; m_stops = std::forward<StopsT>(value); }
    template<typename StopsT = Aws::Vector<GradientStop>>
    GradientColor& WithStops(StopsT&& value) { SetStops(std::forward<StopsT>(value)); return *this;}
    template<typename StopsT = GradientStop>
    GradientColor& AddStops(StopsT&& value) { m_stopsHasBeenSet = true; m_stops.emplace_back(std::forward<StopsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GradientStop> m_stops;
    bool m_stopsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
