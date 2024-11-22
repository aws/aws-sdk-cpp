/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PluginVisualTableQuerySort.h>
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
   * <p>Determines how the plugin visual sorts the data during query.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PluginVisualSortConfiguration">AWS
   * API Reference</a></p>
   */
  class PluginVisualSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PluginVisualSortConfiguration();
    AWS_QUICKSIGHT_API PluginVisualSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table query sorting options for the plugin visual.</p>
     */
    inline const PluginVisualTableQuerySort& GetPluginVisualTableQuerySort() const{ return m_pluginVisualTableQuerySort; }
    inline bool PluginVisualTableQuerySortHasBeenSet() const { return m_pluginVisualTableQuerySortHasBeenSet; }
    inline void SetPluginVisualTableQuerySort(const PluginVisualTableQuerySort& value) { m_pluginVisualTableQuerySortHasBeenSet = true; m_pluginVisualTableQuerySort = value; }
    inline void SetPluginVisualTableQuerySort(PluginVisualTableQuerySort&& value) { m_pluginVisualTableQuerySortHasBeenSet = true; m_pluginVisualTableQuerySort = std::move(value); }
    inline PluginVisualSortConfiguration& WithPluginVisualTableQuerySort(const PluginVisualTableQuerySort& value) { SetPluginVisualTableQuerySort(value); return *this;}
    inline PluginVisualSortConfiguration& WithPluginVisualTableQuerySort(PluginVisualTableQuerySort&& value) { SetPluginVisualTableQuerySort(std::move(value)); return *this;}
    ///@}
  private:

    PluginVisualTableQuerySort m_pluginVisualTableQuerySort;
    bool m_pluginVisualTableQuerySortHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
