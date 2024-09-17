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
    AWS_WORKSPACES_API DescribeWorkspaceDirectoriesRequest();

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
    inline const Aws::Vector<Aws::String>& GetDirectoryIds() const{ return m_directoryIds; }
    inline bool DirectoryIdsHasBeenSet() const { return m_directoryIdsHasBeenSet; }
    inline void SetDirectoryIds(const Aws::Vector<Aws::String>& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = value; }
    inline void SetDirectoryIds(Aws::Vector<Aws::String>&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds = std::move(value); }
    inline DescribeWorkspaceDirectoriesRequest& WithDirectoryIds(const Aws::Vector<Aws::String>& value) { SetDirectoryIds(value); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& WithDirectoryIds(Aws::Vector<Aws::String>&& value) { SetDirectoryIds(std::move(value)); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(const Aws::String& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(Aws::String&& value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(std::move(value)); return *this; }
    inline DescribeWorkspaceDirectoriesRequest& AddDirectoryIds(const char* value) { m_directoryIdsHasBeenSet = true; m_directoryIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the WorkSpace directories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWorkspaceDirectoryNames() const{ return m_workspaceDirectoryNames; }
    inline bool WorkspaceDirectoryNamesHasBeenSet() const { return m_workspaceDirectoryNamesHasBeenSet; }
    inline void SetWorkspaceDirectoryNames(const Aws::Vector<Aws::String>& value) { m_workspaceDirectoryNamesHasBeenSet = true; m_workspaceDirectoryNames = value; }
    inline void SetWorkspaceDirectoryNames(Aws::Vector<Aws::String>&& value) { m_workspaceDirectoryNamesHasBeenSet = true; m_workspaceDirectoryNames = std::move(value); }
    inline DescribeWorkspaceDirectoriesRequest& WithWorkspaceDirectoryNames(const Aws::Vector<Aws::String>& value) { SetWorkspaceDirectoryNames(value); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& WithWorkspaceDirectoryNames(Aws::Vector<Aws::String>&& value) { SetWorkspaceDirectoryNames(std::move(value)); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& AddWorkspaceDirectoryNames(const Aws::String& value) { m_workspaceDirectoryNamesHasBeenSet = true; m_workspaceDirectoryNames.push_back(value); return *this; }
    inline DescribeWorkspaceDirectoriesRequest& AddWorkspaceDirectoryNames(Aws::String&& value) { m_workspaceDirectoryNamesHasBeenSet = true; m_workspaceDirectoryNames.push_back(std::move(value)); return *this; }
    inline DescribeWorkspaceDirectoriesRequest& AddWorkspaceDirectoryNames(const char* value) { m_workspaceDirectoryNamesHasBeenSet = true; m_workspaceDirectoryNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of directories to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeWorkspaceDirectoriesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter condition for the WorkSpaces.</p>
     */
    inline const Aws::Vector<DescribeWorkspaceDirectoriesFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<DescribeWorkspaceDirectoriesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<DescribeWorkspaceDirectoriesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeWorkspaceDirectoriesRequest& WithFilters(const Aws::Vector<DescribeWorkspaceDirectoriesFilter>& value) { SetFilters(value); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& WithFilters(Aws::Vector<DescribeWorkspaceDirectoriesFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeWorkspaceDirectoriesRequest& AddFilters(const DescribeWorkspaceDirectoriesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeWorkspaceDirectoriesRequest& AddFilters(DescribeWorkspaceDirectoriesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_directoryIds;
    bool m_directoryIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_workspaceDirectoryNames;
    bool m_workspaceDirectoryNamesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DescribeWorkspaceDirectoriesFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
