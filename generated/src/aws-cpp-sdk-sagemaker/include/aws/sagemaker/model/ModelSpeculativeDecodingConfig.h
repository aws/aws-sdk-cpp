/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelSpeculativeDecodingTechnique.h>
#include <aws/sagemaker/model/ModelSpeculativeDecodingTrainingDataSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Settings for the model speculative decoding technique that's applied by a
 * model optimization job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelSpeculativeDecodingConfig">AWS
 * API Reference</a></p>
 */
class ModelSpeculativeDecodingConfig {
 public:
  AWS_SAGEMAKER_API ModelSpeculativeDecodingConfig() = default;
  AWS_SAGEMAKER_API ModelSpeculativeDecodingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ModelSpeculativeDecodingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The speculative decoding technique to apply during model optimization.</p>
   */
  inline ModelSpeculativeDecodingTechnique GetTechnique() const { return m_technique; }
  inline bool TechniqueHasBeenSet() const { return m_techniqueHasBeenSet; }
  inline void SetTechnique(ModelSpeculativeDecodingTechnique value) {
    m_techniqueHasBeenSet = true;
    m_technique = value;
  }
  inline ModelSpeculativeDecodingConfig& WithTechnique(ModelSpeculativeDecodingTechnique value) {
    SetTechnique(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the training data to use for speculative decoding. The data
   * must be formatted as ShareGPT, OpenAI Completions or OpenAI Chat Completions.
   * The input can also be unencrypted captured data from a SageMaker endpoint as
   * long as the endpoint uses one of the above formats.</p>
   */
  inline const ModelSpeculativeDecodingTrainingDataSource& GetTrainingDataSource() const { return m_trainingDataSource; }
  inline bool TrainingDataSourceHasBeenSet() const { return m_trainingDataSourceHasBeenSet; }
  template <typename TrainingDataSourceT = ModelSpeculativeDecodingTrainingDataSource>
  void SetTrainingDataSource(TrainingDataSourceT&& value) {
    m_trainingDataSourceHasBeenSet = true;
    m_trainingDataSource = std::forward<TrainingDataSourceT>(value);
  }
  template <typename TrainingDataSourceT = ModelSpeculativeDecodingTrainingDataSource>
  ModelSpeculativeDecodingConfig& WithTrainingDataSource(TrainingDataSourceT&& value) {
    SetTrainingDataSource(std::forward<TrainingDataSourceT>(value));
    return *this;
  }
  ///@}
 private:
  ModelSpeculativeDecodingTechnique m_technique{ModelSpeculativeDecodingTechnique::NOT_SET};
  bool m_techniqueHasBeenSet = false;

  ModelSpeculativeDecodingTrainingDataSource m_trainingDataSource;
  bool m_trainingDataSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
