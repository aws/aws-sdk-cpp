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
    AWS_RESILIENCEHUB_API ComponentRecommendation();
    AWS_RESILIENCEHUB_API ComponentRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API ComponentRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the Application Component.</p>
     */
    inline const Aws::String& GetAppComponentName() const{ return m_appComponentName; }
    inline bool AppComponentNameHasBeenSet() const { return m_appComponentNameHasBeenSet; }
    inline void SetAppComponentName(const Aws::String& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = value; }
    inline void SetAppComponentName(Aws::String&& value) { m_appComponentNameHasBeenSet = true; m_appComponentName = std::move(value); }
    inline void SetAppComponentName(const char* value) { m_appComponentNameHasBeenSet = true; m_appComponentName.assign(value); }
    inline ComponentRecommendation& WithAppComponentName(const Aws::String& value) { SetAppComponentName(value); return *this;}
    inline ComponentRecommendation& WithAppComponentName(Aws::String&& value) { SetAppComponentName(std::move(value)); return *this;}
    inline ComponentRecommendation& WithAppComponentName(const char* value) { SetAppComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of recommendations.</p>
     */
    inline const Aws::Vector<ConfigRecommendation>& GetConfigRecommendations() const{ return m_configRecommendations; }
    inline bool ConfigRecommendationsHasBeenSet() const { return m_configRecommendationsHasBeenSet; }
    inline void SetConfigRecommendations(const Aws::Vector<ConfigRecommendation>& value) { m_configRecommendationsHasBeenSet = true; m_configRecommendations = value; }
    inline void SetConfigRecommendations(Aws::Vector<ConfigRecommendation>&& value) { m_configRecommendationsHasBeenSet = true; m_configRecommendations = std::move(value); }
    inline ComponentRecommendation& WithConfigRecommendations(const Aws::Vector<ConfigRecommendation>& value) { SetConfigRecommendations(value); return *this;}
    inline ComponentRecommendation& WithConfigRecommendations(Aws::Vector<ConfigRecommendation>&& value) { SetConfigRecommendations(std::move(value)); return *this;}
    inline ComponentRecommendation& AddConfigRecommendations(const ConfigRecommendation& value) { m_configRecommendationsHasBeenSet = true; m_configRecommendations.push_back(value); return *this; }
    inline ComponentRecommendation& AddConfigRecommendations(ConfigRecommendation&& value) { m_configRecommendationsHasBeenSet = true; m_configRecommendations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of the recommendation.</p>
     */
    inline const RecommendationComplianceStatus& GetRecommendationStatus() const{ return m_recommendationStatus; }
    inline bool RecommendationStatusHasBeenSet() const { return m_recommendationStatusHasBeenSet; }
    inline void SetRecommendationStatus(const RecommendationComplianceStatus& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = value; }
    inline void SetRecommendationStatus(RecommendationComplianceStatus&& value) { m_recommendationStatusHasBeenSet = true; m_recommendationStatus = std::move(value); }
    inline ComponentRecommendation& WithRecommendationStatus(const RecommendationComplianceStatus& value) { SetRecommendationStatus(value); return *this;}
    inline ComponentRecommendation& WithRecommendationStatus(RecommendationComplianceStatus&& value) { SetRecommendationStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appComponentName;
    bool m_appComponentNameHasBeenSet = false;

    Aws::Vector<ConfigRecommendation> m_configRecommendations;
    bool m_configRecommendationsHasBeenSet = false;

    RecommendationComplianceStatus m_recommendationStatus;
    bool m_recommendationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
