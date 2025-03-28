﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/YAxisOptions.h>
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
   * <p>The settings of a chart's single axis configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SingleAxisOptions">AWS
   * API Reference</a></p>
   */
  class SingleAxisOptions
  {
  public:
    AWS_QUICKSIGHT_API SingleAxisOptions() = default;
    AWS_QUICKSIGHT_API SingleAxisOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SingleAxisOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Y axis options of a single axis configuration.</p>
     */
    inline const YAxisOptions& GetYAxisOptions() const { return m_yAxisOptions; }
    inline bool YAxisOptionsHasBeenSet() const { return m_yAxisOptionsHasBeenSet; }
    template<typename YAxisOptionsT = YAxisOptions>
    void SetYAxisOptions(YAxisOptionsT&& value) { m_yAxisOptionsHasBeenSet = true; m_yAxisOptions = std::forward<YAxisOptionsT>(value); }
    template<typename YAxisOptionsT = YAxisOptions>
    SingleAxisOptions& WithYAxisOptions(YAxisOptionsT&& value) { SetYAxisOptions(std::forward<YAxisOptionsT>(value)); return *this;}
    ///@}
  private:

    YAxisOptions m_yAxisOptions;
    bool m_yAxisOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
