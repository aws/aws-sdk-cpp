/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/HIT.h>
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
namespace MTurk
{
namespace Model
{
  class ListReviewableHITsResult
  {
  public:
    AWS_MTURK_API ListReviewableHITsResult() = default;
    AWS_MTURK_API ListReviewableHITsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListReviewableHITsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReviewableHITsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of HITs on this page in the filtered results list, equivalent to
     * the number of HITs being returned by this call. </p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline ListReviewableHITsResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of HIT elements returned by the query.</p>
     */
    inline const Aws::Vector<HIT>& GetHITs() const { return m_hITs; }
    template<typename HITsT = Aws::Vector<HIT>>
    void SetHITs(HITsT&& value) { m_hITsHasBeenSet = true; m_hITs = std::forward<HITsT>(value); }
    template<typename HITsT = Aws::Vector<HIT>>
    ListReviewableHITsResult& WithHITs(HITsT&& value) { SetHITs(std::forward<HITsT>(value)); return *this;}
    template<typename HITsT = HIT>
    ListReviewableHITsResult& AddHITs(HITsT&& value) { m_hITsHasBeenSet = true; m_hITs.emplace_back(std::forward<HITsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReviewableHITsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_numResults{0};
    bool m_numResultsHasBeenSet = false;

    Aws::Vector<HIT> m_hITs;
    bool m_hITsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
