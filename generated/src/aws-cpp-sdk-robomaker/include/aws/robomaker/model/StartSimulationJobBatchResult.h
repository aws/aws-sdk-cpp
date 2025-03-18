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
    AWS_ROBOMAKER_API StartSimulationJobBatchResult() = default;
    AWS_ROBOMAKER_API StartSimulationJobBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API StartSimulationJobBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the batch.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    StartSimulationJobBatchResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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
    inline SimulationJobBatchStatus GetStatus() const { return m_status; }
    inline void SetStatus(SimulationJobBatchStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartSimulationJobBatchResult& WithStatus(SimulationJobBatchStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job batch was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    StartSimulationJobBatchResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartSimulationJobBatchResult& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch policy.</p>
     */
    inline const BatchPolicy& GetBatchPolicy() const { return m_batchPolicy; }
    template<typename BatchPolicyT = BatchPolicy>
    void SetBatchPolicy(BatchPolicyT&& value) { m_batchPolicyHasBeenSet = true; m_batchPolicy = std::forward<BatchPolicyT>(value); }
    template<typename BatchPolicyT = BatchPolicy>
    StartSimulationJobBatchResult& WithBatchPolicy(BatchPolicyT&& value) { SetBatchPolicy(std::forward<BatchPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure code if the simulation job batch failed.</p>
     */
    inline SimulationJobBatchErrorCode GetFailureCode() const { return m_failureCode; }
    inline void SetFailureCode(SimulationJobBatchErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline StartSimulationJobBatchResult& WithFailureCode(SimulationJobBatchErrorCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the simulation job batch failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    StartSimulationJobBatchResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of failed simulation job requests. The request failed to be created
     * into a simulation job. Failed requests do not have a simulation job ID. </p>
     */
    inline const Aws::Vector<FailedCreateSimulationJobRequest>& GetFailedRequests() const { return m_failedRequests; }
    template<typename FailedRequestsT = Aws::Vector<FailedCreateSimulationJobRequest>>
    void SetFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests = std::forward<FailedRequestsT>(value); }
    template<typename FailedRequestsT = Aws::Vector<FailedCreateSimulationJobRequest>>
    StartSimulationJobBatchResult& WithFailedRequests(FailedRequestsT&& value) { SetFailedRequests(std::forward<FailedRequestsT>(value)); return *this;}
    template<typename FailedRequestsT = FailedCreateSimulationJobRequest>
    StartSimulationJobBatchResult& AddFailedRequests(FailedRequestsT&& value) { m_failedRequestsHasBeenSet = true; m_failedRequests.emplace_back(std::forward<FailedRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of pending simulation job requests. These requests have not yet been
     * created into simulation jobs.</p>
     */
    inline const Aws::Vector<SimulationJobRequest>& GetPendingRequests() const { return m_pendingRequests; }
    template<typename PendingRequestsT = Aws::Vector<SimulationJobRequest>>
    void SetPendingRequests(PendingRequestsT&& value) { m_pendingRequestsHasBeenSet = true; m_pendingRequests = std::forward<PendingRequestsT>(value); }
    template<typename PendingRequestsT = Aws::Vector<SimulationJobRequest>>
    StartSimulationJobBatchResult& WithPendingRequests(PendingRequestsT&& value) { SetPendingRequests(std::forward<PendingRequestsT>(value)); return *this;}
    template<typename PendingRequestsT = SimulationJobRequest>
    StartSimulationJobBatchResult& AddPendingRequests(PendingRequestsT&& value) { m_pendingRequestsHasBeenSet = true; m_pendingRequests.emplace_back(std::forward<PendingRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of created simulation job request summaries.</p>
     */
    inline const Aws::Vector<SimulationJobSummary>& GetCreatedRequests() const { return m_createdRequests; }
    template<typename CreatedRequestsT = Aws::Vector<SimulationJobSummary>>
    void SetCreatedRequests(CreatedRequestsT&& value) { m_createdRequestsHasBeenSet = true; m_createdRequests = std::forward<CreatedRequestsT>(value); }
    template<typename CreatedRequestsT = Aws::Vector<SimulationJobSummary>>
    StartSimulationJobBatchResult& WithCreatedRequests(CreatedRequestsT&& value) { SetCreatedRequests(std::forward<CreatedRequestsT>(value)); return *this;}
    template<typename CreatedRequestsT = SimulationJobSummary>
    StartSimulationJobBatchResult& AddCreatedRequests(CreatedRequestsT&& value) { m_createdRequestsHasBeenSet = true; m_createdRequests.emplace_back(std::forward<CreatedRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * deployment job batch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartSimulationJobBatchResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartSimulationJobBatchResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSimulationJobBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SimulationJobBatchStatus m_status{SimulationJobBatchStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    BatchPolicy m_batchPolicy;
    bool m_batchPolicyHasBeenSet = false;

    SimulationJobBatchErrorCode m_failureCode{SimulationJobBatchErrorCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Vector<FailedCreateSimulationJobRequest> m_failedRequests;
    bool m_failedRequestsHasBeenSet = false;

    Aws::Vector<SimulationJobRequest> m_pendingRequests;
    bool m_pendingRequestsHasBeenSet = false;

    Aws::Vector<SimulationJobSummary> m_createdRequests;
    bool m_createdRequestsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
