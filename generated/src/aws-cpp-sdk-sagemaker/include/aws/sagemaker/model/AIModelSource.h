/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIModelSourceS3.h>

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
 * <p>The source of the model for an AI recommendation job. This is a union
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIModelSource">AWS
 * API Reference</a></p>
 */
class AIModelSource {
 public:
  AWS_SAGEMAKER_API AIModelSource() = default;
  AWS_SAGEMAKER_API AIModelSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIModelSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location of the model artifacts.</p>
   */
  inline const AIModelSourceS3& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = AIModelSourceS3>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = AIModelSourceS3>
  AIModelSource& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  AIModelSourceS3 m_s3;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
