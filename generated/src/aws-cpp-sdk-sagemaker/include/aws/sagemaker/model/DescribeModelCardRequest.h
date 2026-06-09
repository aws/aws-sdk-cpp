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
class DescribeModelCardRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DescribeModelCardRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeModelCard"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the model card to describe.</p>
   */
  inline const Aws::String& GetModelCardName() const { return m_modelCardName; }
  inline bool ModelCardNameHasBeenSet() const { return m_modelCardNameHasBeenSet; }
  template <typename ModelCardNameT = Aws::String>
  void SetModelCardName(ModelCardNameT&& value) {
    m_modelCardNameHasBeenSet = true;
    m_modelCardName = std::forward<ModelCardNameT>(value);
  }
  template <typename ModelCardNameT = Aws::String>
  DescribeModelCardRequest& WithModelCardName(ModelCardNameT&& value) {
    SetModelCardName(std::forward<ModelCardNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the model card to describe. If a version is not provided, then
   * the latest version of the model card is described.</p>
   */
  inline int GetModelCardVersion() const { return m_modelCardVersion; }
  inline bool ModelCardVersionHasBeenSet() const { return m_modelCardVersionHasBeenSet; }
  inline void SetModelCardVersion(int value) {
    m_modelCardVersionHasBeenSet = true;
    m_modelCardVersion = value;
  }
  inline DescribeModelCardRequest& WithModelCardVersion(int value) {
    SetModelCardVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the level of model card data to include in the response. Use this
   * parameter to call <code>DescribeModelCard</code> without requiring
   * <code>kms:Decrypt</code> permission on the customer-managed Amazon Web Services
   * KMS key.</p> <ul> <li> <p> <code>AllData</code>: Returns the full model card
   * <code>Content</code>. This option requires <code>kms:Decrypt</code> permission
   * on the customer-managed key, if one is associated with the model card. This is
   * the default.</p> </li> <li> <p> <code>MetadataOnly</code>: Returns the model
   * card with sanitized <code>Content</code> that includes only a small set of
   * unencrypted metadata fields. This option does not require
   * <code>kms:Decrypt</code> permission. For the list of fields preserved in the
   * response, see <code>Content</code>.</p> </li> </ul> <p>If you don't specify a
   * value, SageMaker returns <code>AllData</code>.</p>
   */
  inline IncludedData GetIncludedData() const { return m_includedData; }
  inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
  inline void SetIncludedData(IncludedData value) {
    m_includedDataHasBeenSet = true;
    m_includedData = value;
  }
  inline DescribeModelCardRequest& WithIncludedData(IncludedData value) {
    SetIncludedData(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelCardName;

  int m_modelCardVersion{0};

  IncludedData m_includedData{IncludedData::NOT_SET};
  bool m_modelCardNameHasBeenSet = false;
  bool m_modelCardVersionHasBeenSet = false;
  bool m_includedDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
