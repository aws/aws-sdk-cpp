/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/IndexMode.h>

#include <utility>

namespace Aws {
namespace S3Vectors {
namespace Model {

/**
 */
class PutVectorBucketDefaultIndexModeRequest : public S3VectorsRequest {
 public:
  AWS_S3VECTORS_API PutVectorBucketDefaultIndexModeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutVectorBucketDefaultIndexMode"; }

  AWS_S3VECTORS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the vector bucket to update.</p>
   */
  inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
  inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
  template <typename VectorBucketNameT = Aws::String>
  void SetVectorBucketName(VectorBucketNameT&& value) {
    m_vectorBucketNameHasBeenSet = true;
    m_vectorBucketName = std::forward<VectorBucketNameT>(value);
  }
  template <typename VectorBucketNameT = Aws::String>
  PutVectorBucketDefaultIndexModeRequest& WithVectorBucketName(VectorBucketNameT&& value) {
    SetVectorBucketName(std::forward<VectorBucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the vector bucket to update.</p>
   */
  inline const Aws::String& GetVectorBucketArn() const { return m_vectorBucketArn; }
  inline bool VectorBucketArnHasBeenSet() const { return m_vectorBucketArnHasBeenSet; }
  template <typename VectorBucketArnT = Aws::String>
  void SetVectorBucketArn(VectorBucketArnT&& value) {
    m_vectorBucketArnHasBeenSet = true;
    m_vectorBucketArn = std::forward<VectorBucketArnT>(value);
  }
  template <typename VectorBucketArnT = Aws::String>
  PutVectorBucketDefaultIndexModeRequest& WithVectorBucketArn(VectorBucketArnT&& value) {
    SetVectorBucketArn(std::forward<VectorBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default mode to assign to new vector indexes in the vector bucket. This
   * change doesn't affect existing vector indexes.</p>
   */
  inline IndexMode GetDefaultIndexMode() const { return m_defaultIndexMode; }
  inline bool DefaultIndexModeHasBeenSet() const { return m_defaultIndexModeHasBeenSet; }
  inline void SetDefaultIndexMode(IndexMode value) {
    m_defaultIndexModeHasBeenSet = true;
    m_defaultIndexMode = value;
  }
  inline PutVectorBucketDefaultIndexModeRequest& WithDefaultIndexMode(IndexMode value) {
    SetDefaultIndexMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_vectorBucketName;

  Aws::String m_vectorBucketArn;

  IndexMode m_defaultIndexMode{IndexMode::NOT_SET};
  bool m_vectorBucketNameHasBeenSet = false;
  bool m_vectorBucketArnHasBeenSet = false;
  bool m_defaultIndexModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
