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
  class CreateEndpointConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateEndpointConfigResult() = default;
    AWS_SAGEMAKER_API CreateEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline const Aws::String& GetEndpointConfigArn() const { return m_endpointConfigArn; }
    template<typename EndpointConfigArnT = Aws::String>
    void SetEndpointConfigArn(EndpointConfigArnT&& value) { m_endpointConfigArnHasBeenSet = true; m_endpointConfigArn = std::forward<EndpointConfigArnT>(value); }
    template<typename EndpointConfigArnT = Aws::String>
    CreateEndpointConfigResult& WithEndpointConfigArn(EndpointConfigArnT&& value) { SetEndpointConfigArn(std::forward<EndpointConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEndpointConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointConfigArn;
    bool m_endpointConfigArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
