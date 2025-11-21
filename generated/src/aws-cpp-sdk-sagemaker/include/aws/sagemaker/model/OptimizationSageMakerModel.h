/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>A SageMaker model to use as the source or destination for an optimization
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationSageMakerModel">AWS
 * API Reference</a></p>
 */
class OptimizationSageMakerModel {
 public:
  AWS_SAGEMAKER_API OptimizationSageMakerModel() = default;
  AWS_SAGEMAKER_API OptimizationSageMakerModel(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API OptimizationSageMakerModel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of a SageMaker model.</p>
   */
  inline const Aws::String& GetModelName() const { return m_modelName; }
  inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
  template <typename ModelNameT = Aws::String>
  void SetModelName(ModelNameT&& value) {
    m_modelNameHasBeenSet = true;
    m_modelName = std::forward<ModelNameT>(value);
  }
  template <typename ModelNameT = Aws::String>
  OptimizationSageMakerModel& WithModelName(ModelNameT&& value) {
    SetModelName(std::forward<ModelNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelName;
  bool m_modelNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
