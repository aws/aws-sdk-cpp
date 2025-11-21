/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelSpeculativeDecodingS3DataType.h>

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
 * <p>Contains information about the training data source for speculative
 * decoding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelSpeculativeDecodingTrainingDataSource">AWS
 * API Reference</a></p>
 */
class ModelSpeculativeDecodingTrainingDataSource {
 public:
  AWS_SAGEMAKER_API ModelSpeculativeDecodingTrainingDataSource() = default;
  AWS_SAGEMAKER_API ModelSpeculativeDecodingTrainingDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ModelSpeculativeDecodingTrainingDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URI that points to the training data for speculative
   * decoding.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  ModelSpeculativeDecodingTrainingDataSource& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of data stored in the Amazon S3 location. Valid values are
   * <code>S3Prefix</code> or <code>ManifestFile</code>.</p>
   */
  inline ModelSpeculativeDecodingS3DataType GetS3DataType() const { return m_s3DataType; }
  inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }
  inline void SetS3DataType(ModelSpeculativeDecodingS3DataType value) {
    m_s3DataTypeHasBeenSet = true;
    m_s3DataType = value;
  }
  inline ModelSpeculativeDecodingTrainingDataSource& WithS3DataType(ModelSpeculativeDecodingS3DataType value) {
    SetS3DataType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Uri;
  bool m_s3UriHasBeenSet = false;

  ModelSpeculativeDecodingS3DataType m_s3DataType{ModelSpeculativeDecodingS3DataType::NOT_SET};
  bool m_s3DataTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
