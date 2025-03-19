/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/DescribeWorkspaceDirectoriesFilter.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeWorkspaceDirectoriesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaceDirectories"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifiers of the directories. If the value is null, all directories are
     * retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryIds() const { return m_directoryIds; }
    inline bool DirectoryIdsHasBeenSet() const { return m_directoryIdsHasBeenSet; }
    template<typename DirectoryIdsT = Aws::Vector<Aws::String>>
    void SetDirectoryIds(DirectoryIdsT&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = std::forward<DirectoryIdsT>(value); }
    template<typename DirectoryIdsT = Aws::Vector<Aws::String>>
    DescribeWorkspaceDirectoriesRequest& WithDirectoryIds(DirectoryIdsT&& value) { SetDirectoryIds(std::forward<DirectoryIdsT>(value)); return *this;}
    template<typename DirectoryIdsT = Aws::String>
    DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(DirectoryIdsT&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.emplace_back(std::forward<DirectoryIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the WorkSpace directories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkspaceDirectoryNames() const { return m_workspaceDirectoryNames; }
    inline bool WorkspaceDirectoryNamesHasBeenSet() const { return m_workspaceDirectoryNamesHasBeenSet; }
    template<typename WorkspaceDirectoryNamesT = Aws::Vector<Aws::String>>
    void SetWorkspaceDirectoryNames(WorkspaceDirectoryNamesT&& value) { m_workspaceDirectoryNamesHasBeenSet = true; m_workspaceDirectoryNames = std::forward<WorkspaceDirectoryNamesT>(value); }
    template<typename WorkspaceDirectoryNamesT = Aws::Vector<Aws::String>>
    DescribeWorkspaceDirectoriesRequest& WithWorkspaceDirectoryNames(WorkspaceDirectoryNamesT&& value) { SetWorkspaceDirectoryNames(std::forward<WorkspaceDirectoryNamesT>(value)); return *this;}
    template<typename WorkspaceDirectoryNamesT = Aws::String>
    DescribeWorkspaceDirectoriesRequest& AddWorkspaceDirectoryNames(WorkspaceDirectoryNamesT&& value) { m_workspaceDirectoryNamesHasBeenSet = true; m_workspaceDirectoryNames.emplace_back(std::forward<WorkspaceDirectoryNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of directories to return.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeWorkspaceDirectoriesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspaceDirectoriesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter condition for the WorkSpaces.</p>
     */
    inline const Aws::Vector<DescribeWorkspaceDirectoriesFilter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<DescribeWorkspaceDirectoriesFilter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<DescribeWorkspaceDirectoriesFilter>>
    DescribeWorkspaceDirectoriesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = DescribeWorkspaceDirectoriesFilter>
    DescribeWorkspaceDirectoriesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_directoryIds;
    bool m_directoryIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_workspaceDirectoryNames;
    bool m_workspaceDirectoryNamesHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DescribeWorkspaceDirectoriesFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
