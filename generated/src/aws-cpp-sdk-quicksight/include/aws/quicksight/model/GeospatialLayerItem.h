/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GeospatialLayerType.h>
#include <aws/quicksight/model/GeospatialDataSourceItem.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/GeospatialLayerDefinition.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/GeospatialLayerJoinDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LayerCustomAction.h>
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
   * <p>The properties for a single geospatial layer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeospatialLayerItem">AWS
   * API Reference</a></p>
   */
  class GeospatialLayerItem
  {
  public:
    AWS_QUICKSIGHT_API GeospatialLayerItem() = default;
    AWS_QUICKSIGHT_API GeospatialLayerItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GeospatialLayerItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the layer.</p>
     */
    inline const Aws::String& GetLayerId() const { return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    template<typename LayerIdT = Aws::String>
    void SetLayerId(LayerIdT&& value) { m_layerIdHasBeenSet = true; m_layerId = std::forward<LayerIdT>(value); }
    template<typename LayerIdT = Aws::String>
    GeospatialLayerItem& WithLayerId(LayerIdT&& value) { SetLayerId(std::forward<LayerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer type.</p>
     */
    inline GeospatialLayerType GetLayerType() const { return m_layerType; }
    inline bool LayerTypeHasBeenSet() const { return m_layerTypeHasBeenSet; }
    inline void SetLayerType(GeospatialLayerType value) { m_layerTypeHasBeenSet = true; m_layerType = value; }
    inline GeospatialLayerItem& WithLayerType(GeospatialLayerType value) { SetLayerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the layer.</p>
     */
    inline const GeospatialDataSourceItem& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = GeospatialDataSourceItem>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = GeospatialDataSourceItem>
    GeospatialLayerItem& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label that is displayed for the layer.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    GeospatialLayerItem& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of visibility for the layer.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline GeospatialLayerItem& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition properties for a layer.</p>
     */
    inline const GeospatialLayerDefinition& GetLayerDefinition() const { return m_layerDefinition; }
    inline bool LayerDefinitionHasBeenSet() const { return m_layerDefinitionHasBeenSet; }
    template<typename LayerDefinitionT = GeospatialLayerDefinition>
    void SetLayerDefinition(LayerDefinitionT&& value) { m_layerDefinitionHasBeenSet = true; m_layerDefinition = std::forward<LayerDefinitionT>(value); }
    template<typename LayerDefinitionT = GeospatialLayerDefinition>
    GeospatialLayerItem& WithLayerDefinition(LayerDefinitionT&& value) { SetLayerDefinition(std::forward<LayerDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TooltipOptions& GetTooltip() const { return m_tooltip; }
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }
    template<typename TooltipT = TooltipOptions>
    void SetTooltip(TooltipT&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::forward<TooltipT>(value); }
    template<typename TooltipT = TooltipOptions>
    GeospatialLayerItem& WithTooltip(TooltipT&& value) { SetTooltip(std::forward<TooltipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The join definition properties for a layer.</p>
     */
    inline const GeospatialLayerJoinDefinition& GetJoinDefinition() const { return m_joinDefinition; }
    inline bool JoinDefinitionHasBeenSet() const { return m_joinDefinitionHasBeenSet; }
    template<typename JoinDefinitionT = GeospatialLayerJoinDefinition>
    void SetJoinDefinition(JoinDefinitionT&& value) { m_joinDefinitionHasBeenSet = true; m_joinDefinition = std::forward<JoinDefinitionT>(value); }
    template<typename JoinDefinitionT = GeospatialLayerJoinDefinition>
    GeospatialLayerItem& WithJoinDefinition(JoinDefinitionT&& value) { SetJoinDefinition(std::forward<JoinDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom actions for a layer.</p>
     */
    inline const Aws::Vector<LayerCustomAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<LayerCustomAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<LayerCustomAction>>
    GeospatialLayerItem& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = LayerCustomAction>
    GeospatialLayerItem& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;

    GeospatialLayerType m_layerType{GeospatialLayerType::NOT_SET};
    bool m_layerTypeHasBeenSet = false;

    GeospatialDataSourceItem m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    GeospatialLayerDefinition m_layerDefinition;
    bool m_layerDefinitionHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    GeospatialLayerJoinDefinition m_joinDefinition;
    bool m_joinDefinitionHasBeenSet = false;

    Aws::Vector<LayerCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
