/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ApplicationAssignment.h>
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
namespace SSOAdmin
{
namespace Model
{
  class ListApplicationAssignmentsResult
  {
  public:
    AWS_SSOADMIN_API ListApplicationAssignmentsResult();
    AWS_SSOADMIN_API ListApplicationAssignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListApplicationAssignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline const Aws::Vector<ApplicationAssignment>& GetApplicationAssignments() const{ return m_applicationAssignments; }

    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline void SetApplicationAssignments(const Aws::Vector<ApplicationAssignment>& value) { m_applicationAssignments = value; }

    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline void SetApplicationAssignments(Aws::Vector<ApplicationAssignment>&& value) { m_applicationAssignments = std::move(value); }

    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline ListApplicationAssignmentsResult& WithApplicationAssignments(const Aws::Vector<ApplicationAssignment>& value) { SetApplicationAssignments(value); return *this;}

    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline ListApplicationAssignmentsResult& WithApplicationAssignments(Aws::Vector<ApplicationAssignment>&& value) { SetApplicationAssignments(std::move(value)); return *this;}

    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline ListApplicationAssignmentsResult& AddApplicationAssignments(const ApplicationAssignment& value) { m_applicationAssignments.push_back(value); return *this; }

    /**
     * <p>The list of users assigned to an application.</p>
     */
    inline ListApplicationAssignmentsResult& AddApplicationAssignments(ApplicationAssignment&& value) { m_applicationAssignments.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAssignmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAssignmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline ListApplicationAssignmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListApplicationAssignmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListApplicationAssignmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListApplicationAssignmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ApplicationAssignment> m_applicationAssignments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
