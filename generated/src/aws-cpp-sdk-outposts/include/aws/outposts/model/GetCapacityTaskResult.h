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
  class GetCapacityTaskResult
  {
  public:
    AWS_OUTPOSTS_API GetCapacityTaskResult() = default;
    AWS_OUTPOSTS_API GetCapacityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetCapacityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the capacity task.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const { return m_capacityTaskId; }
    template<typename CapacityTaskIdT = Aws::String>
    void SetCapacityTaskId(CapacityTaskIdT&& value) { m_capacityTaskIdHasBeenSet = true; m_capacityTaskId = std::forward<CapacityTaskIdT>(value); }
    template<typename CapacityTaskIdT = Aws::String>
    GetCapacityTaskResult& WithCapacityTaskId(CapacityTaskIdT&& value) { SetCapacityTaskId(std::forward<CapacityTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    GetCapacityTaskResult& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline const Aws::String& GetOrderId() const { return m_orderId; }
    template<typename OrderIdT = Aws::String>
    void SetOrderId(OrderIdT&& value) { m_orderIdHasBeenSet = true; m_orderId = std::forward<OrderIdT>(value); }
    template<typename OrderIdT = Aws::String>
    GetCapacityTaskResult& WithOrderId(OrderIdT&& value) { SetOrderId(std::forward<OrderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outpost asset. An Outpost asset can be a single server within
     * an Outposts rack or an Outposts server configuration.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    GetCapacityTaskResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline const Aws::Vector<InstanceTypeCapacity>& GetRequestedInstancePools() const { return m_requestedInstancePools; }
    template<typename RequestedInstancePoolsT = Aws::Vector<InstanceTypeCapacity>>
    void SetRequestedInstancePools(RequestedInstancePoolsT&& value) { m_requestedInstancePoolsHasBeenSet = true; m_requestedInstancePools = std::forward<RequestedInstancePoolsT>(value); }
    template<typename RequestedInstancePoolsT = Aws::Vector<InstanceTypeCapacity>>
    GetCapacityTaskResult& WithRequestedInstancePools(RequestedInstancePoolsT&& value) { SetRequestedInstancePools(std::forward<RequestedInstancePoolsT>(value)); return *this;}
    template<typename RequestedInstancePoolsT = InstanceTypeCapacity>
    GetCapacityTaskResult& AddRequestedInstancePools(RequestedInstancePoolsT&& value) { m_requestedInstancePoolsHasBeenSet = true; m_requestedInstancePools.emplace_back(std::forward<RequestedInstancePoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Instances that the user specified they cannot stop in order to free up the
     * capacity needed to run the capacity task.</p>
     */
    inline const InstancesToExclude& GetInstancesToExclude() const { return m_instancesToExclude; }
    template<typename InstancesToExcludeT = InstancesToExclude>
    void SetInstancesToExclude(InstancesToExcludeT&& value) { m_instancesToExcludeHasBeenSet = true; m_instancesToExclude = std::forward<InstancesToExcludeT>(value); }
    template<typename InstancesToExcludeT = InstancesToExclude>
    GetCapacityTaskResult& WithInstancesToExclude(InstancesToExcludeT&& value) { SetInstancesToExclude(std::forward<InstancesToExcludeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performs a dry run to determine if you are above or below instance
     * capacity.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetCapacityTaskResult& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the capacity task.</p> <p>A capacity task can have one of the
     * following statuses:</p> <ul> <li> <p> <code>REQUESTED</code> - The capacity task
     * was created and is awaiting the next step by Amazon Web Services Outposts.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The capacity task is running and
     * cannot be cancelled.</p> </li> <li> <p> <code>FAILED</code> - The capacity task
     * could not be completed.</p> </li> <li> <p> <code>COMPLETED</code> - The capacity
     * task has completed successfully.</p> </li> <li> <p>
     * <code>WAITING_FOR_EVACUATION</code> - The capacity task requires capacity to
     * run. You must stop the recommended EC2 running instances to free up capacity for
     * the task to run.</p> </li> <li> <p> <code>CANCELLATION_IN_PROGRESS</code> - The
     * capacity task has been cancelled and is in the process of cleaning up
     * resources.</p> </li> <li> <p> <code>CANCELLED</code> - The capacity task is
     * cancelled.</p> </li> </ul>
     */
    inline CapacityTaskStatus GetCapacityTaskStatus() const { return m_capacityTaskStatus; }
    inline void SetCapacityTaskStatus(CapacityTaskStatus value) { m_capacityTaskStatusHasBeenSet = true; m_capacityTaskStatus = value; }
    inline GetCapacityTaskResult& WithCapacityTaskStatus(CapacityTaskStatus value) { SetCapacityTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason why the capacity task failed.</p>
     */
    inline const CapacityTaskFailure& GetFailed() const { return m_failed; }
    template<typename FailedT = CapacityTaskFailure>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = CapacityTaskFailure>
    GetCapacityTaskResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the capacity task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GetCapacityTaskResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the capacity task ran successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const { return m_completionDate; }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    void SetCompletionDate(CompletionDateT&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::forward<CompletionDateT>(value); }
    template<typename CompletionDateT = Aws::Utils::DateTime>
    GetCapacityTaskResult& WithCompletionDate(CompletionDateT&& value) { SetCompletionDate(std::forward<CompletionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the capacity task was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    GetCapacityTaskResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified option in case an instance is blocking the capacity task from
     * running. Shows one of the following options:</p> <ul> <li> <p>
     * <code>WAIT_FOR_EVACUATION</code> - Checks every 10 minutes over 48 hours to
     * determine if instances have stopped and capacity is available to complete the
     * task.</p> </li> <li> <p> <code>FAIL_TASK</code> - The capacity task fails.</p>
     * </li> </ul>
     */
    inline TaskActionOnBlockingInstances GetTaskActionOnBlockingInstances() const { return m_taskActionOnBlockingInstances; }
    inline void SetTaskActionOnBlockingInstances(TaskActionOnBlockingInstances value) { m_taskActionOnBlockingInstancesHasBeenSet = true; m_taskActionOnBlockingInstances = value; }
    inline GetCapacityTaskResult& WithTaskActionOnBlockingInstances(TaskActionOnBlockingInstances value) { SetTaskActionOnBlockingInstances(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCapacityTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
