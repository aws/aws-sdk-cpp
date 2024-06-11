/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/IAMPolicyAssignmentSummary.h>
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
namespace QuickSight
{
namespace Model
{
  class ListIAMPolicyAssignmentsResult
  {
  public:
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsResult();
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information describing the IAM policy assignments.</p>
     */
    inline const Aws::Vector<IAMPolicyAssignmentSummary>& GetIAMPolicyAssignments() const{ return m_iAMPolicyAssignments; }
    inline void SetIAMPolicyAssignments(const Aws::Vector<IAMPolicyAssignmentSummary>& value) { m_iAMPolicyAssignments = value; }
    inline void SetIAMPolicyAssignments(Aws::Vector<IAMPolicyAssignmentSummary>&& value) { m_iAMPolicyAssignments = std::move(value); }
    inline ListIAMPolicyAssignmentsResult& WithIAMPolicyAssignments(const Aws::Vector<IAMPolicyAssignmentSummary>& value) { SetIAMPolicyAssignments(value); return *this;}
    inline ListIAMPolicyAssignmentsResult& WithIAMPolicyAssignments(Aws::Vector<IAMPolicyAssignmentSummary>&& value) { SetIAMPolicyAssignments(std::move(value)); return *this;}
    inline ListIAMPolicyAssignmentsResult& AddIAMPolicyAssignments(const IAMPolicyAssignmentSummary& value) { m_iAMPolicyAssignments.push_back(value); return *this; }
    inline ListIAMPolicyAssignmentsResult& AddIAMPolicyAssignments(IAMPolicyAssignmentSummary&& value) { m_iAMPolicyAssignments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIAMPolicyAssignmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIAMPolicyAssignmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIAMPolicyAssignmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIAMPolicyAssignmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIAMPolicyAssignmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIAMPolicyAssignmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListIAMPolicyAssignmentsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<IAMPolicyAssignmentSummary> m_iAMPolicyAssignments;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
