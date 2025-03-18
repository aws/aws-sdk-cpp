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
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig() = default;
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLProblemTypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings used to configure an AutoML job V2 for the image classification
     * problem type.</p>
     */
    inline const ImageClassificationJobConfig& GetImageClassificationJobConfig() const { return m_imageClassificationJobConfig; }
    inline bool ImageClassificationJobConfigHasBeenSet() const { return m_imageClassificationJobConfigHasBeenSet; }
    template<typename ImageClassificationJobConfigT = ImageClassificationJobConfig>
    void SetImageClassificationJobConfig(ImageClassificationJobConfigT&& value) { m_imageClassificationJobConfigHasBeenSet = true; m_imageClassificationJobConfig = std::forward<ImageClassificationJobConfigT>(value); }
    template<typename ImageClassificationJobConfigT = ImageClassificationJobConfig>
    AutoMLProblemTypeConfig& WithImageClassificationJobConfig(ImageClassificationJobConfigT&& value) { SetImageClassificationJobConfig(std::forward<ImageClassificationJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings used to configure an AutoML job V2 for the text classification
     * problem type.</p>
     */
    inline const TextClassificationJobConfig& GetTextClassificationJobConfig() const { return m_textClassificationJobConfig; }
    inline bool TextClassificationJobConfigHasBeenSet() const { return m_textClassificationJobConfigHasBeenSet; }
    template<typename TextClassificationJobConfigT = TextClassificationJobConfig>
    void SetTextClassificationJobConfig(TextClassificationJobConfigT&& value) { m_textClassificationJobConfigHasBeenSet = true; m_textClassificationJobConfig = std::forward<TextClassificationJobConfigT>(value); }
    template<typename TextClassificationJobConfigT = TextClassificationJobConfig>
    AutoMLProblemTypeConfig& WithTextClassificationJobConfig(TextClassificationJobConfigT&& value) { SetTextClassificationJobConfig(std::forward<TextClassificationJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings used to configure an AutoML job V2 for the time-series forecasting
     * problem type.</p>
     */
    inline const TimeSeriesForecastingJobConfig& GetTimeSeriesForecastingJobConfig() const { return m_timeSeriesForecastingJobConfig; }
    inline bool TimeSeriesForecastingJobConfigHasBeenSet() const { return m_timeSeriesForecastingJobConfigHasBeenSet; }
    template<typename TimeSeriesForecastingJobConfigT = TimeSeriesForecastingJobConfig>
    void SetTimeSeriesForecastingJobConfig(TimeSeriesForecastingJobConfigT&& value) { m_timeSeriesForecastingJobConfigHasBeenSet = true; m_timeSeriesForecastingJobConfig = std::forward<TimeSeriesForecastingJobConfigT>(value); }
    template<typename TimeSeriesForecastingJobConfigT = TimeSeriesForecastingJobConfig>
    AutoMLProblemTypeConfig& WithTimeSeriesForecastingJobConfig(TimeSeriesForecastingJobConfigT&& value) { SetTimeSeriesForecastingJobConfig(std::forward<TimeSeriesForecastingJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings used to configure an AutoML job V2 for the tabular problem type
     * (regression, classification).</p>
     */
    inline const TabularJobConfig& GetTabularJobConfig() const { return m_tabularJobConfig; }
    inline bool TabularJobConfigHasBeenSet() const { return m_tabularJobConfigHasBeenSet; }
    template<typename TabularJobConfigT = TabularJobConfig>
    void SetTabularJobConfig(TabularJobConfigT&& value) { m_tabularJobConfigHasBeenSet = true; m_tabularJobConfig = std::forward<TabularJobConfigT>(value); }
    template<typename TabularJobConfigT = TabularJobConfig>
    AutoMLProblemTypeConfig& WithTabularJobConfig(TabularJobConfigT&& value) { SetTabularJobConfig(std::forward<TabularJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings used to configure an AutoML job V2 for the text generation (LLMs
     * fine-tuning) problem type.</p>  <p>The text generation models that support
     * fine-tuning in Autopilot are currently accessible exclusively in regions
     * supported by Canvas. Refer to the documentation of Canvas for the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/canvas.html">full list of
     * its supported Regions</a>.</p> 
     */
    inline const TextGenerationJobConfig& GetTextGenerationJobConfig() const { return m_textGenerationJobConfig; }
    inline bool TextGenerationJobConfigHasBeenSet() const { return m_textGenerationJobConfigHasBeenSet; }
    template<typename TextGenerationJobConfigT = TextGenerationJobConfig>
    void SetTextGenerationJobConfig(TextGenerationJobConfigT&& value) { m_textGenerationJobConfigHasBeenSet = true; m_textGenerationJobConfig = std::forward<TextGenerationJobConfigT>(value); }
    template<typename TextGenerationJobConfigT = TextGenerationJobConfig>
    AutoMLProblemTypeConfig& WithTextGenerationJobConfig(TextGenerationJobConfigT&& value) { SetTextGenerationJobConfig(std::forward<TextGenerationJobConfigT>(value)); return *this;}
    ///@}
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
