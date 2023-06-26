/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LookbackWindow.h>
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
   * <p>The incremental refresh configuration for a dataset.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IncrementalRefresh">AWS
   * API Reference</a></p>
   */
  class IncrementalRefresh
  {
  public:
    AWS_QUICKSIGHT_API IncrementalRefresh();
    AWS_QUICKSIGHT_API IncrementalRefresh(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IncrementalRefresh& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lookback window setup for an incremental refresh configuration.</p>
     */
    inline const LookbackWindow& GetLookbackWindow() const{ return m_lookbackWindow; }

    /**
     * <p>The lookback window setup for an incremental refresh configuration.</p>
     */
    inline bool LookbackWindowHasBeenSet() const { return m_lookbackWindowHasBeenSet; }

    /**
     * <p>The lookback window setup for an incremental refresh configuration.</p>
     */
    inline void SetLookbackWindow(const LookbackWindow& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = value; }

    /**
     * <p>The lookback window setup for an incremental refresh configuration.</p>
     */
    inline void SetLookbackWindow(LookbackWindow&& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = std::move(value); }

    /**
     * <p>The lookback window setup for an incremental refresh configuration.</p>
     */
    inline IncrementalRefresh& WithLookbackWindow(const LookbackWindow& value) { SetLookbackWindow(value); return *this;}

    /**
     * <p>The lookback window setup for an incremental refresh configuration.</p>
     */
    inline IncrementalRefresh& WithLookbackWindow(LookbackWindow&& value) { SetLookbackWindow(std::move(value)); return *this;}

  private:

    LookbackWindow m_lookbackWindow;
    bool m_lookbackWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
