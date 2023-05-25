/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AutoMLAlgorithm.h>
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
   * <p>The collection of algorithms run on a dataset for training the model
   * candidates of an Autopilot job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLAlgorithmConfig">AWS
   * API Reference</a></p>
   */
  class AutoMLAlgorithmConfig
  {
  public:
    AWS_SAGEMAKER_API AutoMLAlgorithmConfig();
    AWS_SAGEMAKER_API AutoMLAlgorithmConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLAlgorithmConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<AutoMLAlgorithm>& GetAutoMLAlgorithms() const{ return m_autoMLAlgorithms; }

    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline bool AutoMLAlgorithmsHasBeenSet() const { return m_autoMLAlgorithmsHasBeenSet; }

    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline void SetAutoMLAlgorithms(const Aws::Vector<AutoMLAlgorithm>& value) { m_autoMLAlgorithmsHasBeenSet = true; m_autoMLAlgorithms = value; }

    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline void SetAutoMLAlgorithms(Aws::Vector<AutoMLAlgorithm>&& value) { m_autoMLAlgorithmsHasBeenSet = true; m_autoMLAlgorithms = std::move(value); }

    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline AutoMLAlgorithmConfig& WithAutoMLAlgorithms(const Aws::Vector<AutoMLAlgorithm>& value) { SetAutoMLAlgorithms(value); return *this;}

    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline AutoMLAlgorithmConfig& WithAutoMLAlgorithms(Aws::Vector<AutoMLAlgorithm>&& value) { SetAutoMLAlgorithms(std::move(value)); return *this;}

    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline AutoMLAlgorithmConfig& AddAutoMLAlgorithms(const AutoMLAlgorithm& value) { m_autoMLAlgorithmsHasBeenSet = true; m_autoMLAlgorithms.push_back(value); return *this; }

    /**
     * <p>The selection of algorithms run on a dataset to train the model candidates of
     * an Autopilot job. </p>  <p>Selected algorithms must belong to the list
     * corresponding to the training mode set in <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_AutoMLJobConfig.html#sagemaker-Type-AutoMLJobConfig-Mode">AutoMLJobConfig.Mode</a>
     * (<code>ENSEMBLING</code> or <code>HYPERPARAMETER_TUNING</code>). Choose a
     * minimum of 1 algorithm. </p>  <ul> <li> <p>In <code>ENSEMBLING</code>
     * mode:</p> <ul> <li> <p>"catboost"</p> </li> <li> <p>"extra-trees"</p> </li> <li>
     * <p>"fastai"</p> </li> <li> <p>"lightgbm"</p> </li> <li> <p>"linear-learner"</p>
     * </li> <li> <p>"nn-torch"</p> </li> <li> <p>"randomforest"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> <li> <p>In <code>HYPERPARAMETER_TUNING</code>
     * mode:</p> <ul> <li> <p>"linear-learner"</p> </li> <li> <p>"mlp"</p> </li> <li>
     * <p>"xgboost"</p> </li> </ul> </li> </ul>
     */
    inline AutoMLAlgorithmConfig& AddAutoMLAlgorithms(AutoMLAlgorithm&& value) { m_autoMLAlgorithmsHasBeenSet = true; m_autoMLAlgorithms.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AutoMLAlgorithm> m_autoMLAlgorithms;
    bool m_autoMLAlgorithmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
