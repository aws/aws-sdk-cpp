/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspacesIpGroup.h>
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
  class DescribeIpGroupsResult
  {
  public:
    AWS_WORKSPACES_API DescribeIpGroupsResult();
    AWS_WORKSPACES_API DescribeIpGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeIpGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline const Aws::Vector<WorkspacesIpGroup>& GetResult() const{ return m_result; }

    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline void SetResult(const Aws::Vector<WorkspacesIpGroup>& value) { m_result = value; }

    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline void SetResult(Aws::Vector<WorkspacesIpGroup>&& value) { m_result = std::move(value); }

    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline DescribeIpGroupsResult& WithResult(const Aws::Vector<WorkspacesIpGroup>& value) { SetResult(value); return *this;}

    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline DescribeIpGroupsResult& WithResult(Aws::Vector<WorkspacesIpGroup>&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline DescribeIpGroupsResult& AddResult(const WorkspacesIpGroup& value) { m_result.push_back(value); return *this; }

    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline DescribeIpGroupsResult& AddResult(WorkspacesIpGroup&& value) { m_result.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeIpGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeIpGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeIpGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkspacesIpGroup> m_result;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
