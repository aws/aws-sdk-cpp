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
 * <p>A LoRA adapter entry identified by an Amazon S3 URI.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIAdapterS3Entry">AWS
 * API Reference</a></p>
 */
class AIAdapterS3Entry {
 public:
  AWS_SAGEMAKER_API AIAdapterS3Entry() = default;
  AWS_SAGEMAKER_API AIAdapterS3Entry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIAdapterS3Entry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AIAdapterS3Entry& WithAdapterId(AdapterIdT&& value) {
    SetAdapterId(std::forward<AdapterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 URI of the directory that contains the LoRA adapter artifacts
   * in PEFT format.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  AIAdapterS3Entry& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_adapterId;

  Aws::String m_s3Uri;
  bool m_adapterIdHasBeenSet = false;
  bool m_s3UriHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
