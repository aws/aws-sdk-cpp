/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CustomNarrativeOptions.h>
#include <aws/quicksight/model/VisualInteractionOptions.h>
#include <aws/quicksight/model/Computation.h>
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
   * <p>The configuration of an insight visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InsightConfiguration">AWS
   * API Reference</a></p>
   */
  class InsightConfiguration
  {
  public:
    AWS_QUICKSIGHT_API InsightConfiguration() = default;
    AWS_QUICKSIGHT_API InsightConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API InsightConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The computations configurations of the insight visual</p>
     */
    inline const Aws::Vector<Computation>& GetComputations() const { return m_computations; }
    inline bool ComputationsHasBeenSet() const { return m_computationsHasBeenSet; }
    template<typename ComputationsT = Aws::Vector<Computation>>
    void SetComputations(ComputationsT&& value) { m_computationsHasBeenSet = true; m_computations = std::forward<ComputationsT>(value); }
    template<typename ComputationsT = Aws::Vector<Computation>>
    InsightConfiguration& WithComputations(ComputationsT&& value) { SetComputations(std::forward<ComputationsT>(value)); return *this;}
    template<typename ComputationsT = Computation>
    InsightConfiguration& AddComputations(ComputationsT&& value) { m_computationsHasBeenSet = true; m_computations.emplace_back(std::forward<ComputationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The custom narrative of the insight visual.</p>
     */
    inline const CustomNarrativeOptions& GetCustomNarrative() const { return m_customNarrative; }
    inline bool CustomNarrativeHasBeenSet() const { return m_customNarrativeHasBeenSet; }
    template<typename CustomNarrativeT = CustomNarrativeOptions>
    void SetCustomNarrative(CustomNarrativeT&& value) { m_customNarrativeHasBeenSet = true; m_customNarrative = std::forward<CustomNarrativeT>(value); }
    template<typename CustomNarrativeT = CustomNarrativeOptions>
    InsightConfiguration& WithCustomNarrative(CustomNarrativeT&& value) { SetCustomNarrative(std::forward<CustomNarrativeT>(value)); return *this;}
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
    InsightConfiguration& WithInteractions(InteractionsT&& value) { SetInteractions(std::forward<InteractionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Computation> m_computations;
    bool m_computationsHasBeenSet = false;

    CustomNarrativeOptions m_customNarrative;
    bool m_customNarrativeHasBeenSet = false;

    VisualInteractionOptions m_interactions;
    bool m_interactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
