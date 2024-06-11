﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/Workspace.h>
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
  class DescribeWorkspacesResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspacesResult();
    AWS_WORKSPACES_API DescribeWorkspacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the WorkSpaces.</p> <p>Because <a>CreateWorkspaces</a> is
     * an asynchronous operation, some of the returned information could be
     * incomplete.</p>
     */
    inline const Aws::Vector<Workspace>& GetWorkspaces() const{ return m_workspaces; }
    inline void SetWorkspaces(const Aws::Vector<Workspace>& value) { m_workspaces = value; }
    inline void SetWorkspaces(Aws::Vector<Workspace>&& value) { m_workspaces = std::move(value); }
    inline DescribeWorkspacesResult& WithWorkspaces(const Aws::Vector<Workspace>& value) { SetWorkspaces(value); return *this;}
    inline DescribeWorkspacesResult& WithWorkspaces(Aws::Vector<Workspace>&& value) { SetWorkspaces(std::move(value)); return *this;}
    inline DescribeWorkspacesResult& AddWorkspaces(const Workspace& value) { m_workspaces.push_back(value); return *this; }
    inline DescribeWorkspacesResult& AddWorkspaces(Workspace&& value) { m_workspaces.push_back(std::move(value)); return *this; }
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
    inline DescribeWorkspacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWorkspacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWorkspacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWorkspacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWorkspacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWorkspacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Workspace> m_workspaces;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
