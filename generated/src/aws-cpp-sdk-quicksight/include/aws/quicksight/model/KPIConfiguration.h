/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KPIFieldWells.h>
#include <aws/quicksight/model/KPISortConfiguration.h>
#include <aws/quicksight/model/KPIOptions.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
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
   * <p>The configuration of a KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIConfiguration">AWS
   * API Reference</a></p>
   */
  class KPIConfiguration
  {
  public:
    AWS_QUICKSIGHT_API KPIConfiguration() = default;
    AWS_QUICKSIGHT_API KPIConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a KPI visual.</p>
     */
    inline const KPIFieldWells& GetFieldWells() const { return m_fieldWells; }
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }
    template<typename FieldWellsT = KPIFieldWells>
    void SetFieldWells(FieldWellsT&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::forward<FieldWellsT>(value); }
    template<typename FieldWellsT = KPIFieldWells>
    KPIConfiguration& WithFieldWells(FieldWellsT&& value) { SetFieldWells(std::forward<FieldWellsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration of a KPI visual.</p>
     */
    inline const KPISortConfiguration& GetSortConfiguration() const { return m_sortConfiguration; }
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }
    template<typename SortConfigurationT = KPISortConfiguration>
    void SetSortConfiguration(SortConfigurationT&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::forward<SortConfigurationT>(value); }
    template<typename SortConfigurationT = KPISortConfiguration>
    KPIConfiguration& WithSortConfiguration(SortConfigurationT&& value) { SetSortConfiguration(std::forward<SortConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the presentation of a KPI visual.</p>
     */
    inline const KPIOptions& GetKPIOptions() const { return m_kPIOptions; }
    inline bool KPIOptionsHasBeenSet() const { return m_kPIOptionsHasBeenSet; }
    template<typename KPIOptionsT = KPIOptions>
    void SetKPIOptions(KPIOptionsT&& value) { m_kPIOptionsHasBeenSet = true; m_kPIOptions = std::forward<KPIOptionsT>(value); }
    template<typename KPIOptionsT = KPIOptions>
    KPIConfiguration& WithKPIOptions(KPIOptionsT&& value) { SetKPIOptions(std::forward<KPIOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general visual interactions setup for a visual.</p>
     */
    inline const VisualInteractionOptions& GetInteractions() const { return m_interactions; }
    inline bool InteractionsHasBeenSet() const { return m_interactionsHasBeenSet; }
    template<typename InteractionsT = VisualInteractionOptions>
    void SetInteractions(InteractionsT&& value) { m_interactionsHasBeenSet = true; m_interactions = std::forward<InteractionsT>(value); }
    template<typename InteractionsT = VisualInteractionOptions>
    KPIConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    KPIFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    KPISortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    KPIOptions m_kPIOptions;
    bool m_kPIOptionsHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
