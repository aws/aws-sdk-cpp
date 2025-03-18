/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/PluginVisualProperty.h>
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
   * <p>The options and persisted properties for the plugin visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PluginVisualOptions">AWS
   * API Reference</a></p>
   */
  class PluginVisualOptions
  {
  public:
    AWS_QUICKSIGHT_API PluginVisualOptions() = default;
    AWS_QUICKSIGHT_API PluginVisualOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The persisted properties and their values.</p>
     */
    inline const Aws::Vector<PluginVisualProperty>& GetVisualProperties() const { return m_visualProperties; }
    inline bool VisualPropertiesHasBeenSet() const { return m_visualPropertiesHasBeenSet; }
    template<typename VisualPropertiesT = Aws::Vector<PluginVisualProperty>>
    void SetVisualProperties(VisualPropertiesT&& value) { m_visualPropertiesHasBeenSet = true; m_visualProperties = std::forward<VisualPropertiesT>(value); }
    template<typename VisualPropertiesT = Aws::Vector<PluginVisualProperty>>
    PluginVisualOptions& WithVisualProperties(VisualPropertiesT&& value) { SetVisualProperties(std::forward<VisualPropertiesT>(value)); return *this;}
    template<typename VisualPropertiesT = PluginVisualProperty>
    PluginVisualOptions& AddVisualProperties(VisualPropertiesT&& value) { m_visualPropertiesHasBeenSet = true; m_visualProperties.emplace_back(std::forward<VisualPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PluginVisualProperty> m_visualProperties;
    bool m_visualPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
