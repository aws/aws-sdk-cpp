/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIAdapterModelPackageEntry.h>
#include <aws/sagemaker/model/AIAdapterS3Entry.h>

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
 * <p>The source of LoRA adapters for an AI recommendation job. This is a union
 * type — specify exactly one of the members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIAdapterSource">AWS
 * API Reference</a></p>
 */
class AIAdapterSource {
 public:
  AWS_SAGEMAKER_API AIAdapterSource() = default;
  AWS_SAGEMAKER_API AIAdapterSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIAdapterSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of LoRA adapters identified by their model package ARNs. Use this when
   * your adapters were produced by a SageMaker AI fine-tuning workflow that
   * registers model packages.</p>
   */
  inline const Aws::Vector<AIAdapterModelPackageEntry>& GetModelPackageArns() const { return m_modelPackageArns; }
  inline bool ModelPackageArnsHasBeenSet() const { return m_modelPackageArnsHasBeenSet; }
  template <typename ModelPackageArnsT = Aws::Vector<AIAdapterModelPackageEntry>>
  void SetModelPackageArns(ModelPackageArnsT&& value) {
    m_modelPackageArnsHasBeenSet = true;
    m_modelPackageArns = std::forward<ModelPackageArnsT>(value);
  }
  template <typename ModelPackageArnsT = Aws::Vector<AIAdapterModelPackageEntry>>
  AIAdapterSource& WithModelPackageArns(ModelPackageArnsT&& value) {
    SetModelPackageArns(std::forward<ModelPackageArnsT>(value));
    return *this;
  }
  template <typename ModelPackageArnsT = AIAdapterModelPackageEntry>
  AIAdapterSource& AddModelPackageArns(ModelPackageArnsT&& value) {
    m_modelPackageArnsHasBeenSet = true;
    m_modelPackageArns.emplace_back(std::forward<ModelPackageArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of LoRA adapters identified by their Amazon S3 URIs. Use this when
   * your adapters are stored as raw artifacts in Amazon S3.</p>
   */
  inline const Aws::Vector<AIAdapterS3Entry>& GetS3Uris() const { return m_s3Uris; }
  inline bool S3UrisHasBeenSet() const { return m_s3UrisHasBeenSet; }
  template <typename S3UrisT = Aws::Vector<AIAdapterS3Entry>>
  void SetS3Uris(S3UrisT&& value) {
    m_s3UrisHasBeenSet = true;
    m_s3Uris = std::forward<S3UrisT>(value);
  }
  template <typename S3UrisT = Aws::Vector<AIAdapterS3Entry>>
  AIAdapterSource& WithS3Uris(S3UrisT&& value) {
    SetS3Uris(std::forward<S3UrisT>(value));
    return *this;
  }
  template <typename S3UrisT = AIAdapterS3Entry>
  AIAdapterSource& AddS3Uris(S3UrisT&& value) {
    m_s3UrisHasBeenSet = true;
    m_s3Uris.emplace_back(std::forward<S3UrisT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AIAdapterModelPackageEntry> m_modelPackageArns;

  Aws::Vector<AIAdapterS3Entry> m_s3Uris;
  bool m_modelPackageArnsHasBeenSet = false;
  bool m_s3UrisHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
