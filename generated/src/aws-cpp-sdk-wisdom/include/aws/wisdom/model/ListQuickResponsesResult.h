/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/QuickResponseSummary.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class ListQuickResponsesResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API ListQuickResponsesResult() = default;
    AWS_CONNECTWISDOMSERVICE_API ListQuickResponsesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API ListQuickResponsesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQuickResponsesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the quick responses.</p>
     */
    inline const Aws::Vector<QuickResponseSummary>& GetQuickResponseSummaries() const { return m_quickResponseSummaries; }
    template<typename QuickResponseSummariesT = Aws::Vector<QuickResponseSummary>>
    void SetQuickResponseSummaries(QuickResponseSummariesT&& value) { m_quickResponseSummariesHasBeenSet = true; m_quickResponseSummaries = std::forward<QuickResponseSummariesT>(value); }
    template<typename QuickResponseSummariesT = Aws::Vector<QuickResponseSummary>>
    ListQuickResponsesResult& WithQuickResponseSummaries(QuickResponseSummariesT&& value) { SetQuickResponseSummaries(std::forward<QuickResponseSummariesT>(value)); return *this;}
    template<typename QuickResponseSummariesT = QuickResponseSummary>
    ListQuickResponsesResult& AddQuickResponseSummaries(QuickResponseSummariesT&& value) { m_quickResponseSummariesHasBeenSet = true; m_quickResponseSummaries.emplace_back(std::forward<QuickResponseSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQuickResponsesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<QuickResponseSummary> m_quickResponseSummaries;
    bool m_quickResponseSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
