﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AsyncNotificationTopicTypes.h>
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
   * <p>Specifies the configuration for notifications of inference results for
   * asynchronous inference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AsyncInferenceNotificationConfig">AWS
   * API Reference</a></p>
   */
  class AsyncInferenceNotificationConfig
  {
  public:
    AWS_SAGEMAKER_API AsyncInferenceNotificationConfig();
    AWS_SAGEMAKER_API AsyncInferenceNotificationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AsyncInferenceNotificationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline const Aws::String& GetSuccessTopic() const{ return m_successTopic; }
    inline bool SuccessTopicHasBeenSet() const { return m_successTopicHasBeenSet; }
    inline void SetSuccessTopic(const Aws::String& value) { m_successTopicHasBeenSet = true; m_successTopic = value; }
    inline void SetSuccessTopic(Aws::String&& value) { m_successTopicHasBeenSet = true; m_successTopic = std::move(value); }
    inline void SetSuccessTopic(const char* value) { m_successTopicHasBeenSet = true; m_successTopic.assign(value); }
    inline AsyncInferenceNotificationConfig& WithSuccessTopic(const Aws::String& value) { SetSuccessTopic(value); return *this;}
    inline AsyncInferenceNotificationConfig& WithSuccessTopic(Aws::String&& value) { SetSuccessTopic(std::move(value)); return *this;}
    inline AsyncInferenceNotificationConfig& WithSuccessTopic(const char* value) { SetSuccessTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline const Aws::String& GetErrorTopic() const{ return m_errorTopic; }
    inline bool ErrorTopicHasBeenSet() const { return m_errorTopicHasBeenSet; }
    inline void SetErrorTopic(const Aws::String& value) { m_errorTopicHasBeenSet = true; m_errorTopic = value; }
    inline void SetErrorTopic(Aws::String&& value) { m_errorTopicHasBeenSet = true; m_errorTopic = std::move(value); }
    inline void SetErrorTopic(const char* value) { m_errorTopicHasBeenSet = true; m_errorTopic.assign(value); }
    inline AsyncInferenceNotificationConfig& WithErrorTopic(const Aws::String& value) { SetErrorTopic(value); return *this;}
    inline AsyncInferenceNotificationConfig& WithErrorTopic(Aws::String&& value) { SetErrorTopic(std::move(value)); return *this;}
    inline AsyncInferenceNotificationConfig& WithErrorTopic(const char* value) { SetErrorTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS topics where you want the inference response to be
     * included.</p>  <p>The inference response is included only if the response
     * size is less than or equal to 128 KB.</p> 
     */
    inline const Aws::Vector<AsyncNotificationTopicTypes>& GetIncludeInferenceResponseIn() const{ return m_includeInferenceResponseIn; }
    inline bool IncludeInferenceResponseInHasBeenSet() const { return m_includeInferenceResponseInHasBeenSet; }
    inline void SetIncludeInferenceResponseIn(const Aws::Vector<AsyncNotificationTopicTypes>& value) { m_includeInferenceResponseInHasBeenSet = true; m_includeInferenceResponseIn = value; }
    inline void SetIncludeInferenceResponseIn(Aws::Vector<AsyncNotificationTopicTypes>&& value) { m_includeInferenceResponseInHasBeenSet = true; m_includeInferenceResponseIn = std::move(value); }
    inline AsyncInferenceNotificationConfig& WithIncludeInferenceResponseIn(const Aws::Vector<AsyncNotificationTopicTypes>& value) { SetIncludeInferenceResponseIn(value); return *this;}
    inline AsyncInferenceNotificationConfig& WithIncludeInferenceResponseIn(Aws::Vector<AsyncNotificationTopicTypes>&& value) { SetIncludeInferenceResponseIn(std::move(value)); return *this;}
    inline AsyncInferenceNotificationConfig& AddIncludeInferenceResponseIn(const AsyncNotificationTopicTypes& value) { m_includeInferenceResponseInHasBeenSet = true; m_includeInferenceResponseIn.push_back(value); return *this; }
    inline AsyncInferenceNotificationConfig& AddIncludeInferenceResponseIn(AsyncNotificationTopicTypes&& value) { m_includeInferenceResponseInHasBeenSet = true; m_includeInferenceResponseIn.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_successTopic;
    bool m_successTopicHasBeenSet = false;

    Aws::String m_errorTopic;
    bool m_errorTopicHasBeenSet = false;

    Aws::Vector<AsyncNotificationTopicTypes> m_includeInferenceResponseIn;
    bool m_includeInferenceResponseInHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
