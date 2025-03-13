/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AsyncInferenceNotificationConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies the configuration for asynchronous inference invocation
   * outputs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AsyncInferenceOutputConfig">AWS
   * API Reference</a></p>
   */
  class AsyncInferenceOutputConfig
  {
  public:
    AWS_SAGEMAKER_API AsyncInferenceOutputConfig() = default;
    AWS_SAGEMAKER_API AsyncInferenceOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AsyncInferenceOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the asynchronous inference output in Amazon
     * S3.</p> <p/>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    AsyncInferenceOutputConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location to upload inference responses to.</p>
     */
    inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    template<typename S3OutputPathT = Aws::String>
    void SetS3OutputPath(S3OutputPathT&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::forward<S3OutputPathT>(value); }
    template<typename S3OutputPathT = Aws::String>
    AsyncInferenceOutputConfig& WithS3OutputPath(S3OutputPathT&& value) { SetS3OutputPath(std::forward<S3OutputPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for notifications of inference results for
     * asynchronous inference.</p>
     */
    inline const AsyncInferenceNotificationConfig& GetNotificationConfig() const { return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    template<typename NotificationConfigT = AsyncInferenceNotificationConfig>
    void SetNotificationConfig(NotificationConfigT&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::forward<NotificationConfigT>(value); }
    template<typename NotificationConfigT = AsyncInferenceNotificationConfig>
    AsyncInferenceOutputConfig& WithNotificationConfig(NotificationConfigT&& value) { SetNotificationConfig(std::forward<NotificationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location to upload failure inference responses to.</p>
     */
    inline const Aws::String& GetS3FailurePath() const { return m_s3FailurePath; }
    inline bool S3FailurePathHasBeenSet() const { return m_s3FailurePathHasBeenSet; }
    template<typename S3FailurePathT = Aws::String>
    void SetS3FailurePath(S3FailurePathT&& value) { m_s3FailurePathHasBeenSet = true; m_s3FailurePath = std::forward<S3FailurePathT>(value); }
    template<typename S3FailurePathT = Aws::String>
    AsyncInferenceOutputConfig& WithS3FailurePath(S3FailurePathT&& value) { SetS3FailurePath(std::forward<S3FailurePathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet = false;

    AsyncInferenceNotificationConfig m_notificationConfig;
    bool m_notificationConfigHasBeenSet = false;

    Aws::String m_s3FailurePath;
    bool m_s3FailurePathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
