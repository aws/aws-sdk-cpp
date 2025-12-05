/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreatePresignedMlflowAppUrlRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreatePresignedMlflowAppUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePresignedMlflowAppUrl"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the MLflow App to connect to your MLflow UI.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreatePresignedMlflowAppUrlRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration in seconds that your presigned URL is valid. The presigned URL
   * can be used only once.</p>
   */
  inline int GetExpiresInSeconds() const { return m_expiresInSeconds; }
  inline bool ExpiresInSecondsHasBeenSet() const { return m_expiresInSecondsHasBeenSet; }
  inline void SetExpiresInSeconds(int value) {
    m_expiresInSecondsHasBeenSet = true;
    m_expiresInSeconds = value;
  }
  inline CreatePresignedMlflowAppUrlRequest& WithExpiresInSeconds(int value) {
    SetExpiresInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration in seconds that your presigned URL is valid. The presigned URL
   * can be used only once.</p>
   */
  inline int GetSessionExpirationDurationInSeconds() const { return m_sessionExpirationDurationInSeconds; }
  inline bool SessionExpirationDurationInSecondsHasBeenSet() const { return m_sessionExpirationDurationInSecondsHasBeenSet; }
  inline void SetSessionExpirationDurationInSeconds(int value) {
    m_sessionExpirationDurationInSecondsHasBeenSet = true;
    m_sessionExpirationDurationInSeconds = value;
  }
  inline CreatePresignedMlflowAppUrlRequest& WithSessionExpirationDurationInSeconds(int value) {
    SetSessionExpirationDurationInSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  int m_expiresInSeconds{0};

  int m_sessionExpirationDurationInSeconds{0};
  bool m_arnHasBeenSet = false;
  bool m_expiresInSecondsHasBeenSet = false;
  bool m_sessionExpirationDurationInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
