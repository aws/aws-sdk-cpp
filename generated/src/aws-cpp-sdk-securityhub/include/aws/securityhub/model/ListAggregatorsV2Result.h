/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AggregatorV2.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListAggregatorsV2Result
  {
  public:
    AWS_SECURITYHUB_API ListAggregatorsV2Result() = default;
    AWS_SECURITYHUB_API ListAggregatorsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListAggregatorsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of aggregators.</p>
     */
    inline const Aws::Vector<AggregatorV2>& GetAggregatorsV2() const { return m_aggregatorsV2; }
    template<typename AggregatorsV2T = Aws::Vector<AggregatorV2>>
    void SetAggregatorsV2(AggregatorsV2T&& value) { m_aggregatorsV2HasBeenSet = true; m_aggregatorsV2 = std::forward<AggregatorsV2T>(value); }
    template<typename AggregatorsV2T = Aws::Vector<AggregatorV2>>
    ListAggregatorsV2Result& WithAggregatorsV2(AggregatorsV2T&& value) { SetAggregatorsV2(std::forward<AggregatorsV2T>(value)); return *this;}
    template<typename AggregatorsV2T = AggregatorV2>
    ListAggregatorsV2Result& AddAggregatorsV2(AggregatorsV2T&& value) { m_aggregatorsV2HasBeenSet = true; m_aggregatorsV2.emplace_back(std::forward<AggregatorsV2T>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results. Otherwise,
     * this parameter is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAggregatorsV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAggregatorsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregatorV2> m_aggregatorsV2;
    bool m_aggregatorsV2HasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
