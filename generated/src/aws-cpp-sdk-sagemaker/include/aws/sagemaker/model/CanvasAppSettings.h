/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TimeSeriesForecastingSettings.h>
#include <aws/sagemaker/model/ModelRegisterSettings.h>
#include <aws/sagemaker/model/WorkspaceSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DirectDeploySettings.h>
#include <aws/sagemaker/model/KendraSettings.h>
#include <aws/sagemaker/model/GenerativeAiSettings.h>
#include <aws/sagemaker/model/EmrServerlessSettings.h>
#include <aws/sagemaker/model/IdentityProviderOAuthSetting.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The SageMaker Canvas application settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CanvasAppSettings">AWS
   * API Reference</a></p>
   */
  class CanvasAppSettings
  {
  public:
    AWS_SAGEMAKER_API CanvasAppSettings() = default;
    AWS_SAGEMAKER_API CanvasAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CanvasAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time series forecast settings for the SageMaker Canvas application.</p>
     */
    inline const TimeSeriesForecastingSettings& GetTimeSeriesForecastingSettings() const { return m_timeSeriesForecastingSettings; }
    inline bool TimeSeriesForecastingSettingsHasBeenSet() const { return m_timeSeriesForecastingSettingsHasBeenSet; }
    template<typename TimeSeriesForecastingSettingsT = TimeSeriesForecastingSettings>
    void SetTimeSeriesForecastingSettings(TimeSeriesForecastingSettingsT&& value) { m_timeSeriesForecastingSettingsHasBeenSet = true; m_timeSeriesForecastingSettings = std::forward<TimeSeriesForecastingSettingsT>(value); }
    template<typename TimeSeriesForecastingSettingsT = TimeSeriesForecastingSettings>
    CanvasAppSettings& WithTimeSeriesForecastingSettings(TimeSeriesForecastingSettingsT&& value) { SetTimeSeriesForecastingSettings(std::forward<TimeSeriesForecastingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model registry settings for the SageMaker Canvas application.</p>
     */
    inline const ModelRegisterSettings& GetModelRegisterSettings() const { return m_modelRegisterSettings; }
    inline bool ModelRegisterSettingsHasBeenSet() const { return m_modelRegisterSettingsHasBeenSet; }
    template<typename ModelRegisterSettingsT = ModelRegisterSettings>
    void SetModelRegisterSettings(ModelRegisterSettingsT&& value) { m_modelRegisterSettingsHasBeenSet = true; m_modelRegisterSettings = std::forward<ModelRegisterSettingsT>(value); }
    template<typename ModelRegisterSettingsT = ModelRegisterSettings>
    CanvasAppSettings& WithModelRegisterSettings(ModelRegisterSettingsT&& value) { SetModelRegisterSettings(std::forward<ModelRegisterSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workspace settings for the SageMaker Canvas application.</p>
     */
    inline const WorkspaceSettings& GetWorkspaceSettings() const { return m_workspaceSettings; }
    inline bool WorkspaceSettingsHasBeenSet() const { return m_workspaceSettingsHasBeenSet; }
    template<typename WorkspaceSettingsT = WorkspaceSettings>
    void SetWorkspaceSettings(WorkspaceSettingsT&& value) { m_workspaceSettingsHasBeenSet = true; m_workspaceSettings = std::forward<WorkspaceSettingsT>(value); }
    template<typename WorkspaceSettingsT = WorkspaceSettings>
    CanvasAppSettings& WithWorkspaceSettings(WorkspaceSettingsT&& value) { SetWorkspaceSettings(std::forward<WorkspaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline const Aws::Vector<IdentityProviderOAuthSetting>& GetIdentityProviderOAuthSettings() const { return m_identityProviderOAuthSettings; }
    inline bool IdentityProviderOAuthSettingsHasBeenSet() const { return m_identityProviderOAuthSettingsHasBeenSet; }
    template<typename IdentityProviderOAuthSettingsT = Aws::Vector<IdentityProviderOAuthSetting>>
    void SetIdentityProviderOAuthSettings(IdentityProviderOAuthSettingsT&& value) { m_identityProviderOAuthSettingsHasBeenSet = true; m_identityProviderOAuthSettings = std::forward<IdentityProviderOAuthSettingsT>(value); }
    template<typename IdentityProviderOAuthSettingsT = Aws::Vector<IdentityProviderOAuthSetting>>
    CanvasAppSettings& WithIdentityProviderOAuthSettings(IdentityProviderOAuthSettingsT&& value) { SetIdentityProviderOAuthSettings(std::forward<IdentityProviderOAuthSettingsT>(value)); return *this;}
    template<typename IdentityProviderOAuthSettingsT = IdentityProviderOAuthSetting>
    CanvasAppSettings& AddIdentityProviderOAuthSettings(IdentityProviderOAuthSettingsT&& value) { m_identityProviderOAuthSettingsHasBeenSet = true; m_identityProviderOAuthSettings.emplace_back(std::forward<IdentityProviderOAuthSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model deployment settings for the SageMaker Canvas application.</p>
     */
    inline const DirectDeploySettings& GetDirectDeploySettings() const { return m_directDeploySettings; }
    inline bool DirectDeploySettingsHasBeenSet() const { return m_directDeploySettingsHasBeenSet; }
    template<typename DirectDeploySettingsT = DirectDeploySettings>
    void SetDirectDeploySettings(DirectDeploySettingsT&& value) { m_directDeploySettingsHasBeenSet = true; m_directDeploySettings = std::forward<DirectDeploySettingsT>(value); }
    template<typename DirectDeploySettingsT = DirectDeploySettings>
    CanvasAppSettings& WithDirectDeploySettings(DirectDeploySettingsT&& value) { SetDirectDeploySettings(std::forward<DirectDeploySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for document querying.</p>
     */
    inline const KendraSettings& GetKendraSettings() const { return m_kendraSettings; }
    inline bool KendraSettingsHasBeenSet() const { return m_kendraSettingsHasBeenSet; }
    template<typename KendraSettingsT = KendraSettings>
    void SetKendraSettings(KendraSettingsT&& value) { m_kendraSettingsHasBeenSet = true; m_kendraSettings = std::forward<KendraSettingsT>(value); }
    template<typename KendraSettingsT = KendraSettings>
    CanvasAppSettings& WithKendraSettings(KendraSettingsT&& value) { SetKendraSettings(std::forward<KendraSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generative AI settings for the SageMaker Canvas application.</p>
     */
    inline const GenerativeAiSettings& GetGenerativeAiSettings() const { return m_generativeAiSettings; }
    inline bool GenerativeAiSettingsHasBeenSet() const { return m_generativeAiSettingsHasBeenSet; }
    template<typename GenerativeAiSettingsT = GenerativeAiSettings>
    void SetGenerativeAiSettings(GenerativeAiSettingsT&& value) { m_generativeAiSettingsHasBeenSet = true; m_generativeAiSettings = std::forward<GenerativeAiSettingsT>(value); }
    template<typename GenerativeAiSettingsT = GenerativeAiSettings>
    CanvasAppSettings& WithGenerativeAiSettings(GenerativeAiSettingsT&& value) { SetGenerativeAiSettings(std::forward<GenerativeAiSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for running Amazon EMR Serverless data processing jobs in
     * SageMaker Canvas.</p>
     */
    inline const EmrServerlessSettings& GetEmrServerlessSettings() const { return m_emrServerlessSettings; }
    inline bool EmrServerlessSettingsHasBeenSet() const { return m_emrServerlessSettingsHasBeenSet; }
    template<typename EmrServerlessSettingsT = EmrServerlessSettings>
    void SetEmrServerlessSettings(EmrServerlessSettingsT&& value) { m_emrServerlessSettingsHasBeenSet = true; m_emrServerlessSettings = std::forward<EmrServerlessSettingsT>(value); }
    template<typename EmrServerlessSettingsT = EmrServerlessSettings>
    CanvasAppSettings& WithEmrServerlessSettings(EmrServerlessSettingsT&& value) { SetEmrServerlessSettings(std::forward<EmrServerlessSettingsT>(value)); return *this;}
    ///@}
  private:

    TimeSeriesForecastingSettings m_timeSeriesForecastingSettings;
    bool m_timeSeriesForecastingSettingsHasBeenSet = false;

    ModelRegisterSettings m_modelRegisterSettings;
    bool m_modelRegisterSettingsHasBeenSet = false;

    WorkspaceSettings m_workspaceSettings;
    bool m_workspaceSettingsHasBeenSet = false;

    Aws::Vector<IdentityProviderOAuthSetting> m_identityProviderOAuthSettings;
    bool m_identityProviderOAuthSettingsHasBeenSet = false;

    DirectDeploySettings m_directDeploySettings;
    bool m_directDeploySettingsHasBeenSet = false;

    KendraSettings m_kendraSettings;
    bool m_kendraSettingsHasBeenSet = false;

    GenerativeAiSettings m_generativeAiSettings;
    bool m_generativeAiSettingsHasBeenSet = false;

    EmrServerlessSettings m_emrServerlessSettings;
    bool m_emrServerlessSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
