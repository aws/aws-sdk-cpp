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
    AWS_NETWORKFLOWMONITOR_API UpdateScopeRequest() = default;

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
    inline const Aws::String& GetScopeId() const { return m_scopeId; }
    inline bool ScopeIdHasBeenSet() const { return m_scopeIdHasBeenSet; }
    template<typename ScopeIdT = Aws::String>
    void SetScopeId(ScopeIdT&& value) { m_scopeIdHasBeenSet = true; m_scopeId = std::forward<ScopeIdT>(value); }
    template<typename ScopeIdT = Aws::String>
    UpdateScopeRequest& WithScopeId(ScopeIdT&& value) { SetScopeId(std::forward<ScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of resources to add to a scope.</p>
     */
    inline const Aws::Vector<TargetResource>& GetResourcesToAdd() const { return m_resourcesToAdd; }
    inline bool ResourcesToAddHasBeenSet() const { return m_resourcesToAddHasBeenSet; }
    template<typename ResourcesToAddT = Aws::Vector<TargetResource>>
    void SetResourcesToAdd(ResourcesToAddT&& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd = std::forward<ResourcesToAddT>(value); }
    template<typename ResourcesToAddT = Aws::Vector<TargetResource>>
    UpdateScopeRequest& WithResourcesToAdd(ResourcesToAddT&& value) { SetResourcesToAdd(std::forward<ResourcesToAddT>(value)); return *this;}
    template<typename ResourcesToAddT = TargetResource>
    UpdateScopeRequest& AddResourcesToAdd(ResourcesToAddT&& value) { m_resourcesToAddHasBeenSet = true; m_resourcesToAdd.emplace_back(std::forward<ResourcesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resources to delete from a scope.</p>
     */
    inline const Aws::Vector<TargetResource>& GetResourcesToDelete() const { return m_resourcesToDelete; }
    inline bool ResourcesToDeleteHasBeenSet() const { return m_resourcesToDeleteHasBeenSet; }
    template<typename ResourcesToDeleteT = Aws::Vector<TargetResource>>
    void SetResourcesToDelete(ResourcesToDeleteT&& value) { m_resourcesToDeleteHasBeenSet = true; m_resourcesToDelete = std::forward<ResourcesToDeleteT>(value); }
    template<typename ResourcesToDeleteT = Aws::Vector<TargetResource>>
    UpdateScopeRequest& WithResourcesToDelete(ResourcesToDeleteT&& value) { SetResourcesToDelete(std::forward<ResourcesToDeleteT>(value)); return *this;}
    template<typename ResourcesToDeleteT = TargetResource>
    UpdateScopeRequest& AddResourcesToDelete(ResourcesToDeleteT&& value) { m_resourcesToDeleteHasBeenSet = true; m_resourcesToDelete.emplace_back(std::forward<ResourcesToDeleteT>(value)); return *this; }
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
