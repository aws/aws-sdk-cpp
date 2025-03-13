/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/FindingAggregator.h>
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
  class ListFindingAggregatorsResult
  {
  public:
    AWS_SECURITYHUB_API ListFindingAggregatorsResult() = default;
    AWS_SECURITYHUB_API ListFindingAggregatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListFindingAggregatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of finding aggregators. This operation currently only returns a
     * single result.</p>
     */
    inline const Aws::Vector<FindingAggregator>& GetFindingAggregators() const { return m_findingAggregators; }
    template<typename FindingAggregatorsT = Aws::Vector<FindingAggregator>>
    void SetFindingAggregators(FindingAggregatorsT&& value) { m_findingAggregatorsHasBeenSet = true; m_findingAggregators = std::forward<FindingAggregatorsT>(value); }
    template<typename FindingAggregatorsT = Aws::Vector<FindingAggregator>>
    ListFindingAggregatorsResult& WithFindingAggregators(FindingAggregatorsT&& value) { SetFindingAggregators(std::forward<FindingAggregatorsT>(value)); return *this;}
    template<typename FindingAggregatorsT = FindingAggregator>
    ListFindingAggregatorsResult& AddFindingAggregators(FindingAggregatorsT&& value) { m_findingAggregatorsHasBeenSet = true; m_findingAggregators.emplace_back(std::forward<FindingAggregatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more results, this is the token to provide in the next call to
     * <code>ListFindingAggregators</code>.</p> <p>This operation currently only
     * returns a single result. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFindingAggregatorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFindingAggregatorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FindingAggregator> m_findingAggregators;
    bool m_findingAggregatorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
