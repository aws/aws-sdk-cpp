/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreatePartnerAppPresignedUrlRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreatePartnerAppPresignedUrlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePartnerAppPresignedUrl"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the SageMaker Partner AI App to create the presigned URL for.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CreatePartnerAppPresignedUrlRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreatePartnerAppPresignedUrlRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreatePartnerAppPresignedUrlRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that will pass before the presigned URL expires.</p>
     */
    inline int GetExpiresInSeconds() const{ return m_expiresInSeconds; }
    inline bool ExpiresInSecondsHasBeenSet() const { return m_expiresInSecondsHasBeenSet; }
    inline void SetExpiresInSeconds(int value) { m_expiresInSecondsHasBeenSet = true; m_expiresInSeconds = value; }
    inline CreatePartnerAppPresignedUrlRequest& WithExpiresInSeconds(int value) { SetExpiresInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how long the Amazon SageMaker Partner AI App session can be
     * accessed for after logging in.</p>
     */
    inline int GetSessionExpirationDurationInSeconds() const{ return m_sessionExpirationDurationInSeconds; }
    inline bool SessionExpirationDurationInSecondsHasBeenSet() const { return m_sessionExpirationDurationInSecondsHasBeenSet; }
    inline void SetSessionExpirationDurationInSeconds(int value) { m_sessionExpirationDurationInSecondsHasBeenSet = true; m_sessionExpirationDurationInSeconds = value; }
    inline CreatePartnerAppPresignedUrlRequest& WithSessionExpirationDurationInSeconds(int value) { SetSessionExpirationDurationInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_expiresInSeconds;
    bool m_expiresInSecondsHasBeenSet = false;

    int m_sessionExpirationDurationInSeconds;
    bool m_sessionExpirationDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
