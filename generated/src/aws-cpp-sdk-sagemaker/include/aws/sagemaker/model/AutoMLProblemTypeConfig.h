/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ImageClassificationJobConfig.h>
#include <aws/sagemaker/model/TextClassificationJobConfig.h>
#include <aws/sagemaker/model/TimeSeriesForecastingJobConfig.h>
#include <aws/sagemaker/model/TabularJobConfig.h>
#include <aws/sagemaker/model/TextGenerationJobConfig.h>
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
   * <p>A collection of settings specific to the problem type used to configure an
   * AutoML job V2. There must be one and only one config of the following
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLProblemTypeConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLProblemTypeConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig();
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Settings used to configure an AutoML job V2 for the image classification
     * problem type.</p>
     */
    inline const ImageClassificationJobConfig& GetImageClassificationJobConfig() const{ return m_imageClassificationJobConfig; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the image classification
     * problem type.</p>
     */
    inline bool ImageClassificationJobConfigHasBeenSet() const { return m_imageClassificationJobConfigHasBeenSet; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the image classification
     * problem type.</p>
     */
    inline void SetImageClassificationJobConfig(const ImageClassificationJobConfig& value) { m_imageClassificationJobConfigHasBeenSet = true; m_imageClassificationJobConfig = value; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the image classification
     * problem type.</p>
     */
    inline void SetImageClassificationJobConfig(ImageClassificationJobConfig&& value) { m_imageClassificationJobConfigHasBeenSet = true; m_imageClassificationJobConfig = std::move(value); }

    /**
     * <p>Settings used to configure an AutoML job V2 for the image classification
     * problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithImageClassificationJobConfig(const ImageClassificationJobConfig& value) { SetImageClassificationJobConfig(value); return *this;}

    /**
     * <p>Settings used to configure an AutoML job V2 for the image classification
     * problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithImageClassificationJobConfig(ImageClassificationJobConfig&& value) { SetImageClassificationJobConfig(std::move(value)); return *this;}


    /**
     * <p>Settings used to configure an AutoML job V2 for the text classification
     * problem type.</p>
     */
    inline const TextClassificationJobConfig& GetTextClassificationJobConfig() const{ return m_textClassificationJobConfig; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text classification
     * problem type.</p>
     */
    inline bool TextClassificationJobConfigHasBeenSet() const { return m_textClassificationJobConfigHasBeenSet; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text classification
     * problem type.</p>
     */
    inline void SetTextClassificationJobConfig(const TextClassificationJobConfig& value) { m_textClassificationJobConfigHasBeenSet = true; m_textClassificationJobConfig = value; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text classification
     * problem type.</p>
     */
    inline void SetTextClassificationJobConfig(TextClassificationJobConfig&& value) { m_textClassificationJobConfigHasBeenSet = true; m_textClassificationJobConfig = std::move(value); }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text classification
     * problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithTextClassificationJobConfig(const TextClassificationJobConfig& value) { SetTextClassificationJobConfig(value); return *this;}

    /**
     * <p>Settings used to configure an AutoML job V2 for the text classification
     * problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithTextClassificationJobConfig(TextClassificationJobConfig&& value) { SetTextClassificationJobConfig(std::move(value)); return *this;}


    /**
     * <p>Settings used to configure an AutoML job V2 for the time-series forecasting
     * problem type.</p>
     */
    inline const TimeSeriesForecastingJobConfig& GetTimeSeriesForecastingJobConfig() const{ return m_timeSeriesForecastingJobConfig; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the time-series forecasting
     * problem type.</p>
     */
    inline bool TimeSeriesForecastingJobConfigHasBeenSet() const { return m_timeSeriesForecastingJobConfigHasBeenSet; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the time-series forecasting
     * problem type.</p>
     */
    inline void SetTimeSeriesForecastingJobConfig(const TimeSeriesForecastingJobConfig& value) { m_timeSeriesForecastingJobConfigHasBeenSet = true; m_timeSeriesForecastingJobConfig = value; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the time-series forecasting
     * problem type.</p>
     */
    inline void SetTimeSeriesForecastingJobConfig(TimeSeriesForecastingJobConfig&& value) { m_timeSeriesForecastingJobConfigHasBeenSet = true; m_timeSeriesForecastingJobConfig = std::move(value); }

    /**
     * <p>Settings used to configure an AutoML job V2 for the time-series forecasting
     * problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithTimeSeriesForecastingJobConfig(const TimeSeriesForecastingJobConfig& value) { SetTimeSeriesForecastingJobConfig(value); return *this;}

    /**
     * <p>Settings used to configure an AutoML job V2 for the time-series forecasting
     * problem type.</p>
     */
    inline AutoMLProblemTypeConfig& WithTimeSeriesForecastingJobConfig(TimeSeriesForecastingJobConfig&& value) { SetTimeSeriesForecastingJobConfig(std::move(value)); return *this;}


    /**
     * <p>Settings used to configure an AutoML job V2 for the tabular problem type
     * (regression, classification).</p>
     */
    inline const TabularJobConfig& GetTabularJobConfig() const{ return m_tabularJobConfig; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the tabular problem type
     * (regression, classification).</p>
     */
    inline bool TabularJobConfigHasBeenSet() const { return m_tabularJobConfigHasBeenSet; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the tabular problem type
     * (regression, classification).</p>
     */
    inline void SetTabularJobConfig(const TabularJobConfig& value) { m_tabularJobConfigHasBeenSet = true; m_tabularJobConfig = value; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the tabular problem type
     * (regression, classification).</p>
     */
    inline void SetTabularJobConfig(TabularJobConfig&& value) { m_tabularJobConfigHasBeenSet = true; m_tabularJobConfig = std::move(value); }

    /**
     * <p>Settings used to configure an AutoML job V2 for the tabular problem type
     * (regression, classification).</p>
     */
    inline AutoMLProblemTypeConfig& WithTabularJobConfig(const TabularJobConfig& value) { SetTabularJobConfig(value); return *this;}

    /**
     * <p>Settings used to configure an AutoML job V2 for the tabular problem type
     * (regression, classification).</p>
     */
    inline AutoMLProblemTypeConfig& WithTabularJobConfig(TabularJobConfig&& value) { SetTabularJobConfig(std::move(value)); return *this;}


    /**
     * <p>Settings used to configure an AutoML job V2 for the text generation (LLMs
     * fine-tuning) problem type.</p>  <p>The text generation models that support
     * fine-tuning in Autopilot are currently accessible exclusively in regions
     * supported by Canvas. Refer to the documentation of Canvas for the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
     * its supported Regions</a>.</p> 
     */
    inline const TextGenerationJobConfig& GetTextGenerationJobConfig() const{ return m_textGenerationJobConfig; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text generation (LLMs
     * fine-tuning) problem type.</p>  <p>The text generation models that support
     * fine-tuning in Autopilot are currently accessible exclusively in regions
     * supported by Canvas. Refer to the documentation of Canvas for the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
     * its supported Regions</a>.</p> 
     */
    inline bool TextGenerationJobConfigHasBeenSet() const { return m_textGenerationJobConfigHasBeenSet; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text generation (LLMs
     * fine-tuning) problem type.</p>  <p>The text generation models that support
     * fine-tuning in Autopilot are currently accessible exclusively in regions
     * supported by Canvas. Refer to the documentation of Canvas for the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
     * its supported Regions</a>.</p> 
     */
    inline void SetTextGenerationJobConfig(const TextGenerationJobConfig& value) { m_textGenerationJobConfigHasBeenSet = true; m_textGenerationJobConfig = value; }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text generation (LLMs
     * fine-tuning) problem type.</p>  <p>The text generation models that support
     * fine-tuning in Autopilot are currently accessible exclusively in regions
     * supported by Canvas. Refer to the documentation of Canvas for the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
     * its supported Regions</a>.</p> 
     */
    inline void SetTextGenerationJobConfig(TextGenerationJobConfig&& value) { m_textGenerationJobConfigHasBeenSet = true; m_textGenerationJobConfig = std::move(value); }

    /**
     * <p>Settings used to configure an AutoML job V2 for the text generation (LLMs
     * fine-tuning) problem type.</p>  <p>The text generation models that support
     * fine-tuning in Autopilot are currently accessible exclusively in regions
     * supported by Canvas. Refer to the documentation of Canvas for the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
     * its supported Regions</a>.</p> 
     */
    inline AutoMLProblemTypeConfig& WithTextGenerationJobConfig(const TextGenerationJobConfig& value) { SetTextGenerationJobConfig(value); return *this;}

    /**
     * <p>Settings used to configure an AutoML job V2 for the text generation (LLMs
     * fine-tuning) problem type.</p>  <p>The text generation models that support
     * fine-tuning in Autopilot are currently accessible exclusively in regions
     * supported by Canvas. Refer to the documentation of Canvas for the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
     * its supported Regions</a>.</p> 
     */
    inline AutoMLProblemTypeConfig& WithTextGenerationJobConfig(TextGenerationJobConfig&& value) { SetTextGenerationJobConfig(std::move(value)); return *this;}

  private:

    ImageClassificationJobConfig m_imageClassificationJobConfig;
    bool m_imageClassificationJobConfigHasBeenSet = false;

    TextClassificationJobConfig m_textClassificationJobConfig;
    bool m_textClassificationJobConfigHasBeenSet = false;

    TimeSeriesForecastingJobConfig m_timeSeriesForecastingJobConfig;
    bool m_timeSeriesForecastingJobConfigHasBeenSet = false;

    TabularJobConfig m_tabularJobConfig;
    bool m_tabularJobConfigHasBeenSet = false;

    TextGenerationJobConfig m_textGenerationJobConfig;
    bool m_textGenerationJobConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
