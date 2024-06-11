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
    AWS_SAGEMAKER_API AsyncInferenceOutputConfig();
    AWS_SAGEMAKER_API AsyncInferenceOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AsyncInferenceOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the asynchronous inference output in Amazon
     * S3.</p> <p/>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline AsyncInferenceOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline AsyncInferenceOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline AsyncInferenceOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location to upload inference responses to.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }
    inline AsyncInferenceOutputConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}
    inline AsyncInferenceOutputConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}
    inline AsyncInferenceOutputConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration for notifications of inference results for
     * asynchronous inference.</p>
     */
    inline const AsyncInferenceNotificationConfig& GetNotificationConfig() const{ return m_notificationConfig; }
    inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
    inline void SetNotificationConfig(const AsyncInferenceNotificationConfig& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = value; }
    inline void SetNotificationConfig(AsyncInferenceNotificationConfig&& value) { m_notificationConfigHasBeenSet = true; m_notificationConfig = std::move(value); }
    inline AsyncInferenceOutputConfig& WithNotificationConfig(const AsyncInferenceNotificationConfig& value) { SetNotificationConfig(value); return *this;}
    inline AsyncInferenceOutputConfig& WithNotificationConfig(AsyncInferenceNotificationConfig&& value) { SetNotificationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location to upload failure inference responses to.</p>
     */
    inline const Aws::String& GetS3FailurePath() const{ return m_s3FailurePath; }
    inline bool S3FailurePathHasBeenSet() const { return m_s3FailurePathHasBeenSet; }
    inline void SetS3FailurePath(const Aws::String& value) { m_s3FailurePathHasBeenSet = true; m_s3FailurePath = value; }
    inline void SetS3FailurePath(Aws::String&& value) { m_s3FailurePathHasBeenSet = true; m_s3FailurePath = std::move(value); }
    inline void SetS3FailurePath(const char* value) { m_s3FailurePathHasBeenSet = true; m_s3FailurePath.assign(value); }
    inline AsyncInferenceOutputConfig& WithS3FailurePath(const Aws::String& value) { SetS3FailurePath(value); return *this;}
    inline AsyncInferenceOutputConfig& WithS3FailurePath(Aws::String&& value) { SetS3FailurePath(std::move(value)); return *this;}
    inline AsyncInferenceOutputConfig& WithS3FailurePath(const char* value) { SetS3FailurePath(value); return *this;}
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
