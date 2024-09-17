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
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration();
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserDashboardEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed, Amazon
     * QuickSight renders this dashboard.</p> <p>The Amazon Resource Name (ARN) of this
     * dashboard must be included in the <code>AuthorizedResourceArns</code> parameter.
     * Otherwise, the request will fail with
     * <code>InvalidParameterValueException</code>.</p>
     */
    inline const Aws::String& GetInitialDashboardId() const{ return m_initialDashboardId; }
    inline bool InitialDashboardIdHasBeenSet() const { return m_initialDashboardIdHasBeenSet; }
    inline void SetInitialDashboardId(const Aws::String& value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId = value; }
    inline void SetInitialDashboardId(Aws::String&& value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId = std::move(value); }
    inline void SetInitialDashboardId(const char* value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId.assign(value); }
    inline AnonymousUserDashboardEmbeddingConfiguration& WithInitialDashboardId(const Aws::String& value) { SetInitialDashboardId(value); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& WithInitialDashboardId(Aws::String&& value) { SetInitialDashboardId(std::move(value)); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& WithInitialDashboardId(const char* value) { SetInitialDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all enabled features of a specified anonymous dashboard.</p>
     */
    inline const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>& GetEnabledFeatures() const{ return m_enabledFeatures; }
    inline bool EnabledFeaturesHasBeenSet() const { return m_enabledFeaturesHasBeenSet; }
    inline void SetEnabledFeatures(const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>& value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures = value; }
    inline void SetEnabledFeatures(Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>&& value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures = std::move(value); }
    inline AnonymousUserDashboardEmbeddingConfiguration& WithEnabledFeatures(const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>& value) { SetEnabledFeatures(value); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& WithEnabledFeatures(Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationEnabledFeature>&& value) { SetEnabledFeatures(std::move(value)); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& AddEnabledFeatures(const AnonymousUserDashboardEmbeddingConfigurationEnabledFeature& value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures.push_back(value); return *this; }
    inline AnonymousUserDashboardEmbeddingConfiguration& AddEnabledFeatures(AnonymousUserDashboardEmbeddingConfigurationEnabledFeature&& value) { m_enabledFeaturesHasBeenSet = true; m_enabledFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of all disabled features of a specified anonymous dashboard.</p>
     */
    inline const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>& GetDisabledFeatures() const{ return m_disabledFeatures; }
    inline bool DisabledFeaturesHasBeenSet() const { return m_disabledFeaturesHasBeenSet; }
    inline void SetDisabledFeatures(const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>& value) { m_disabledFeaturesHasBeenSet = true; m_disabledFeatures = value; }
    inline void SetDisabledFeatures(Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>&& value) { m_disabledFeaturesHasBeenSet = true; m_disabledFeatures = std::move(value); }
    inline AnonymousUserDashboardEmbeddingConfiguration& WithDisabledFeatures(const Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>& value) { SetDisabledFeatures(value); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& WithDisabledFeatures(Aws::Vector<AnonymousUserDashboardEmbeddingConfigurationDisabledFeature>&& value) { SetDisabledFeatures(std::move(value)); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& AddDisabledFeatures(const AnonymousUserDashboardEmbeddingConfigurationDisabledFeature& value) { m_disabledFeaturesHasBeenSet = true; m_disabledFeatures.push_back(value); return *this; }
    inline AnonymousUserDashboardEmbeddingConfiguration& AddDisabledFeatures(AnonymousUserDashboardEmbeddingConfigurationDisabledFeature&& value) { m_disabledFeaturesHasBeenSet = true; m_disabledFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The feature configuration for an embedded dashboard.</p>
     */
    inline const AnonymousUserDashboardFeatureConfigurations& GetFeatureConfigurations() const{ return m_featureConfigurations; }
    inline bool FeatureConfigurationsHasBeenSet() const { return m_featureConfigurationsHasBeenSet; }
    inline void SetFeatureConfigurations(const AnonymousUserDashboardFeatureConfigurations& value) { m_featureConfigurationsHasBeenSet = true; m_featureConfigurations = value; }
    inline void SetFeatureConfigurations(AnonymousUserDashboardFeatureConfigurations&& value) { m_featureConfigurationsHasBeenSet = true; m_featureConfigurations = std::move(value); }
    inline AnonymousUserDashboardEmbeddingConfiguration& WithFeatureConfigurations(const AnonymousUserDashboardFeatureConfigurations& value) { SetFeatureConfigurations(value); return *this;}
    inline AnonymousUserDashboardEmbeddingConfiguration& WithFeatureConfigurations(AnonymousUserDashboardFeatureConfigurations&& value) { SetFeatureConfigurations(std::move(value)); return *this;}
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
