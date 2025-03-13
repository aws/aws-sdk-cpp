/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EndpointConfigSummary.h>
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
  class ListEndpointConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListEndpointConfigsResult() = default;
    AWS_SAGEMAKER_API ListEndpointConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListEndpointConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of endpoint configurations.</p>
     */
    inline const Aws::Vector<EndpointConfigSummary>& GetEndpointConfigs() const { return m_endpointConfigs; }
    template<typename EndpointConfigsT = Aws::Vector<EndpointConfigSummary>>
    void SetEndpointConfigs(EndpointConfigsT&& value) { m_endpointConfigsHasBeenSet = true; m_endpointConfigs = std::forward<EndpointConfigsT>(value); }
    template<typename EndpointConfigsT = Aws::Vector<EndpointConfigSummary>>
    ListEndpointConfigsResult& WithEndpointConfigs(EndpointConfigsT&& value) { SetEndpointConfigs(std::forward<EndpointConfigsT>(value)); return *this;}
    template<typename EndpointConfigsT = EndpointConfigSummary>
    ListEndpointConfigsResult& AddEndpointConfigs(EndpointConfigsT&& value) { m_endpointConfigsHasBeenSet = true; m_endpointConfigs.emplace_back(std::forward<EndpointConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of endpoint configurations, use it in the subsequent request </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEndpointConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEndpointConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointConfigSummary> m_endpointConfigs;
    bool m_endpointConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
