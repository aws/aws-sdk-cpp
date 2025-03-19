/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/resiliencehub/model/Cost.h>
#include <aws/resiliencehub/model/HaArchitecture.h>
#include <aws/resiliencehub/model/ConfigRecommendationOptimizationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/resiliencehub/model/DisruptionCompliance.h>
#include <aws/resiliencehub/model/RecommendationDisruptionCompliance.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a recommendation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ConfigRecommendation">AWS
   * API Reference</a></p>
   */
  class ConfigRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API ConfigRecommendation() = default;
    AWS_RESILIENCEHUB_API ConfigRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ConfigRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Application Component.</p>
     */
    inline const Aws::String& GetAppComponentName() const { return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    template<typename AppComponentNameT = Aws::String>
    void SetAppComponentName(AppComponentNameT&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::forward<AppComponentNameT>(value); }
    template<typename AppComponentNameT = Aws::String>
    ConfigRecommendation& WithAppComponentName(AppComponentNameT&& value) { SetAppComponentName(std::forward<AppComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current compliance against the resiliency policy before applying the
     * configuration change.</p>
     */
    inline const Aws::Map<DisruptionType, DisruptionCompliance>& GetCompliance() const { return m_compliance; }
    inline bool ComplianceHasBeenSet() const { return m_complianceHasBeenSet; }
    template<typename ComplianceT = Aws::Map<DisruptionType, DisruptionCompliance>>
    void SetCompliance(ComplianceT&& value) { m_complianceHasBeenSet = true; m_compliance = std::forward<ComplianceT>(value); }
    template<typename ComplianceT = Aws::Map<DisruptionType, DisruptionCompliance>>
    ConfigRecommendation& WithCompliance(ComplianceT&& value) { SetCompliance(std::forward<ComplianceT>(value)); return *this;}
    inline ConfigRecommendation& AddCompliance(DisruptionType key, DisruptionCompliance value) {
      m_complianceHasBeenSet = true; m_compliance.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The cost for the application.</p>
     */
    inline const Cost& GetCost() const { return m_cost; }
    inline bool CostHasBeenSet() const { return m_costHasBeenSet; }
    template<typename CostT = Cost>
    void SetCost(CostT&& value) { m_costHasBeenSet = true; m_cost = std::forward<CostT>(value); }
    template<typename CostT = Cost>
    ConfigRecommendation& WithCost(CostT&& value) { SetCost(std::forward<CostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional description for an app.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfigRecommendation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture type.</p>
     */
    inline HaArchitecture GetHaArchitecture() const { return m_haArchitecture; }
    inline bool HaArchitectureHasBeenSet() const { return m_haArchitectureHasBeenSet; }
    inline void SetHaArchitecture(HaArchitecture value) { m_haArchitectureHasBeenSet = true; m_haArchitecture = value; }
    inline ConfigRecommendation& WithHaArchitecture(HaArchitecture value) { SetHaArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the recommendation configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfigRecommendation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of optimization.</p>
     */
    inline ConfigRecommendationOptimizationType GetOptimizationType() const { return m_optimizationType; }
    inline bool OptimizationTypeHasBeenSet() const { return m_optimizationTypeHasBeenSet; }
    inline void SetOptimizationType(ConfigRecommendationOptimizationType value) { m_optimizationTypeHasBeenSet = true; m_optimizationType = value; }
    inline ConfigRecommendation& WithOptimizationType(ConfigRecommendationOptimizationType value) { SetOptimizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected compliance against the resiliency policy after applying the
     * configuration change.</p>
     */
    inline const Aws::Map<DisruptionType, RecommendationDisruptionCompliance>& GetRecommendationCompliance() const { return m_recommendationCompliance; }
    inline bool RecommendationComplianceHasBeenSet() const { return m_recommendationComplianceHasBeenSet; }
    template<typename RecommendationComplianceT = Aws::Map<DisruptionType, RecommendationDisruptionCompliance>>
    void SetRecommendationCompliance(RecommendationComplianceT&& value) { m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance = std::forward<RecommendationComplianceT>(value); }
    template<typename RecommendationComplianceT = Aws::Map<DisruptionType, RecommendationDisruptionCompliance>>
    ConfigRecommendation& WithRecommendationCompliance(RecommendationComplianceT&& value) { SetRecommendationCompliance(std::forward<RecommendationComplianceT>(value)); return *this;}
    inline ConfigRecommendation& AddRecommendationCompliance(DisruptionType key, RecommendationDisruptionCompliance value) {
      m_recommendationComplianceHasBeenSet = true; m_recommendationCompliance.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Reference identifier for the recommendation configuration.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    ConfigRecommendation& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the suggested configuration changes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuggestedChanges() const { return m_suggestedChanges; }
    inline bool SuggestedChangesHasBeenSet() const { return m_suggestedChangesHasBeenSet; }
    template<typename SuggestedChangesT = Aws::Vector<Aws::String>>
    void SetSuggestedChanges(SuggestedChangesT&& value) { m_suggestedChangesHasBeenSet = true; m_suggestedChanges = std::forward<SuggestedChangesT>(value); }
    template<typename SuggestedChangesT = Aws::Vector<Aws::String>>
    ConfigRecommendation& WithSuggestedChanges(SuggestedChangesT&& value) { SetSuggestedChanges(std::forward<SuggestedChangesT>(value)); return *this;}
    template<typename SuggestedChangesT = Aws::String>
    ConfigRecommendation& AddSuggestedChanges(SuggestedChangesT&& value) { m_suggestedChangesHasBeenSet = true; m_suggestedChanges.emplace_back(std::forward<SuggestedChangesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::Map<DisruptionType, DisruptionCompliance> m_compliance;
    bool m_complianceHasBeenSet = false;

    Cost m_cost;
    bool m_costHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    HaArchitecture m_haArchitecture{HaArchitecture::NOT_SET};
    bool m_haArchitectureHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConfigRecommendationOptimizationType m_optimizationType{ConfigRecommendationOptimizationType::NOT_SET};
    bool m_optimizationTypeHasBeenSet = false;

    Aws::Map<DisruptionType, RecommendationDisruptionCompliance> m_recommendationCompliance;
    bool m_recommendationComplianceHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_suggestedChanges;
    bool m_suggestedChangesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
