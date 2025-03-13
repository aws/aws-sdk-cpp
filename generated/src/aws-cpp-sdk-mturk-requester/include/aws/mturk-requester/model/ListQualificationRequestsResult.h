/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/QualificationRequest.h>
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
  class ListQualificationRequestsResult
  {
  public:
    AWS_MTURK_API ListQualificationRequestsResult() = default;
    AWS_MTURK_API ListQualificationRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListQualificationRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of Qualification requests on this page in the filtered results
     * list, equivalent to the number of Qualification requests being returned by this
     * call.</p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline ListQualificationRequestsResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQualificationRequestsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline const Aws::Vector<QualificationRequest>& GetQualificationRequests() const { return m_qualificationRequests; }
    template<typename QualificationRequestsT = Aws::Vector<QualificationRequest>>
    void SetQualificationRequests(QualificationRequestsT&& value) { m_qualificationRequestsHasBeenSet = true; m_qualificationRequests = std::forward<QualificationRequestsT>(value); }
    template<typename QualificationRequestsT = Aws::Vector<QualificationRequest>>
    ListQualificationRequestsResult& WithQualificationRequests(QualificationRequestsT&& value) { SetQualificationRequests(std::forward<QualificationRequestsT>(value)); return *this;}
    template<typename QualificationRequestsT = QualificationRequest>
    ListQualificationRequestsResult& AddQualificationRequests(QualificationRequestsT&& value) { m_qualificationRequestsHasBeenSet = true; m_qualificationRequests.emplace_back(std::forward<QualificationRequestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQualificationRequestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_numResults{0};
    bool m_numResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<QualificationRequest> m_qualificationRequests;
    bool m_qualificationRequestsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
