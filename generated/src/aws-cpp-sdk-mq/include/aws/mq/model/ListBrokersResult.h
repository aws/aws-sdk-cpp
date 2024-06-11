﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerSummary.h>
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
namespace MQ
{
namespace Model
{
  class ListBrokersResult
  {
  public:
    AWS_MQ_API ListBrokersResult();
    AWS_MQ_API ListBrokersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API ListBrokersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of information about all brokers.</p>
     */
    inline const Aws::Vector<BrokerSummary>& GetBrokerSummaries() const{ return m_brokerSummaries; }
    inline void SetBrokerSummaries(const Aws::Vector<BrokerSummary>& value) { m_brokerSummaries = value; }
    inline void SetBrokerSummaries(Aws::Vector<BrokerSummary>&& value) { m_brokerSummaries = std::move(value); }
    inline ListBrokersResult& WithBrokerSummaries(const Aws::Vector<BrokerSummary>& value) { SetBrokerSummaries(value); return *this;}
    inline ListBrokersResult& WithBrokerSummaries(Aws::Vector<BrokerSummary>&& value) { SetBrokerSummaries(std::move(value)); return *this;}
    inline ListBrokersResult& AddBrokerSummaries(const BrokerSummary& value) { m_brokerSummaries.push_back(value); return *this; }
    inline ListBrokersResult& AddBrokerSummaries(BrokerSummary&& value) { m_brokerSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBrokersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBrokersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBrokersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBrokersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBrokersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBrokersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BrokerSummary> m_brokerSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
