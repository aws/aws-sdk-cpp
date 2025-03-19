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
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesResult() = default;
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the directories.</p>
     */
    inline const Aws::Vector<WorkspaceDirectory>& GetDirectories() const { return m_directories; }
    template<typename DirectoriesT = Aws::Vector<WorkspaceDirectory>>
    void SetDirectories(DirectoriesT&& value) { m_directoriesHasBeenSet = true; m_directories = std::forward<DirectoriesT>(value); }
    template<typename DirectoriesT = Aws::Vector<WorkspaceDirectory>>
    DescribeWorkspaceDirectoriesResult& WithDirectories(DirectoriesT&& value) { SetDirectories(std::forward<DirectoriesT>(value)); return *this;}
    template<typename DirectoriesT = WorkspaceDirectory>
    DescribeWorkspaceDirectoriesResult& AddDirectories(DirectoriesT&& value) { m_directoriesHasBeenSet = true; m_directories.emplace_back(std::forward<DirectoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspaceDirectoriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWorkspaceDirectoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkspaceDirectory> m_directories;
    bool m_directoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
