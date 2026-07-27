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
 * <p>A LoRA adapter entry identified by a model package ARN.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIAdapterModelPackageEntry">AWS
 * API Reference</a></p>
 */
class AIAdapterModelPackageEntry {
 public:
  AWS_SAGEMAKER_API AIAdapterModelPackageEntry() = default;
  AWS_SAGEMAKER_API AIAdapterModelPackageEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIAdapterModelPackageEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the adapter. This ID is used as the inference
   * component name when the adapter is deployed. The ID must start and end with an
   * alphanumeric character, can contain hyphens between alphanumeric characters, and
   * can be up to 63 characters long.</p>
   */
  inline const Aws::String& GetAdapterId() const { return m_adapterId; }
  inline bool AdapterIdHasBeenSet() const { return m_adapterIdHasBeenSet; }
  template <typename AdapterIdT = Aws::String>
  void SetAdapterId(AdapterIdT&& value) {
    m_adapterIdHasBeenSet = true;
    m_adapterId = std::forward<AdapterIdT>(value);
  }
  template <typename AdapterIdT = Aws::String>
  AIAdapterModelPackageEntry& WithAdapterId(AdapterIdT&& value) {
    SetAdapterId(std::forward<AdapterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the model package that contains the LoRA
   * adapter artifacts.</p>
   */
  inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
  inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
  template <typename ModelPackageArnT = Aws::String>
  void SetModelPackageArn(ModelPackageArnT&& value) {
    m_modelPackageArnHasBeenSet = true;
    m_modelPackageArn = std::forward<ModelPackageArnT>(value);
  }
  template <typename ModelPackageArnT = Aws::String>
  AIAdapterModelPackageEntry& WithModelPackageArn(ModelPackageArnT&& value) {
    SetModelPackageArn(std::forward<ModelPackageArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_adapterId;

  Aws::String m_modelPackageArn;
  bool m_adapterIdHasBeenSet = false;
  bool m_modelPackageArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
