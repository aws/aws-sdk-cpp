/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>The result of saving full training state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SaveStateResult">AWS
 * API Reference</a></p>
 */
class SaveStateResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SaveStateResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SaveStateResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SaveStateResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the model package created for the saved state checkpoint.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  SaveStateResult& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelPackageArn;
  bool m_modelPackageArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
