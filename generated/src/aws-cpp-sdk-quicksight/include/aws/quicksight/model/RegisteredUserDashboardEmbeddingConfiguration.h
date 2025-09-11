/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/RegisteredUserDashboardFeatureConfigurations.h>
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
   * <p>Information about the dashboard you want to embed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserDashboardEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class RegisteredUserDashboardEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserDashboardEmbeddingConfiguration() = default;
    AWS_QUICKSIGHT_API RegisteredUserDashboardEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserDashboardEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dashboard ID for the dashboard that you want the user to see first. This
     * ID is included in the output URL. When the URL in response is accessed,
     * QuickSight renders this dashboard if the user has permissions to view it.</p>
     * <p>If the user does not have permission to view this dashboard, they see a
     * permissions error message.</p>
     */
    inline const Aws::String& GetInitialDashboardId() const { return m_initialDashboardId; }
    inline bool InitialDashboardIdHasBeenSet() const { return m_initialDashboardIdHasBeenSet; }
    template<typename InitialDashboardIdT = Aws::String>
    void SetInitialDashboardId(InitialDashboardIdT&& value) { m_initialDashboardIdHasBeenSet = true; m_initialDashboardId = std::forward<InitialDashboardIdT>(value); }
    template<typename InitialDashboardIdT = Aws::String>
    RegisteredUserDashboardEmbeddingConfiguration& WithInitialDashboardId(InitialDashboardIdT&& value) { SetInitialDashboardId(std::forward<InitialDashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature configurations of an embbedded QuickSight dashboard.</p>
     */
    inline const RegisteredUserDashboardFeatureConfigurations& GetFeatureConfigurations() const { return m_featureConfigurations; }
    inline bool FeatureConfigurationsHasBeenSet() const { return m_featureConfigurationsHasBeenSet; }
    template<typename FeatureConfigurationsT = RegisteredUserDashboardFeatureConfigurations>
    void SetFeatureConfigurations(FeatureConfigurationsT&& value) { m_featureConfigurationsHasBeenSet = true; m_featureConfigurations = std::forward<FeatureConfigurationsT>(value); }
    template<typename FeatureConfigurationsT = RegisteredUserDashboardFeatureConfigurations>
    RegisteredUserDashboardEmbeddingConfiguration& WithFeatureConfigurations(FeatureConfigurationsT&& value) { SetFeatureConfigurations(std::forward<FeatureConfigurationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_initialDashboardId;
    bool m_initialDashboardIdHasBeenSet = false;

    RegisteredUserDashboardFeatureConfigurations m_featureConfigurations;
    bool m_featureConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
