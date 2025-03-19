/**
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
    AWS_MQ_API ListBrokersResult() = default;
    AWS_MQ_API ListBrokersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API ListBrokersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of information about all brokers.</p>
     */
    inline const Aws::Vector<BrokerSummary>& GetBrokerSummaries() const { return m_brokerSummaries; }
    template<typename BrokerSummariesT = Aws::Vector<BrokerSummary>>
    void SetBrokerSummaries(BrokerSummariesT&& value) { m_brokerSummariesHasBeenSet = true; m_brokerSummaries = std::forward<BrokerSummariesT>(value); }
    template<typename BrokerSummariesT = Aws::Vector<BrokerSummary>>
    ListBrokersResult& WithBrokerSummaries(BrokerSummariesT&& value) { SetBrokerSummaries(std::forward<BrokerSummariesT>(value)); return *this;}
    template<typename BrokerSummariesT = BrokerSummary>
    ListBrokersResult& AddBrokerSummaries(BrokerSummariesT&& value) { m_brokerSummariesHasBeenSet = true; m_brokerSummaries.emplace_back(std::forward<BrokerSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBrokersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBrokersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BrokerSummary> m_brokerSummaries;
    bool m_brokerSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
