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
    AWS_SAGEMAKER_API CanvasAppSettings();
    AWS_SAGEMAKER_API CanvasAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CanvasAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time series forecast settings for the SageMaker Canvas application.</p>
     */
    inline const TimeSeriesForecastingSettings& GetTimeSeriesForecastingSettings() const{ return m_timeSeriesForecastingSettings; }

    /**
     * <p>Time series forecast settings for the SageMaker Canvas application.</p>
     */
    inline bool TimeSeriesForecastingSettingsHasBeenSet() const { return m_timeSeriesForecastingSettingsHasBeenSet; }

    /**
     * <p>Time series forecast settings for the SageMaker Canvas application.</p>
     */
    inline void SetTimeSeriesForecastingSettings(const TimeSeriesForecastingSettings& value) { m_timeSeriesForecastingSettingsHasBeenSet = true; m_timeSeriesForecastingSettings = value; }

    /**
     * <p>Time series forecast settings for the SageMaker Canvas application.</p>
     */
    inline void SetTimeSeriesForecastingSettings(TimeSeriesForecastingSettings&& value) { m_timeSeriesForecastingSettingsHasBeenSet = true; m_timeSeriesForecastingSettings = std::move(value); }

    /**
     * <p>Time series forecast settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithTimeSeriesForecastingSettings(const TimeSeriesForecastingSettings& value) { SetTimeSeriesForecastingSettings(value); return *this;}

    /**
     * <p>Time series forecast settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithTimeSeriesForecastingSettings(TimeSeriesForecastingSettings&& value) { SetTimeSeriesForecastingSettings(std::move(value)); return *this;}


    /**
     * <p>The model registry settings for the SageMaker Canvas application.</p>
     */
    inline const ModelRegisterSettings& GetModelRegisterSettings() const{ return m_modelRegisterSettings; }

    /**
     * <p>The model registry settings for the SageMaker Canvas application.</p>
     */
    inline bool ModelRegisterSettingsHasBeenSet() const { return m_modelRegisterSettingsHasBeenSet; }

    /**
     * <p>The model registry settings for the SageMaker Canvas application.</p>
     */
    inline void SetModelRegisterSettings(const ModelRegisterSettings& value) { m_modelRegisterSettingsHasBeenSet = true; m_modelRegisterSettings = value; }

    /**
     * <p>The model registry settings for the SageMaker Canvas application.</p>
     */
    inline void SetModelRegisterSettings(ModelRegisterSettings&& value) { m_modelRegisterSettingsHasBeenSet = true; m_modelRegisterSettings = std::move(value); }

    /**
     * <p>The model registry settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithModelRegisterSettings(const ModelRegisterSettings& value) { SetModelRegisterSettings(value); return *this;}

    /**
     * <p>The model registry settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithModelRegisterSettings(ModelRegisterSettings&& value) { SetModelRegisterSettings(std::move(value)); return *this;}


    /**
     * <p>The workspace settings for the SageMaker Canvas application.</p>
     */
    inline const WorkspaceSettings& GetWorkspaceSettings() const{ return m_workspaceSettings; }

    /**
     * <p>The workspace settings for the SageMaker Canvas application.</p>
     */
    inline bool WorkspaceSettingsHasBeenSet() const { return m_workspaceSettingsHasBeenSet; }

    /**
     * <p>The workspace settings for the SageMaker Canvas application.</p>
     */
    inline void SetWorkspaceSettings(const WorkspaceSettings& value) { m_workspaceSettingsHasBeenSet = true; m_workspaceSettings = value; }

    /**
     * <p>The workspace settings for the SageMaker Canvas application.</p>
     */
    inline void SetWorkspaceSettings(WorkspaceSettings&& value) { m_workspaceSettingsHasBeenSet = true; m_workspaceSettings = std::move(value); }

    /**
     * <p>The workspace settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithWorkspaceSettings(const WorkspaceSettings& value) { SetWorkspaceSettings(value); return *this;}

    /**
     * <p>The workspace settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithWorkspaceSettings(WorkspaceSettings&& value) { SetWorkspaceSettings(std::move(value)); return *this;}


    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline const Aws::Vector<IdentityProviderOAuthSetting>& GetIdentityProviderOAuthSettings() const{ return m_identityProviderOAuthSettings; }

    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline bool IdentityProviderOAuthSettingsHasBeenSet() const { return m_identityProviderOAuthSettingsHasBeenSet; }

    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline void SetIdentityProviderOAuthSettings(const Aws::Vector<IdentityProviderOAuthSetting>& value) { m_identityProviderOAuthSettingsHasBeenSet = true; m_identityProviderOAuthSettings = value; }

    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline void SetIdentityProviderOAuthSettings(Aws::Vector<IdentityProviderOAuthSetting>&& value) { m_identityProviderOAuthSettingsHasBeenSet = true; m_identityProviderOAuthSettings = std::move(value); }

    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline CanvasAppSettings& WithIdentityProviderOAuthSettings(const Aws::Vector<IdentityProviderOAuthSetting>& value) { SetIdentityProviderOAuthSettings(value); return *this;}

    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline CanvasAppSettings& WithIdentityProviderOAuthSettings(Aws::Vector<IdentityProviderOAuthSetting>&& value) { SetIdentityProviderOAuthSettings(std::move(value)); return *this;}

    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline CanvasAppSettings& AddIdentityProviderOAuthSettings(const IdentityProviderOAuthSetting& value) { m_identityProviderOAuthSettingsHasBeenSet = true; m_identityProviderOAuthSettings.push_back(value); return *this; }

    /**
     * <p>The settings for connecting to an external data source with OAuth.</p>
     */
    inline CanvasAppSettings& AddIdentityProviderOAuthSettings(IdentityProviderOAuthSetting&& value) { m_identityProviderOAuthSettingsHasBeenSet = true; m_identityProviderOAuthSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The model deployment settings for the SageMaker Canvas application.</p>
     */
    inline const DirectDeploySettings& GetDirectDeploySettings() const{ return m_directDeploySettings; }

    /**
     * <p>The model deployment settings for the SageMaker Canvas application.</p>
     */
    inline bool DirectDeploySettingsHasBeenSet() const { return m_directDeploySettingsHasBeenSet; }

    /**
     * <p>The model deployment settings for the SageMaker Canvas application.</p>
     */
    inline void SetDirectDeploySettings(const DirectDeploySettings& value) { m_directDeploySettingsHasBeenSet = true; m_directDeploySettings = value; }

    /**
     * <p>The model deployment settings for the SageMaker Canvas application.</p>
     */
    inline void SetDirectDeploySettings(DirectDeploySettings&& value) { m_directDeploySettingsHasBeenSet = true; m_directDeploySettings = std::move(value); }

    /**
     * <p>The model deployment settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithDirectDeploySettings(const DirectDeploySettings& value) { SetDirectDeploySettings(value); return *this;}

    /**
     * <p>The model deployment settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithDirectDeploySettings(DirectDeploySettings&& value) { SetDirectDeploySettings(std::move(value)); return *this;}


    /**
     * <p>The settings for document querying.</p>
     */
    inline const KendraSettings& GetKendraSettings() const{ return m_kendraSettings; }

    /**
     * <p>The settings for document querying.</p>
     */
    inline bool KendraSettingsHasBeenSet() const { return m_kendraSettingsHasBeenSet; }

    /**
     * <p>The settings for document querying.</p>
     */
    inline void SetKendraSettings(const KendraSettings& value) { m_kendraSettingsHasBeenSet = true; m_kendraSettings = value; }

    /**
     * <p>The settings for document querying.</p>
     */
    inline void SetKendraSettings(KendraSettings&& value) { m_kendraSettingsHasBeenSet = true; m_kendraSettings = std::move(value); }

    /**
     * <p>The settings for document querying.</p>
     */
    inline CanvasAppSettings& WithKendraSettings(const KendraSettings& value) { SetKendraSettings(value); return *this;}

    /**
     * <p>The settings for document querying.</p>
     */
    inline CanvasAppSettings& WithKendraSettings(KendraSettings&& value) { SetKendraSettings(std::move(value)); return *this;}


    /**
     * <p>The generative AI settings for the SageMaker Canvas application.</p>
     */
    inline const GenerativeAiSettings& GetGenerativeAiSettings() const{ return m_generativeAiSettings; }

    /**
     * <p>The generative AI settings for the SageMaker Canvas application.</p>
     */
    inline bool GenerativeAiSettingsHasBeenSet() const { return m_generativeAiSettingsHasBeenSet; }

    /**
     * <p>The generative AI settings for the SageMaker Canvas application.</p>
     */
    inline void SetGenerativeAiSettings(const GenerativeAiSettings& value) { m_generativeAiSettingsHasBeenSet = true; m_generativeAiSettings = value; }

    /**
     * <p>The generative AI settings for the SageMaker Canvas application.</p>
     */
    inline void SetGenerativeAiSettings(GenerativeAiSettings&& value) { m_generativeAiSettingsHasBeenSet = true; m_generativeAiSettings = std::move(value); }

    /**
     * <p>The generative AI settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithGenerativeAiSettings(const GenerativeAiSettings& value) { SetGenerativeAiSettings(value); return *this;}

    /**
     * <p>The generative AI settings for the SageMaker Canvas application.</p>
     */
    inline CanvasAppSettings& WithGenerativeAiSettings(GenerativeAiSettings&& value) { SetGenerativeAiSettings(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
