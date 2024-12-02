/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/model/TargetResource.h>
#include <utility>

namespace Aws
{
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   */
  class UpdateScopeRequest : public NetworkFlowMonitorRequest
  {
  public:
    AWS_NETWORKFLOWMONITOR_API UpdateScopeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScope"; }

    AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the scope that includes the resources you want to get data
     * results for. A scope ID is an internally-generated identifier that includes all
     * the resources for a specific root account.</p>
     */
    inline const Aws::String& GetScopeId() const{ return m_scopeId; }
    inline bool ScopeIdHasBeenSet() const { return m_scopeIdHasBeenSet; }
    inline void SetScopeId(const Aws::String& value) { m_scopeIdHasBeenSet = true; m_scopeId = value; }
    inline void SetScopeId(Aws::String&& value) { m_scopeIdHasBeenSet = true; m_scopeId = std::move(value); }
    inline void SetScopeId(const char* value) { m_scopeIdHasBeenSet = true; m_scopeId.assign(value); }
    inline UpdateScopeRequest& WithScopeId(const Aws::String& value) { SetScopeId(value); return *this;}
    inline UpdateScopeRequest& WithScopeId(Aws::String&& value) { SetScopeId(std::move(value)); return *this;}
    inline UpdateScopeRequest& WithScopeId(const char* value) { SetScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resources to add to a scope.</p>
     */
    inline const Aws::Vector<TargetResource>& GetResourcesToAdd() const{ return m_resourcesToAdd; }
    inline bool ResourcesToAddHasBeenSet() const { return m_resourcesToAddHasBeenSet; }
    inline void SetResourcesToAdd(const Aws::Vector<TargetResource>& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd = value; }
    inline void SetResourcesToAdd(Aws::Vector<TargetResource>&& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd = std::move(value); }
    inline UpdateScopeRequest& WithResourcesToAdd(const Aws::Vector<TargetResource>& value) { SetResourcesToAdd(value); return *this;}
    inline UpdateScopeRequest& WithResourcesToAdd(Aws::Vector<TargetResource>&& value) { SetResourcesToAdd(std::move(value)); return *this;}
    inline UpdateScopeRequest& AddResourcesToAdd(const TargetResource& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd.push_back(value); return *this; }
    inline UpdateScopeRequest& AddResourcesToAdd(TargetResource&& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resources to delete from a scope.</p>
     */
    inline const Aws::Vector<TargetResource>& GetResourcesToDelete() const{ return m_resourcesToDelete; }
    inline bool ResourcesToDeleteHasBeenSet() const { return m_resourcesToDeleteHasBeenSet; }
    inline void SetResourcesToDelete(const Aws::Vector<TargetResource>& value) { m_resourcesToDeleteHasBeenSet = true; m_resourcesToDelete = value; }
    inline void SetResourcesToDelete(Aws::Vector<TargetResource>&& value) { m_resourcesToDeleteHasBeenSet = true; m_resourcesToDelete = std::move(value); }
    inline UpdateScopeRequest& WithResourcesToDelete(const Aws::Vector<TargetResource>& value) { SetResourcesToDelete(value); return *this;}
    inline UpdateScopeRequest& WithResourcesToDelete(Aws::Vector<TargetResource>&& value) { SetResourcesToDelete(std::move(value)); return *this;}
    inline UpdateScopeRequest& AddResourcesToDelete(const TargetResource& value) { m_resourcesToDeleteHasBeenSet = true; m_resourcesToDelete.push_back(value); return *this; }
    inline UpdateScopeRequest& AddResourcesToDelete(TargetResource&& value) { m_resourcesToDeleteHasBeenSet = true; m_resourcesToDelete.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_scopeId;
    bool m_scopeIdHasBeenSet = false;

    Aws::Vector<TargetResource> m_resourcesToAdd;
    bool m_resourcesToAddHasBeenSet = false;

    Aws::Vector<TargetResource> m_resourcesToDelete;
    bool m_resourcesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
