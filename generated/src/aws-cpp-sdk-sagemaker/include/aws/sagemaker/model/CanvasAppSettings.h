/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TimeSeriesForecastingSettings.h>
#include <aws/sagemaker/model/ModelRegisterSettings.h>
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
     * <p>Time series forecast settings for the Canvas application.</p>
     */
    inline const TimeSeriesForecastingSettings& GetTimeSeriesForecastingSettings() const{ return m_timeSeriesForecastingSettings; }

    /**
     * <p>Time series forecast settings for the Canvas application.</p>
     */
    inline bool TimeSeriesForecastingSettingsHasBeenSet() const { return m_timeSeriesForecastingSettingsHasBeenSet; }

    /**
     * <p>Time series forecast settings for the Canvas application.</p>
     */
    inline void SetTimeSeriesForecastingSettings(const TimeSeriesForecastingSettings& value) { m_timeSeriesForecastingSettingsHasBeenSet = true; m_timeSeriesForecastingSettings = value; }

    /**
     * <p>Time series forecast settings for the Canvas application.</p>
     */
    inline void SetTimeSeriesForecastingSettings(TimeSeriesForecastingSettings&& value) { m_timeSeriesForecastingSettingsHasBeenSet = true; m_timeSeriesForecastingSettings = std::move(value); }

    /**
     * <p>Time series forecast settings for the Canvas application.</p>
     */
    inline CanvasAppSettings& WithTimeSeriesForecastingSettings(const TimeSeriesForecastingSettings& value) { SetTimeSeriesForecastingSettings(value); return *this;}

    /**
     * <p>Time series forecast settings for the Canvas application.</p>
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

  private:

    TimeSeriesForecastingSettings m_timeSeriesForecastingSettings;
    bool m_timeSeriesForecastingSettingsHasBeenSet = false;

    ModelRegisterSettings m_modelRegisterSettings;
    bool m_modelRegisterSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
