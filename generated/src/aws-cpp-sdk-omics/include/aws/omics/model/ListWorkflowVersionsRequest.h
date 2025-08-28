/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/WorkflowType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListWorkflowVersionsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListWorkflowVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkflowVersions"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The workflow's ID. The <code>workflowId</code> is not the UUID.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    ListWorkflowVersionsRequest& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow type.</p>
     */
    inline WorkflowType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WorkflowType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListWorkflowVersionsRequest& WithType(WorkflowType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 12-digit account ID of the workflow owner. The workflow owner ID can be
     * retrieved using the <code>GetShare</code> API operation. If you are the workflow
     * owner, you do not need to include this ID.</p>
     */
    inline const Aws::String& GetWorkflowOwnerId() const { return m_workflowOwnerId; }
    inline bool WorkflowOwnerIdHasBeenSet() const { return m_workflowOwnerIdHasBeenSet; }
    template<typename WorkflowOwnerIdT = Aws::String>
    void SetWorkflowOwnerId(WorkflowOwnerIdT&& value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId = std::forward<WorkflowOwnerIdT>(value); }
    template<typename WorkflowOwnerIdT = Aws::String>
    ListWorkflowVersionsRequest& WithWorkflowOwnerId(WorkflowOwnerIdT&& value) { SetWorkflowOwnerId(std::forward<WorkflowOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetStartingToken() const { return m_startingToken; }
    inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
    template<typename StartingTokenT = Aws::String>
    void SetStartingToken(StartingTokenT&& value) { m_startingTokenHasBeenSet = true; m_startingToken = std::forward<StartingTokenT>(value); }
    template<typename StartingTokenT = Aws::String>
    ListWorkflowVersionsRequest& WithStartingToken(StartingTokenT&& value) { SetStartingToken(std::forward<StartingTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of workflows to return in one page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkflowVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    WorkflowType m_type{WorkflowType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_workflowOwnerId;
    bool m_workflowOwnerIdHasBeenSet = false;

    Aws::String m_startingToken;
    bool m_startingTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
