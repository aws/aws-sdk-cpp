/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Palette.h>
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
   * <p>The contextual accent palette.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ContextualAccentPalette">AWS
   * API Reference</a></p>
   */
  class ContextualAccentPalette
  {
  public:
    AWS_QUICKSIGHT_API ContextualAccentPalette() = default;
    AWS_QUICKSIGHT_API ContextualAccentPalette(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ContextualAccentPalette& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Palette& GetConnection() const { return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    template<typename ConnectionT = Palette>
    void SetConnection(ConnectionT&& value) { m_connectionHasBeenSet = true; m_connection = std::forward<ConnectionT>(value); }
    template<typename ConnectionT = Palette>
    ContextualAccentPalette& WithConnection(ConnectionT&& value) { SetConnection(std::forward<ConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Palette& GetVisualization() const { return m_visualization; }
    inline bool VisualizationHasBeenSet() const { return m_visualizationHasBeenSet; }
    template<typename VisualizationT = Palette>
    void SetVisualization(VisualizationT&& value) { m_visualizationHasBeenSet = true; m_visualization = std::forward<VisualizationT>(value); }
    template<typename VisualizationT = Palette>
    ContextualAccentPalette& WithVisualization(VisualizationT&& value) { SetVisualization(std::forward<VisualizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Palette& GetInsight() const { return m_insight; }
    inline bool InsightHasBeenSet() const { return m_insightHasBeenSet; }
    template<typename InsightT = Palette>
    void SetInsight(InsightT&& value) { m_insightHasBeenSet = true; m_insight = std::forward<InsightT>(value); }
    template<typename InsightT = Palette>
    ContextualAccentPalette& WithInsight(InsightT&& value) { SetInsight(std::forward<InsightT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Palette& GetAutomation() const { return m_automation; }
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
    template<typename AutomationT = Palette>
    void SetAutomation(AutomationT&& value) { m_automationHasBeenSet = true; m_automation = std::forward<AutomationT>(value); }
    template<typename AutomationT = Palette>
    ContextualAccentPalette& WithAutomation(AutomationT&& value) { SetAutomation(std::forward<AutomationT>(value)); return *this;}
    ///@}
  private:

    Palette m_connection;
    bool m_connectionHasBeenSet = false;

    Palette m_visualization;
    bool m_visualizationHasBeenSet = false;

    Palette m_insight;
    bool m_insightHasBeenSet = false;

    Palette m_automation;
    bool m_automationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
