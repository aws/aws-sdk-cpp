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
    AWS_QUICKSIGHT_API PluginVisualConfiguration();
    AWS_QUICKSIGHT_API PluginVisualConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field wells configuration of the plugin visual.</p>
     */
    inline const Aws::Vector<PluginVisualFieldWell>& GetFieldWells() const{ return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    inline void SetFieldWells(const Aws::Vector<PluginVisualFieldWell>& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }
    inline void SetFieldWells(Aws::Vector<PluginVisualFieldWell>&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }
    inline PluginVisualConfiguration& WithFieldWells(const Aws::Vector<PluginVisualFieldWell>& value) { SetFieldWells(value); return *this;}
    inline PluginVisualConfiguration& WithFieldWells(Aws::Vector<PluginVisualFieldWell>&& value) { SetFieldWells(std::move(value)); return *this;}
    inline PluginVisualConfiguration& AddFieldWells(const PluginVisualFieldWell& value) { m_fieldWellsHasBeenSet = true; m_fieldWells.push_back(value); return *this; }
    inline PluginVisualConfiguration& AddFieldWells(PluginVisualFieldWell&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The persisted properties of the plugin visual.</p>
     */
    inline const PluginVisualOptions& GetVisualOptions() const{ return m_visualOptions; }
    inline bool VisualOptionsHasBeenSet() const { return m_visualOptionsHasBeenSet; }
    inline void SetVisualOptions(const PluginVisualOptions& value) { m_visualOptionsHasBeenSet = true; m_visualOptions = value; }
    inline void SetVisualOptions(PluginVisualOptions&& value) { m_visualOptionsHasBeenSet = true; m_visualOptions = std::move(value); }
    inline PluginVisualConfiguration& WithVisualOptions(const PluginVisualOptions& value) { SetVisualOptions(value); return *this;}
    inline PluginVisualConfiguration& WithVisualOptions(PluginVisualOptions&& value) { SetVisualOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of the plugin visual.</p>
     */
    inline const PluginVisualSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    inline void SetSortConfiguration(const PluginVisualSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }
    inline void SetSortConfiguration(PluginVisualSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }
    inline PluginVisualConfiguration& WithSortConfiguration(const PluginVisualSortConfiguration& value) { SetSortConfiguration(value); return *this;}
    inline PluginVisualConfiguration& WithSortConfiguration(PluginVisualSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}
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
