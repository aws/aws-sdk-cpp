/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/InstancesToExclude.h>
#include <aws/outposts/model/CapacityTaskStatus.h>
#include <aws/outposts/model/CapacityTaskFailure.h>
#include <aws/core/utils/DateTime.h>
#include <aws/outposts/model/TaskActionOnBlockingInstances.h>
#include <aws/outposts/model/InstanceTypeCapacity.h>
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
namespace Outposts
{
namespace Model
{
  class StartCapacityTaskResult
  {
  public:
    AWS_OUTPOSTS_API StartCapacityTaskResult() = default;
    AWS_OUTPOSTS_API StartCapacityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API StartCapacityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the capacity task that you want to start.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const { return m_capacityTaskId; }
    template<typename CapacityTaskIdT = Aws::String>
    void SetCapacityTaskId(CapacityTaskIdT&& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = std::forward<CapacityTaskIdT>(value); }
    template<typename CapacityTaskIdT = Aws::String>
    StartCapacityTaskResult& WithCapacityTaskId(CapacityTaskIdT&& value) { SetCapacityTaskId(std::forward<CapacityTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Outpost associated with the capacity task.</p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    StartCapacityTaskResult& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services Outposts order of the host associated with the
     * capacity task.</p>
     */
    inline const Aws::String& GetOrderId() const { return m_orderId; }
    template<typename OrderIdT = Aws::String>
    void SetOrderId(OrderIdT&& value) { m_orderIdHasBeenSet = true; m_orderId = std::forward<OrderIdT>(value); }
    template<typename OrderIdT = Aws::String>
    StartCapacityTaskResult& WithOrderId(OrderIdT&& value) { SetOrderId(std::forward<OrderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset. An Outpost asset can be a single server within an
     * Outposts rack or an Outposts server configuration.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    StartCapacityTaskResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the instance pools requested in the specified capacity task.</p>
     */
    inline const Aws::Vector<InstanceTypeCapacity>& GetRequestedInstancePools() const { return m_requestedInstancePools; }
    template<typename RequestedInstancePoolsT = Aws::Vector<InstanceTypeCapacity>>
    void SetRequestedInstancePools(RequestedInstancePoolsT&& value) { m_requestedInstancePoolsHasBeenSet = true; m_requestedInstancePools = std::forward<RequestedInstancePoolsT>(value); }
    template<typename RequestedInstancePoolsT = Aws::Vector<InstanceTypeCapacity>>
    StartCapacityTaskResult& WithRequestedInstancePools(RequestedInstancePoolsT&& value) { SetRequestedInstancePools(std::forward<RequestedInstancePoolsT>(value)); return *this;}
    template<typename RequestedInstancePoolsT = InstanceTypeCapacity>
    StartCapacityTaskResult& AddRequestedInstancePools(RequestedInstancePoolsT&& value) { m_requestedInstancePoolsHasBeenSet = true; m_requestedInstancePools.emplace_back(std::forward<RequestedInstancePoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User-specified instances that must not be stopped in order to free up the
     * capacity needed to run the capacity task.</p>
     */
    inline const InstancesToExclude& GetInstancesToExclude() const { return m_instancesToExclude; }
    template<typename InstancesToExcludeT = InstancesToExclude>
    void SetInstancesToExclude(InstancesToExcludeT&& value) { m_instancesToExcludeHasBeenSet = true; m_instancesToExclude = std::forward<InstancesToExcludeT>(value); }
    template<typename InstancesToExcludeT = InstancesToExclude>
    StartCapacityTaskResult& WithInstancesToExclude(InstancesToExcludeT&& value) { SetInstancesToExclude(std::forward<InstancesToExcludeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Results of the dry run showing if the specified capacity task is above or
     * below the available instance capacity.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline StartCapacityTaskResult& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the specified capacity task.</p>
     */
    inline CapacityTaskStatus GetCapacityTaskStatus() const { return m_capacityTaskStatus; }
    inline void SetCapacityTaskStatus(CapacityTaskStatus value) { m_capacityTaskStatusHasBeenSet = true; m_capacityTaskStatus = value; }
    inline StartCapacityTaskResult& WithCapacityTaskStatus(CapacityTaskStatus value) { SetCapacityTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason that the specified capacity task failed.</p>
     */
    inline const CapacityTaskFailure& GetFailed() const { return m_failed; }
    template<typename FailedT = CapacityTaskFailure>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = CapacityTaskFailure>
    StartCapacityTaskResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date that the specified capacity task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    StartCapacityTaskResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date that the specified capacity task ran successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    StartCapacityTaskResult& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date that the specified capacity task was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    StartCapacityTaskResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified option in case an instance is blocking the capacity task from
     * running.</p> <ul> <li> <p> <code>WAIT_FOR_EVACUATION</code> - Checks every 10
     * minutes over 48 hours to determine if instances have stopped and capacity is
     * available to complete the task.</p> </li> <li> <p> <code>FAIL_TASK</code> - The
     * capacity task fails.</p> </li> </ul>
     */
    inline TaskActionOnBlockingInstances GetTaskActionOnBlockingInstances() const { return m_taskActionOnBlockingInstances; }
    inline void SetTaskActionOnBlockingInstances(TaskActionOnBlockingInstances value) { m_taskActionOnBlockingInstancesHasBeenSet = true; m_taskActionOnBlockingInstances = value; }
    inline StartCapacityTaskResult& WithTaskActionOnBlockingInstances(TaskActionOnBlockingInstances value) { SetTaskActionOnBlockingInstances(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartCapacityTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityTaskId;
    bool m_capacityTaskIdHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Vector<InstanceTypeCapacity> m_requestedInstancePools;
    bool m_requestedInstancePoolsHasBeenSet = false;

    InstancesToExclude m_instancesToExclude;
    bool m_instancesToExcludeHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    CapacityTaskStatus m_capacityTaskStatus{CapacityTaskStatus::NOT_SET};
    bool m_capacityTaskStatusHasBeenSet = false;

    CapacityTaskFailure m_failed;
    bool m_failedHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate{};
    bool m_completionDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    TaskActionOnBlockingInstances m_taskActionOnBlockingInstances{TaskActionOnBlockingInstances::NOT_SET};
    bool m_taskActionOnBlockingInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
