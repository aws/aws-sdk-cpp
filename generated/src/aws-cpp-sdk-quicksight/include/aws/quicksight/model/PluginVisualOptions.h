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
    AWS_QUICKSIGHT_API PluginVisualOptions();
    AWS_QUICKSIGHT_API PluginVisualOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PluginVisualOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The persisted properties and their values.</p>
     */
    inline const Aws::Vector<PluginVisualProperty>& GetVisualProperties() const{ return m_visualProperties; }
    inline bool VisualPropertiesHasBeenSet() const { return m_visualPropertiesHasBeenSet; }
    inline void SetVisualProperties(const Aws::Vector<PluginVisualProperty>& value) { m_visualPropertiesHasBeenSet = true; m_visualProperties = value; }
    inline void SetVisualProperties(Aws::Vector<PluginVisualProperty>&& value) { m_visualPropertiesHasBeenSet = true; m_visualProperties = std::move(value); }
    inline PluginVisualOptions& WithVisualProperties(const Aws::Vector<PluginVisualProperty>& value) { SetVisualProperties(value); return *this;}
    inline PluginVisualOptions& WithVisualProperties(Aws::Vector<PluginVisualProperty>&& value) { SetVisualProperties(std::move(value)); return *this;}
    inline PluginVisualOptions& AddVisualProperties(const PluginVisualProperty& value) { m_visualPropertiesHasBeenSet = true; m_visualProperties.push_back(value); return *this; }
    inline PluginVisualOptions& AddVisualProperties(PluginVisualProperty&& value) { m_visualPropertiesHasBeenSet = true; m_visualProperties.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PluginVisualProperty> m_visualProperties;
    bool m_visualPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
