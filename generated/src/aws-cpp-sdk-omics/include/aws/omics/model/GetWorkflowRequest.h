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
    AWS_OMICS_API GetWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkflow"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The workflow's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The workflow's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The workflow's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The workflow's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The workflow's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The workflow's ID.</p>
     */
    inline GetWorkflowRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The workflow's ID.</p>
     */
    inline GetWorkflowRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The workflow's ID.</p>
     */
    inline GetWorkflowRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The workflow's type.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>The workflow's type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The workflow's type.</p>
     */
    inline void SetType(const WorkflowType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The workflow's type.</p>
     */
    inline void SetType(WorkflowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The workflow's type.</p>
     */
    inline GetWorkflowRequest& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>The workflow's type.</p>
     */
    inline GetWorkflowRequest& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The export format for the workflow.</p>
     */
    inline const Aws::Vector<WorkflowExport>& GetExport() const{ return m_export; }

    /**
     * <p>The export format for the workflow.</p>
     */
    inline bool ExportHasBeenSet() const { return m_exportHasBeenSet; }

    /**
     * <p>The export format for the workflow.</p>
     */
    inline void SetExport(const Aws::Vector<WorkflowExport>& value) { m_exportHasBeenSet = true; m_export = value; }

    /**
     * <p>The export format for the workflow.</p>
     */
    inline void SetExport(Aws::Vector<WorkflowExport>&& value) { m_exportHasBeenSet = true; m_export = std::move(value); }

    /**
     * <p>The export format for the workflow.</p>
     */
    inline GetWorkflowRequest& WithExport(const Aws::Vector<WorkflowExport>& value) { SetExport(value); return *this;}

    /**
     * <p>The export format for the workflow.</p>
     */
    inline GetWorkflowRequest& WithExport(Aws::Vector<WorkflowExport>&& value) { SetExport(std::move(value)); return *this;}

    /**
     * <p>The export format for the workflow.</p>
     */
    inline GetWorkflowRequest& AddExport(const WorkflowExport& value) { m_exportHasBeenSet = true; m_export.push_back(value); return *this; }

    /**
     * <p>The export format for the workflow.</p>
     */
    inline GetWorkflowRequest& AddExport(WorkflowExport&& value) { m_exportHasBeenSet = true; m_export.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline const Aws::String& GetWorkflowOwnerId() const{ return m_workflowOwnerId; }

    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline bool WorkflowOwnerIdHasBeenSet() const { return m_workflowOwnerIdHasBeenSet; }

    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline void SetWorkflowOwnerId(const Aws::String& value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId = value; }

    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline void SetWorkflowOwnerId(Aws::String&& value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId = std::move(value); }

    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline void SetWorkflowOwnerId(const char* value) { m_workflowOwnerIdHasBeenSet = true; m_workflowOwnerId.assign(value); }

    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline GetWorkflowRequest& WithWorkflowOwnerId(const Aws::String& value) { SetWorkflowOwnerId(value); return *this;}

    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline GetWorkflowRequest& WithWorkflowOwnerId(Aws::String&& value) { SetWorkflowOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workflow owner.</p>
     */
    inline GetWorkflowRequest& WithWorkflowOwnerId(const char* value) { SetWorkflowOwnerId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    WorkflowType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<WorkflowExport> m_export;
    bool m_exportHasBeenSet = false;

    Aws::String m_workflowOwnerId;
    bool m_workflowOwnerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
