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
    AWS_QUICKSIGHT_API IncrementalRefresh() = default;
    AWS_QUICKSIGHT_API IncrementalRefresh(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IncrementalRefresh& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lookback window setup for an incremental refresh configuration.</p>
     */
    inline const LookbackWindow& GetLookbackWindow() const { return m_lookbackWindow; }
    inline bool LookbackWindowHasBeenSet() const { return m_lookbackWindowHasBeenSet; }
    template<typename LookbackWindowT = LookbackWindow>
    void SetLookbackWindow(LookbackWindowT&& value) { m_lookbackWindowHasBeenSet = true; m_lookbackWindow = std::forward<LookbackWindowT>(value); }
    template<typename LookbackWindowT = LookbackWindow>
    IncrementalRefresh& WithLookbackWindow(LookbackWindowT&& value) { SetLookbackWindow(std::forward<LookbackWindowT>(value)); return *this;}
    ///@}
  private:

    LookbackWindow m_lookbackWindow;
    bool m_lookbackWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
