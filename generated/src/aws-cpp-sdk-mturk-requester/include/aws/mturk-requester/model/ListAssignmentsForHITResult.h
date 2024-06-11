﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/Assignment.h>
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
  class ListAssignmentsForHITResult
  {
  public:
    AWS_MTURK_API ListAssignmentsForHITResult();
    AWS_MTURK_API ListAssignmentsForHITResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListAssignmentsForHITResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssignmentsForHITResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssignmentsForHITResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssignmentsForHITResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of assignments on the page in the filtered results list,
     * equivalent to the number of assignments returned by this call.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline void SetNumResults(int value) { m_numResults = value; }
    inline ListAssignmentsForHITResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The collection of Assignment data structures returned by this call.</p>
     */
    inline const Aws::Vector<Assignment>& GetAssignments() const{ return m_assignments; }
    inline void SetAssignments(const Aws::Vector<Assignment>& value) { m_assignments = value; }
    inline void SetAssignments(Aws::Vector<Assignment>&& value) { m_assignments = std::move(value); }
    inline ListAssignmentsForHITResult& WithAssignments(const Aws::Vector<Assignment>& value) { SetAssignments(value); return *this;}
    inline ListAssignmentsForHITResult& WithAssignments(Aws::Vector<Assignment>&& value) { SetAssignments(std::move(value)); return *this;}
    inline ListAssignmentsForHITResult& AddAssignments(const Assignment& value) { m_assignments.push_back(value); return *this; }
    inline ListAssignmentsForHITResult& AddAssignments(Assignment&& value) { m_assignments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssignmentsForHITResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssignmentsForHITResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssignmentsForHITResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    int m_numResults;

    Aws::Vector<Assignment> m_assignments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
