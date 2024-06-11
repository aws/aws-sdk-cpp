/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobBatchStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/BatchPolicy.h>
#include <aws/robomaker/model/SimulationJobBatchErrorCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/FailedCreateSimulationJobRequest.h>
#include <aws/robomaker/model/SimulationJobRequest.h>
#include <aws/robomaker/model/SimulationJobSummary.h>
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
namespace RoboMaker
{
namespace Model
{
  class StartSimulationJobBatchResult
  {
  public:
    AWS_ROBOMAKER_API StartSimulationJobBatchResult();
    AWS_ROBOMAKER_API StartSimulationJobBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API StartSimulationJobBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the batch.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline StartSimulationJobBatchResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StartSimulationJobBatchResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the simulation job batch.</p> <dl> <dt>Pending</dt> <dd> <p>The
     * simulation job batch request is pending.</p> </dd> <dt>InProgress</dt> <dd>
     * <p>The simulation job batch is in progress. </p> </dd> <dt>Failed</dt> <dd>
     * <p>The simulation job batch failed. One or more simulation job requests could
     * not be completed due to an internal failure (like
     * <code>InternalServiceError</code>). See <code>failureCode</code> and
     * <code>failureReason</code> for more information.</p> </dd> <dt>Completed</dt>
     * <dd> <p>The simulation batch job completed. A batch is complete when (1) there
     * are no pending simulation job requests in the batch and none of the failed
     * simulation job requests are due to <code>InternalServiceError</code> and (2)
     * when all created simulation jobs have reached a terminal state (for example,
     * <code>Completed</code> or <code>Failed</code>). </p> </dd> <dt>Canceled</dt>
     * <dd> <p>The simulation batch job was cancelled.</p> </dd> <dt>Canceling</dt>
     * <dd> <p>The simulation batch job is being cancelled.</p> </dd>
     * <dt>Completing</dt> <dd> <p>The simulation batch job is completing.</p> </dd>
     * <dt>TimingOut</dt> <dd> <p>The simulation job batch is timing out.</p> <p>If a
     * batch timing out, and there are pending requests that were failing due to an
     * internal failure (like <code>InternalServiceError</code>), the batch status will
     * be <code>Failed</code>. If there are no such failing request, the batch status
     * will be <code>TimedOut</code>. </p> </dd> <dt>TimedOut</dt> <dd> <p>The
     * simulation batch job timed out.</p> </dd> </dl>
     */
    inline const SimulationJobBatchStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SimulationJobBatchStatus& value) { m_status = value; }
    inline void SetStatus(SimulationJobBatchStatus&& value) { m_status = std::move(value); }
    inline StartSimulationJobBatchResult& WithStatus(const SimulationJobBatchStatus& value) { SetStatus(value); return *this;}
    inline StartSimulationJobBatchResult& WithStatus(SimulationJobBatchStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline StartSimulationJobBatchResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StartSimulationJobBatchResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestToken.assign(value); }
    inline StartSimulationJobBatchResult& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartSimulationJobBatchResult& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch policy.</p>
     */
    inline const BatchPolicy& GetBatchPolicy() const{ return m_batchPolicy; }
    inline void SetBatchPolicy(const BatchPolicy& value) { m_batchPolicy = value; }
    inline void SetBatchPolicy(BatchPolicy&& value) { m_batchPolicy = std::move(value); }
    inline StartSimulationJobBatchResult& WithBatchPolicy(const BatchPolicy& value) { SetBatchPolicy(value); return *this;}
    inline StartSimulationJobBatchResult& WithBatchPolicy(BatchPolicy&& value) { SetBatchPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code if the simulation job batch failed.</p>
     */
    inline const SimulationJobBatchErrorCode& GetFailureCode() const{ return m_failureCode; }
    inline void SetFailureCode(const SimulationJobBatchErrorCode& value) { m_failureCode = value; }
    inline void SetFailureCode(SimulationJobBatchErrorCode&& value) { m_failureCode = std::move(value); }
    inline StartSimulationJobBatchResult& WithFailureCode(const SimulationJobBatchErrorCode& value) { SetFailureCode(value); return *this;}
    inline StartSimulationJobBatchResult& WithFailureCode(SimulationJobBatchErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the simulation job batch failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline StartSimulationJobBatchResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline StartSimulationJobBatchResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of failed simulation job requests. The request failed to be created
     * into a simulation job. Failed requests do not have a simulation job ID. </p>
     */
    inline const Aws::Vector<FailedCreateSimulationJobRequest>& GetFailedRequests() const{ return m_failedRequests; }
    inline void SetFailedRequests(const Aws::Vector<FailedCreateSimulationJobRequest>& value) { m_failedRequests = value; }
    inline void SetFailedRequests(Aws::Vector<FailedCreateSimulationJobRequest>&& value) { m_failedRequests = std::move(value); }
    inline StartSimulationJobBatchResult& WithFailedRequests(const Aws::Vector<FailedCreateSimulationJobRequest>& value) { SetFailedRequests(value); return *this;}
    inline StartSimulationJobBatchResult& WithFailedRequests(Aws::Vector<FailedCreateSimulationJobRequest>&& value) { SetFailedRequests(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& AddFailedRequests(const FailedCreateSimulationJobRequest& value) { m_failedRequests.push_back(value); return *this; }
    inline StartSimulationJobBatchResult& AddFailedRequests(FailedCreateSimulationJobRequest&& value) { m_failedRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of pending simulation job requests. These requests have not yet been
     * created into simulation jobs.</p>
     */
    inline const Aws::Vector<SimulationJobRequest>& GetPendingRequests() const{ return m_pendingRequests; }
    inline void SetPendingRequests(const Aws::Vector<SimulationJobRequest>& value) { m_pendingRequests = value; }
    inline void SetPendingRequests(Aws::Vector<SimulationJobRequest>&& value) { m_pendingRequests = std::move(value); }
    inline StartSimulationJobBatchResult& WithPendingRequests(const Aws::Vector<SimulationJobRequest>& value) { SetPendingRequests(value); return *this;}
    inline StartSimulationJobBatchResult& WithPendingRequests(Aws::Vector<SimulationJobRequest>&& value) { SetPendingRequests(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& AddPendingRequests(const SimulationJobRequest& value) { m_pendingRequests.push_back(value); return *this; }
    inline StartSimulationJobBatchResult& AddPendingRequests(SimulationJobRequest&& value) { m_pendingRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of created simulation job request summaries.</p>
     */
    inline const Aws::Vector<SimulationJobSummary>& GetCreatedRequests() const{ return m_createdRequests; }
    inline void SetCreatedRequests(const Aws::Vector<SimulationJobSummary>& value) { m_createdRequests = value; }
    inline void SetCreatedRequests(Aws::Vector<SimulationJobSummary>&& value) { m_createdRequests = std::move(value); }
    inline StartSimulationJobBatchResult& WithCreatedRequests(const Aws::Vector<SimulationJobSummary>& value) { SetCreatedRequests(value); return *this;}
    inline StartSimulationJobBatchResult& WithCreatedRequests(Aws::Vector<SimulationJobSummary>&& value) { SetCreatedRequests(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& AddCreatedRequests(const SimulationJobSummary& value) { m_createdRequests.push_back(value); return *this; }
    inline StartSimulationJobBatchResult& AddCreatedRequests(SimulationJobSummary&& value) { m_createdRequests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline StartSimulationJobBatchResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartSimulationJobBatchResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline StartSimulationJobBatchResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StartSimulationJobBatchResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StartSimulationJobBatchResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartSimulationJobBatchResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StartSimulationJobBatchResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StartSimulationJobBatchResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSimulationJobBatchResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSimulationJobBatchResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSimulationJobBatchResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    SimulationJobBatchStatus m_status;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_clientRequestToken;

    BatchPolicy m_batchPolicy;

    SimulationJobBatchErrorCode m_failureCode;

    Aws::String m_failureReason;

    Aws::Vector<FailedCreateSimulationJobRequest> m_failedRequests;

    Aws::Vector<SimulationJobRequest> m_pendingRequests;

    Aws::Vector<SimulationJobSummary> m_createdRequests;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
