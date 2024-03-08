/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkSpaceApplication.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeApplicationsResult
  {
  public:
    AWS_WORKSPACES_API DescribeApplicationsResult();
    AWS_WORKSPACES_API DescribeApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of information about the specified applications.</p>
     */
    inline const Aws::Vector<WorkSpaceApplication>& GetApplications() const{ return m_applications; }

    /**
     * <p>List of information about the specified applications.</p>
     */
    inline void SetApplications(const Aws::Vector<WorkSpaceApplication>& value) { m_applications = value; }

    /**
     * <p>List of information about the specified applications.</p>
     */
    inline void SetApplications(Aws::Vector<WorkSpaceApplication>&& value) { m_applications = std::move(value); }

    /**
     * <p>List of information about the specified applications.</p>
     */
    inline DescribeApplicationsResult& WithApplications(const Aws::Vector<WorkSpaceApplication>& value) { SetApplications(value); return *this;}

    /**
     * <p>List of information about the specified applications.</p>
     */
    inline DescribeApplicationsResult& WithApplications(Aws::Vector<WorkSpaceApplication>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>List of information about the specified applications.</p>
     */
    inline DescribeApplicationsResult& AddApplications(const WorkSpaceApplication& value) { m_applications.push_back(value); return *this; }

    /**
     * <p>List of information about the specified applications.</p>
     */
    inline DescribeApplicationsResult& AddApplications(WorkSpaceApplication&& value) { m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<WorkSpaceApplication> m_applications;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
