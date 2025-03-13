/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class CreateFlowDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API CreateFlowDefinitionResult() = default;
    AWS_SAGEMAKER_API CreateFlowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateFlowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    CreateFlowDefinitionResult& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFlowDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
