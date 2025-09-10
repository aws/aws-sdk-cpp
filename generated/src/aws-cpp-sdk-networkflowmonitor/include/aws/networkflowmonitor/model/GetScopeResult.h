/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/ScopeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/networkflowmonitor/model/TargetResource.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{
  class GetScopeResult
  {
  public:
    AWS_NETWORKFLOWMONITOR_API GetScopeResult() = default;
    AWS_NETWORKFLOWMONITOR_API GetScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFLOWMONITOR_API GetScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the scope that includes the resources you want to get data
     * results for. A scope ID is an internally-generated identifier that includes all
     * the resources for a specific root account. A scope ID is returned from a
     * <code>CreateScope</code> API call.</p>
     */
    inline const Aws::String& GetScopeId() const { return m_scopeId; }
    template<typename ScopeIdT = Aws::String>
    void SetScopeId(ScopeIdT&& value) { m_scopeIdHasBeenSet = true; m_scopeId = std::forward<ScopeIdT>(value); }
    template<typename ScopeIdT = Aws::String>
    GetScopeResult& WithScopeId(ScopeIdT&& value) { SetScopeId(std::forward<ScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for a scope. The status can be one of the following:
     * <code>SUCCEEDED</code>, <code>IN_PROGRESS</code>, <code>FAILED</code>,
     * <code>DEACTIVATING</code>, or <code>DEACTIVATED</code>.</p> <p>A status of
     * <code>DEACTIVATING</code> means that you've requested a scope to be deactivated
     * and Network Flow Monitor is in the process of deactivating the scope. A status
     * of <code>DEACTIVATED</code> means that the deactivating process is complete.</p>
     */
    inline ScopeStatus GetStatus() const { return m_status; }
    inline void SetStatus(ScopeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetScopeResult& WithStatus(ScopeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope.</p>
     */
    inline const Aws::String& GetScopeArn() const { return m_scopeArn; }
    template<typename ScopeArnT = Aws::String>
    void SetScopeArn(ScopeArnT&& value) { m_scopeArnHasBeenSet = true; m_scopeArn = std::forward<ScopeArnT>(value); }
    template<typename ScopeArnT = Aws::String>
    GetScopeResult& WithScopeArn(ScopeArnT&& value) { SetScopeArn(std::forward<ScopeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets to define the scope to be monitored. A target is an array of
     * targetResources, which are currently Region-account pairs, defined by
     * targetResource constructs.</p>
     */
    inline const Aws::Vector<TargetResource>& GetTargets() const { return m_targets; }
    template<typename TargetsT = Aws::Vector<TargetResource>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<TargetResource>>
    GetScopeResult& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = TargetResource>
    GetScopeResult& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags for a scope.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetScopeResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetScopeResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetScopeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scopeId;
    bool m_scopeIdHasBeenSet = false;

    ScopeStatus m_status{ScopeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_scopeArn;
    bool m_scopeArnHasBeenSet = false;

    Aws::Vector<TargetResource> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
