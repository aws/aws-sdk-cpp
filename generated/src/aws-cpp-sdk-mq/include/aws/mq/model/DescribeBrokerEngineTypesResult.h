/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerEngineType.h>
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
  class DescribeBrokerEngineTypesResult
  {
  public:
    AWS_MQ_API DescribeBrokerEngineTypesResult() = default;
    AWS_MQ_API DescribeBrokerEngineTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API DescribeBrokerEngineTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of available engine types and versions.</p>
     */
    inline const Aws::Vector<BrokerEngineType>& GetBrokerEngineTypes() const { return m_brokerEngineTypes; }
    template<typename BrokerEngineTypesT = Aws::Vector<BrokerEngineType>>
    void SetBrokerEngineTypes(BrokerEngineTypesT&& value) { m_brokerEngineTypesHasBeenSet = true; m_brokerEngineTypes = std::forward<BrokerEngineTypesT>(value); }
    template<typename BrokerEngineTypesT = Aws::Vector<BrokerEngineType>>
    DescribeBrokerEngineTypesResult& WithBrokerEngineTypes(BrokerEngineTypesT&& value) { SetBrokerEngineTypes(std::forward<BrokerEngineTypesT>(value)); return *this;}
    template<typename BrokerEngineTypesT = BrokerEngineType>
    DescribeBrokerEngineTypesResult& AddBrokerEngineTypes(BrokerEngineTypesT&& value) { m_brokerEngineTypesHasBeenSet = true; m_brokerEngineTypes.emplace_back(std::forward<BrokerEngineTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Required. The maximum number of engine types that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeBrokerEngineTypesResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeBrokerEngineTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBrokerEngineTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BrokerEngineType> m_brokerEngineTypes;
    bool m_brokerEngineTypesHasBeenSet = false;

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
