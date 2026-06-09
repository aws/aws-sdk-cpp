/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/IncludedData.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class DescribeModelPackageRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DescribeModelPackageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeModelPackage"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the model package to describe.</p>
   * <p>When you specify a name, the name must have 1 to 63 characters. Valid
   * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
   */
  inline const Aws::String& GetModelPackageName() const { return m_modelPackageName; }
  inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
  template <typename ModelPackageNameT = Aws::String>
  void SetModelPackageName(ModelPackageNameT&& value) {
    m_modelPackageNameHasBeenSet = true;
    m_modelPackageName = std::forward<ModelPackageNameT>(value);
  }
  template <typename ModelPackageNameT = Aws::String>
  DescribeModelPackageRequest& WithModelPackageName(ModelPackageNameT&& value) {
    SetModelPackageName(std::forward<ModelPackageNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the level of model package data to include in the response. Use
   * this parameter to call <code>DescribeModelPackage</code> on a model package that
   * has an associated model card without requiring <code>kms:Decrypt</code>
   * permission on the customer-managed KMS key associated with the embedded model
   * card.</p> <ul> <li> <p> <code>AllData</code>: Returns the full model package
   * response, including the unredacted <code>ModelCard.ModelCardContent</code>. This
   * option requires <code>kms:Decrypt</code> permission on the customer-managed key,
   * if one is associated with the embedded model card. This is the default.</p>
   * </li> <li> <p> <code>MetadataOnly</code>: Returns the full model package
   * response, but with the embedded <code>ModelCard.ModelCardContent</code>
   * sanitized to include only a small set of unencrypted metadata fields. This
   * option does not require <code>kms:Decrypt</code> permission. All other top-level
   * response fields, including <code>InferenceSpecification</code>,
   * <code>ModelMetrics</code>, <code>DriftCheckBaselines</code>, and
   * <code>SecurityConfig</code>, are returned unchanged. For the list of fields
   * preserved within <code>ModelCardContent</code>, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DescribeModelPackage.html#sagemaker-DescribeModelPackage-response-ModelCard">ModelCard</a>.</p>
   * </li> </ul> <p>If you don't specify a value, SageMaker returns
   * <code>AllData</code>.</p>
   */
  inline IncludedData GetIncludedData() const { return m_includedData; }
  inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
  inline void SetIncludedData(IncludedData value) {
    m_includedDataHasBeenSet = true;
    m_includedData = value;
  }
  inline DescribeModelPackageRequest& WithIncludedData(IncludedData value) {
    SetIncludedData(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelPackageName;

  IncludedData m_includedData{IncludedData::NOT_SET};
  bool m_modelPackageNameHasBeenSet = false;
  bool m_includedDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
