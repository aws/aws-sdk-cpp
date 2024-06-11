﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobConfig.h>
#include <aws/sagemaker/model/HyperParameterTrainingJobDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HyperParameterTuningJobWarmStartConfig.h>
#include <aws/sagemaker/model/Autotune.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateHyperParameterTuningJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateHyperParameterTuningJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHyperParameterTuningJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the tuning job. This name is the prefix for the names of all
     * training jobs that this tuning job launches. The name must be unique within the
     * same Amazon Web Services account and Amazon Web Services Region. The name must
     * have 1 to 32 characters. Valid characters are a-z, A-Z, 0-9, and : + = @ _ % -
     * (hyphen). The name is not case sensitive.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html">HyperParameterTuningJobConfig</a>
     * object that describes the tuning job, including the search strategy, the
     * objective metric used to evaluate training jobs, ranges of parameters to search,
     * and resource limits for the tuning job. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
     * Hyperparameter Tuning Works</a>.</p>
     */
    inline const HyperParameterTuningJobConfig& GetHyperParameterTuningJobConfig() const{ return m_hyperParameterTuningJobConfig; }
    inline bool HyperParameterTuningJobConfigHasBeenSet() const { return m_hyperParameterTuningJobConfigHasBeenSet; }
    inline void SetHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = value; }
    inline void SetHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { m_hyperParameterTuningJobConfigHasBeenSet = true; m_hyperParameterTuningJobConfig = std::move(value); }
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobConfig(const HyperParameterTuningJobConfig& value) { SetHyperParameterTuningJobConfig(value); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithHyperParameterTuningJobConfig(HyperParameterTuningJobConfig&& value) { SetHyperParameterTuningJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html">HyperParameterTrainingJobDefinition</a>
     * object that describes the training jobs that this tuning job launches, including
     * static hyperparameters, input data configuration, output data configuration,
     * resource configuration, and stopping condition.</p>
     */
    inline const HyperParameterTrainingJobDefinition& GetTrainingJobDefinition() const{ return m_trainingJobDefinition; }
    inline bool TrainingJobDefinitionHasBeenSet() const { return m_trainingJobDefinitionHasBeenSet; }
    inline void SetTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = value; }
    inline void SetTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinitionHasBeenSet = true; m_trainingJobDefinition = std::move(value); }
    inline CreateHyperParameterTuningJobRequest& WithTrainingJobDefinition(const HyperParameterTrainingJobDefinition& value) { SetTrainingJobDefinition(value); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithTrainingJobDefinition(HyperParameterTrainingJobDefinition&& value) { SetTrainingJobDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html">HyperParameterTrainingJobDefinition</a>
     * objects launched for this tuning job.</p>
     */
    inline const Aws::Vector<HyperParameterTrainingJobDefinition>& GetTrainingJobDefinitions() const{ return m_trainingJobDefinitions; }
    inline bool TrainingJobDefinitionsHasBeenSet() const { return m_trainingJobDefinitionsHasBeenSet; }
    inline void SetTrainingJobDefinitions(const Aws::Vector<HyperParameterTrainingJobDefinition>& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions = value; }
    inline void SetTrainingJobDefinitions(Aws::Vector<HyperParameterTrainingJobDefinition>&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions = std::move(value); }
    inline CreateHyperParameterTuningJobRequest& WithTrainingJobDefinitions(const Aws::Vector<HyperParameterTrainingJobDefinition>& value) { SetTrainingJobDefinitions(value); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithTrainingJobDefinitions(Aws::Vector<HyperParameterTrainingJobDefinition>&& value) { SetTrainingJobDefinitions(std::move(value)); return *this;}
    inline CreateHyperParameterTuningJobRequest& AddTrainingJobDefinitions(const HyperParameterTrainingJobDefinition& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions.push_back(value); return *this; }
    inline CreateHyperParameterTuningJobRequest& AddTrainingJobDefinitions(HyperParameterTrainingJobDefinition&& value) { m_trainingJobDefinitionsHasBeenSet = true; m_trainingJobDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for starting the hyperparameter tuning job using
     * one or more previous tuning jobs as a starting point. The results of previous
     * tuning jobs are used to inform which combinations of hyperparameters to search
     * over in the new tuning job.</p> <p>All training jobs launched by the new
     * hyperparameter tuning job are evaluated by using the objective metric. If you
     * specify <code>IDENTICAL_DATA_AND_ALGORITHM</code> as the
     * <code>WarmStartType</code> value for the warm start configuration, the training
     * job that performs the best in the new tuning job is compared to the best
     * training jobs from the parent tuning jobs. From these, the training job that
     * performs the best as measured by the objective metric is returned as the overall
     * best training job.</p>  <p>All training jobs launched by parent
     * hyperparameter tuning jobs and the new hyperparameter tuning jobs count against
     * the limit of training jobs for the tuning job.</p> 
     */
    inline const HyperParameterTuningJobWarmStartConfig& GetWarmStartConfig() const{ return m_warmStartConfig; }
    inline bool WarmStartConfigHasBeenSet() const { return m_warmStartConfigHasBeenSet; }
    inline void SetWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = value; }
    inline void SetWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { m_warmStartConfigHasBeenSet = true; m_warmStartConfig = std::move(value); }
    inline CreateHyperParameterTuningJobRequest& WithWarmStartConfig(const HyperParameterTuningJobWarmStartConfig& value) { SetWarmStartConfig(value); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithWarmStartConfig(HyperParameterTuningJobWarmStartConfig&& value) { SetWarmStartConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p> <p>Tags that you specify for the tuning
     * job are also added to all training jobs that the tuning job launches.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateHyperParameterTuningJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateHyperParameterTuningJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateHyperParameterTuningJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configures SageMaker Automatic model tuning (AMT) to automatically find
     * optimal parameters for the following fields:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html#sagemaker-Type-HyperParameterTuningJobConfig-ParameterRanges">ParameterRanges</a>:
     * The names and ranges of parameters that a hyperparameter tuning job can
     * optimize.</p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ResourceLimits.html">ResourceLimits</a>:
     * The maximum resources that can be used for a training job. These resources
     * include the maximum number of training jobs, the maximum runtime of a tuning
     * job, and the maximum number of training jobs to run at the same time.</p> </li>
     * <li> <p> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html#sagemaker-Type-HyperParameterTuningJobConfig-TrainingJobEarlyStoppingType">TrainingJobEarlyStoppingType</a>:
     * A flag that specifies whether or not to use early stopping for training jobs
     * launched by a hyperparameter tuning job.</p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html#sagemaker-Type-HyperParameterTrainingJobDefinition-RetryStrategy">RetryStrategy</a>:
     * The number of times to retry a training job.</p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobConfig.html">Strategy</a>:
     * Specifies how hyperparameter tuning chooses the combinations of hyperparameter
     * values to use for the training jobs that it launches.</p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ConvergenceDetected.html">ConvergenceDetected</a>:
     * A flag to indicate that Automatic model tuning (AMT) has detected model
     * convergence.</p> </li> </ul>
     */
    inline const Autotune& GetAutotune() const{ return m_autotune; }
    inline bool AutotuneHasBeenSet() const { return m_autotuneHasBeenSet; }
    inline void SetAutotune(const Autotune& value) { m_autotuneHasBeenSet = true; m_autotune = value; }
    inline void SetAutotune(Autotune&& value) { m_autotuneHasBeenSet = true; m_autotune = std::move(value); }
    inline CreateHyperParameterTuningJobRequest& WithAutotune(const Autotune& value) { SetAutotune(value); return *this;}
    inline CreateHyperParameterTuningJobRequest& WithAutotune(Autotune&& value) { SetAutotune(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;

    HyperParameterTuningJobConfig m_hyperParameterTuningJobConfig;
    bool m_hyperParameterTuningJobConfigHasBeenSet = false;

    HyperParameterTrainingJobDefinition m_trainingJobDefinition;
    bool m_trainingJobDefinitionHasBeenSet = false;

    Aws::Vector<HyperParameterTrainingJobDefinition> m_trainingJobDefinitions;
    bool m_trainingJobDefinitionsHasBeenSet = false;

    HyperParameterTuningJobWarmStartConfig m_warmStartConfig;
    bool m_warmStartConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Autotune m_autotune;
    bool m_autotuneHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
