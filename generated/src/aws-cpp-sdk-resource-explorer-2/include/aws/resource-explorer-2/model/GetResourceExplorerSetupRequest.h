/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class GetResourceExplorerSetupRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetResourceExplorerSetupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceExplorerSetup"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the setup task to retrieve status information for.
     * This ID is returned by <code>CreateResourceExplorerSetup</code> or
     * <code>DeleteResourceExplorerSetup</code> operations.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    GetResourceExplorerSetupRequest& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Region status results to return in a single response.
     * Valid values are between <code>1</code> and <code>100</code>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetResourceExplorerSetupRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous <code>GetResourceExplorerSetup</code>
     * response. Use this token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourceExplorerSetupRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
