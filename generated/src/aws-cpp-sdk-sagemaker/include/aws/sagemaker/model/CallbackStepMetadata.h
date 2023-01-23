/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputParameter.h>
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
   * <p>Metadata about a callback step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CallbackStepMetadata">AWS
   * API Reference</a></p>
   */
  class CallbackStepMetadata
  {
  public:
    AWS_SAGEMAKER_API CallbackStepMetadata();
    AWS_SAGEMAKER_API CallbackStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CallbackStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline const Aws::String& GetCallbackToken() const{ return m_callbackToken; }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline bool CallbackTokenHasBeenSet() const { return m_callbackTokenHasBeenSet; }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline void SetCallbackToken(const Aws::String& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = value; }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline void SetCallbackToken(Aws::String&& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = std::move(value); }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline void SetCallbackToken(const char* value) { m_callbackTokenHasBeenSet = true; m_callbackToken.assign(value); }

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline CallbackStepMetadata& WithCallbackToken(const Aws::String& value) { SetCallbackToken(value); return *this;}

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline CallbackStepMetadata& WithCallbackToken(Aws::String&& value) { SetCallbackToken(std::move(value)); return *this;}

    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline CallbackStepMetadata& WithCallbackToken(const char* value) { SetCallbackToken(value); return *this;}


    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline const Aws::String& GetSqsQueueUrl() const{ return m_sqsQueueUrl; }

    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline bool SqsQueueUrlHasBeenSet() const { return m_sqsQueueUrlHasBeenSet; }

    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline void SetSqsQueueUrl(const Aws::String& value) { m_sqsQueueUrlHasBeenSet = true; m_sqsQueueUrl = value; }

    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline void SetSqsQueueUrl(Aws::String&& value) { m_sqsQueueUrlHasBeenSet = true; m_sqsQueueUrl = std::move(value); }

    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline void SetSqsQueueUrl(const char* value) { m_sqsQueueUrlHasBeenSet = true; m_sqsQueueUrl.assign(value); }

    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline CallbackStepMetadata& WithSqsQueueUrl(const Aws::String& value) { SetSqsQueueUrl(value); return *this;}

    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline CallbackStepMetadata& WithSqsQueueUrl(Aws::String&& value) { SetSqsQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline CallbackStepMetadata& WithSqsQueueUrl(const char* value) { SetSqsQueueUrl(value); return *this;}


    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline const Aws::Vector<OutputParameter>& GetOutputParameters() const{ return m_outputParameters; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline bool OutputParametersHasBeenSet() const { return m_outputParametersHasBeenSet; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline void SetOutputParameters(const Aws::Vector<OutputParameter>& value) { m_outputParametersHasBeenSet = true; m_outputParameters = value; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline void SetOutputParameters(Aws::Vector<OutputParameter>&& value) { m_outputParametersHasBeenSet = true; m_outputParameters = std::move(value); }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline CallbackStepMetadata& WithOutputParameters(const Aws::Vector<OutputParameter>& value) { SetOutputParameters(value); return *this;}

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline CallbackStepMetadata& WithOutputParameters(Aws::Vector<OutputParameter>&& value) { SetOutputParameters(std::move(value)); return *this;}

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline CallbackStepMetadata& AddOutputParameters(const OutputParameter& value) { m_outputParametersHasBeenSet = true; m_outputParameters.push_back(value); return *this; }

    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline CallbackStepMetadata& AddOutputParameters(OutputParameter&& value) { m_outputParametersHasBeenSet = true; m_outputParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_callbackToken;
    bool m_callbackTokenHasBeenSet = false;

    Aws::String m_sqsQueueUrl;
    bool m_sqsQueueUrlHasBeenSet = false;

    Aws::Vector<OutputParameter> m_outputParameters;
    bool m_outputParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
