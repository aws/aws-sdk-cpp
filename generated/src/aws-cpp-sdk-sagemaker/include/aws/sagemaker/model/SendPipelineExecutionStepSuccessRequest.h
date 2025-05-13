/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputParameter.h>
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
  class SendPipelineExecutionStepSuccessRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendPipelineExecutionStepSuccess"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The pipeline generated token from the Amazon SQS queue.</p>
     */
    inline const Aws::String& GetCallbackToken() const { return m_callbackToken; }
    inline bool CallbackTokenHasBeenSet() const { return m_callbackTokenHasBeenSet; }
    template<typename CallbackTokenT = Aws::String>
    void SetCallbackToken(CallbackTokenT&& value) { m_callbackTokenHasBeenSet = true; m_callbackToken = std::forward<CallbackTokenT>(value); }
    template<typename CallbackTokenT = Aws::String>
    SendPipelineExecutionStepSuccessRequest& WithCallbackToken(CallbackTokenT&& value) { SetCallbackToken(std::forward<CallbackTokenT>(value)); return *this;}
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
    SendPipelineExecutionStepSuccessRequest& WithOutputParameters(OutputParametersT&& value) { SetOutputParameters(std::forward<OutputParametersT>(value)); return *this;}
    template<typename OutputParametersT = OutputParameter>
    SendPipelineExecutionStepSuccessRequest& AddOutputParameters(OutputParametersT&& value) { m_outputParametersHasBeenSet = true; m_outputParameters.emplace_back(std::forward<OutputParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    SendPipelineExecutionStepSuccessRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_callbackToken;
    bool m_callbackTokenHasBeenSet = false;

    Aws::Vector<OutputParameter> m_outputParameters;
    bool m_outputParametersHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
