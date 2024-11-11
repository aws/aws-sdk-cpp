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
    AWS_OUTPOSTS_API StartCapacityTaskResult();
    AWS_OUTPOSTS_API StartCapacityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API StartCapacityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the capacity task that you want to start.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const{ return m_capacityTaskId; }
    inline void SetCapacityTaskId(const Aws::String& value) { m_capacityTaskId = value; }
    inline void SetCapacityTaskId(Aws::String&& value) { m_capacityTaskId = std::move(value); }
    inline void SetCapacityTaskId(const char* value) { m_capacityTaskId.assign(value); }
    inline StartCapacityTaskResult& WithCapacityTaskId(const Aws::String& value) { SetCapacityTaskId(value); return *this;}
    inline StartCapacityTaskResult& WithCapacityTaskId(Aws::String&& value) { SetCapacityTaskId(std::move(value)); return *this;}
    inline StartCapacityTaskResult& WithCapacityTaskId(const char* value) { SetCapacityTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Outpost associated with the capacity task.</p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }
    inline void SetOutpostId(const Aws::String& value) { m_outpostId = value; }
    inline void SetOutpostId(Aws::String&& value) { m_outpostId = std::move(value); }
    inline void SetOutpostId(const char* value) { m_outpostId.assign(value); }
    inline StartCapacityTaskResult& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}
    inline StartCapacityTaskResult& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}
    inline StartCapacityTaskResult& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Amazon Web Services Outposts order of the host associated with the
     * capacity task.</p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }
    inline void SetOrderId(const Aws::String& value) { m_orderId = value; }
    inline void SetOrderId(Aws::String&& value) { m_orderId = std::move(value); }
    inline void SetOrderId(const char* value) { m_orderId.assign(value); }
    inline StartCapacityTaskResult& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}
    inline StartCapacityTaskResult& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}
    inline StartCapacityTaskResult& WithOrderId(const char* value) { SetOrderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the instance pools requested in the specified capacity task.</p>
     */
    inline const Aws::Vector<InstanceTypeCapacity>& GetRequestedInstancePools() const{ return m_requestedInstancePools; }
    inline void SetRequestedInstancePools(const Aws::Vector<InstanceTypeCapacity>& value) { m_requestedInstancePools = value; }
    inline void SetRequestedInstancePools(Aws::Vector<InstanceTypeCapacity>&& value) { m_requestedInstancePools = std::move(value); }
    inline StartCapacityTaskResult& WithRequestedInstancePools(const Aws::Vector<InstanceTypeCapacity>& value) { SetRequestedInstancePools(value); return *this;}
    inline StartCapacityTaskResult& WithRequestedInstancePools(Aws::Vector<InstanceTypeCapacity>&& value) { SetRequestedInstancePools(std::move(value)); return *this;}
    inline StartCapacityTaskResult& AddRequestedInstancePools(const InstanceTypeCapacity& value) { m_requestedInstancePools.push_back(value); return *this; }
    inline StartCapacityTaskResult& AddRequestedInstancePools(InstanceTypeCapacity&& value) { m_requestedInstancePools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User-specified instances that must not be stopped in order to free up the
     * capacity needed to run the capacity task.</p>
     */
    inline const InstancesToExclude& GetInstancesToExclude() const{ return m_instancesToExclude; }
    inline void SetInstancesToExclude(const InstancesToExclude& value) { m_instancesToExclude = value; }
    inline void SetInstancesToExclude(InstancesToExclude&& value) { m_instancesToExclude = std::move(value); }
    inline StartCapacityTaskResult& WithInstancesToExclude(const InstancesToExclude& value) { SetInstancesToExclude(value); return *this;}
    inline StartCapacityTaskResult& WithInstancesToExclude(InstancesToExclude&& value) { SetInstancesToExclude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Results of the dry run showing if the specified capacity task is above or
     * below the available instance capacity.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline void SetDryRun(bool value) { m_dryRun = value; }
    inline StartCapacityTaskResult& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the specified capacity task.</p>
     */
    inline const CapacityTaskStatus& GetCapacityTaskStatus() const{ return m_capacityTaskStatus; }
    inline void SetCapacityTaskStatus(const CapacityTaskStatus& value) { m_capacityTaskStatus = value; }
    inline void SetCapacityTaskStatus(CapacityTaskStatus&& value) { m_capacityTaskStatus = std::move(value); }
    inline StartCapacityTaskResult& WithCapacityTaskStatus(const CapacityTaskStatus& value) { SetCapacityTaskStatus(value); return *this;}
    inline StartCapacityTaskResult& WithCapacityTaskStatus(CapacityTaskStatus&& value) { SetCapacityTaskStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason that the specified capacity task failed.</p>
     */
    inline const CapacityTaskFailure& GetFailed() const{ return m_failed; }
    inline void SetFailed(const CapacityTaskFailure& value) { m_failed = value; }
    inline void SetFailed(CapacityTaskFailure&& value) { m_failed = std::move(value); }
    inline StartCapacityTaskResult& WithFailed(const CapacityTaskFailure& value) { SetFailed(value); return *this;}
    inline StartCapacityTaskResult& WithFailed(CapacityTaskFailure&& value) { SetFailed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date that the specified capacity task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline StartCapacityTaskResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline StartCapacityTaskResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date that the specified capacity task ran successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDate = value; }
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDate = std::move(value); }
    inline StartCapacityTaskResult& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}
    inline StartCapacityTaskResult& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date that the specified capacity task was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }
    inline StartCapacityTaskResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline StartCapacityTaskResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified option in case an instance is blocking the capacity task from
     * running.</p> <ul> <li> <p> <code>WAIT_FOR_EVACUATION</code> - Checks every 10
     * minutes over 48 hours to determine if instances have stopped and capacity is
     * available to complete the task.</p> </li> <li> <p> <code>FAIL_TASK</code> - The
     * capacity task fails.</p> </li> </ul>
     */
    inline const TaskActionOnBlockingInstances& GetTaskActionOnBlockingInstances() const{ return m_taskActionOnBlockingInstances; }
    inline void SetTaskActionOnBlockingInstances(const TaskActionOnBlockingInstances& value) { m_taskActionOnBlockingInstances = value; }
    inline void SetTaskActionOnBlockingInstances(TaskActionOnBlockingInstances&& value) { m_taskActionOnBlockingInstances = std::move(value); }
    inline StartCapacityTaskResult& WithTaskActionOnBlockingInstances(const TaskActionOnBlockingInstances& value) { SetTaskActionOnBlockingInstances(value); return *this;}
    inline StartCapacityTaskResult& WithTaskActionOnBlockingInstances(TaskActionOnBlockingInstances&& value) { SetTaskActionOnBlockingInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartCapacityTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartCapacityTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartCapacityTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityTaskId;

    Aws::String m_outpostId;

    Aws::String m_orderId;

    Aws::Vector<InstanceTypeCapacity> m_requestedInstancePools;

    InstancesToExclude m_instancesToExclude;

    bool m_dryRun;

    CapacityTaskStatus m_capacityTaskStatus;

    CapacityTaskFailure m_failed;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_completionDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    TaskActionOnBlockingInstances m_taskActionOnBlockingInstances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
