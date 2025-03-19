/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/FailedResource.h>
#include <aws/resource-groups/model/PendingResource.h>
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
namespace ResourceGroups
{
namespace Model
{
  class GroupResourcesResult
  {
  public:
    AWS_RESOURCEGROUPS_API GroupResourcesResult() = default;
    AWS_RESOURCEGROUPS_API GroupResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GroupResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Amazon resource names (ARNs) of the resources that this operation
     * successfully added to the group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const { return m_succeeded; }
    template<typename SucceededT = Aws::Vector<Aws::String>>
    void SetSucceeded(SucceededT&& value) { m_succeededHasBeenSet = true; m_succeeded = std::forward<SucceededT>(value); }
    template<typename SucceededT = Aws::Vector<Aws::String>>
    GroupResourcesResult& WithSucceeded(SucceededT&& value) { SetSucceeded(std::forward<SucceededT>(value)); return *this;}
    template<typename SucceededT = Aws::String>
    GroupResourcesResult& AddSucceeded(SucceededT&& value) { m_succeededHasBeenSet = true; m_succeeded.emplace_back(std::forward<SucceededT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon resource names (ARNs) of any resources that this operation
     * failed to add to the group.</p>
     */
    inline const Aws::Vector<FailedResource>& GetFailed() const { return m_failed; }
    template<typename FailedT = Aws::Vector<FailedResource>>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = Aws::Vector<FailedResource>>
    GroupResourcesResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    template<typename FailedT = FailedResource>
    GroupResourcesResult& AddFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed.emplace_back(std::forward<FailedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon resource names (ARNs) of any resources that this operation
     * is still in the process adding to the group. These pending additions continue
     * asynchronously. You can check the status of pending additions by using the
     * <code> <a>ListGroupResources</a> </code> operation, and checking the
     * <code>Resources</code> array in the response and the <code>Status</code> field
     * of each object in that array. </p>
     */
    inline const Aws::Vector<PendingResource>& GetPending() const { return m_pending; }
    template<typename PendingT = Aws::Vector<PendingResource>>
    void SetPending(PendingT&& value) { m_pendingHasBeenSet = true; m_pending = std::forward<PendingT>(value); }
    template<typename PendingT = Aws::Vector<PendingResource>>
    GroupResourcesResult& WithPending(PendingT&& value) { SetPending(std::forward<PendingT>(value)); return *this;}
    template<typename PendingT = PendingResource>
    GroupResourcesResult& AddPending(PendingT&& value) { m_pendingHasBeenSet = true; m_pending.emplace_back(std::forward<PendingT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GroupResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_succeeded;
    bool m_succeededHasBeenSet = false;

    Aws::Vector<FailedResource> m_failed;
    bool m_failedHasBeenSet = false;

    Aws::Vector<PendingResource> m_pending;
    bool m_pendingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
