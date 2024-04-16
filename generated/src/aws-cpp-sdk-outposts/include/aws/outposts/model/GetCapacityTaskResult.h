/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/CapacityTaskStatus.h>
#include <aws/outposts/model/CapacityTaskFailure.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_OUTPOSTS_API GetCapacityTaskResult();
    AWS_OUTPOSTS_API GetCapacityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetCapacityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ID of the capacity task.</p>
     */
    inline const Aws::String& GetCapacityTaskId() const{ return m_capacityTaskId; }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline void SetCapacityTaskId(const Aws::String& value) { m_capacityTaskId = value; }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline void SetCapacityTaskId(Aws::String&& value) { m_capacityTaskId = std::move(value); }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline void SetCapacityTaskId(const char* value) { m_capacityTaskId.assign(value); }

    /**
     * <p>ID of the capacity task.</p>
     */
    inline GetCapacityTaskResult& WithCapacityTaskId(const Aws::String& value) { SetCapacityTaskId(value); return *this;}

    /**
     * <p>ID of the capacity task.</p>
     */
    inline GetCapacityTaskResult& WithCapacityTaskId(Aws::String&& value) { SetCapacityTaskId(std::move(value)); return *this;}

    /**
     * <p>ID of the capacity task.</p>
     */
    inline GetCapacityTaskResult& WithCapacityTaskId(const char* value) { SetCapacityTaskId(value); return *this;}


    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostId = value; }

    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostId = std::move(value); }

    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline void SetOutpostId(const char* value) { m_outpostId.assign(value); }

    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline GetCapacityTaskResult& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline GetCapacityTaskResult& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>ID of the Outpost associated with the specified capacity task.</p>
     */
    inline GetCapacityTaskResult& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline void SetOrderId(const Aws::String& value) { m_orderId = value; }

    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline void SetOrderId(Aws::String&& value) { m_orderId = std::move(value); }

    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline void SetOrderId(const char* value) { m_orderId.assign(value); }

    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline GetCapacityTaskResult& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline GetCapacityTaskResult& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    /**
     * <p>ID of the Amazon Web Services Outposts order associated with the specified
     * capacity task.</p>
     */
    inline GetCapacityTaskResult& WithOrderId(const char* value) { SetOrderId(value); return *this;}


    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline const Aws::Vector<InstanceTypeCapacity>& GetRequestedInstancePools() const{ return m_requestedInstancePools; }

    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline void SetRequestedInstancePools(const Aws::Vector<InstanceTypeCapacity>& value) { m_requestedInstancePools = value; }

    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline void SetRequestedInstancePools(Aws::Vector<InstanceTypeCapacity>&& value) { m_requestedInstancePools = std::move(value); }

    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline GetCapacityTaskResult& WithRequestedInstancePools(const Aws::Vector<InstanceTypeCapacity>& value) { SetRequestedInstancePools(value); return *this;}

    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline GetCapacityTaskResult& WithRequestedInstancePools(Aws::Vector<InstanceTypeCapacity>&& value) { SetRequestedInstancePools(std::move(value)); return *this;}

    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline GetCapacityTaskResult& AddRequestedInstancePools(const InstanceTypeCapacity& value) { m_requestedInstancePools.push_back(value); return *this; }

    /**
     * <p>List of instance pools requested in the capacity task.</p>
     */
    inline GetCapacityTaskResult& AddRequestedInstancePools(InstanceTypeCapacity&& value) { m_requestedInstancePools.push_back(std::move(value)); return *this; }


    /**
     * <p>Performs a dry run to determine if you are above or below instance
     * capacity.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Performs a dry run to determine if you are above or below instance
     * capacity.</p>
     */
    inline void SetDryRun(bool value) { m_dryRun = value; }

    /**
     * <p>Performs a dry run to determine if you are above or below instance
     * capacity.</p>
     */
    inline GetCapacityTaskResult& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Status of the capacity task.</p> <p>A capacity task can have one of the
     * following statuses:</p> <ul> <li> <p> <code>REQUESTED</code> - The capacity task
     * was created and is awaiting the next step by Amazon Web Services Outposts.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The capacity task is running and
     * cannot be cancelled.</p> </li> <li> <p> <code>WAITING_FOR_EVACUATION</code> -
     * The capacity task requires capacity to run. You must stop the recommended EC2
     * running instances to free up capacity for the task to run.</p> </li> </ul>
     */
    inline const CapacityTaskStatus& GetCapacityTaskStatus() const{ return m_capacityTaskStatus; }

    /**
     * <p>Status of the capacity task.</p> <p>A capacity task can have one of the
     * following statuses:</p> <ul> <li> <p> <code>REQUESTED</code> - The capacity task
     * was created and is awaiting the next step by Amazon Web Services Outposts.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The capacity task is running and
     * cannot be cancelled.</p> </li> <li> <p> <code>WAITING_FOR_EVACUATION</code> -
     * The capacity task requires capacity to run. You must stop the recommended EC2
     * running instances to free up capacity for the task to run.</p> </li> </ul>
     */
    inline void SetCapacityTaskStatus(const CapacityTaskStatus& value) { m_capacityTaskStatus = value; }

    /**
     * <p>Status of the capacity task.</p> <p>A capacity task can have one of the
     * following statuses:</p> <ul> <li> <p> <code>REQUESTED</code> - The capacity task
     * was created and is awaiting the next step by Amazon Web Services Outposts.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The capacity task is running and
     * cannot be cancelled.</p> </li> <li> <p> <code>WAITING_FOR_EVACUATION</code> -
     * The capacity task requires capacity to run. You must stop the recommended EC2
     * running instances to free up capacity for the task to run.</p> </li> </ul>
     */
    inline void SetCapacityTaskStatus(CapacityTaskStatus&& value) { m_capacityTaskStatus = std::move(value); }

    /**
     * <p>Status of the capacity task.</p> <p>A capacity task can have one of the
     * following statuses:</p> <ul> <li> <p> <code>REQUESTED</code> - The capacity task
     * was created and is awaiting the next step by Amazon Web Services Outposts.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The capacity task is running and
     * cannot be cancelled.</p> </li> <li> <p> <code>WAITING_FOR_EVACUATION</code> -
     * The capacity task requires capacity to run. You must stop the recommended EC2
     * running instances to free up capacity for the task to run.</p> </li> </ul>
     */
    inline GetCapacityTaskResult& WithCapacityTaskStatus(const CapacityTaskStatus& value) { SetCapacityTaskStatus(value); return *this;}

    /**
     * <p>Status of the capacity task.</p> <p>A capacity task can have one of the
     * following statuses:</p> <ul> <li> <p> <code>REQUESTED</code> - The capacity task
     * was created and is awaiting the next step by Amazon Web Services Outposts.</p>
     * </li> <li> <p> <code>IN_PROGRESS</code> - The capacity task is running and
     * cannot be cancelled.</p> </li> <li> <p> <code>WAITING_FOR_EVACUATION</code> -
     * The capacity task requires capacity to run. You must stop the recommended EC2
     * running instances to free up capacity for the task to run.</p> </li> </ul>
     */
    inline GetCapacityTaskResult& WithCapacityTaskStatus(CapacityTaskStatus&& value) { SetCapacityTaskStatus(std::move(value)); return *this;}


    /**
     * <p>Reason why the capacity task failed.</p>
     */
    inline const CapacityTaskFailure& GetFailed() const{ return m_failed; }

    /**
     * <p>Reason why the capacity task failed.</p>
     */
    inline void SetFailed(const CapacityTaskFailure& value) { m_failed = value; }

    /**
     * <p>Reason why the capacity task failed.</p>
     */
    inline void SetFailed(CapacityTaskFailure&& value) { m_failed = std::move(value); }

    /**
     * <p>Reason why the capacity task failed.</p>
     */
    inline GetCapacityTaskResult& WithFailed(const CapacityTaskFailure& value) { SetFailed(value); return *this;}

    /**
     * <p>Reason why the capacity task failed.</p>
     */
    inline GetCapacityTaskResult& WithFailed(CapacityTaskFailure&& value) { SetFailed(std::move(value)); return *this;}


    /**
     * <p>The date the capacity task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the capacity task was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the capacity task was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date the capacity task was created.</p>
     */
    inline GetCapacityTaskResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the capacity task was created.</p>
     */
    inline GetCapacityTaskResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date the capacity task ran successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date the capacity task ran successfully.</p>
     */
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDate = value; }

    /**
     * <p>The date the capacity task ran successfully.</p>
     */
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDate = std::move(value); }

    /**
     * <p>The date the capacity task ran successfully.</p>
     */
    inline GetCapacityTaskResult& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date the capacity task ran successfully.</p>
     */
    inline GetCapacityTaskResult& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}


    /**
     * <p>The date the capacity task was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the capacity task was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date the capacity task was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the capacity task was last modified.</p>
     */
    inline GetCapacityTaskResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the capacity task was last modified.</p>
     */
    inline GetCapacityTaskResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCapacityTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCapacityTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCapacityTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_capacityTaskId;

    Aws::String m_outpostId;

    Aws::String m_orderId;

    Aws::Vector<InstanceTypeCapacity> m_requestedInstancePools;

    bool m_dryRun;

    CapacityTaskStatus m_capacityTaskStatus;

    CapacityTaskFailure m_failed;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_completionDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
