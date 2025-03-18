/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerInstanceOption.h>
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
  class DescribeBrokerInstanceOptionsResult
  {
  public:
    AWS_MQ_API DescribeBrokerInstanceOptionsResult() = default;
    AWS_MQ_API DescribeBrokerInstanceOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeBrokerInstanceOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of available broker instance options.</p>
     */
    inline const Aws::Vector<BrokerInstanceOption>& GetBrokerInstanceOptions() const { return m_brokerInstanceOptions; }
    template<typename BrokerInstanceOptionsT = Aws::Vector<BrokerInstanceOption>>
    void SetBrokerInstanceOptions(BrokerInstanceOptionsT&& value) { m_brokerInstanceOptionsHasBeenSet = true; m_brokerInstanceOptions = std::forward<BrokerInstanceOptionsT>(value); }
    template<typename BrokerInstanceOptionsT = Aws::Vector<BrokerInstanceOption>>
    DescribeBrokerInstanceOptionsResult& WithBrokerInstanceOptions(BrokerInstanceOptionsT&& value) { SetBrokerInstanceOptions(std::forward<BrokerInstanceOptionsT>(value)); return *this;}
    template<typename BrokerInstanceOptionsT = BrokerInstanceOption>
    DescribeBrokerInstanceOptionsResult& AddBrokerInstanceOptions(BrokerInstanceOptionsT&& value) { m_brokerInstanceOptionsHasBeenSet = true; m_brokerInstanceOptions.emplace_back(std::forward<BrokerInstanceOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Required. The maximum number of instance options that can be returned per
     * page (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeBrokerInstanceOptionsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeBrokerInstanceOptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBrokerInstanceOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BrokerInstanceOption> m_brokerInstanceOptions;
    bool m_brokerInstanceOptionsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
