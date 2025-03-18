/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/Qualification.h>
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
  class ListWorkersWithQualificationTypeResult
  {
  public:
    AWS_MTURK_API ListWorkersWithQualificationTypeResult() = default;
    AWS_MTURK_API ListWorkersWithQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListWorkersWithQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkersWithQualificationTypeResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of Qualifications on this page in the filtered results list,
     * equivalent to the number of Qualifications being returned by this call.</p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline ListWorkersWithQualificationTypeResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline const Aws::Vector<Qualification>& GetQualifications() const { return m_qualifications; }
    template<typename QualificationsT = Aws::Vector<Qualification>>
    void SetQualifications(QualificationsT&& value) { m_qualificationsHasBeenSet = true; m_qualifications = std::forward<QualificationsT>(value); }
    template<typename QualificationsT = Aws::Vector<Qualification>>
    ListWorkersWithQualificationTypeResult& WithQualifications(QualificationsT&& value) { SetQualifications(std::forward<QualificationsT>(value)); return *this;}
    template<typename QualificationsT = Qualification>
    ListWorkersWithQualificationTypeResult& AddQualifications(QualificationsT&& value) { m_qualificationsHasBeenSet = true; m_qualifications.emplace_back(std::forward<QualificationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkersWithQualificationTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_numResults{0};
    bool m_numResultsHasBeenSet = false;

    Aws::Vector<Qualification> m_qualifications;
    bool m_qualificationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
