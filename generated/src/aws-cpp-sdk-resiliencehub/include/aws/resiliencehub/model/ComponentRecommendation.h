/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/RecommendationComplianceStatus.h>
#include <aws/resiliencehub/model/ConfigRecommendation.h>
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
   * <p>Defines recommendations for an Resilience Hub Application Component, returned
   * as an object. This object contains component names, configuration
   * recommendations, and recommendation statuses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/ComponentRecommendation">AWS
   * API Reference</a></p>
   */
  class ComponentRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API ComponentRecommendation() = default;
    AWS_RESILIENCEHUB_API ComponentRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ComponentRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ComponentRecommendation& WithAppComponentName(AppComponentNameT&& value) { SetAppComponentName(std::forward<AppComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of recommendations.</p>
     */
    inline const Aws::Vector<ConfigRecommendation>& GetConfigRecommendations() const { return m_configRecommendations; }
    inline bool ConfigRecommendationsHasBeenSet() const { return m_configRecommendationsHasBeenSet; }
    template<typename ConfigRecommendationsT = Aws::Vector<ConfigRecommendation>>
    void SetConfigRecommendations(ConfigRecommendationsT&& value) { m_configRecommendationsHasBeenSet = true; m_configRecommendations = std::forward<ConfigRecommendationsT>(value); }
    template<typename ConfigRecommendationsT = Aws::Vector<ConfigRecommendation>>
    ComponentRecommendation& WithConfigRecommendations(ConfigRecommendationsT&& value) { SetConfigRecommendations(std::forward<ConfigRecommendationsT>(value)); return *this;}
    template<typename ConfigRecommendationsT = ConfigRecommendation>
    ComponentRecommendation& AddConfigRecommendations(ConfigRecommendationsT&& value) { m_configRecommendationsHasBeenSet = true; m_configRecommendations.emplace_back(std::forward<ConfigRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of the recommendation.</p>
     */
    inline RecommendationComplianceStatus GetRecommendationStatus() const { return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(RecommendationComplianceStatus value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline ComponentRecommendation& WithRecommendationStatus(RecommendationComplianceStatus value) { SetRecommendationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::Vector<ConfigRecommendation> m_configRecommendations;
    bool m_configRecommendationsHasBeenSet = false;

    RecommendationComplianceStatus m_recommendationStatus{RecommendationComplianceStatus::NOT_SET};
    bool m_recommendationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
