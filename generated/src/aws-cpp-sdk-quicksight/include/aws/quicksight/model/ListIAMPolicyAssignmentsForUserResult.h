/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ActiveIAMPolicyAssignment.h>
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
  class ListIAMPolicyAssignmentsForUserResult
  {
  public:
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsForUserResult();
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsForUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListIAMPolicyAssignmentsForUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The active assignments for this user.</p>
     */
    inline const Aws::Vector<ActiveIAMPolicyAssignment>& GetActiveAssignments() const{ return m_activeAssignments; }
    inline void SetActiveAssignments(const Aws::Vector<ActiveIAMPolicyAssignment>& value) { m_activeAssignments = value; }
    inline void SetActiveAssignments(Aws::Vector<ActiveIAMPolicyAssignment>&& value) { m_activeAssignments = std::move(value); }
    inline ListIAMPolicyAssignmentsForUserResult& WithActiveAssignments(const Aws::Vector<ActiveIAMPolicyAssignment>& value) { SetActiveAssignments(value); return *this;}
    inline ListIAMPolicyAssignmentsForUserResult& WithActiveAssignments(Aws::Vector<ActiveIAMPolicyAssignment>&& value) { SetActiveAssignments(std::move(value)); return *this;}
    inline ListIAMPolicyAssignmentsForUserResult& AddActiveAssignments(const ActiveIAMPolicyAssignment& value) { m_activeAssignments.push_back(value); return *this; }
    inline ListIAMPolicyAssignmentsForUserResult& AddActiveAssignments(ActiveIAMPolicyAssignment&& value) { m_activeAssignments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIAMPolicyAssignmentsForUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIAMPolicyAssignmentsForUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIAMPolicyAssignmentsForUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
    inline ListIAMPolicyAssignmentsForUserResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIAMPolicyAssignmentsForUserResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIAMPolicyAssignmentsForUserResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline ListIAMPolicyAssignmentsForUserResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Vector<ActiveIAMPolicyAssignment> m_activeAssignments;

    Aws::String m_requestId;

    Aws::String m_nextToken;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
