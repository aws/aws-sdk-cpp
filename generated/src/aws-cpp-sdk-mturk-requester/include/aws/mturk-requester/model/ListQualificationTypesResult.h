/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/QualificationType.h>
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
  class ListQualificationTypesResult
  {
  public:
    AWS_MTURK_API ListQualificationTypesResult() = default;
    AWS_MTURK_API ListQualificationTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListQualificationTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The number of Qualification types on this page in the filtered results list,
     * equivalent to the number of types this operation returns. </p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline ListQualificationTypesResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQualificationTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of QualificationType elements returned by the query. </p>
     */
    inline const Aws::Vector<QualificationType>& GetQualificationTypes() const { return m_qualificationTypes; }
    template<typename QualificationTypesT = Aws::Vector<QualificationType>>
    void SetQualificationTypes(QualificationTypesT&& value) { m_qualificationTypesHasBeenSet = true; m_qualificationTypes = std::forward<QualificationTypesT>(value); }
    template<typename QualificationTypesT = Aws::Vector<QualificationType>>
    ListQualificationTypesResult& WithQualificationTypes(QualificationTypesT&& value) { SetQualificationTypes(std::forward<QualificationTypesT>(value)); return *this;}
    template<typename QualificationTypesT = QualificationType>
    ListQualificationTypesResult& AddQualificationTypes(QualificationTypesT&& value) { m_qualificationTypesHasBeenSet = true; m_qualificationTypes.emplace_back(std::forward<QualificationTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQualificationTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_numResults{0};
    bool m_numResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<QualificationType> m_qualificationTypes;
    bool m_qualificationTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
