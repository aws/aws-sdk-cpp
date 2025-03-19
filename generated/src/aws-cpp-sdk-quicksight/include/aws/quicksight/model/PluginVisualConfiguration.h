/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PluginVisualOptions.h>
#include <aws/quicksight/model/PluginVisualSortConfiguration.h>
#include <aws/quicksight/model/PluginVisualFieldWell.h>
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
   * <p>The plugin visual configuration. This includes the field wells, sorting
   * options, and persisted options of the plugin visual.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PluginVisualConfiguration">AWS
   * API Reference</a></p>
   */
  class PluginVisualConfiguration
  {
  public:
    AWS_QUICKSIGHT_API PluginVisualConfiguration() = default;
    AWS_QUICKSIGHT_API PluginVisualConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells configuration of the plugin visual.</p>
     */
    inline const Aws::Vector<PluginVisualFieldWell>& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = Aws::Vector<PluginVisualFieldWell>>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = Aws::Vector<PluginVisualFieldWell>>
    PluginVisualConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    template<typename FieldWellsT = PluginVisualFieldWell>
    PluginVisualConfiguration& AddFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells.emplace_back(std::forward<FieldWellsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The persisted properties of the plugin visual.</p>
     */
    inline const PluginVisualOptions& GetVisualOptions() const { return m_visualOptions; }
    inline bool VisualOptionsHasBeenSet() const { return m_visualOptionsHasBeenSet; }
    template<typename VisualOptionsT = PluginVisualOptions>
    void SetVisualOptions(VisualOptionsT&& value) { m_visualOptionsHasBeenSet = true; m_visualOptions = std::forward<VisualOptionsT>(value); }
    template<typename VisualOptionsT = PluginVisualOptions>
    PluginVisualConfiguration& WithVisualOptions(VisualOptionsT&& value) { SetVisualOptions(std::forward<VisualOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of the plugin visual.</p>
     */
    inline const PluginVisualSortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = PluginVisualSortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = PluginVisualSortConfiguration>
    PluginVisualConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PluginVisualFieldWell> m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    PluginVisualOptions m_visualOptions;
    bool m_visualOptionsHasBeenSet = false;

    PluginVisualSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
