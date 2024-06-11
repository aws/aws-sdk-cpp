/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class SendPipelineExecutionStepFailureRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API SendPipelineExecutionStepFailureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendPipelineExecutionStepFailure"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline const Aws::String& GetCallbackToken() const{ return m_callbackToken; }
    inline bool CallbackTokenHasBeenSet() const { return m_callbackTokenHasBeenSet; }
    inline void SetCallbackToken(const Aws::String& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = value; }
    inline void SetCallbackToken(Aws::String&& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = std::move(value); }
    inline void SetCallbackToken(const char* value) { m_callbackTokenHasBeenSet = true; m_callbackToken.assign(value); }
    inline SendPipelineExecutionStepFailureRequest& WithCallbackToken(const Aws::String& value) { SetCallbackToken(value); return *this;}
    inline SendPipelineExecutionStepFailureRequest& WithCallbackToken(Aws::String&& value) { SetCallbackToken(std::move(value)); return *this;}
    inline SendPipelineExecutionStepFailureRequest& WithCallbackToken(const char* value) { SetCallbackToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing why the step failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline SendPipelineExecutionStepFailureRequest& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline SendPipelineExecutionStepFailureRequest& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline SendPipelineExecutionStepFailureRequest& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline SendPipelineExecutionStepFailureRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline SendPipelineExecutionStepFailureRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline SendPipelineExecutionStepFailureRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_callbackToken;
    bool m_callbackTokenHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
