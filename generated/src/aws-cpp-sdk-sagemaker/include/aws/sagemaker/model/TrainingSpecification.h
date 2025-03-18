/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AdditionalS3DataSource.h>
#include <aws/sagemaker/model/HyperParameterSpecification.h>
#include <aws/sagemaker/model/TrainingInstanceType.h>
#include <aws/sagemaker/model/MetricDefinition.h>
#include <aws/sagemaker/model/ChannelSpecification.h>
#include <aws/sagemaker/model/HyperParameterTuningJobObjective.h>
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
   * <p>Defines how the algorithm is used for a training job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingSpecification">AWS
   * API Reference</a></p>
   */
  class TrainingSpecification
  {
  public:
    AWS_SAGEMAKER_API TrainingSpecification() = default;
    AWS_SAGEMAKER_API TrainingSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the training
     * algorithm.</p>
     */
    inline const Aws::String& GetTrainingImage() const { return m_trainingImage; }
    inline bool TrainingImageHasBeenSet() const { return m_trainingImageHasBeenSet; }
    template<typename TrainingImageT = Aws::String>
    void SetTrainingImage(TrainingImageT&& value) { m_trainingImageHasBeenSet = true; m_trainingImage = std::forward<TrainingImageT>(value); }
    template<typename TrainingImageT = Aws::String>
    TrainingSpecification& WithTrainingImage(TrainingImageT&& value) { SetTrainingImage(std::forward<TrainingImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline const Aws::String& GetTrainingImageDigest() const { return m_trainingImageDigest; }
    inline bool TrainingImageDigestHasBeenSet() const { return m_trainingImageDigestHasBeenSet; }
    template<typename TrainingImageDigestT = Aws::String>
    void SetTrainingImageDigest(TrainingImageDigestT&& value) { m_trainingImageDigestHasBeenSet = true; m_trainingImageDigest = std::forward<TrainingImageDigestT>(value); }
    template<typename TrainingImageDigestT = Aws::String>
    TrainingSpecification& WithTrainingImageDigest(TrainingImageDigestT&& value) { SetTrainingImageDigest(std::forward<TrainingImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <code>HyperParameterSpecification</code> objects, that define
     * the supported hyperparameters. This is required if the algorithm supports
     * automatic model tuning.&gt;</p>
     */
    inline const Aws::Vector<HyperParameterSpecification>& GetSupportedHyperParameters() const { return m_supportedHyperParameters; }
    inline bool SupportedHyperParametersHasBeenSet() const { return m_supportedHyperParametersHasBeenSet; }
    template<typename SupportedHyperParametersT = Aws::Vector<HyperParameterSpecification>>
    void SetSupportedHyperParameters(SupportedHyperParametersT&& value) { m_supportedHyperParametersHasBeenSet = true; m_supportedHyperParameters = std::forward<SupportedHyperParametersT>(value); }
    template<typename SupportedHyperParametersT = Aws::Vector<HyperParameterSpecification>>
    TrainingSpecification& WithSupportedHyperParameters(SupportedHyperParametersT&& value) { SetSupportedHyperParameters(std::forward<SupportedHyperParametersT>(value)); return *this;}
    template<typename SupportedHyperParametersT = HyperParameterSpecification>
    TrainingSpecification& AddSupportedHyperParameters(SupportedHyperParametersT&& value) { m_supportedHyperParametersHasBeenSet = true; m_supportedHyperParameters.emplace_back(std::forward<SupportedHyperParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the instance types that this algorithm can use for training.</p>
     */
    inline const Aws::Vector<TrainingInstanceType>& GetSupportedTrainingInstanceTypes() const { return m_supportedTrainingInstanceTypes; }
    inline bool SupportedTrainingInstanceTypesHasBeenSet() const { return m_supportedTrainingInstanceTypesHasBeenSet; }
    template<typename SupportedTrainingInstanceTypesT = Aws::Vector<TrainingInstanceType>>
    void SetSupportedTrainingInstanceTypes(SupportedTrainingInstanceTypesT&& value) { m_supportedTrainingInstanceTypesHasBeenSet = true; m_supportedTrainingInstanceTypes = std::forward<SupportedTrainingInstanceTypesT>(value); }
    template<typename SupportedTrainingInstanceTypesT = Aws::Vector<TrainingInstanceType>>
    TrainingSpecification& WithSupportedTrainingInstanceTypes(SupportedTrainingInstanceTypesT&& value) { SetSupportedTrainingInstanceTypes(std::forward<SupportedTrainingInstanceTypesT>(value)); return *this;}
    inline TrainingSpecification& AddSupportedTrainingInstanceTypes(TrainingInstanceType value) { m_supportedTrainingInstanceTypesHasBeenSet = true; m_supportedTrainingInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the algorithm supports distributed training. If set to
     * false, buyers can't request more than one instance during training.</p>
     */
    inline bool GetSupportsDistributedTraining() const { return m_supportsDistributedTraining; }
    inline bool SupportsDistributedTrainingHasBeenSet() const { return m_supportsDistributedTrainingHasBeenSet; }
    inline void SetSupportsDistributedTraining(bool value) { m_supportsDistributedTrainingHasBeenSet = true; m_supportsDistributedTraining = value; }
    inline TrainingSpecification& WithSupportsDistributedTraining(bool value) { SetSupportsDistributedTraining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>MetricDefinition</code> objects, which are used for parsing
     * metrics generated by the algorithm.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const { return m_metricDefinitions; }
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    void SetMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::forward<MetricDefinitionsT>(value); }
    template<typename MetricDefinitionsT = Aws::Vector<MetricDefinition>>
    TrainingSpecification& WithMetricDefinitions(MetricDefinitionsT&& value) { SetMetricDefinitions(std::forward<MetricDefinitionsT>(value)); return *this;}
    template<typename MetricDefinitionsT = MetricDefinition>
    TrainingSpecification& AddMetricDefinitions(MetricDefinitionsT&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.emplace_back(std::forward<MetricDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>ChannelSpecification</code> objects, which specify the input
     * sources to be used by the algorithm.</p>
     */
    inline const Aws::Vector<ChannelSpecification>& GetTrainingChannels() const { return m_trainingChannels; }
    inline bool TrainingChannelsHasBeenSet() const { return m_trainingChannelsHasBeenSet; }
    template<typename TrainingChannelsT = Aws::Vector<ChannelSpecification>>
    void SetTrainingChannels(TrainingChannelsT&& value) { m_trainingChannelsHasBeenSet = true; m_trainingChannels = std::forward<TrainingChannelsT>(value); }
    template<typename TrainingChannelsT = Aws::Vector<ChannelSpecification>>
    TrainingSpecification& WithTrainingChannels(TrainingChannelsT&& value) { SetTrainingChannels(std::forward<TrainingChannelsT>(value)); return *this;}
    template<typename TrainingChannelsT = ChannelSpecification>
    TrainingSpecification& AddTrainingChannels(TrainingChannelsT&& value) { m_trainingChannelsHasBeenSet = true; m_trainingChannels.emplace_back(std::forward<TrainingChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the metrics that the algorithm emits that can be used as the
     * objective metric in a hyperparameter tuning job.</p>
     */
    inline const Aws::Vector<HyperParameterTuningJobObjective>& GetSupportedTuningJobObjectiveMetrics() const { return m_supportedTuningJobObjectiveMetrics; }
    inline bool SupportedTuningJobObjectiveMetricsHasBeenSet() const { return m_supportedTuningJobObjectiveMetricsHasBeenSet; }
    template<typename SupportedTuningJobObjectiveMetricsT = Aws::Vector<HyperParameterTuningJobObjective>>
    void SetSupportedTuningJobObjectiveMetrics(SupportedTuningJobObjectiveMetricsT&& value) { m_supportedTuningJobObjectiveMetricsHasBeenSet = true; m_supportedTuningJobObjectiveMetrics = std::forward<SupportedTuningJobObjectiveMetricsT>(value); }
    template<typename SupportedTuningJobObjectiveMetricsT = Aws::Vector<HyperParameterTuningJobObjective>>
    TrainingSpecification& WithSupportedTuningJobObjectiveMetrics(SupportedTuningJobObjectiveMetricsT&& value) { SetSupportedTuningJobObjectiveMetrics(std::forward<SupportedTuningJobObjectiveMetricsT>(value)); return *this;}
    template<typename SupportedTuningJobObjectiveMetricsT = HyperParameterTuningJobObjective>
    TrainingSpecification& AddSupportedTuningJobObjectiveMetrics(SupportedTuningJobObjectiveMetricsT&& value) { m_supportedTuningJobObjectiveMetricsHasBeenSet = true; m_supportedTuningJobObjectiveMetrics.emplace_back(std::forward<SupportedTuningJobObjectiveMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The additional data source used during the training job.</p>
     */
    inline const AdditionalS3DataSource& GetAdditionalS3DataSource() const { return m_additionalS3DataSource; }
    inline bool AdditionalS3DataSourceHasBeenSet() const { return m_additionalS3DataSourceHasBeenSet; }
    template<typename AdditionalS3DataSourceT = AdditionalS3DataSource>
    void SetAdditionalS3DataSource(AdditionalS3DataSourceT&& value) { m_additionalS3DataSourceHasBeenSet = true; m_additionalS3DataSource = std::forward<AdditionalS3DataSourceT>(value); }
    template<typename AdditionalS3DataSourceT = AdditionalS3DataSource>
    TrainingSpecification& WithAdditionalS3DataSource(AdditionalS3DataSourceT&& value) { SetAdditionalS3DataSource(std::forward<AdditionalS3DataSourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet = false;

    Aws::String m_trainingImageDigest;
    bool m_trainingImageDigestHasBeenSet = false;

    Aws::Vector<HyperParameterSpecification> m_supportedHyperParameters;
    bool m_supportedHyperParametersHasBeenSet = false;

    Aws::Vector<TrainingInstanceType> m_supportedTrainingInstanceTypes;
    bool m_supportedTrainingInstanceTypesHasBeenSet = false;

    bool m_supportsDistributedTraining{false};
    bool m_supportsDistributedTrainingHasBeenSet = false;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet = false;

    Aws::Vector<ChannelSpecification> m_trainingChannels;
    bool m_trainingChannelsHasBeenSet = false;

    Aws::Vector<HyperParameterTuningJobObjective> m_supportedTuningJobObjectiveMetrics;
    bool m_supportedTuningJobObjectiveMetricsHasBeenSet = false;

    AdditionalS3DataSource m_additionalS3DataSource;
    bool m_additionalS3DataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
