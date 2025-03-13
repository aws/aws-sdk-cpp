/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/IncrementalRefresh.h>
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
   * <p>The refresh configuration of a dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RefreshConfiguration">AWS
   * API Reference</a></p>
   */
  class RefreshConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RefreshConfiguration() = default;
    AWS_QUICKSIGHT_API RefreshConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RefreshConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The incremental refresh for the dataset.</p>
     */
    inline const IncrementalRefresh& GetIncrementalRefresh() const { return m_incrementalRefresh; }
    inline bool IncrementalRefreshHasBeenSet() const { return m_incrementalRefreshHasBeenSet; }
    template<typename IncrementalRefreshT = IncrementalRefresh>
    void SetIncrementalRefresh(IncrementalRefreshT&& value) { m_incrementalRefreshHasBeenSet = true; m_incrementalRefresh = std::forward<IncrementalRefreshT>(value); }
    template<typename IncrementalRefreshT = IncrementalRefresh>
    RefreshConfiguration& WithIncrementalRefresh(IncrementalRefreshT&& value) { SetIncrementalRefresh(std::forward<IncrementalRefreshT>(value)); return *this;}
    ///@}
  private:

    IncrementalRefresh m_incrementalRefresh;
    bool m_incrementalRefreshHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
