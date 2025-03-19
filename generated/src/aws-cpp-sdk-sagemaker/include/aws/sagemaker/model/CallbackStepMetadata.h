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
    AWS_SAGEMAKER_API CallbackStepMetadata() = default;
    AWS_SAGEMAKER_API CallbackStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CallbackStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline const Aws::String& GetCallbackToken() const { return m_callbackToken; }
    inline bool CallbackTokenHasBeenSet() const { return m_callbackTokenHasBeenSet; }
    template<typename CallbackTokenT = Aws::String>
    void SetCallbackToken(CallbackTokenT&& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = std::forward<CallbackTokenT>(value); }
    template<typename CallbackTokenT = Aws::String>
    CallbackStepMetadata& WithCallbackToken(CallbackTokenT&& value) { SetCallbackToken(std::forward<CallbackTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon Simple Queue Service (Amazon SQS) queue used by the
     * callback step.</p>
     */
    inline const Aws::String& GetSqsQueueUrl() const { return m_sqsQueueUrl; }
    inline bool SqsQueueUrlHasBeenSet() const { return m_sqsQueueUrlHasBeenSet; }
    template<typename SqsQueueUrlT = Aws::String>
    void SetSqsQueueUrl(SqsQueueUrlT&& value) { m_sqsQueueUrlHasBeenSet = true; m_sqsQueueUrl = std::forward<SqsQueueUrlT>(value); }
    template<typename SqsQueueUrlT = Aws::String>
    CallbackStepMetadata& WithSqsQueueUrl(SqsQueueUrlT&& value) { SetSqsQueueUrl(std::forward<SqsQueueUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the output parameters of the callback step.</p>
     */
    inline const Aws::Vector<OutputParameter>& GetOutputParameters() const { return m_outputParameters; }
    inline bool OutputParametersHasBeenSet() const { return m_outputParametersHasBeenSet; }
    template<typename OutputParametersT = Aws::Vector<OutputParameter>>
    void SetOutputParameters(OutputParametersT&& value) { m_outputParametersHasBeenSet = true; m_outputParameters = std::forward<OutputParametersT>(value); }
    template<typename OutputParametersT = Aws::Vector<OutputParameter>>
    CallbackStepMetadata& WithOutputParameters(OutputParametersT&& value) { SetOutputParameters(std::forward<OutputParametersT>(value)); return *this;}
    template<typename OutputParametersT = OutputParameter>
    CallbackStepMetadata& AddOutputParameters(OutputParametersT&& value) { m_outputParametersHasBeenSet = true; m_outputParameters.emplace_back(std::forward<OutputParametersT>(value)); return *this; }
    ///@}
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
