﻿/**
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
    AWS_SAGEMAKER_API ListEndpointConfigsResult();
    AWS_SAGEMAKER_API ListEndpointConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListEndpointConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of endpoint configurations.</p>
     */
    inline const Aws::Vector<EndpointConfigSummary>& GetEndpointConfigs() const{ return m_endpointConfigs; }
    inline void SetEndpointConfigs(const Aws::Vector<EndpointConfigSummary>& value) { m_endpointConfigs = value; }
    inline void SetEndpointConfigs(Aws::Vector<EndpointConfigSummary>&& value) { m_endpointConfigs = std::move(value); }
    inline ListEndpointConfigsResult& WithEndpointConfigs(const Aws::Vector<EndpointConfigSummary>& value) { SetEndpointConfigs(value); return *this;}
    inline ListEndpointConfigsResult& WithEndpointConfigs(Aws::Vector<EndpointConfigSummary>&& value) { SetEndpointConfigs(std::move(value)); return *this;}
    inline ListEndpointConfigsResult& AddEndpointConfigs(const EndpointConfigSummary& value) { m_endpointConfigs.push_back(value); return *this; }
    inline ListEndpointConfigsResult& AddEndpointConfigs(EndpointConfigSummary&& value) { m_endpointConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of endpoint configurations, use it in the subsequent request </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEndpointConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEndpointConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEndpointConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEndpointConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEndpointConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEndpointConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointConfigSummary> m_endpointConfigs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
