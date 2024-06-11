﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TimeSeriesTransformations.h>
#include <aws/sagemaker/model/TimeSeriesConfig.h>
#include <aws/sagemaker/model/CandidateGenerationConfig.h>
#include <aws/sagemaker/model/HolidayConfigAttributes.h>
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
   * <p>The collection of settings used by an AutoML job V2 for the time-series
   * forecasting problem type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TimeSeriesForecastingJobConfig">AWS
   * API Reference</a></p>
   */
  class TimeSeriesForecastingJobConfig
  {
  public:
    AWS_SAGEMAKER_API TimeSeriesForecastingJobConfig();
    AWS_SAGEMAKER_API TimeSeriesForecastingJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TimeSeriesForecastingJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A URL to the Amazon S3 data source containing additional selected features
     * that complement the target, itemID, timestamp, and grouped columns set in
     * <code>TimeSeriesConfig</code>. When not provided, the AutoML job V2 includes all
     * the columns from the original dataset that are not already declared in
     * <code>TimeSeriesConfig</code>. If provided, the AutoML job V2 only considers
     * these additional columns as a complement to the ones declared in
     * <code>TimeSeriesConfig</code>.</p> <p>You can input
     * <code>FeatureAttributeNames</code> (optional) in JSON format as shown below:
     * </p> <p> <code>{ "FeatureAttributeNames":["col1", "col2", ...] }</code>.</p>
     * <p>You can also specify the data type of the feature (optional) in the format
     * shown below:</p> <p> <code>{ "FeatureDataTypes":{"col1":"numeric",
     * "col2":"categorical" ... } }</code> </p> <p>Autopilot supports the following
     * data types: <code>numeric</code>, <code>categorical</code>, <code>text</code>,
     * and <code>datetime</code>.</p>  <p>These column keys must not include any
     * column set in <code>TimeSeriesConfig</code>.</p> 
     */
    inline const Aws::String& GetFeatureSpecificationS3Uri() const{ return m_featureSpecificationS3Uri; }
    inline bool FeatureSpecificationS3UriHasBeenSet() const { return m_featureSpecificationS3UriHasBeenSet; }
    inline void SetFeatureSpecificationS3Uri(const Aws::String& value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri = value; }
    inline void SetFeatureSpecificationS3Uri(Aws::String&& value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri = std::move(value); }
    inline void SetFeatureSpecificationS3Uri(const char* value) { m_featureSpecificationS3UriHasBeenSet = true; m_featureSpecificationS3Uri.assign(value); }
    inline TimeSeriesForecastingJobConfig& WithFeatureSpecificationS3Uri(const Aws::String& value) { SetFeatureSpecificationS3Uri(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithFeatureSpecificationS3Uri(Aws::String&& value) { SetFeatureSpecificationS3Uri(std::move(value)); return *this;}
    inline TimeSeriesForecastingJobConfig& WithFeatureSpecificationS3Uri(const char* value) { SetFeatureSpecificationS3Uri(value); return *this;}
    ///@}

    ///@{
    
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const{ return m_completionCriteria; }
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }
    inline void SetCompletionCriteria(const AutoMLJobCompletionCriteria& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = value; }
    inline void SetCompletionCriteria(AutoMLJobCompletionCriteria&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::move(value); }
    inline TimeSeriesForecastingJobConfig& WithCompletionCriteria(const AutoMLJobCompletionCriteria& value) { SetCompletionCriteria(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithCompletionCriteria(AutoMLJobCompletionCriteria&& value) { SetCompletionCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency of predictions in a forecast.</p> <p>Valid intervals are an
     * integer followed by Y (Year), M (Month), W (Week), D (Day), H (Hour), and min
     * (Minute). For example, <code>1D</code> indicates every day and
     * <code>15min</code> indicates every 15 minutes. The value of a frequency must not
     * overlap with the next larger frequency. For example, you must use a frequency of
     * <code>1H</code> instead of <code>60min</code>.</p> <p>The valid values for each
     * frequency are the following:</p> <ul> <li> <p>Minute - 1-59</p> </li> <li>
     * <p>Hour - 1-23</p> </li> <li> <p>Day - 1-6</p> </li> <li> <p>Week - 1-4</p>
     * </li> <li> <p>Month - 1-11</p> </li> <li> <p>Year - 1</p> </li> </ul>
     */
    inline const Aws::String& GetForecastFrequency() const{ return m_forecastFrequency; }
    inline bool ForecastFrequencyHasBeenSet() const { return m_forecastFrequencyHasBeenSet; }
    inline void SetForecastFrequency(const Aws::String& value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency = value; }
    inline void SetForecastFrequency(Aws::String&& value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency = std::move(value); }
    inline void SetForecastFrequency(const char* value) { m_forecastFrequencyHasBeenSet = true; m_forecastFrequency.assign(value); }
    inline TimeSeriesForecastingJobConfig& WithForecastFrequency(const Aws::String& value) { SetForecastFrequency(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithForecastFrequency(Aws::String&& value) { SetForecastFrequency(std::move(value)); return *this;}
    inline TimeSeriesForecastingJobConfig& WithForecastFrequency(const char* value) { SetForecastFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of time-steps that the model predicts. The forecast horizon is
     * also called the prediction length. The maximum forecast horizon is the lesser of
     * 500 time-steps or 1/4 of the time-steps in the dataset.</p>
     */
    inline int GetForecastHorizon() const{ return m_forecastHorizon; }
    inline bool ForecastHorizonHasBeenSet() const { return m_forecastHorizonHasBeenSet; }
    inline void SetForecastHorizon(int value) { m_forecastHorizonHasBeenSet = true; m_forecastHorizon = value; }
    inline TimeSeriesForecastingJobConfig& WithForecastHorizon(int value) { SetForecastHorizon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantiles used to train the model for forecasts at a specified quantile.
     * You can specify quantiles from <code>0.01</code> (p1) to <code>0.99</code>
     * (p99), by increments of 0.01 or higher. Up to five forecast quantiles can be
     * specified. When <code>ForecastQuantiles</code> is not provided, the AutoML job
     * uses the quantiles p10, p50, and p90 as default.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastQuantiles() const{ return m_forecastQuantiles; }
    inline bool ForecastQuantilesHasBeenSet() const { return m_forecastQuantilesHasBeenSet; }
    inline void SetForecastQuantiles(const Aws::Vector<Aws::String>& value) { m_forecastQuantilesHasBeenSet = true; m_forecastQuantiles = value; }
    inline void SetForecastQuantiles(Aws::Vector<Aws::String>&& value) { m_forecastQuantilesHasBeenSet = true; m_forecastQuantiles = std::move(value); }
    inline TimeSeriesForecastingJobConfig& WithForecastQuantiles(const Aws::Vector<Aws::String>& value) { SetForecastQuantiles(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithForecastQuantiles(Aws::Vector<Aws::String>&& value) { SetForecastQuantiles(std::move(value)); return *this;}
    inline TimeSeriesForecastingJobConfig& AddForecastQuantiles(const Aws::String& value) { m_forecastQuantilesHasBeenSet = true; m_forecastQuantiles.push_back(value); return *this; }
    inline TimeSeriesForecastingJobConfig& AddForecastQuantiles(Aws::String&& value) { m_forecastQuantilesHasBeenSet = true; m_forecastQuantiles.push_back(std::move(value)); return *this; }
    inline TimeSeriesForecastingJobConfig& AddForecastQuantiles(const char* value) { m_forecastQuantilesHasBeenSet = true; m_forecastQuantiles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The transformations modifying specific attributes of the time-series, such as
     * filling strategies for missing values.</p>
     */
    inline const TimeSeriesTransformations& GetTransformations() const{ return m_transformations; }
    inline bool TransformationsHasBeenSet() const { return m_transformationsHasBeenSet; }
    inline void SetTransformations(const TimeSeriesTransformations& value) { m_transformationsHasBeenSet = true; m_transformations = value; }
    inline void SetTransformations(TimeSeriesTransformations&& value) { m_transformationsHasBeenSet = true; m_transformations = std::move(value); }
    inline TimeSeriesForecastingJobConfig& WithTransformations(const TimeSeriesTransformations& value) { SetTransformations(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithTransformations(TimeSeriesTransformations&& value) { SetTransformations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of components that defines the time-series.</p>
     */
    inline const TimeSeriesConfig& GetTimeSeriesConfig() const{ return m_timeSeriesConfig; }
    inline bool TimeSeriesConfigHasBeenSet() const { return m_timeSeriesConfigHasBeenSet; }
    inline void SetTimeSeriesConfig(const TimeSeriesConfig& value) { m_timeSeriesConfigHasBeenSet = true; m_timeSeriesConfig = value; }
    inline void SetTimeSeriesConfig(TimeSeriesConfig&& value) { m_timeSeriesConfigHasBeenSet = true; m_timeSeriesConfig = std::move(value); }
    inline TimeSeriesForecastingJobConfig& WithTimeSeriesConfig(const TimeSeriesConfig& value) { SetTimeSeriesConfig(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithTimeSeriesConfig(TimeSeriesConfig&& value) { SetTimeSeriesConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of holiday featurization attributes used to incorporate
     * national holiday information into your forecasting model.</p>
     */
    inline const Aws::Vector<HolidayConfigAttributes>& GetHolidayConfig() const{ return m_holidayConfig; }
    inline bool HolidayConfigHasBeenSet() const { return m_holidayConfigHasBeenSet; }
    inline void SetHolidayConfig(const Aws::Vector<HolidayConfigAttributes>& value) { m_holidayConfigHasBeenSet = true; m_holidayConfig = value; }
    inline void SetHolidayConfig(Aws::Vector<HolidayConfigAttributes>&& value) { m_holidayConfigHasBeenSet = true; m_holidayConfig = std::move(value); }
    inline TimeSeriesForecastingJobConfig& WithHolidayConfig(const Aws::Vector<HolidayConfigAttributes>& value) { SetHolidayConfig(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithHolidayConfig(Aws::Vector<HolidayConfigAttributes>&& value) { SetHolidayConfig(std::move(value)); return *this;}
    inline TimeSeriesForecastingJobConfig& AddHolidayConfig(const HolidayConfigAttributes& value) { m_holidayConfigHasBeenSet = true; m_holidayConfig.push_back(value); return *this; }
    inline TimeSeriesForecastingJobConfig& AddHolidayConfig(HolidayConfigAttributes&& value) { m_holidayConfigHasBeenSet = true; m_holidayConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const CandidateGenerationConfig& GetCandidateGenerationConfig() const{ return m_candidateGenerationConfig; }
    inline bool CandidateGenerationConfigHasBeenSet() const { return m_candidateGenerationConfigHasBeenSet; }
    inline void SetCandidateGenerationConfig(const CandidateGenerationConfig& value) { m_candidateGenerationConfigHasBeenSet = true; m_candidateGenerationConfig = value; }
    inline void SetCandidateGenerationConfig(CandidateGenerationConfig&& value) { m_candidateGenerationConfigHasBeenSet = true; m_candidateGenerationConfig = std::move(value); }
    inline TimeSeriesForecastingJobConfig& WithCandidateGenerationConfig(const CandidateGenerationConfig& value) { SetCandidateGenerationConfig(value); return *this;}
    inline TimeSeriesForecastingJobConfig& WithCandidateGenerationConfig(CandidateGenerationConfig&& value) { SetCandidateGenerationConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureSpecificationS3Uri;
    bool m_featureSpecificationS3UriHasBeenSet = false;

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    Aws::String m_forecastFrequency;
    bool m_forecastFrequencyHasBeenSet = false;

    int m_forecastHorizon;
    bool m_forecastHorizonHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastQuantiles;
    bool m_forecastQuantilesHasBeenSet = false;

    TimeSeriesTransformations m_transformations;
    bool m_transformationsHasBeenSet = false;

    TimeSeriesConfig m_timeSeriesConfig;
    bool m_timeSeriesConfigHasBeenSet = false;

    Aws::Vector<HolidayConfigAttributes> m_holidayConfig;
    bool m_holidayConfigHasBeenSet = false;

    CandidateGenerationConfig m_candidateGenerationConfig;
    bool m_candidateGenerationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
