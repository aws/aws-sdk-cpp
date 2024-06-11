﻿/**
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


    ///@{
    /**
     * <p>Information about the IP access control groups.</p>
     */
    inline const Aws::Vector<WorkspacesIpGroup>& GetResult() const{ return m_result; }
    inline void SetResult(const Aws::Vector<WorkspacesIpGroup>& value) { m_result = value; }
    inline void SetResult(Aws::Vector<WorkspacesIpGroup>&& value) { m_result = std::move(value); }
    inline DescribeIpGroupsResult& WithResult(const Aws::Vector<WorkspacesIpGroup>& value) { SetResult(value); return *this;}
    inline DescribeIpGroupsResult& WithResult(Aws::Vector<WorkspacesIpGroup>&& value) { SetResult(std::move(value)); return *this;}
    inline DescribeIpGroupsResult& AddResult(const WorkspacesIpGroup& value) { m_result.push_back(value); return *this; }
    inline DescribeIpGroupsResult& AddResult(WorkspacesIpGroup&& value) { m_result.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeIpGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeIpGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeIpGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeIpGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeIpGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeIpGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspacesIpGroup> m_result;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
