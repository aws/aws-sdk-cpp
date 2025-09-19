/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AnonymousUserDashboardFeatureConfigurations.h>
#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfigurationEnabledFeature.h>
#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfigurationDisabledFeature.h>
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
   * <p>Information about the dashboard that you want to embed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserDashboardEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class AnonymousUserDashboardEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration() = default;
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed,
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline const Aws::String& GetInitialDashboardId() const { return m_initialDashboardId; }
    inline bool InitialDashboardIdHasBeenSet() const { return m_initialDashboardIdHasBeenSet; }
    template<typename InitialDashboardIdT = Aws::String>
    void SetInitialDashboardId(InitialDashboardIdT&& value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId = std::forward<InitialDashboardIdT>(value); }
    template<typename InitialDashboardIdT = Aws::String>
    AnonymousUserDashboardEmbeddingConfiguration& WithInitialDashboardId(InitialDashboardIdT&& value) { SetInitialDashboardId(std::forward<InitialDashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all enabled features of a specified anonymous dashboard.</p>
     */
    inline const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>& GetEnabledFeatures() const { return m_enabledFeatures; }
    inline bool EnabledFeaturesHasBeenSet() const { return m_enabledFeaturesHasBeenSet; }
    template<typename EnabledFeaturesT = Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>>
    void SetEnabledFeatures(EnabledFeaturesT&& value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures = std::forward<EnabledFeaturesT>(value); }
    template<typename EnabledFeaturesT = Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>>
    AnonymousUserDashboardEmbeddingConfiguration& WithEnabledFeatures(EnabledFeaturesT&& value) { SetEnabledFeatures(std::forward<EnabledFeaturesT>(value)); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& AddEnabledFeatures(AnonymousUserDashboardEmbeddingConfigurationEnabledFeature value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of all disabled features of a specified anonymous dashboard.</p>
     */
    inline const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>& GetDisabledFeatures() const { return m_disabledFeatures; }
    inline bool DisabledFeaturesHasBeenSet() const { return m_disabledFeaturesHasBeenSet; }
    template<typename DisabledFeaturesT = Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>>
    void SetDisabledFeatures(DisabledFeaturesT&& value) { m_disabledFeaturesHasBeenSet = true; m_disabledFeatures = std::forward<DisabledFeaturesT>(value); }
    template<typename DisabledFeaturesT = Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>>
    AnonymousUserDashboardEmbeddingConfiguration& WithDisabledFeatures(DisabledFeaturesT&& value) { SetDisabledFeatures(std::forward<DisabledFeaturesT>(value)); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& AddDisabledFeatures(AnonymousUserDashboardEmbeddingConfigurationDisabledFeature value) { m_disabledFeaturesHasBeenSet = true; m_disabledFeatures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The feature configuration for an embedded dashboard.</p>
     */
    inline const AnonymousUserDashboardFeatureConfigurations& GetFeatureConfigurations() const { return m_featureConfigurations; }
    inline bool FeatureConfigurationsHasBeenSet() const { return m_featureConfigurationsHasBeenSet; }
    template<typename FeatureConfigurationsT = AnonymousUserDashboardFeatureConfigurations>
    void SetFeatureConfigurations(FeatureConfigurationsT&& value) { m_featureConfigurationsHasBeenSet = true; m_featureConfigurations = std::forward<FeatureConfigurationsT>(value); }
    template<typename FeatureConfigurationsT = AnonymousUserDashboardFeatureConfigurations>
    AnonymousUserDashboardEmbeddingConfiguration& WithFeatureConfigurations(FeatureConfigurationsT&& value) { SetFeatureConfigurations(std::forward<FeatureConfigurationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_initialDashboardId;
    bool m_initialDashboardIdHasBeenSet = false;

    Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature> m_enabledFeatures;
    bool m_enabledFeaturesHasBeenSet = false;

    Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature> m_disabledFeatures;
    bool m_disabledFeaturesHasBeenSet = false;

    AnonymousUserDashboardFeatureConfigurations m_featureConfigurations;
    bool m_featureConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
