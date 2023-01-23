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
    AWS_MTURK_API ListQualificationRequestsResult();
    AWS_MTURK_API ListQualificationRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListQualificationRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of Qualification requests on this page in the filtered results
     * list, equivalent to the number of Qualification requests being returned by this
     * call.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }

    /**
     * <p>The number of Qualification requests on this page in the filtered results
     * list, equivalent to the number of Qualification requests being returned by this
     * call.</p>
     */
    inline void SetNumResults(int value) { m_numResults = value; }

    /**
     * <p>The number of Qualification requests on this page in the filtered results
     * list, equivalent to the number of Qualification requests being returned by this
     * call.</p>
     */
    inline ListQualificationRequestsResult& WithNumResults(int value) { SetNumResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListQualificationRequestsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListQualificationRequestsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListQualificationRequestsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline const Aws::Vector<QualificationRequest>& GetQualificationRequests() const{ return m_qualificationRequests; }

    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline void SetQualificationRequests(const Aws::Vector<QualificationRequest>& value) { m_qualificationRequests = value; }

    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline void SetQualificationRequests(Aws::Vector<QualificationRequest>&& value) { m_qualificationRequests = std::move(value); }

    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline ListQualificationRequestsResult& WithQualificationRequests(const Aws::Vector<QualificationRequest>& value) { SetQualificationRequests(value); return *this;}

    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline ListQualificationRequestsResult& WithQualificationRequests(Aws::Vector<QualificationRequest>&& value) { SetQualificationRequests(std::move(value)); return *this;}

    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline ListQualificationRequestsResult& AddQualificationRequests(const QualificationRequest& value) { m_qualificationRequests.push_back(value); return *this; }

    /**
     * <p>The Qualification request. The response includes one QualificationRequest
     * element for each Qualification request returned by the query.</p>
     */
    inline ListQualificationRequestsResult& AddQualificationRequests(QualificationRequest&& value) { m_qualificationRequests.push_back(std::move(value)); return *this; }

  private:

    int m_numResults;

    Aws::String m_nextToken;

    Aws::Vector<QualificationRequest> m_qualificationRequests;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
