/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/WorkflowType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/WorkflowExport.h>
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
  class GetWorkflowRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflow"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The workflow's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetWorkflowRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow's type.</p>
     */
    inline WorkflowType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(WorkflowType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetWorkflowRequest& WithType(WorkflowType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export format for the workflow.</p>
     */
    inline const Aws::Vector<WorkflowExport>& GetExport() const { return m_export; }
    inline bool ExportHasBeenSet() const { return m_exportHasBeenSet; }
    template<typename ExportT = Aws::Vector<WorkflowExport>>
    void SetExport(ExportT&& value) { m_exportHasBeenSet = true; m_export = std::forward<ExportT>(value); }
    template<typename ExportT = Aws::Vector<WorkflowExport>>
    GetWorkflowRequest& WithExport(ExportT&& value) { SetExport(std::forward<ExportT>(value)); return *this;}
    inline GetWorkflowRequest& AddExport(WorkflowExport value) { m_exportHasBeenSet = true; m_export.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline const Aws::String& GetWorkflowOwnerId() const { return m_workflowOwnerId; }
    inline bool WorkflowOwnerIdHasBeenSet() const { return m_workflowOwnerIdHasBeenSet; }
    template<typename WorkflowOwnerIdT = Aws::String>
    void SetWorkflowOwnerId(WorkflowOwnerIdT&& value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId = std::forward<WorkflowOwnerIdT>(value); }
    template<typename WorkflowOwnerIdT = Aws::String>
    GetWorkflowRequest& WithWorkflowOwnerId(WorkflowOwnerIdT&& value) { SetWorkflowOwnerId(std::forward<WorkflowOwnerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    WorkflowType m_type{WorkflowType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<WorkflowExport> m_export;
    bool m_exportHasBeenSet = false;

    Aws::String m_workflowOwnerId;
    bool m_workflowOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
