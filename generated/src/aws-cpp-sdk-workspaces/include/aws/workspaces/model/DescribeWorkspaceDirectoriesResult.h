/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceDirectory.h>
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
  class DescribeWorkspaceDirectoriesResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesResult();
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the directories.</p>
     */
    inline const Aws::Vector<WorkspaceDirectory>& GetDirectories() const{ return m_directories; }

    /**
     * <p>Information about the directories.</p>
     */
    inline void SetDirectories(const Aws::Vector<WorkspaceDirectory>& value) { m_directories = value; }

    /**
     * <p>Information about the directories.</p>
     */
    inline void SetDirectories(Aws::Vector<WorkspaceDirectory>&& value) { m_directories = std::move(value); }

    /**
     * <p>Information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithDirectories(const Aws::Vector<WorkspaceDirectory>& value) { SetDirectories(value); return *this;}

    /**
     * <p>Information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithDirectories(Aws::Vector<WorkspaceDirectory>&& value) { SetDirectories(std::move(value)); return *this;}

    /**
     * <p>Information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& AddDirectories(const WorkspaceDirectory& value) { m_directories.push_back(value); return *this; }

    /**
     * <p>Information about the directories.</p>
     */
    inline DescribeWorkspaceDirectoriesResult& AddDirectories(WorkspaceDirectory&& value) { m_directories.push_back(std::move(value)); return *this; }


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
    inline DescribeWorkspaceDirectoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeWorkspaceDirectoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkspaceDirectory> m_directories;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
